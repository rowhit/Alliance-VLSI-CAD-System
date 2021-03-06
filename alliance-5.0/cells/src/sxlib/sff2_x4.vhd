
--
-- Generated by VASY
--
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY sff2_x4 IS
PORT(
  ck	: IN STD_LOGIC;
  cmd	: IN STD_LOGIC;
  i0	: IN STD_LOGIC;
  i1	: IN STD_LOGIC;
  q	: OUT STD_LOGIC
);
END sff2_x4;

ARCHITECTURE RTL OF sff2_x4 IS
  SIGNAL sff_m	: STD_LOGIC;
BEGIN
  q <= sff_m;
  PROCESS ( ck )
  BEGIN
    IF  ((ck = '1') AND ck'EVENT)
    THEN sff_m <= ((i1 AND cmd) OR (i0 AND NOT(cmd)));
    END IF;
  END PROCESS;
END RTL;
