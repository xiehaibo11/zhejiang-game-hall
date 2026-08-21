
ulong SSL_CTX_dane_clear_flags(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 800);
  *(ulong *)(param_1 + 800) = uVar1 & (param_2 ^ 0xffffffffffffffff);
  return uVar1;
}

