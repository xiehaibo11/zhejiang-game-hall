
undefined1  [16] lua_tonumber(void)

{
  int iVar1;
  double *pdVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  double local_8;
  
  pdVar2 = (double *)FUN_00c03214();
  uVar3 = (uint)((long)*pdVar2 >> 0x2f);
  if (uVar3 < 0xfffffff3) {
    if (uVar3 == 0xfffffff2) {
      local_8 = (double)*(int *)pdVar2;
    }
    else {
      local_8 = *pdVar2;
    }
  }
  else if ((uVar3 != 0xfffffffb) ||
          (iVar1 = FUN_00c1f784((ulong)*pdVar2 & 0x7fffffffffff,&local_8), iVar1 == 0)) {
    local_8 = 0.0;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_8;
  return auVar4;
}

