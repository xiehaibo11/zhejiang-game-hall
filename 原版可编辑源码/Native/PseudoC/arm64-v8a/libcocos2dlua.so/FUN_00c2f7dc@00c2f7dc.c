
undefined8 FUN_00c2f7dc(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  __off_t _Var6;
  FILE *__stream;
  
  if (((*(ulong **)(param_1 + 0x28) <= *(ulong **)(param_1 + 0x20)) ||
      (uVar5 = **(ulong **)(param_1 + 0x20), (int)((long)uVar5 >> 0x2f) != -0xd)) ||
     (uVar5 = uVar5 & 0x7fffffffffff, *(char *)(uVar5 + 10) != '\x01')) {
    param_1 = FUN_00c2ee00(param_1);
LAB_00c2f904:
                    /* WARNING: Subroutine does not return */
    FUN_00bfb3a0(param_1,0x5d3);
  }
  __stream = *(FILE **)(uVar5 + 0x30);
  if (__stream == (FILE *)0x0) goto LAB_00c2f904;
  iVar1 = FUN_00c29ed8(param_1,2,1,&DAT_01411e30);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 + 0x10U < *(ulong *)(param_1 + 0x28)) {
    uVar4 = (uint)(*(long *)(lVar2 + 0x10) >> 0x2f);
    if (uVar4 == 0xfffffff2) {
      _Var6 = (__off_t)*(int *)(lVar2 + 0x10);
    }
    else {
      if (uVar4 < 0xfffffff2) {
        iVar1 = fseeko(__stream,(long)*(double *)(lVar2 + 0x10),iVar1);
        goto joined_r0x00c2f8c0;
      }
      _Var6 = 0;
      if (*(long *)(lVar2 + 0x10) != -1) {
                    /* WARNING: Subroutine does not return */
        FUN_00bfb554(param_1,3,3);
      }
    }
  }
  else {
    _Var6 = 0;
  }
  iVar1 = fseeko(__stream,_Var6,iVar1);
joined_r0x00c2f8c0:
  if (iVar1 == 0) {
    _Var6 = ftello(__stream);
    lVar2 = *(long *)(param_1 + 0x28);
    if (_Var6 == (int)_Var6) {
      *(int *)(lVar2 + -8) = (int)_Var6;
      *(undefined4 *)(lVar2 + -4) = 0xfff90000;
    }
    else {
      *(double *)(lVar2 + -8) = (double)_Var6;
    }
    return 1;
  }
  uVar3 = luaL_fileresult(param_1,0,0);
  return uVar3;
}

