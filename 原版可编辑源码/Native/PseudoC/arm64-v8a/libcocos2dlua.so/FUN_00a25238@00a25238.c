
long FUN_00a25238(long param_1,undefined1 (*param_2) [16],ulong param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar6 = *(long *)(param_1 + 0x358);
  bVar1 = 0 < lVar6;
  bVar4 = bVar1;
  if (((param_3 & 1) != 0) && (bVar4 = bVar1 | 2, *(long *)(param_1 + 0x360) < 1)) {
    bVar4 = bVar1;
  }
  if (bVar4 != 1) {
    if (bVar4 == 3) {
      if (*(long *)(param_1 + 0x360) <= lVar6) {
        lVar6 = *(long *)(param_1 + 0x360);
      }
    }
    else if (bVar4 == 2) {
      lVar6 = *(long *)(param_1 + 0x360);
    }
    else {
      if ((param_3 & 1) == 0) {
        return 0;
      }
      lVar6 = 300000;
    }
  }
  if (param_2 == (undefined1 (*) [16])0x0) {
    auVar7 = FUN_00a2e828();
  }
  else {
    auVar7 = *param_2;
  }
  if ((param_3 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x9e8);
    puVar5 = (undefined8 *)(param_1 + 0x9f0);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x9d8);
    puVar5 = (undefined8 *)(param_1 + 0x9e0);
  }
  lVar2 = FUN_00a2e888(auVar7._0_8_,auVar7._8_8_,uVar3,*puVar5);
  lVar6 = lVar6 - lVar2;
  if (lVar6 == 0) {
    lVar6 = -1;
  }
  return lVar6;
}

