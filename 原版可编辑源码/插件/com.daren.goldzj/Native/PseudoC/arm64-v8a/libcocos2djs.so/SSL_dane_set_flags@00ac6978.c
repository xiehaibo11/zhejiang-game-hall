
ulong SSL_dane_set_flags(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0xf8);
  *(ulong *)(param_1 + 0xf8) = uVar1 | param_2;
  return uVar1;
}

