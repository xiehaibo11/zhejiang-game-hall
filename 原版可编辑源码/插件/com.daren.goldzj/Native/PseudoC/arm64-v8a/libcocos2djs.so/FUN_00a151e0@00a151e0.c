
int FUN_00a151e0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  FUN_00a18e40();
  iVar1 = FUN_00a12e68(param_1,param_2);
  if (iVar1 == 1) {
    return 1;
  }
  for (plVar7 = *(long **)(param_1 + 8); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    FUN_00a12120(param_1,plVar7);
  }
  if (0 < iVar1) {
    return iVar1;
  }
  if (*(long *)(param_1 + 0x160) == 0) {
    return iVar1;
  }
  if (*(long *)(param_1 + 0x80) == 0) {
LAB_00a152b0:
    if ((*(long *)(param_1 + 0x170) == 0) && (*(long *)(param_1 + 0x178) == 0)) {
      return iVar1;
    }
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    pcVar6 = *(code **)(param_1 + 0x160);
    uVar8 = *(undefined8 *)(param_1 + 0x168);
    lVar4 = -1;
  }
  else {
    auVar9 = FUN_00a18e40();
    lVar5 = auVar9._0_8_;
    lVar2 = FUN_00a15f20(0,0,*(undefined8 *)(param_1 + 0x80));
    *(long *)(param_1 + 0x80) = lVar2;
    lVar3 = *(long *)(lVar2 + 0x18);
    lVar4 = 0;
    if (lVar5 <= lVar3) {
      if ((lVar5 < lVar3) || (auVar9._8_8_ < *(long *)(lVar2 + 0x20))) {
        lVar4 = FUN_00a18ea0(lVar3,*(long *)(lVar2 + 0x20),lVar5,auVar9._8_8_);
        if (lVar4 == 0) {
          lVar4 = 1;
        }
        else if (lVar4 < 0) goto LAB_00a152b0;
      }
      else {
        lVar4 = 0;
      }
    }
    lVar5 = *(long *)(param_1 + 0x80);
    if ((*(long *)(lVar5 + 0x18) == *(long *)(param_1 + 0x170)) &&
       (*(long *)(lVar5 + 0x20) == *(long *)(param_1 + 0x178))) {
      return iVar1;
    }
    uVar8 = *(undefined8 *)(lVar5 + 0x18);
    *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(param_1 + 0x170) = uVar8;
    pcVar6 = *(code **)(param_1 + 0x160);
    uVar8 = *(undefined8 *)(param_1 + 0x168);
  }
  (*pcVar6)(param_1,lVar4,uVar8);
  return iVar1;
}

