
int FUN_00e2e848(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  uint *puVar13;
  int local_54;
  
  local_54 = 0;
  lVar12 = *(long *)(param_1 + 0x4c0);
  uVar11 = *(undefined8 *)(param_1 + 0xb8);
  if (lVar12 == 0) {
    local_54 = FUN_00e2dd88(param_1,0);
    uVar3 = 0;
    if (local_54 != 0) goto LAB_00e2ea7c;
    lVar12 = *(long *)(param_1 + 0x4c0);
  }
  puVar13 = *(uint **)(lVar12 + 0x18);
  plVar2 = *(long **)(lVar12 + 8);
  uVar4 = *puVar13;
  uVar1 = uVar4;
  if (param_2 <= uVar4) {
    uVar1 = param_2;
  }
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)FUN_00e13bcc(uVar11,8,0,uVar4,0,&local_54);
    *(long **)(lVar12 + 8) = plVar2;
    uVar3 = 0;
    if (local_54 != 0) goto LAB_00e2ea7c;
  }
  if (uVar1 == 0) {
    bVar5 = false;
    uVar7 = *(ulong *)(param_1 + 8);
    uVar4 = *puVar13;
    if ((uVar7 & 0x7fff0000) == 0) goto LAB_00e2e99c;
LAB_00e2e8f0:
    if (uVar1 < uVar4) {
      lVar6 = *(long *)(*(long *)(puVar13 + 6) + (uVar7 >> 0x10 & 0xffff) * 0x10 + -0x10);
      uVar7 = (ulong)uVar1;
      do {
        lVar10 = *(long *)(lVar6 + uVar7 * 8);
        if (*plVar2 != lVar10) {
          bVar5 = true;
          *plVar2 = lVar10;
        }
        uVar7 = uVar7 + 1;
        plVar2 = plVar2 + 1;
      } while ((uint)uVar7 < uVar4);
    }
  }
  else {
    if (param_2 <= uVar4) {
      uVar4 = param_2;
    }
    lVar6 = 0;
    bVar5 = false;
    do {
      lVar10 = *(long *)(param_3 + lVar6 * 8);
      if (plVar2[lVar6] != lVar10) {
        bVar5 = true;
        plVar2[lVar6] = lVar10;
      }
      lVar6 = lVar6 + 1;
    } while ((uint)lVar6 < uVar1);
    plVar2 = plVar2 + (ulong)(uVar4 - 1) + 1;
    uVar7 = *(ulong *)(param_1 + 8);
    uVar4 = *puVar13;
    if ((uVar7 & 0x7fff0000) != 0) goto LAB_00e2e8f0;
LAB_00e2e99c:
    if (uVar1 < uVar4) {
      plVar8 = (long *)(*(long *)(puVar13 + 4) + (ulong)uVar1 * 0x30 + 0x10);
      uVar9 = uVar1;
      do {
        if (*plVar2 != *plVar8) {
          bVar5 = true;
          *plVar2 = *plVar8;
        }
        uVar9 = uVar9 + 1;
        plVar2 = plVar2 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar9 < uVar4);
    }
  }
  if ((!bVar5) && (*(long *)(lVar12 + 0x10) != 0)) {
    return -1;
  }
  uVar3 = FUN_00e13bcc(uVar11,8,0,uVar4,0,&local_54);
  if (local_54 == 0) {
    lVar6 = *(long *)(param_1 + 0x4c0);
    if (*(char *)(lVar6 + 0x30) == '\0') {
      FUN_00e30304(param_1);
      lVar6 = *(long *)(param_1 + 0x4c0);
    }
    FUN_00e304e8(lVar6,uVar1,*(undefined8 *)(lVar12 + 8),uVar3);
    local_54 = FUN_00e2ef50(param_1,*puVar13,uVar3,0);
    if (local_54 == 0) {
      if (uVar1 == 0) {
        uVar7 = *(ulong *)(param_1 + 0x10) & 0xffffffffffff7fff;
      }
      else {
        uVar7 = *(ulong *)(param_1 + 0x10) | 0x8000;
      }
      *(ulong *)(param_1 + 0x10) = uVar7;
    }
  }
LAB_00e2ea7c:
  FUN_00e139fc(uVar11,uVar3);
  return local_54;
}

