`timescale 1ns / 1ps

module ALU1(mod,operation,in1,in2,out,balance,equality,reset);
	
	input mod;
	input [4:0]in1;
	input [4:0]in2;
	input [5:0]operation;
	
	input reset;
	
	output reg [31:0]out;
	output reg balance;
	output reg equality;
	
	wire [31:0]res_add;
	wire [31:0]res_sub;
	wire [31:0]res_mul;
	wire [31:0]num_of_one;
	wire [31:0]res_xor;
	wire [31:0]res_max;
	wire [31:0]res_IEEE;
	wire [31:0]res_balance;
		
	add ins_add (.in1(in1),.in2(in2),.out(res_add));
	sub ins_sub (.in1(in1),.in2(in2),.out(res_sub));
	mul ins_num (.in1(in1),.in2(in2),.out(res_mul));
	count_ones ins_one (.in1(in1),.in2(in2),.out(num_of_one));
	XOR ins_xor (.in1(in1),.in2(in2),.out(res_xor));
	find_max ins_max (.in1(in1),.in2(in2),.out(res_max));
	IEEE ins_IEEE (.in1(in1),.in2(in2),.out(res_IEEE));
	

	always @( * ) begin
		
		if(reset)
			begin
			out=32'b0;
			balance=0;
			equality=0;
			end
			
		if(mod==0)
			begin
			case(operation)
			
				6'b000001:out=res_add;
				6'b000010:out=res_sub;
				6'b000100:out=res_mul;
				6'b001000:out=num_of_one;
				6'b010000:out=res_xor;
				6'b100000:out=res_max;
			
			endcase
			end
		
		else
		out=res_IEEE;
		
		balance=^~out;		
		equality=(in1==in2)?1:0;
		
	end
			
			

endmodule
