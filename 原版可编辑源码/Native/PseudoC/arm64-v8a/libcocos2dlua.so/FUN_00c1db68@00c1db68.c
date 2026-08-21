
undefined8 * FUN_00c1db68(long param_1,ulong *param_2,ulong *param_3,uint param_4,ulong param_5)

{
  ulong *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  undefined *puVar13;
  undefined1 auVar14 [12];
  undefined *local_10;
  
  iVar2 = (int)((long)*param_2 >> 0x2f);
  auVar14._8_4_ = iVar2;
  auVar14._0_8_ = *param_2;
  if (iVar2 != -0xb) {
    param_5 = *param_3;
    iVar9 = (int)((long)param_5 >> 0x2f);
    if (iVar9 != -0xb) {
      if (iVar2 == iVar9) goto LAB_00c1de1c;
      if ((iVar2 + 3U < 2) && (iVar9 + 3U < 2)) goto LAB_00c1dbd4;
      goto LAB_00c1de0c;
    }
  }
  if ((param_4 & 1) == 0) {
    puVar13 = &DAT_00c1793c;
  }
  else {
    puVar13 = &DAT_00c1794c;
  }
  uVar3 = 7;
  if ((param_4 & 2) == 0) {
    uVar3 = 6;
  }
  puVar1 = param_2;
  if (iVar2 != -0xb) {
    puVar1 = param_3;
  }
  plVar5 = (long *)FUN_00c1cd14(param_1,puVar1,uVar3);
  if (*plVar5 != -1) {
    puVar8 = *(undefined8 **)(param_1 + 0x28);
    uVar6 = *(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
    if (*(char *)(uVar6 + 10) == '\0') {
      puVar8 = (undefined8 *)
               (*(long *)(param_1 + 0x20) + (ulong)*(byte *)(*(long *)(uVar6 + 0x20) + -0x5d) * 8);
    }
    *puVar8 = puVar13;
    puVar8[1] = 0xffffffffffffffff;
    lVar11 = *plVar5;
LAB_00c1dd14:
    puVar8[2] = lVar11;
    puVar8[3] = 0xffffffffffffffff;
    puVar8[4] = *param_2;
    puVar8[5] = *param_3;
    return puVar8 + 4;
  }
LAB_00c1de0c:
  auVar14 = FUN_00bfb0d0(param_1,param_2,param_3);
LAB_00c1de1c:
  if (auVar14._8_4_ == -5) {
    uVar6 = FUN_00bfb760(auVar14._0_8_ & 0x7fffffffffff,param_5 & 0x7fffffffffff);
    uVar12 = (uint)(uVar6 >> 0x1f) & 1;
    if ((param_4 >> 1 & 1) != 0) {
      uVar12 = (uint)((int)uVar6 < 1);
    }
    return (undefined8 *)(long)(int)(uVar12 ^ param_4 & 1);
  }
LAB_00c1dbd4:
  local_10 = &DAT_00c1794c;
  puVar1 = param_2;
  do {
    param_2 = puVar1;
    puVar13 = local_10;
    if ((param_4 & 1) == 0) {
      puVar13 = &DAT_00c1793c;
    }
    lVar11 = 7;
    if ((param_4 & 2) == 0) {
      lVar11 = 6;
    }
    uVar12 = (uint)((long)*param_2 >> 0x2f);
    if ((uVar12 == 0xfffffff4) || (uVar12 == 0xfffffff3)) {
      lVar7 = *(long *)(param_1 + 0x10);
      lVar4 = *(long *)((*param_2 & 0x7fffffffffff) + 0x20);
      if (lVar4 != 0) goto LAB_00c1dc44;
LAB_00c1dd70:
      plVar5 = (long *)(lVar7 + 0xe8);
    }
    else {
      lVar7 = *(long *)(param_1 + 0x10);
      uVar10 = 0x23;
      if (0xfffffff2 < uVar12) {
        uVar10 = 0x15 - uVar12;
      }
      lVar4 = *(long *)(lVar7 + (ulong)uVar10 * 8 + 0x170);
      if (lVar4 == 0) goto LAB_00c1dd70;
LAB_00c1dc44:
      plVar5 = (long *)FUN_00c1bc28(lVar4,*(undefined8 *)(lVar7 + (lVar11 + 0x2e) * 8));
      lVar7 = *(long *)(param_1 + 0x10);
      if (plVar5 == (long *)0x0) goto LAB_00c1dd70;
    }
    uVar12 = (uint)((long)*param_3 >> 0x2f);
    if ((uVar12 == 0xfffffff4) || (uVar12 == 0xfffffff3)) {
      param_5 = *param_3 & 0x7fffffffffff;
      lVar4 = *(long *)(param_5 + 0x20);
      if (lVar4 == 0) goto LAB_00c1dd58;
LAB_00c1dc98:
      lVar7 = FUN_00c1bc28(lVar4,*(undefined8 *)(lVar7 + (lVar11 + 0x2e) * 8));
      if (lVar7 == 0) {
        lVar7 = *(long *)(param_1 + 0x10) + 0xe8;
      }
    }
    else {
      uVar10 = 0x23;
      if (0xfffffff2 < uVar12) {
        uVar10 = 0x15 - uVar12;
      }
      param_5 = lVar7 + (ulong)uVar10 * 8;
      lVar4 = *(long *)(param_5 + 0x170);
      if (lVar4 != 0) goto LAB_00c1dc98;
LAB_00c1dd58:
      lVar7 = lVar7 + 0xe8;
    }
    if ((*plVar5 != -1) && (iVar2 = FUN_00bfb678(plVar5,lVar7), iVar2 != 0)) {
      puVar8 = *(undefined8 **)(param_1 + 0x28);
      uVar6 = *(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
      if (*(char *)(uVar6 + 10) == '\0') {
        puVar8 = (undefined8 *)
                 (*(long *)(param_1 + 0x20) + (ulong)*(byte *)(*(long *)(uVar6 + 0x20) + -0x5d) * 8)
        ;
      }
      *puVar8 = puVar13;
      puVar8[1] = 0xffffffffffffffff;
      lVar11 = *plVar5;
      goto LAB_00c1dd14;
    }
    if ((param_4 & 2) == 0) goto LAB_00c1de0c;
    param_4 = param_4 ^ 3;
    puVar1 = param_3;
    param_3 = param_2;
  } while( true );
}

