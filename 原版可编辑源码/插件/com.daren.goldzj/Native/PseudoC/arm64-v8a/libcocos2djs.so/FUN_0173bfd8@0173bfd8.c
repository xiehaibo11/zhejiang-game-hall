
long * FUN_0173bfd8(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  lVar2 = v8::base::hash_value(param_2[2]);
  param_2[1] = lVar2;
  plVar3 = (long *)FUN_0173c0f0(param_1,lVar2,param_2 + 2);
  if (plVar3 != (long *)0x0) {
    return plVar3;
  }
  uVar4 = param_1[1];
  uVar6 = param_2[1];
  uVar9 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                   CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                            CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                     CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                              CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                       CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                CONCAT11(POPCOUNT((char)(uVar4 >> 8)
                                                                                 ),
                                                                         POPCOUNT((char)uVar4)))))))
                  );
  uVar8 = NEON_uaddlv(uVar9,1);
  uVar5 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
  if (uVar5 < 2) {
    uVar6 = uVar4 - 1 & uVar6;
  }
  else if (uVar4 <= uVar6) {
    uVar1 = 0;
    if (uVar4 != 0) {
      uVar1 = uVar6 / uVar4;
    }
    uVar6 = uVar6 - uVar1 * uVar4;
  }
  puVar7 = *(undefined8 **)(*param_1 + uVar6 * 8);
  if (puVar7 == (undefined8 *)0x0) {
    plVar3 = param_1 + 3;
    *param_2 = *plVar3;
    *plVar3 = (long)param_2;
    *(long **)(*param_1 + uVar6 * 8) = plVar3;
    if (*param_2 == 0) goto LAB_0173c0cc;
    uVar6 = *(ulong *)(*param_2 + 8);
    if (uVar5 < 2) {
      uVar6 = uVar6 & uVar4 - 1;
    }
    else if (uVar4 <= uVar6) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar6 / uVar4;
      }
      uVar6 = uVar6 - uVar5 * uVar4;
    }
    puVar7 = (undefined8 *)(*param_1 + uVar6 * 8);
  }
  else {
    *param_2 = *puVar7;
  }
  *puVar7 = param_2;
LAB_0173c0cc:
  param_1[5] = param_1[5] + 1;
  return param_2;
}

