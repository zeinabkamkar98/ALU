`timescale 1ns / 1ps

module ALU(mood,in1,in2,out,reset,equality,balance,control);

	input [4:0]in1;
	input [4:0]in2;
	input reset;
	input mood;
	input [5:0]control;
	
	output reg [31:0]out;
	output reg equality;
	output reg balance;
	
	wire [31:0]res_add;
	wire [31:0]res_sub;
	wire [31:0]res_mul;
	wire [31:0]res_num_of_one;
	wire [31:0]res_xor;
	wire [31:0]res_max;
	wire [31:0]res_IEEE;

	IEEE ins_IEEE (.in1(in1),.in2(in2),.out(res_IEEE));
	XOR ins_xor (.in1(in1),.in2(in2),.out(res_xor));
	add ins_add (.in1(in1),.in2(in2),.out(res_add));
	count_ones ins_one (.in1(in1),.in2(in2),.out(res_num_of_one));
	find_max ins_max (.in1(in1),.in2(in2),.out(res_max));
	mul ins_mul (.in1(in1),.in2(in2),.out(res_mul));
	sub ins_sub (.in1(in1),.in2(in2),.out(res_sub));

	always @ (*)begin
		
		$display("mood=%b ,reset=%b",mood,reset);

		if(reset==1) begin
			out=32'b0;
			balance=1'b0;
			equality=1'b0;
		end
		if(mood==0) begin
			case(control)
			
				6'b000001:out=res_add;
				6'b000010:out=res_sub;
				6'b000100:out=res_mul;
				6'b001000:out=res_num_of_one;
				6'b010000:out=res_xor;
				6'b100000:out=res_max;
				
				endcase
			equality=(in1==in2)?1:0;
			balance=~^out;
			$display("input1=%d ,input2=%d ,control=%b ,output(result)=%d ,equality=%b ,balance=%b\n",in1,in2,control,out,equality,balance);
		end
		
		else begin
			out=res_IEEE;
			$display("input1(digit_part)=%d ,input2(float_part=)%d ,output(IEEE-754)=%b\n",in1,in2,out);
			end
		end
			
endmodule
