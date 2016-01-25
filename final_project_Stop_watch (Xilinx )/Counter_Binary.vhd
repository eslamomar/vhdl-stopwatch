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
library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;
        
entity my_counter is 
        
port(Clock, start_stop : in  std_logic;
     sec,min: in std_logic_vector(5 downto 0);
     secout,Minout : out std_logic_vector(5 downto 0));
end my_counter;
        
architecture Behavioral of my_counter is  
        
signal sect,mint: std_logic_vector(5 downto 0);
 begin

process (Clock, start_stop) -- process sensitive
                            -- to start_stop and Clock
begin   
if (start_stop='1') then    --initial  value recorded before start  
sect <= sec;                -- active low stop watch 
mint<=min; 
elsif (Clock'event and Clock='1' ) then 
sect <= sect - 1;
secout<= sect;
Minout <=mint;
end if; 
 
if (sect="111111") then   --to start down from 59 sec
sect<="111011";           
mint<=mint -1;         --when sec reach to 00 min decrease by 1
end if;
end process; 
end Behavioral;
        