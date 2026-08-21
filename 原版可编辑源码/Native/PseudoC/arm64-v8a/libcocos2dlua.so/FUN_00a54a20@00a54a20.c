
undefined8 FUN_00a54a20(long *param_1,ulong param_2)

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
  lVar10 = *plVar9;
  uVar3 = (undefined4)plVar9[0x4c];
  plVar1 = (long *)(lVar10 + 0x370);
  if (*(long *)(lVar10 + 0x370) == 0) {
    plVar1 = param_1 + 10;
  }
  lVar11 = *plVar1;
  auVar12 = FUN_00a2e828();
  lVar6 = FUN_00a2e888(auVar12._0_8_,auVar12._8_8_,param_1[8],param_1[9]);
  lVar10 = *(long *)(lVar10 + 0x358);
  lVar11 = lVar11 - lVar6;
  if (lVar10 != 0) {
    auVar12 = FUN_00a2e828();
    lVar6 = FUN_00a2e888(auVar12._0_8_,auVar12._8_8_,plVar9[0x48],plVar9[0x49]);
    lVar10 = lVar10 - lVar6;
                    /* try { // try from 00a54a8c to 00b54a9b has its CatchHandler @ 00a54b24 */
    if (lVar10 <= lVar11) {
      lVar11 = lVar10;
    }
  }
  lVar10 = *plVar9;
                    /* try { // try from 00a54a9c to 00b54b3f has its CatchHandler @ 00a54a10 */
  if (lVar11 < 1) {
    FUN_00a38a08(lVar10,"server response timeout");
    return 0x1c;
  }
  if (999 < lVar11) {
    lVar11 = 1000;
  }
  if ((param_2 & 1) == 0) {
    lVar11 = 0;
  }
  uVar7 = thunk_FUN_00a5e8bc(plVar9,0);
  if ((uVar7 & 1) == 0) {
    lVar6 = param_1[6];
    if (lVar6 == 0) {
                    /* catch() { ... } // from try @ 00a54a8c with catch @ 00a54b24 */
                    /* try { // try from 00a54b40 to 00b54bbb has its CatchHandler @ 00a54b40
                       catch() { ... } // from try @ 00a54b40 with catch @ 00a54b40
                       catch() { ... } // from try @ 00a54bcc with catch @ 00a54b40 */
      if (((*param_1 != 0) && ((ulong)param_1[2] < (ulong)param_1[1])) ||
         (uVar7 = thunk_FUN_00a5e8bc(plVar9,0), (uVar7 & 1) != 0)) goto LAB_00a54ac4;
      lVar6 = param_1[6];
    }
    if (lVar6 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = uVar3;
      uVar3 = 0xffffffff;
    }
    iVar4 = FUN_00a2b3d0(uVar3,0xffffffff,uVar2,lVar11);
  }
  else {
LAB_00a54ac4:
    iVar4 = 1;
  }
  if ((param_2 & 1) != 0) {
    iVar5 = FUN_00a306d0(plVar9);
    if (iVar5 != 0) {
      return 0x2a;
    }
    auVar12 = FUN_00a2e828();
    uVar8 = FUN_00a450e0(lVar10,auVar12._0_8_,auVar12._8_8_);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
  }
  if (iVar4 == 0) {
    uVar8 = 0;
  }
  else {
    if (iVar4 != -1) {
                    /* try { // try from 00a54bbc to 00b54bcb has its CatchHandler @ 00a54c54 */
                    /* WARNING: Could not recover jumptable at 0x00a54bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)param_1[0xc])(plVar9);
      return uVar8;
    }
    FUN_00a38a08(lVar10,"select/poll error");
    uVar8 = 0x1b;
  }
  return uVar8;
}

