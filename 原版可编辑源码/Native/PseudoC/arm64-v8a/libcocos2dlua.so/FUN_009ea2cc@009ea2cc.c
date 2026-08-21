
long * FUN_009ea2cc(long *param_1,ulong *param_2)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong unaff_x21;
  ulong uVar10;
  ulong uVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  
  uVar11 = *param_2;
  uVar6 = ((ulong)(uint)((int)uVar11 << 3) + 8 ^ uVar11 >> 0x20) * -0x622015f714c7d297;
  uVar10 = param_1[1];
  uVar6 = (uVar6 ^ uVar11 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar10 != 0) {
    uVar13 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar10 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar10 
                                                  >> 8)),POPCOUNT((char)uVar10))))))));
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar4 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar4 < 2) {
      unaff_x21 = uVar6 & uVar10 - 1;
    }
    else {
      unaff_x21 = uVar6;
      if (uVar10 <= uVar6) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar6 / uVar10;
        }
        unaff_x21 = uVar6 - uVar7 * uVar10;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x21 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar9 = (long *)*puVar8; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar7 = plVar9[1];
        if (uVar7 != uVar6) {
          if (uVar4 < 2) {
            uVar7 = uVar7 & uVar10 - 1;
          }
          else if (uVar10 <= uVar7) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar7 / uVar10;
            }
            if (uVar7 - uVar1 * uVar10 == unaff_x21) goto LAB_009ea38c;
            break;
          }
          if (uVar7 != unaff_x21) break;
        }
LAB_009ea38c:
        if (plVar9[2] == uVar11) goto LAB_009ea594;
      }
    }
  }
  plVar9 = operator_new(0x28);
  plVar9[3] = 0;
  plVar9[4] = 0;
  plVar9[1] = uVar6;
  plVar9[2] = uVar11;
  *plVar9 = 0;
                    /* try { // try from 009ea3e8 to 00aea467 has its CatchHandler @ 009ea3e8
                       catch() { ... } // from try @ 009ea3e8 with catch @ 009ea3e8
                       catch() { ... } // from try @ 009ea478 with catch @ 009ea3e8 */
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar11 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar11) {
      uVar4 = uVar11;
    }
    if (uVar4 - 1 == 0) {
      uVar4 = 2;
      bVar2 = uVar10 < 3;
      if (1 < uVar10) goto LAB_009ea47c;
LAB_009ea46c:
      FUN_009ec188(param_1,uVar4);
                    /* try { // try from 009ea478 to 00aea523 has its CatchHandler @ 009ea3e8 */
    }
    else {
      if ((uVar4 & uVar4 - 1) != 0) {
        uVar4 = std::__ndk1::__next_prime(uVar4);
        uVar10 = param_1[1];
      }
      bVar2 = uVar10 <= uVar4;
                    /* try { // try from 009ea468 to 00aea477 has its CatchHandler @ 009ea508 */
      if (uVar10 < uVar4) goto LAB_009ea46c;
LAB_009ea47c:
      if (!bVar2) {
        uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        if ((uVar10 < 3) ||
           (uVar13 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                              CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                                       CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                                CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                         CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                                  CONCAT12(POPCOUNT((char)(uVar10 >>
                                                                                          0x10)),
                                                                           CONCAT11(POPCOUNT((char)(
                                                  uVar10 >> 8)),POPCOUNT((char)uVar10)))))))),
           uVar12 = NEON_uaddlv(uVar13,1), 1 < (uint)CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12))
           ) {
          uVar11 = std::__ndk1::__next_prime(uVar11);
        }
        else if (1 < uVar11) {
          uVar11 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar11 - 1) & 0x3f);
        }
        if (uVar11 <= uVar4) {
          uVar11 = uVar4;
        }
        if (uVar11 < uVar10) {
          FUN_009ec188(param_1);
        }
      }
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x21 = uVar10 - 1 & uVar6;
    }
    else {
      unaff_x21 = uVar6;
      if (uVar10 <= uVar6) {
        uVar11 = 0;
        if (uVar10 != 0) {
          uVar11 = uVar6 / uVar10;
        }
        unaff_x21 = uVar6 - uVar11 * uVar10;
      }
    }
  }
  lVar5 = *param_1;
  plVar3 = *(long **)(lVar5 + unaff_x21 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar9 = *plVar3;
    *plVar3 = (long)plVar9;
    *(long **)(lVar5 + unaff_x21 * 8) = plVar3;
    if (*plVar9 == 0) goto LAB_009ea588;
    uVar6 = *(ulong *)(*plVar9 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar6 = uVar6 & uVar10 - 1;
    }
    else if (uVar10 <= uVar6) {
      uVar11 = 0;
      if (uVar10 != 0) {
        uVar11 = uVar6 / uVar10;
      }
      uVar6 = uVar6 - uVar11 * uVar10;
    }
    plVar3 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar9 = *plVar3;
  }
  *plVar3 = (long)plVar9;
LAB_009ea588:
  param_1[3] = param_1[3] + 1;
LAB_009ea594:
  return plVar9 + 3;
}

