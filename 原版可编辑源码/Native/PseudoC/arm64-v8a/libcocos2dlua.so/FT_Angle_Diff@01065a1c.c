
uleb128 * FT_Angle_Diff(long param_1,long param_2)

{
  uleb128 *puVar1;
  uleb128 *puVar2;
  
  puVar2 = (uleb128 *)((param_2 - param_1) % 0x1680000);
  puVar1 = &uleb128_01680000 + (long)puVar2;
  if (-1 < (long)puVar2) {
    puVar1 = puVar2;
  }
  puVar2 = puVar1 + -0x1680000;
  if ((long)puVar1 < 0xb40001) {
    puVar2 = puVar1;
  }
  return puVar2;
}

