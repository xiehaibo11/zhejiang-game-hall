
undefined8 FUN_00a3e038(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  plVar9 = (long *)param_1[0xb];
                    /* try { // try from 00a3e05c to 00b3e0f7 has its CatchHandler @ 00a3ddec */
  lVar10 = *plVar9;
  uVar3 = (undefined4)plVar9[0x4c];
  plVar1 = (long *)(lVar10 + 0x370);
                    /* catch() { ... } // from try @ 00a3deac with catch @ 00a3e070
                       catch() { ... } // from try @ 00a3e018 with catch @ 00a3e070 */
  if (*(long *)(lVar10 + 0x370) == 0) {
    plVar1 = param_1 + 10;
  }
  lVar11 = *plVar1;
  auVar12 = FUN_00a18e40();
  lVar6 = FUN_00a18ea0(auVar12._0_8_,auVar12._8_8_,param_1[8],param_1[9]);
  lVar10 = *(long *)(lVar10 + 0x358);
                    /* catch() { ... } // from try @ 00a3de6c with catch @ 00a3e088 */
  lVar11 = lVar11 - lVar6;
                    /* catch() { ... } // from try @ 00a3de60 with catch @ 00a3e08c */
  if (lVar10 != 0) {
                    /* catch() { ... } // from try @ 00a3de40 with catch @ 00a3e090 */
    auVar12 = FUN_00a18e40();
    lVar6 = FUN_00a18ea0(auVar12._0_8_,auVar12._8_8_,plVar9[0x48],plVar9[0x49]);
                    /* catch() { ... } // from try @ 00a3de78 with catch @ 00a3e0a0
                       catch() { ... } // from try @ 00a3df04 with catch @ 00a3e0a0 */
    lVar10 = lVar10 - lVar6;
    if (lVar10 <= lVar11) {
      lVar11 = lVar10;
    }
  }
  lVar10 = *plVar9;
  if (lVar11 < 1) {
    FUN_00a23020(lVar10,"server response timeout");
    return 0x1c;
                    /* try { // try from 00a3e0f8 to 00b3e14b has its CatchHandler @ 00a3e0f8
                       catch() { ... } // from try @ 00a3e0f8 with catch @ 00a3e0f8
                       catch() { ... } // from try @ 00a3e258 with catch @ 00a3e0f8 */
  }
  if (999 < lVar11) {
    lVar11 = 1000;
  }
  if ((param_2 & 1) == 0) {
    lVar11 = 0;
  }
  uVar7 = thunk_FUN_00a47ed4(plVar9,0);
  if ((uVar7 & 1) == 0) {
    lVar6 = param_1[6];
    if (lVar6 == 0) {
                    /* try { // try from 00a3e14c to 00b3e163 has its CatchHandler @ 00a3e2d4 */
      if (((*param_1 != 0) && ((ulong)param_1[2] < (ulong)param_1[1])) ||
         (uVar7 = thunk_FUN_00a47ed4(plVar9,0), (uVar7 & 1) != 0)) goto LAB_00a3e0dc;
      lVar6 = param_1[6];
    }
    if (lVar6 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = uVar3;
      uVar3 = 0xffffffff;
    }
    iVar4 = FUN_00a159e8(uVar3,0xffffffff,uVar2,lVar11);
  }
  else {
LAB_00a3e0dc:
    iVar4 = 1;
  }
  if ((param_2 & 1) != 0) {
    iVar5 = FUN_00a1ace8(plVar9);
    if (iVar5 != 0) {
      return 0x2a;
    }
    auVar12 = FUN_00a18e40();
                    /* try { // try from 00a3e16c to 00b3e177 has its CatchHandler @ 00a3e2d0 */
                    /* try { // try from 00a3e178 to 00b3e183 has its CatchHandler @ 00a3e2cc */
    uVar8 = FUN_00a2e6f8(lVar10,auVar12._0_8_,auVar12._8_8_);
                    /* try { // try from 00a3e184 to 00b3e257 has its CatchHandler @ 00a3e2e4 */
    if ((int)uVar8 != 0) {
      return uVar8;
    }
  }
  if (iVar4 == 0) {
    uVar8 = 0;
  }
  else {
    if (iVar4 != -1) {
                    /* WARNING: Could not recover jumptable at 0x00a3e1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)param_1[0xc])(plVar9);
      return uVar8;
    }
    FUN_00a23020(lVar10,"select/poll error");
    uVar8 = 0x1b;
  }
  return uVar8;
}

