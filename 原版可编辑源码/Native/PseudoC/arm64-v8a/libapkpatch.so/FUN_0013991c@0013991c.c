
bool FUN_0013991c(long param_1,long param_2,ulong param_3,long param_4,ulong param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int local_74;
  
  iVar2 = FUN_0013c9e0(*(undefined8 *)(param_1 + 8));
  lVar10 = param_3 + param_5 + 1;
  *(long *)(param_1 + 0x50) = lVar10;
  puVar5 = malloc(lVar10 * 9 + 4);
  *(undefined4 **)(param_1 + 0x60) = puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    puts("self->_buf!=0 ERROR!");
    FUN_0013fb24(&DAT_0016ba71,"self->_buf!=0","in OldStream");
  }
  else {
    lVar7 = *(long *)(param_1 + 8);
    puVar1 = puVar5 + 1 + lVar10;
    *(undefined4 **)(param_1 + 0x38) = puVar5 + 1;
    *(undefined4 **)(param_1 + 0x40) = puVar1;
    *(undefined4 **)(param_1 + 0x48) = puVar1 + lVar10;
    iVar12 = (*(int *)(lVar7 + 0x98) + *(int *)(lVar7 + 0xa0)) - *(int *)(lVar7 + 0x50);
    *puVar5 = 0;
    puVar5[1] = iVar12;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + lVar10) = 0;
    if (0 < iVar2) {
      iVar11 = 0;
      uVar8 = 0;
      uVar9 = 0;
      lVar10 = 1;
      local_74 = 0;
      do {
        if ((uVar9 < param_3) && (iVar11 == *(int *)(param_2 + uVar9 * 4))) {
          iVar3 = FUN_0013d560(*(undefined8 *)(param_1 + 8),iVar11);
          uVar6 = FUN_0013c9ec(*(undefined8 *)(param_1 + 8),iVar11);
          if ((uVar6 & 1) == 0) {
            *(undefined1 *)(*(long *)(param_1 + 0x48) + lVar10) = 0;
            uVar4 = FUN_0013d594(*(undefined8 *)(param_1 + 8),iVar11);
            *(undefined4 *)(*(long *)(param_1 + 0x40) + lVar10 * 4) = uVar4;
          }
          else {
            *(undefined1 *)(*(long *)(param_1 + 0x48) + lVar10) = 1;
            *(int *)(*(long *)(param_1 + 0x40) + lVar10 * 4) = local_74;
            local_74 = iVar3 + local_74;
          }
          iVar12 = iVar3 + iVar12;
          uVar9 = uVar9 + 1;
          *(int *)(*(long *)(param_1 + 0x38) + lVar10 * 4) = iVar12;
          lVar10 = lVar10 + 1;
        }
        if ((uVar8 < param_5) && (iVar11 == *(int *)(param_4 + uVar8 * 4))) {
          iVar3 = FUN_0013d574(*(undefined8 *)(param_1 + 8),iVar11);
          *(undefined1 *)(*(long *)(param_1 + 0x48) + lVar10) = 0;
          uVar4 = FUN_0013d594(*(undefined8 *)(param_1 + 8),iVar11);
          iVar12 = iVar3 + iVar12;
          uVar8 = uVar8 + 1;
          *(undefined4 *)(*(long *)(param_1 + 0x40) + lVar10 * 4) = uVar4;
          *(int *)(*(long *)(param_1 + 0x38) + lVar10 * 4) = iVar12;
          lVar10 = lVar10 + 1;
        }
        iVar11 = iVar11 + 1;
      } while (iVar2 != iVar11);
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return puVar5 != (undefined4 *)0x0;
}

