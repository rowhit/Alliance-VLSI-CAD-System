
--
-- Generated by VASY
--
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY nts_x2 IS
PORT(
  cmd	: IN STD_LOGIC;
  i	: IN STD_LOGIC;
  nq	: OUT STD_LOGIC
);
END nts_x2;

ARCHITECTURE RTL OF nts_x2 IS
BEGIN
  PROCESS ( i, cmd )
  BEGIN
    IF (cmd = '1')
    THEN nq <= NOT(i);
    ELSE nq <= 'Z';
    END IF;
  END PROCESS;
END RTL;
