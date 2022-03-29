`timescale 1ns / 1ps

module IEEE_to_binary(in,out_digit,out_float);

	input [31:0]in;
	output reg [4:0]out_digit;
	output reg [4:0]out_float;
	reg [3:0]power;
	
	always @ (*) begin
	
		power=in[30:23]-127;
		
		if(power==4) begin
			out_digit={1'b1,in[22:19]};
			out_float=in[18:14];
		end

		if(power==3) begin
			out_digit={2'b1,in[22:20]};
			out_float=in[19:15];
		end

		if(power==2) begin
			out_digit={3'b1,in[22:21]};
			out_float=in[20:16];
		end

		if(power==1) begin
			out_digit={4'b1,in[22]};
			out_float=in[21:17];
		end

		if(power==0) begin
			out_digit=5'b1;
			out_float=in[22:18];
		end	
		
		end
endmodule

