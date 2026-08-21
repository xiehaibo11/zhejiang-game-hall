
uint SSL_clear_options(long param_1,uint param_2)

{
  uint uVar1;
  
                    /* try { // try from 00aca994 to 00bcaa27 has its CatchHandler @ 00acac5c */
  uVar1 = ~param_2 & *(uint *)(param_1 + 0x1e4);
  *(uint *)(param_1 + 0x1e4) = uVar1;
  return uVar1;
}

