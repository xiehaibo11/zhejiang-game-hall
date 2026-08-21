
int FUN_00a105c8(long *param_1,long *param_2)

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
  auVar9 = FUN_00a18e40();
  lVar6 = *(long *)(lVar7 + 0x358);
  lVar8 = *(long *)(lVar7 + 0x360);
  bVar1 = 0 < lVar6 | 2;
  if (lVar8 < 1) {
    bVar1 = 0 < lVar6;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a10500 with catch @ 00a10604
                        */
  if (bVar1 != 1) {
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a10348 with catch @ 00a1063c
                        */
                    /* try { // try from 00a10640 to 00b106d7 has its CatchHandler @ 00a10640
                       catch() { ... } // from try @ 00a10640 with catch @ 00a10640
                       catch() { ... } // from try @ 00a106e0 with catch @ 00a10640
                       catch() { ... } // from try @ 00a10738 with catch @ 00a10640 */
  lVar8 = FUN_00a18ea0(auVar9._0_8_,auVar9._8_8_,*(undefined8 *)(lVar7 + 0x9d8),
                       *(undefined8 *)(lVar7 + 0x9e0));
  uVar2 = lVar6 - lVar8;
  if (uVar2 == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  if ((long)uVar2 < 0) {
    FUN_00a23020(lVar7,"Connection time-out");
    iVar5 = 0x1c;
  }
  else {
    uVar3 = FUN_00a1a08c(*param_2);
    *(undefined4 *)(param_1 + 0x7e) = uVar3;
    param_1[0xd] = *param_2;
    param_1[0xe] = 0;
    param_1[0x4d] = -1;
    FUN_00a11760(*param_1,200);
    lVar6 = param_1[0xd];
    param_1[0x7f] = uVar2 >> (*(long *)(lVar6 + 0x28) != 0);
    if (lVar6 == 0) {
      iVar4 = 7;
    }
    else {
      do {
        iVar4 = FUN_00a10718(param_1,lVar6,param_1 + 0x4d);
        if (iVar4 == 0) break;
        lVar6 = *(long *)(param_1[0xd] + 0x28);
        param_1[0xd] = lVar6;
      } while (lVar6 != 0);
    }
                    /* try { // try from 00a106d8 to 00b106df has its CatchHandler @ 00a10738 */
                    /* try { // try from 00a106e0 to 00b10733 has its CatchHandler @ 00a10640 */
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

