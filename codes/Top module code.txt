----------------------------------------------------------------------------------
--  faculty of engineering alexandria university
--  Electronics and Communication department
-- Dr                 : Hossam el din mostafa
-- Teaching Assistant : Mostafa Mahmoud Ayesh
-- Engineer: Eslam omar mohamed mohamed omar  53          sec  3
--           Eman magdy hossny                74          sec  3
--           Hossam ahmed ahmed wasfy         91          sec  4
--           Hossam hassan abdou              93          sec  4
--           Jilan mohamed rashad aref        87          sec  4 
  

-- Create Date:    21:55:29 06/24/2014 
-- Design Name: Stop watch 

----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity TOP is
port(Clock, start_stop : in  std_logic;
     sec_in,min_in     : in std_logic_vector(7 downto 0);
     finish            : out std_logic;
     secout_uni,secout_tens,Minout_uni,Minout_tens : out std_logic_vector(6 downto 0));

end TOP;

architecture Behavioral of TOP is
--------------------------------------------------------------------
-- initial  component to convert BCD of user to Binary
component bcd_binary is
    Port ( bcd : in  STD_LOGIC_VECTOR (7 downto 0);
           binary : out  STD_LOGIC_VECTOR (5 downto 0));
end component;
--------------------------------------------------------------------
--counter
component my_counter is 
        
port(Clock, start_stop : in  std_logic;
     sec,min: in std_logic_vector(5 downto 0);
     secout,Minout : out std_logic_vector(5 downto 0));
end component;
---------------------------------------------------------------------
-- component used to convert binary To BCD
component binary_to_bcd is
    Port ( binary : in  STD_LOGIC_VECTOR (5 downto 0);
           BCD : out  STD_LOGIC_VECTOR (7 downto 0));
end component;
----------------------------------------------------------------------
-- component used to convert BCD to seven segment
component seven is
    Port ( 
	        BCD : in  STD_LOGIC_VECTOR (3 downto 0);
           seven_segment : out  STD_LOGIC_VECTOR (6 downto 0));
end component;
----------------------------------------------------------------------
--signals
signal BCD_in_S,BCD_in_m,s_out,m_out:std_logic_vector(5 downto 0);
signal pre_s,pre_m : std_logic;
signal to_seven_s,to_seven_m : std_logic_vector(7 downto 0);
---------------------------------------------------------------------
begin
--port map BCD to Binary (the intial value of counter)
convert_s_in: bcd_binary port map (sec_in,BCD_in_S);
convert_m_in: bcd_binary port map (min_in,BCD_in_m);
Counter :my_counter port map (Clock,start_stop,BCD_in_S,BCD_in_m,s_out,m_out);
----------------------------------------------------------------------
pre_s <= not(s_out(0) or s_out(1) or s_out(2) or s_out(3) or s_out(4) or s_out(5));     --to do finish condition
pre_m <= not(m_out(0) or m_out(1) or m_out(2) or m_out(3) or m_out(4) or m_out(5));
finish<= pre_s and pre_m;
-----------------------------------------------------------------
s_to_bcd : binary_to_bcd port map (s_out,to_seven_s);       --from Binary of counter  to BCD
m_to_bcd : binary_to_bcd port map (m_out,to_seven_m); 
-------------------------------------------------------------------
uni_s:seven port map (to_seven_s(3 downto 0),secout_uni);
ten_s :seven port map (to_seven_s(7 downto 4),secout_tens);   --from BCD to seven segment (output)

uni_m:seven port map (to_seven_m(3 downto 0),Minout_uni);
ten_m:seven port map (to_seven_m(7 downto 4),Minout_tens);

end Behavioral;

