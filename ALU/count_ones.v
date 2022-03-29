`timescale 1ns / 1ps

module count_ones(in1,in2,out);

	input [4:0]in1;
	input [4:0]in2;
	output [31:0]out;
	
	assign out=in1[0]+in1[1]+in1[2]+in1[3]+in1[4]+in2[0]+in2[1]+in2[2]+in2[3]+in2[4];
	
endmodule
