`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:28:50 07/06/2019
// Design Name:   ALU
// Module Name:   E:/verilog/VLU1/ALU_test.v
// Project Name:  VLU1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_test;

	// Inputs
	reg mood;
	reg [4:0] in1;
	reg [4:0] in2;
	reg reset;
	reg [5:0] control;

	// Outputs
	wire [31:0] out;
	wire equality;
	wire balance;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.mood(mood), 
		.in1(in1), 
		.in2(in2), 
		.out(out), 
		.reset(reset), 
		.equality(equality), 
		.balance(balance), 
		.control(control)
	);

	initial begin
		// Initialize Inputs
		mood = 0;
		in1 = 0;
		in2 = 0;
		reset = 0;
		control = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		mood = 0;
		in1 = 2;
		in2 = 4;
		reset = 0;
		control = 1;

		#100;
		
		mood = 0;
		in1 = 2;
		in2 = 4;
		reset = 0;
		control = 2;

		#100;
		
		mood = 0;
		in1 = 2;
		in2 = 4;
		reset = 0;
		control = 4;

		#100;
		
		mood = 0;
		in1 = 2;
		in2 = 4;
		reset = 0;
		control = 8;

		#100;
		
		mood = 0;
		in1 = 2;
		in2 = 4;
		reset = 0;
		control = 16;

		#100;
		
		mood = 0;
		in1 = 2;
		in2 = 4;
		reset = 0;
		control = 32;

		#100;
		
		mood = 1;
		in1 = 2;
		in2 = 4;
		reset = 0;
		control = 0;
	end
      
endmodule

