`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:48:03 07/04/2019 
// Design Name: 
// Module Name:    XOR 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module XOR(in1,in2,out);

	input [4:0]in1;
	input [4:0]in2;
	output [31:0]out;
	
	assign out=in1^in2;

endmodule
