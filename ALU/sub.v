`timescale 1ns / 1ps

module sub(in1,in2,out);

	input [4:0]in1;
	input [4:0]in2;
	output [31:0]out;

	assign out=(in1>in2)?(in1-in2):(in2-in1);

endmodule
