
ulong SSL_CTX_dane_set_flags(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 800);
  *(ulong *)(param_1 + 800) = uVar1 | param_2;
  return uVar1;
}

