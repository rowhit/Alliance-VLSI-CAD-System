in       vdd B;;
in       vss B;;
in       ck B;;
in       reset B;;
in       i B;;
out      o B;;

begin

--                          v v c r i  o 
--                          d s k e      
--                          d s   s      
--                                e      
--                                t      
#                            
< 50 ns >                 : 1 0 1 1 0 ?*;
< +50 ns  >               : 1 0 0 1 0 ?*;
< +50 ns  >               : 1 0 1 1 1 ?*;
#		                    
< +50 ns  >               : 1 0 1 0 1 ?0;
< +50 ns  >               : 1 0 0 0 1 ?0;
< +50 ns  >               : 1 0 1 0 1 ?0;
#                            
< +50 ns  >               : 1 0 1 0 1 ?0;
< +50 ns  >               : 1 0 0 0 1 ?0;
< +50 ns  >               : 1 0 1 0 1 ?0;
#                            
< +50 ns  >               : 1 0 1 0 1 ?0;
< +50 ns  >               : 1 0 0 0 1 ?0;
< +50 ns  >               : 1 0 1 0 1 ?0;
#                            
< +50 ns  >               : 1 0 1 0 1 ?0;
< +50 ns  >               : 1 0 0 0 1 ?0;
< +50 ns  >               : 1 0 1 0 1 ?0;
#                            
< +50 ns  >               : 1 0 1 0 1 ?0;
< +50 ns  >               : 1 0 0 0 1 ?0;
< +50 ns  >               : 1 0 1 0 1 ?1;
#                            
< +50 ns  >               : 1 0 1 0 1 ?1;
< +50 ns  >               : 1 0 0 0 1 ?1;
< +50 ns  >               : 1 0 1 0 1 ?1;
#                            
< +50 ns  >               : 1 0 1 0 1 ?1;
< +50 ns  >               : 1 0 0 0 1 ?1;
< +50 ns  >               : 1 0 1 0 1 ?1;
#                            
< +50 ns  >               : 1 0 1 0 0 ?1;
< +50 ns  >               : 1 0 0 0 0 ?1;
< +50 ns  >               : 1 0 1 0 0 ?0;
#                            
< +50 ns  >               : 1 0 1 0 0 ?0;
< +50 ns  >               : 1 0 0 0 0 ?0;
< +50 ns  >               : 1 0 1 0 0 ?0;

end;