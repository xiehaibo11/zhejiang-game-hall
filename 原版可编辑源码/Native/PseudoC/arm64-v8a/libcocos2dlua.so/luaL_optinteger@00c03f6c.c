
long luaL_optinteger(undefined8 param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  double *pdVar2;
  uint uVar3;
  double dVar4;
  int local_8;
  int iStack_4;
  
  pdVar2 = (double *)FUN_00c03214();
  dVar4 = *pdVar2;
  uVar3 = (uint)((long)dVar4 >> 0x2f);
  if (uVar3 == 0xfffffff2) {
    param_3 = (long)*(int *)pdVar2;
  }
  else if (uVar3 < 0xfffffff2) {
    param_3 = (long)*pdVar2;
  }
  else if (dVar4 != -NAN) {
    if ((uVar3 != 0xfffffffb) ||
       (iVar1 = FUN_00c1f7ac((ulong)dVar4 & 0x7fffffffffff,&local_8), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00bfb554(param_1,param_2,3);
    }
    if (iStack_4 >> 0xf == -0xe) {
      param_3 = (long)local_8;
    }
    else {
      param_3 = (long)(double)CONCAT44(iStack_4,local_8);
    }
  }
  return param_3;
}

