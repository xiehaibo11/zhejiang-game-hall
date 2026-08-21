
long * FUN_01666c04(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  
  param_2[1] = (long)*(int *)(param_2[2] + 0x5c);
  plVar2 = (long *)FUN_01666d04();
  if (plVar2 != (long *)0x0) {
    return plVar2;
  }
  uVar3 = param_1[1];
  uVar5 = param_2[1];
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
  uVar4 = CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar7) & 0xffffffff;
  if (uVar4 < 2) {
    uVar5 = uVar3 - 1 & uVar5;
  }
  else if (uVar3 <= uVar5) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar5 / uVar3;
    }
    uVar5 = uVar5 - uVar1 * uVar3;
  }
  puVar6 = *(undefined8 **)(*param_1 + uVar5 * 8);
  if (puVar6 == (undefined8 *)0x0) {
    plVar2 = param_1 + 3;
    *param_2 = *plVar2;
    *plVar2 = (long)param_2;
    *(long **)(*param_1 + uVar5 * 8) = plVar2;
    if (*param_2 == 0) goto LAB_01666ce4;
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
    puVar6 = (undefined8 *)(*param_1 + uVar5 * 8);
  }
  else {
    *param_2 = *puVar6;
  }
  *puVar6 = param_2;
LAB_01666ce4:
  param_1[5] = param_1[5] + 1;
  return param_2;
}

