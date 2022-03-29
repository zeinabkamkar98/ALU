`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:45:54 07/06/2019
// Design Name:   IEEE_to_binary
// Module Name:   E:/verilog/VLU1/IEEE_to_binarytest.v
// Project Name:  VLU1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IEEE_to_binary
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IEEE_to_binarytest;

	// Inputs
	reg [31:0] in;

	// Outputs
	wire [4:0] out_digit;
	wire [4:0] out_float;

	// Instantiate the Unit Under Test (UUT)
	IEEE_to_binary uut (
		.in(in), 
		.out_digit(out_digit), 
		.out_float(out_float)
	);

	initial begin
		// Initialize Inputs
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		in=32'b01000000101100000000000000000000;
	end
      
endmodule

