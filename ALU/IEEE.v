`timescale 1ns / 1ps

module IEEE(in1,in2,out);

	input [4:0]in1;
	input [4:0]in2;
	
	output reg [31:0]out;
	
	reg [22:0]mantissa;
	
	reg [4:0] temp;//convert to binary 
	reg [4:0] temp2;//hold value of in2 
	reg rep;//for check repeation
	

	
	always @( * ) begin
	
		out=32'b0;
		temp2=in2;
		rep=0;

		temp2=temp2*2;
		if(temp2>=10)
		begin
		temp2=temp2-10;
		temp[4]=1;
		end
		else
		temp[4]=0;
	
		temp2=temp2*2;
		if(temp2>=10)
		begin
		temp2=temp2-10;
		temp[3]=1;
		end
		else
		temp[3]=0;
				
		temp2=temp2*2;
		if(temp2>=10)
		begin
		temp2=temp2-10;
		temp[2]=1;
		end
		else
		temp[2]=0;
		
		temp2=temp2*2;
		if(temp2>=10)
		begin
		temp2=temp2-10;
		temp[1]=1;
		end
		else
		temp[1]=0;
		
		temp2=temp2*2;
		if(temp2>=10)
		begin
		temp2=temp2-10;
		temp[0]=1;
		end
		else
		temp[0]=0;

		if(in1[4]==1 && rep==0)begin
			mantissa={in1[3:0],temp,{(14){1'b0}}};
			rep=1'b1;
			out={0,127+4,mantissa};
			end
		
		if(in1[3]==1 && rep==0)begin
			mantissa={in1[2:0],temp,{(15){1'b0}}};
			rep=1;
			out={0,127+3,mantissa};
			end	
		
		if(in1[2]==1 && rep==0)begin
			mantissa={in1[1:0],temp,{(16){1'b0}}};
			rep=1;
			out={0,127+2,mantissa};
			end
			
		if(in1[1]==1 && rep==0)begin
			mantissa={in1[0],temp,{(17){1'b0}}};
			rep=1;
			out={0,127+1,mantissa};
			end

		if(in1[0]==1 && rep==0)begin
			mantissa={temp,{(18){1'b0}}};
			out={0,127,mantissa};
			end
			
		end

endmodule
