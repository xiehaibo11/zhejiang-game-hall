
long lua_tointeger(void)

{
  int iVar1;
  double *pdVar2;
  long lVar3;
  uint uVar4;
  int local_8;
  int iStack_4;
  
  pdVar2 = (double *)FUN_00c03214();
  uVar4 = (uint)((long)*pdVar2 >> 0x2f);
  if (uVar4 == 0xfffffff2) {
    lVar3 = (long)*(int *)pdVar2;
  }
  else if (uVar4 < 0xfffffff2) {
    lVar3 = (long)*pdVar2;
  }
  else if ((uVar4 == 0xfffffffb) &&
          (iVar1 = FUN_00c1f7ac((ulong)*pdVar2 & 0x7fffffffffff,&local_8), iVar1 != 0)) {
    if (iStack_4 >> 0xf == -0xe) {
      lVar3 = (long)local_8;
    }
    else {
      lVar3 = (long)(double)CONCAT44(iStack_4,local_8);
    }
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}

