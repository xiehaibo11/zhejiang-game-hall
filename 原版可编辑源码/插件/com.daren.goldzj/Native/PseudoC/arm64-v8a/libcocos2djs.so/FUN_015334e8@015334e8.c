
long * FUN_015334e8(long *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  Zone *this;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x24;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar3 = v8::base::hash_value(*param_2);
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar9 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar9 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar9))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar5 < 2) {
      unaff_x24 = uVar9 - 1 & uVar3;
    }
    else {
      unaff_x24 = uVar3;
      if (uVar9 <= uVar3) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar3 / uVar9;
        }
        unaff_x24 = uVar3 - uVar6 * uVar9;
      }
    }
    puVar7 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar7; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar6 = plVar8[1];
        if (uVar6 != uVar3) {
          if (uVar5 < 2) {
            uVar6 = uVar6 & uVar9 - 1;
          }
          else if (uVar9 <= uVar6) {
            uVar2 = 0;
            if (uVar9 != 0) {
              uVar2 = uVar6 / uVar9;
            }
            if (uVar6 - uVar2 * uVar9 == unaff_x24) goto LAB_01533584;
            break;
          }
          if (uVar6 != unaff_x24) break;
        }
LAB_01533584:
        if (*(uint *)(plVar8 + 2) == *param_2) goto LAB_015336f0;
      }
    }
  }
  this = (Zone *)param_1[4];
  plVar8 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar8) < 0x20) {
    plVar8 = (long *)v8::internal::Zone::NewExpand(this,0x20);
  }
  else {
    *(long **)(this + 0x10) = plVar8 + 4;
  }
  uVar1 = *param_2;
  plVar8[3] = 0;
  *plVar8 = 0;
  plVar8[1] = uVar3;
  *(uint *)(plVar8 + 2) = uVar1;
  if ((uVar9 == 0) || (*(float *)(param_1 + 6) * (float)uVar9 < (float)(param_1[5] + 1))) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar5 = (ulong)((float)(param_1[5] + 1) / *(float *)(param_1 + 6));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    FUN_01532d50(param_1,uVar5);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar3;
    }
    else {
      unaff_x24 = uVar3;
      if (uVar9 <= uVar3) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar3 / uVar9;
        }
        unaff_x24 = uVar3 - uVar5 * uVar9;
      }
    }
  }
  plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 3;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar4;
    if (*plVar8 != 0) {
      uVar3 = *(ulong *)(*plVar8 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar3 = uVar3 & uVar9 - 1;
      }
      else if (uVar9 <= uVar3) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar3 / uVar9;
        }
        uVar3 = uVar3 - uVar5 * uVar9;
      }
      *(long **)(*param_1 + uVar3 * 8) = plVar8;
    }
  }
  else {
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
  }
  param_1[5] = param_1[5] + 1;
LAB_015336f0:
  return plVar8 + 3;
}

