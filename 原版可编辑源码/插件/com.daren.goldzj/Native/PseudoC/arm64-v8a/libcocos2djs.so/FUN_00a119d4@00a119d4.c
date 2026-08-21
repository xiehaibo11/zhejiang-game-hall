
undefined8 FUN_00a119d4(long *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if ((param_2 == (long *)0x0) || ((int)param_2[0x11cc] != -0x3f212453)) {
    return 2;
  }
  if (param_2[0xc] == 0) {
    return 0;
  }
  plVar6 = param_2 + 2;
  puVar4 = (undefined8 *)*plVar6;
  uVar1 = *(uint *)(param_2 + 3);
  if (puVar4 == (undefined8 *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = (long *)*puVar4 == param_2;
  }
  if (uVar1 < 0x11) {
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + -1;
    FUN_00a11d24(param_1);
    puVar4 = (undefined8 *)*plVar6;
  }
  if ((puVar4 != (undefined8 *)0x0) && ((int)param_2[3] - 10U < 7)) {
    FUN_00a11300(puVar4,2);
    bVar2 = true;
    *(long **)param_2[2] = param_2;
  }
  if ((param_2[0xc] != 0) && ((param_2[0x118a] != 0 || (param_2[0x118b] != 0)))) {
    lVar10 = param_2[0x1192];
    iVar3 = FUN_00a1620c(*(undefined8 *)(param_2[0xc] + 0x80),param_2 + 0x118c);
    if (iVar3 == 0) goto LAB_00a11b04;
    FUN_00a22d58(param_2,"Internal error clearing splay node = %d\n",iVar3);
    lVar8 = *(long *)(lVar10 + 0x18);
    while (lVar8 != 0) {
      FUN_00a34074(lVar10,*(undefined8 *)(lVar10 + 8),0);
LAB_00a11b04:
      lVar8 = *(long *)(lVar10 + 0x18);
    }
    param_2[0x118a] = 0;
    param_2[0x118b] = 0;
  }
  if ((int)param_2[0xb] == 2) {
    param_2[10] = 0;
    *(undefined4 *)(param_2 + 0xb) = 0;
  }
  if (*plVar6 != 0) {
    if (bVar2) {
      FUN_00a11ea4(plVar6,*(undefined4 *)((long)param_2 + 0x1c),uVar1 < 0x11);
    }
    else {
      FUN_00a297f0(param_2);
    }
  }
  FUN_00a33a6c(param_2 + 0x11a6);
  lVar10 = param_2[0x1192];
  if (lVar10 != 0) {
    FUN_00a34128(lVar10,0);
    param_2[0x1192] = 0;
  }
  param_2[0x15a] = 0;
  *(undefined4 *)(param_2 + 3) = 0x11;
  FUN_00a12120(param_1,param_2);
  if ((undefined8 *)param_2[2] != (undefined8 *)0x0) {
    *(undefined8 *)param_2[2] = 0;
    *plVar6 = 0;
  }
  param_2[0xc] = 0;
  for (plVar6 = *(long **)param_1[4]; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[2]) {
    if (*(long **)(*plVar6 + 8) == param_2) {
      FUN_00a34074((long *)param_1[4],plVar6,0);
      break;
    }
  }
  plVar6 = param_1 + 1;
  if ((long *)param_2[1] != (long *)0x0) {
    plVar6 = (long *)param_2[1];
  }
  *plVar6 = *param_2;
  plVar6 = param_1 + 2;
  if (*param_2 != 0) {
    plVar6 = (long *)(*param_2 + 8);
  }
  *plVar6 = param_2[1];
  *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  if (param_1[0x2c] == 0) {
    return 0;
  }
  if (param_1[0x10] == 0) {
LAB_00a11ca4:
    if ((param_1[0x2e] == 0) && (param_1[0x2f] == 0)) {
      return 0;
    }
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    pcVar9 = (code *)param_1[0x2c];
    lVar10 = param_1[0x2d];
    lVar7 = -1;
  }
  else {
    auVar11 = FUN_00a18e40();
    lVar10 = auVar11._0_8_;
    lVar8 = FUN_00a15f20(0,0,param_1[0x10]);
    param_1[0x10] = lVar8;
    lVar5 = *(long *)(lVar8 + 0x18);
    lVar7 = 0;
    if (lVar10 <= lVar5) {
      if ((lVar10 < lVar5) || (auVar11._8_8_ < *(long *)(lVar8 + 0x20))) {
        lVar7 = FUN_00a18ea0(lVar5,*(long *)(lVar8 + 0x20),lVar10,auVar11._8_8_);
        if (lVar7 == 0) {
          lVar7 = 1;
        }
        else if (lVar7 < 0) goto LAB_00a11ca4;
      }
      else {
        lVar7 = 0;
      }
    }
    lVar10 = param_1[0x10];
    if ((*(long *)(lVar10 + 0x18) == param_1[0x2e]) && (*(long *)(lVar10 + 0x20) == param_1[0x2f]))
    {
      return 0;
    }
    lVar8 = *(long *)(lVar10 + 0x18);
    param_1[0x2f] = *(long *)(lVar10 + 0x20);
    param_1[0x2e] = lVar8;
    pcVar9 = (code *)param_1[0x2c];
    lVar10 = param_1[0x2d];
  }
  (*pcVar9)(param_1,lVar7,lVar10);
  return 0;
}

