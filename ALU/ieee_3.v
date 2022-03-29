`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:12:59 07/05/2019
// Design Name:   IEEE
// Module Name:   E:/verilog/VLU1/ieee_3.v
// Project Name:  VLU1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IEEE
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ieee_3;

	// Inputs
	reg [4:0] in1;
	reg [4:0] in2;

	// Outputs
	wire [31:0] out;
	wire [22:0] mantissa;
	wire [4:0] temp;
	wire [4:0] temp2;

	// Instantiate the Unit Under Test (UUT)
	IEEE uut (
		.in1(in1), 
		.in2(in2), 
		.out(out), 
		.mantissa(mantissa), 
		.temp(temp), 
		.temp2(temp2)
	);

	initial begin
		// Initialize Inputs
		in1 = 0;
		in2 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#100;
		in1 = 7;
		in2 = 6;
		#100;
		in1 = 9;
		in2 = 8;
	end
      
endmodule

