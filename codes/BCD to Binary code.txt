----------------------------------------------------------------------------------

-- Create Date:    19:06:33 06/25/2014 
-- Design Name: 
-- Module Name:    bcd_binary - Behavioral 
-- Project Name: 
-- Target Devices: 
--  faculty of engineering alexandria university
-- Teaching Assistant : Mostafa Mahmoud Ayesh
-- Dr                 : Hossam el din mostafa
-- Engineer: Eslam omar mohamed mohamed omar  53
--           Eman magdy hossny                74
--           Hossam ahmed ahmed wasfy         91
--           Hossam hassan abdou              93
--           Jilan mohamed rashad aref        87
  
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity bcd_binary is
    Port ( bcd : in  STD_LOGIC_VECTOR (7 downto 0);
           binary : out  STD_LOGIC_VECTOR (5 downto 0));
end bcd_binary;

architecture Behavioral of bcd_binary is

begin
binary <=
       "000000" when bcd="00000000" else
       "000001" when bcd="00000001" else
		 "000010" when bcd="00000010" else
       "000011" when bcd="00000011" else
		 "000100" when bcd="00000100" else
       "000101" when bcd="00000101" else
		 "000110" when bcd="00000110" else
       "000111" when bcd="00000111" else
		 "001000" when bcd="00001000" else
       "001001" when bcd="00001001" else
       "001010" when bcd="00010000" else
       "001011" when bcd="00010001" else
		 "001100" when bcd="00010010" else
       "001101" when bcd="00010011" else
		 "001110" when bcd="00010100" else
       "001111" when bcd="00010101" else
		 "010000" when bcd="00010110" else
       "010001" when bcd="00010111" else
		 "010010" when bcd="00011000" else
       "010011" when bcd="00011001" else
		 "010100" when bcd="00100000" else
       "010101" when bcd="00100001" else
		 "010110" when bcd="00100010" else
       "010111" when bcd="00100011" else
		 "011000" when bcd="00100100" else
       "011001" when bcd="00100101" else
		 "011010" when bcd="00100110" else
       "011011" when bcd="00100111" else
		 "011100" when bcd="00101000" else
       "011101" when bcd="00101001" else
		 "011110" when bcd="00110000" else
       "111111" when bcd="00110001" else
		 "100000" when bcd="00110010" else
       "100001" when bcd="00110011" else
		 "100010" when bcd="00110100" else
       "100011" when bcd="00110101" else
		 "100100" when bcd="00110110" else
       "100101" when bcd="00110111" else
		 "100110" when bcd="00111000" else
       "100111" when bcd="00111001" else
		 "101000" when bcd="01000000" else
       "101001" when bcd="01000001" else
		 "101010" when bcd="01000010" else
       "101011" when bcd="01000011" else
		 "101100" when bcd="01000100" else
       "101101" when bcd="01000101" else
		 "101110" when bcd="01000110" else
       "101111" when bcd="01000111" else
		 "110000" when bcd="01001000" else
       "110001" when bcd="01001001" else
		 "110010" when bcd="01010000" else
       "110011" when bcd="01010001" else
		 "110100" when bcd="01010010" else
       "110101" when bcd="01010011" else
		 "110110" when bcd="01010100" else
       "110111" when bcd="01010101" else
		 "111000" when bcd="01010110" else
       "111001" when bcd="01010111" else
		 "111010" when bcd="01011000" else
       "111011" when bcd="01011001" else
		 "000000";

end Behavioral;
