
int FUN_00a25fb0(long *param_1,long *param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  lVar7 = *param_1;
  auVar9 = FUN_00a2e828();
  lVar6 = *(long *)(lVar7 + 0x358);
  lVar8 = *(long *)(lVar7 + 0x360);
  bVar1 = 0 < lVar6 | 2;
  if (lVar8 < 1) {
    bVar1 = 0 < lVar6;
  }
  if (bVar1 != 1) {
                    /* try { // try from 00a25ff4 to 00b2600b has its CatchHandler @ 00a261fc */
    if (bVar1 == 3) {
      if (lVar8 <= lVar6) {
        lVar6 = lVar8;
      }
    }
    else {
      lVar6 = lVar8;
      if (bVar1 != 2) {
        lVar6 = 300000;
      }
    }
  }
  lVar8 = FUN_00a2e888(auVar9._0_8_,auVar9._8_8_,*(undefined8 *)(lVar7 + 0x9d8),
                       *(undefined8 *)(lVar7 + 0x9e0));
  uVar2 = lVar6 - lVar8;
  if (uVar2 == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  if ((long)uVar2 < 0) {
    FUN_00a38a08(lVar7,"Connection time-out");
    iVar5 = 0x1c;
                    /* try { // try from 00a260b8 to 00b2610f has its CatchHandler @ 00a25fac */
  }
  else {
    uVar3 = FUN_00a2fa74(*param_2);
                    /* try { // try from 00a26040 to 00b2604b has its CatchHandler @ 00a261a4 */
    *(undefined4 *)(param_1 + 0x7e) = uVar3;
    param_1[0xd] = *param_2;
    param_1[0xe] = 0;
    param_1[0x4d] = -1;
    FUN_00a27148(*param_1,200);
    lVar6 = param_1[0xd];
                    /* try { // try from 00a26074 to 00b2608b has its CatchHandler @ 00a261e8 */
    param_1[0x7f] = uVar2 >> (*(long *)(lVar6 + 0x28) != 0);
    if (lVar6 == 0) {
      iVar4 = 7;
    }
    else {
      do {
        iVar4 = FUN_00a26100(param_1,lVar6,param_1 + 0x4d);
        if (iVar4 == 0) break;
                    /* try { // try from 00a26090 to 00b260b7 has its CatchHandler @ 00a261e4 */
        lVar6 = *(long *)(param_1[0xd] + 0x28);
        param_1[0xd] = lVar6;
      } while (lVar6 != 0);
    }
    if ((int)param_1[0x4d] == -1) {
      iVar5 = 7;
      if (iVar4 != 0) {
        iVar5 = iVar4;
      }
    }
    else {
      *(long *)(lVar7 + 0x8da8) = *(long *)(lVar7 + 0x8da8) + 1;
      iVar5 = 0;
    }
  }
  return iVar5;
}

