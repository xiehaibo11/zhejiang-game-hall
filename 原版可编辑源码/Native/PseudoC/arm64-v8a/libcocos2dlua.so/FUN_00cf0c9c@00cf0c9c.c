
long FUN_00cf0c9c(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  
  lVar2 = (long)(int)param_2[2];
  param_2[1] = lVar2;
  plVar1 = (long *)FUN_00cf17e4(param_1,lVar2,param_2 + 2);
  uVar3 = param_1[1];
  uVar4 = param_2[1];
  uVar8 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                   CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                            CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                     CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                              CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                       CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                CONCAT11(POPCOUNT((char)(uVar3 >> 8)
                                                                                 ),
                                                                         POPCOUNT((char)uVar3)))))))
                  );
  uVar7 = NEON_uaddlv(uVar8,1);
  uVar5 = CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar7) & 0xffffffff;
  if (uVar5 < 2) {
    uVar4 = uVar3 - 1 & uVar4;
  }
  else if (uVar3 <= uVar4) {
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = uVar4 / uVar3;
    }
    uVar4 = uVar4 - uVar6 * uVar3;
  }
  if (plVar1 == (long *)0x0) {
    plVar1 = param_1 + 2;
    *param_2 = *plVar1;
    *plVar1 = (long)param_2;
    *(long **)(*param_1 + uVar4 * 8) = plVar1;
    if (*param_2 != 0) {
      uVar4 = *(ulong *)(*param_2 + 8);
      if (uVar5 < 2) {
        uVar4 = uVar4 & uVar3 - 1;
      }
      else if (uVar3 <= uVar4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar4 = uVar4 - uVar5 * uVar3;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_2;
    }
  }
  else {
    *param_2 = *plVar1;
    *plVar1 = (long)param_2;
    if (*param_2 != 0) {
      uVar6 = *(ulong *)(*param_2 + 8);
      if (uVar5 < 2) {
        uVar6 = uVar6 & uVar3 - 1;
      }
      else if (uVar3 <= uVar6) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar6 / uVar3;
        }
        uVar6 = uVar6 - uVar5 * uVar3;
      }
      if (uVar6 != uVar4) {
        *(long **)(*param_1 + uVar6 * 8) = param_2;
      }
    }
  }
  param_1[3] = param_1[3] + 1;
  return (long)param_2;
}

