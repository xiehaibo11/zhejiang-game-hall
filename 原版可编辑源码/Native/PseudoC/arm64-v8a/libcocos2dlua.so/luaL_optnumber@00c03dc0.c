
undefined1  [16] luaL_optnumber(undefined1 param_1 [16],undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  double dVar5;
  undefined8 uVar7;
  undefined1 auVar6 [16];
  double local_8;
  
  uVar7 = param_1._8_8_;
  pdVar2 = (double *)FUN_00c03214();
  dVar3 = *pdVar2;
  uVar4 = (uint)((long)dVar3 >> 0x2f);
  if (uVar4 < 0xfffffff3) {
    if (uVar4 == 0xfffffff2) {
      uVar7 = 0;
      dVar5 = (double)*(int *)pdVar2;
    }
    else {
      uVar7 = 0;
      dVar5 = *pdVar2;
    }
  }
  else {
    dVar5 = param_1._0_8_;
    if (dVar3 != -NAN) {
      if ((uVar4 != 0xfffffffb) ||
         (iVar1 = FUN_00c1f784(param_1._0_8_,(ulong)dVar3 & 0x7fffffffffff,&local_8), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00bfb554(param_2,param_3,3);
      }
      uVar7 = 0;
      dVar5 = local_8;
    }
  }
  auVar6._8_8_ = uVar7;
  auVar6._0_8_ = dVar5;
  return auVar6;
}

