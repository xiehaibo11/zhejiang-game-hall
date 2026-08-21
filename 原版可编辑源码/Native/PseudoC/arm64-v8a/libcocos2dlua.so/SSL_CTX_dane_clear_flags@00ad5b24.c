
ulong SSL_CTX_dane_clear_flags(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 800);
  *(ulong *)(param_1 + 800) = uVar1 & (param_2 ^ 0xffffffffffffffff);
                    /* try { // try from 00ad5b30 to 00bd5b37 has its CatchHandler @ 00ad5b74 */
  return uVar1;
}

