
long FUN_00f1483c(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  
  uVar2 = (ulong)*(uint *)(param_2 + 2);
  param_2[1] = uVar2;
  plVar1 = (long *)FUN_00f14970(param_1,uVar2,param_2 + 2);
  uVar3 = param_1[1];
  uVar2 = param_2[1];
  uVar7 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                   CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                            CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                     CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                              CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                       CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                CONCAT11(POPCOUNT((char)(uVar3 >> 8)
                                                                                 ),
                                                                         POPCOUNT((char)uVar3)))))))
                  );
                    /* try { // try from 00f14878 to 0101487f has its CatchHandler @ 00f148ec */
  uVar6 = NEON_uaddlv(uVar7,1);
  uVar4 = CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6) & 0xffffffff;
                    /* try { // try from 00f14880 to 01014907 has its CatchHandler @ 00f14838 */
  if (uVar4 < 2) {
    uVar2 = uVar3 - 1 & uVar2;
  }
  else if (uVar3 <= uVar2) {
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = uVar2 / uVar3;
    }
    uVar2 = uVar2 - uVar5 * uVar3;
  }
  if (plVar1 == (long *)0x0) {
    plVar1 = param_1 + 2;
                    /* catch() { ... } // from try @ 00f14878 with catch @ 00f148ec */
    *param_2 = *plVar1;
    *plVar1 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar1;
    if (*param_2 != 0) {
      uVar2 = *(ulong *)(*param_2 + 8);
      if (uVar4 < 2) {
        uVar2 = uVar2 & uVar3 - 1;
      }
      else if (uVar3 <= uVar2) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar2 / uVar3;
        }
        uVar2 = uVar2 - uVar4 * uVar3;
      }
      *(long **)(*param_1 + uVar2 * 8) = param_2;
    }
  }
  else {
    *param_2 = *plVar1;
    *plVar1 = (long)param_2;
    if (*param_2 != 0) {
      uVar5 = *(ulong *)(*param_2 + 8);
      if (uVar4 < 2) {
        uVar5 = uVar5 & uVar3 - 1;
      }
      else if (uVar3 <= uVar5) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar5 / uVar3;
        }
        uVar5 = uVar5 - uVar4 * uVar3;
      }
      if (uVar5 != uVar2) {
        *(long **)(*param_1 + uVar5 * 8) = param_2;
      }
    }
  }
  param_1[3] = param_1[3] + 1;
  return (long)param_2;
}

