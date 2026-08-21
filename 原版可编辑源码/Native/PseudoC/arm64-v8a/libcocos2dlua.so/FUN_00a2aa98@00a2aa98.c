
int FUN_00a2aa98(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  iVar1 = FUN_00a2a7a4(param_1,0,param_2,param_3,param_4);
  if (0 < iVar1) {
    return iVar1;
  }
  if (*(long *)(param_1 + 0x160) == 0) {
    return iVar1;
  }
  if (*(long *)(param_1 + 0x80) == 0) {
LAB_00a2ab50:
    if ((*(long *)(param_1 + 0x170) == 0) && (*(long *)(param_1 + 0x178) == 0)) {
      return iVar1;
    }
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    pcVar6 = *(code **)(param_1 + 0x160);
    uVar7 = *(undefined8 *)(param_1 + 0x168);
    lVar4 = -1;
  }
  else {
    auVar8 = FUN_00a2e828();
    lVar5 = auVar8._0_8_;
    lVar2 = FUN_00a2b908(0,0,*(undefined8 *)(param_1 + 0x80));
    *(long *)(param_1 + 0x80) = lVar2;
    lVar3 = *(long *)(lVar2 + 0x18);
    lVar4 = 0;
    if (lVar5 <= lVar3) {
      if ((lVar5 < lVar3) || (auVar8._8_8_ < *(long *)(lVar2 + 0x20))) {
        lVar4 = FUN_00a2e888(lVar3,*(long *)(lVar2 + 0x20),lVar5,auVar8._8_8_);
        if (lVar4 == 0) {
          lVar4 = 1;
        }
        else if (lVar4 < 0) goto LAB_00a2ab50;
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
    uVar7 = *(undefined8 *)(lVar5 + 0x18);
    *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(param_1 + 0x170) = uVar7;
    pcVar6 = *(code **)(param_1 + 0x160);
    uVar7 = *(undefined8 *)(param_1 + 0x168);
  }
  (*pcVar6)(param_1,lVar4,uVar7);
  return iVar1;
}

