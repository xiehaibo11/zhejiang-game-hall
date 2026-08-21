
int FUN_00c2a9dc(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  lVar5 = FUN_00c29e20(param_1,1);
  uVar2 = FUN_00c29da0(param_1,2,1);
  if ((*(long *)(param_1 + 0x20) + 0x10U < *(ulong *)(param_1 + 0x28)) &&
     (*(long *)(*(long *)(param_1 + 0x20) + 0x10) != -1)) {
    iVar3 = FUN_00c29cf0(param_1,3);
  }
  else {
    iVar3 = FUN_00c1c99c(lVar5);
  }
  if (iVar3 < (int)uVar2) {
    return 0;
  }
  uVar1 = iVar3 - uVar2;
  iVar3 = uVar1 + 1;
  if ((iVar3 < 1) || (iVar4 = lua_checkstack(param_1,iVar3), iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb3a0(param_1,0x3db);
  }
  lVar9 = (long)(int)uVar2;
  lVar10 = lVar9 << 3;
  do {
    if (uVar2 < *(uint *)(lVar5 + 0x30)) {
      puVar7 = (undefined8 *)(lVar10 + *(long *)(lVar5 + 0x10));
      if (puVar7 == (undefined8 *)0x0) goto LAB_00c2ab14;
LAB_00c2aac4:
      puVar8 = *(undefined8 **)(param_1 + 0x28);
      uVar6 = *puVar7;
      *(undefined8 **)(param_1 + 0x28) = puVar8 + 1;
      *puVar8 = uVar6;
    }
    else {
      puVar7 = (undefined8 *)FUN_00c1bbc0(lVar5,uVar2);
      if (puVar7 != (undefined8 *)0x0) goto LAB_00c2aac4;
LAB_00c2ab14:
      puVar7 = *(undefined8 **)(param_1 + 0x28);
      *(undefined8 **)(param_1 + 0x28) = puVar7 + 1;
      *puVar7 = 0xffffffffffffffff;
    }
    lVar10 = lVar10 + 8;
    uVar2 = uVar2 + 1;
    if (lVar10 == (lVar9 + 1 + (ulong)uVar1) * 8) {
      return iVar3;
    }
  } while( true );
}

