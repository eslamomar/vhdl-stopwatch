----------------------------------------------------------------------------------
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

entity binary_to_bcd is
    Port ( binary : in  STD_LOGIC_VECTOR (5 downto 0);
           BCD : out  STD_LOGIC_VECTOR (7 downto 0));
end binary_to_bcd;

architecture Behavioral of binary_to_bcd is
begin
BCD <=
       "00000000" when binary="000000" else
       "00000001" when binary="000001" else
		 "00000010" when binary="000010" else
       "00000011" when binary="000011" else
		 "00000100" when binary="000100" else
       "00000101" when binary="000101" else
		 "00000110" when binary="000110" else
       "00000111" when binary="000111" else
		 "00001000" when binary="001000" else
       "00001001" when binary="001001" else
       "00010000" when binary="001010" else
       "00010001" when binary="001011" else
		 "00010010" when binary="001100" else
       "00010011" when binary="001101" else
		 "00010100" when binary="001110" else
       "00010101" when binary="001111" else
		 "00010110" when binary="010000" else
       "00010111" when binary="010001" else
		 "00011000" when binary="010010" else
       "00011001" when binary="010011" else
		 "00100000" when binary="010100" else
       "00100001" when binary="010101" else
		 "00100010" when binary="010110" else
       "00100011" when binary="010111" else
		 "00100100" when binary="011000" else
       "00100101" when binary="011001" else
		 "00100110" when binary="011010" else
       "00100111" when binary="011011" else
		 "00101000" when binary="011100" else
       "00101001" when binary="011101" else
		 "00110000" when binary="011110" else
       "00110001" when binary="111111" else
		 "00110010" when binary="100000" else
       "00110011" when binary="100001" else
		 "00110100" when binary="100010" else
       "00110101" when binary="100011" else
		 "00110110" when binary="100100" else
       "00110111" when binary="100101" else
		 "00111000" when binary="100110" else
       "00111001" when binary="100111" else
		 "01000000" when binary="101000" else
       "01000001" when binary="101001" else
		 "01000010" when binary="101010" else
       "01000011" when binary="101011" else
		 "01000100" when binary="101100" else
       "01000101" when binary="101101" else
		 "01000110" when binary="101110" else
       "01000111" when binary="101111" else
		 "01001000" when binary="110000" else
       "01001001" when binary="110001" else
		 "01010000" when binary="110010" else
       "01010001" when binary="110011" else
		 "01010010" when binary="110100" else
       "01010011" when binary="110101" else
		 "01010100" when binary="110110" else
       "01010101" when binary="110111" else
		 "01010110" when binary="111000" else
       "01010111" when binary="111001" else
		 "01011000" when binary="111010" else
       "01011001" when binary="111011" else
		 "00000000";
end Behavioral;

