
undefined8 FUN_00c2f6f4(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  __off_t _Var7;
  ulong *puVar8;
  FILE *pFVar9;
  ulong uVar10;
  
  puVar8 = *(ulong **)(param_1 + 0x28);
  if (((*(ulong **)(param_1 + 0x20) < puVar8) &&
      (uVar10 = **(ulong **)(param_1 + 0x20), (int)((long)uVar10 >> 0x2f) == -0xd)) &&
     (uVar10 = uVar10 & 0x7fffffffffff, *(char *)(uVar10 + 10) == '\x01')) {
    pFVar9 = *(FILE **)(uVar10 + 0x30);
    if ((pFVar9 != (FILE *)0x0) && (uVar6 = *(uint *)(uVar10 + 0x38) & 3, uVar6 != 2)) {
      if (uVar6 == 0) {
        iVar2 = fclose(pFVar9);
        bVar1 = iVar2 == 0;
      }
      else {
        if (uVar6 != 1) {
          *(ulong **)(param_1 + 0x28) = puVar8 + 1;
          *puVar8 = 0xffffffffffffffff;
          lua_pushlstring(param_1,"cannot close standard file",0x1a);
          return 0;
        }
        iVar2 = pclose(pFVar9);
        bVar1 = iVar2 != -1;
      }
      *(undefined8 *)(uVar10 + 0x30) = 0;
      luaL_fileresult(param_1,bVar1,0);
      return 0;
    }
    return 0;
  }
  lVar3 = FUN_00c2ee00(param_1);
  if (((*(ulong **)(lVar3 + 0x28) <= *(ulong **)(lVar3 + 0x20)) ||
      (uVar10 = **(ulong **)(lVar3 + 0x20), (int)((long)uVar10 >> 0x2f) != -0xd)) ||
     (uVar10 = uVar10 & 0x7fffffffffff, *(char *)(uVar10 + 10) != '\x01')) {
    lVar3 = FUN_00c2ee00(lVar3);
LAB_00c2f904:
                    /* WARNING: Subroutine does not return */
    FUN_00bfb3a0(lVar3,0x5d3);
  }
  pFVar9 = *(FILE **)(uVar10 + 0x30);
  if (pFVar9 == (FILE *)0x0) goto LAB_00c2f904;
  iVar2 = FUN_00c29ed8(lVar3,2,1,&DAT_01411e30);
  lVar4 = *(long *)(lVar3 + 0x20);
  if (lVar4 + 0x10U < *(ulong *)(lVar3 + 0x28)) {
    uVar6 = (uint)(*(long *)(lVar4 + 0x10) >> 0x2f);
    if (uVar6 == 0xfffffff2) {
      _Var7 = (__off_t)*(int *)(lVar4 + 0x10);
    }
    else {
      if (uVar6 < 0xfffffff2) {
        iVar2 = fseeko(pFVar9,(long)*(double *)(lVar4 + 0x10),iVar2);
        goto joined_r0x00c2f8c0;
      }
      _Var7 = 0;
      if (*(long *)(lVar4 + 0x10) != -1) {
                    /* WARNING: Subroutine does not return */
        FUN_00bfb554(lVar3,3,3);
      }
    }
  }
  else {
    _Var7 = 0;
  }
  iVar2 = fseeko(pFVar9,_Var7,iVar2);
joined_r0x00c2f8c0:
  if (iVar2 != 0) {
    uVar5 = luaL_fileresult(lVar3,0,0);
    return uVar5;
  }
  _Var7 = ftello(pFVar9);
  lVar3 = *(long *)(lVar3 + 0x28);
  if (_Var7 == (int)_Var7) {
    *(int *)(lVar3 + -8) = (int)_Var7;
    *(undefined4 *)(lVar3 + -4) = 0xfff90000;
  }
  else {
    *(double *)(lVar3 + -8) = (double)_Var7;
  }
  return 1;
}

