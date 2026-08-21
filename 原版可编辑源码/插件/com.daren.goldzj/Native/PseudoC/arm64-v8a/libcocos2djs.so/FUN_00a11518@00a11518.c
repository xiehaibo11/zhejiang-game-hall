
undefined8 FUN_00a11518(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if ((param_2 == (undefined8 *)0x0) || (*(int *)(param_2 + 0x11cc) != -0x3f212453)) {
    return 2;
  }
  if (param_2[0xc] != 0) {
    return 7;
  }
  lVar2 = FUN_00a33f88(FUN_00a1174c);
  if (lVar2 == 0) {
    return 3;
  }
  param_2[0x1192] = lVar2;
  if (*(int *)(param_2 + 3) != 0) {
    *(undefined4 *)(param_2 + 3) = 0;
  }
  if ((*(char *)((long)param_2 + 0x63d) == '\0') || (*(int *)(param_2 + 0xb) == 1)) {
    if ((param_2[10] == 0) || (*(int *)(param_2 + 0xb) == 0)) {
      param_2[10] = param_1 + 10;
      *(undefined4 *)(param_2 + 0xb) = 2;
    }
  }
  else {
    lVar2 = FUN_00a19f94();
    if (lVar2 != 0) {
      param_2[10] = lVar2;
      *(undefined4 *)(param_2 + 0xb) = 1;
    }
  }
  param_2[0x15a] = param_1 + 0x19;
  *param_2 = 0;
  if (param_1[1] == 0) {
    param_1[1] = (long)param_2;
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)param_1[2];
    *puVar6 = param_2;
  }
  param_2[1] = puVar6;
  param_1[2] = (long)param_2;
  param_2[0xc] = param_1;
  FUN_00a11760(param_2,0);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
  lVar2 = param_1[0x23];
  *(undefined8 *)(lVar2 + 0x358) = param_2[0x6b];
  *(undefined8 *)(lVar2 + 0x370) = param_2[0x6e];
  if (param_1[0x2c] == 0) {
    return 0;
  }
  plVar1 = param_1 + 0x2e;
  if (param_1[0x10] == 0) {
LAB_00a116f0:
    if (param_1[0x2f] == 0) {
      return 0;
    }
LAB_00a116f8:
    *plVar1 = 0;
    param_1[0x2f] = 0;
    pcVar7 = (code *)param_1[0x2c];
    lVar2 = param_1[0x2d];
    lVar5 = -1;
  }
  else {
    auVar8 = FUN_00a18e40();
    lVar2 = auVar8._0_8_;
    lVar3 = FUN_00a15f20(0,0,param_1[0x10]);
    param_1[0x10] = lVar3;
    lVar4 = *(long *)(lVar3 + 0x18);
    lVar5 = 0;
    if (lVar2 <= lVar4) {
      if ((lVar2 < lVar4) || (auVar8._8_8_ < *(long *)(lVar3 + 0x20))) {
        lVar5 = FUN_00a18ea0(lVar4,*(long *)(lVar3 + 0x20),lVar2,auVar8._8_8_);
        if (lVar5 == 0) {
          lVar5 = 1;
        }
        else if (lVar5 < 0) {
          if (*plVar1 == 0) goto LAB_00a116f0;
          goto LAB_00a116f8;
        }
      }
      else {
        lVar5 = 0;
      }
    }
    lVar2 = param_1[0x10];
    if ((*(long *)(lVar2 + 0x18) == param_1[0x2e]) && (*(long *)(lVar2 + 0x20) == param_1[0x2f])) {
      return 0;
    }
    lVar3 = *(long *)(lVar2 + 0x18);
    param_1[0x2f] = *(long *)(lVar2 + 0x20);
    *plVar1 = lVar3;
    pcVar7 = (code *)param_1[0x2c];
    lVar2 = param_1[0x2d];
  }
  (*pcVar7)(param_1,lVar5,lVar2);
  return 0;
}

