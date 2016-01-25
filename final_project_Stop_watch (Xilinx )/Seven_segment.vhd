----------------------------------------------------------------------------------
--  faculty of engineering alexandria university
-- Teaching Assistant : Mostafa Mahmoud Ayesh
-- Dr                 : Hossam el din mostafa
-- Engineer: Eslam omar mohamed mohamed omar  53
--           Eman magdy hossny                74
--           Hossam ahmed ahmed wasfy         91
--           Hossam hassan abdou              93
--           Jilan mohamed rashad aref        87
  
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
entity seven is
    Port ( BCD           : in  STD_LOGIC_VECTOR (3 downto 0);
           seven_segment : out  STD_LOGIC_VECTOR (6 downto 0));
end seven;

architecture Behavioral of seven is
begin
PROCESS (BCD)
BEGIN
CASE BCD IS
WHEN "0000"=>seven_segment<="1111110";
WHEN "0001"=>seven_segment<="0110000";
WHEN "0010"=>seven_segment<="1101101";
WHEN "0011"=>seven_segment<="1111001";
WHEN "0100"=>seven_segment<="0110011";
WHEN "0101"=>seven_segment<="1011011";
WHEN "0110"=>seven_segment<="1011111";
WHEN "0111"=>seven_segment<="1110000";
WHEN "1000"=>seven_segment<="1111111";
WHEN "1001"=>seven_segment<="1111011";
WHEN OTHERS=>seven_segment<="0000000";
END CASE;
END PROCESS;

end Behavioral;

