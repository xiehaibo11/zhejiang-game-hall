
long * FUN_00a02b74(long *param_1,ulong *param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong unaff_x21;
  ulong uVar9;
  ulong uVar10;
  
  uVar10 = *param_2;
                    /* try { // try from 00a02bac to 00b02bb3 has its CatchHandler @ 00a02bb4 */
  uVar6 = ((uVar10 & 0x1fffffff) * 8 + 8 ^ uVar10 >> 0x20) * -0x622015f714c7d297;
                    /* catch() { ... } // from try @ 00a02960 with catch @ 00a02bb4
                       catch() { ... } // from try @ 00a02bac with catch @ 00a02bb4
                       try { // try from 00a02bb4 to 00b02cab has its CatchHandler @ 00a02840 */
  uVar9 = param_1[1];
  uVar6 = (uVar6 ^ uVar10 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
                    /* catch() { ... } // from try @ 00a029cc with catch @ 00a02bc4 */
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar3 & uVar9) == 0) {
      unaff_x21 = uVar6 & uVar3;
    }
    else {
      unaff_x21 = uVar6;
      if (uVar9 <= uVar6) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar6 / uVar9;
        }
        unaff_x21 = uVar6 - uVar7 * uVar9;
      }
    }
                    /* catch() { ... } // from try @ 00a0299c with catch @ 00a02c00 */
    plVar8 = *(long **)(*param_1 + unaff_x21 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_00a02c58;
        uVar7 = plVar8[1];
        if (uVar7 != uVar6) {
          if ((uVar3 & uVar9) == 0) {
            uVar7 = uVar7 & uVar3;
          }
          else {
                    /* catch() { ... } // from try @ 00a0298c with catch @ 00a02c20 */
            if (uVar9 <= uVar7) {
              uVar1 = 0;
              if (uVar9 != 0) {
                uVar1 = uVar7 / uVar9;
              }
              if (uVar7 - uVar1 * uVar9 == unaff_x21) goto LAB_00a02c48;
              goto LAB_00a02c58;
            }
          }
                    /* catch() { ... } // from try @ 00a02a58 with catch @ 00a02c44
                       catch() { ... } // from try @ 00a02b50 with catch @ 00a02c44 */
          if (uVar7 != unaff_x21) goto LAB_00a02c58;
        }
LAB_00a02c48:
      } while (plVar8[2] != uVar10);
      goto LAB_00a02e28;
    }
  }
LAB_00a02c58:
  plVar8 = operator_new(0x28);
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[1] = uVar6;
  plVar8[2] = uVar10;
  *plVar8 = 0;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    if (uVar9 < 3) {
      uVar10 = 1;
    }
    else {
      uVar10 = (ulong)((uVar9 - 1 & uVar9) != 0);
                    /* catch() { ... } // from try @ 00a02d24 with catch @ 00a02cac */
    }
    uVar10 = uVar10 | uVar9 << 1;
    uVar3 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar10) {
      uVar3 = uVar10;
    }
    if (uVar3 - 1 == 0) {
      uVar3 = 2;
      bVar2 = uVar9 < 3;
      if (1 < uVar9) goto LAB_00a02d10;
LAB_00a02d00:
      FUN_00a048a4(param_1,uVar3);
    }
    else {
      if ((uVar3 - 1 & uVar3) != 0) {
        uVar3 = std::__ndk1::__next_prime(uVar3);
        uVar9 = param_1[1];
      }
      bVar2 = uVar9 <= uVar3;
      if (uVar9 < uVar3) goto LAB_00a02d00;
LAB_00a02d10:
      if (!bVar2) {
                    /* try { // try from 00a02d18 to 00b02d23 has its CatchHandler @ 00a02d80 */
        uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        if (uVar9 < 3 || (uVar9 - 1 & uVar9) != 0) {
          uVar10 = std::__ndk1::__next_prime(uVar10);
        }
        else if (1 < uVar10) {
          uVar10 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar10 - 1) & 0x3f);
        }
        if (uVar10 <= uVar3) {
          uVar10 = uVar3;
        }
        if (uVar10 < uVar9) {
                    /* catch() { ... } // from try @ 00a02d18 with catch @ 00a02d80 */
          FUN_00a048a4(param_1);
        }
      }
    }
    uVar9 = param_1[1];
    if ((uVar9 - 1 & uVar9) == 0) {
      unaff_x21 = uVar9 - 1 & uVar6;
    }
    else {
      unaff_x21 = uVar6;
      if (uVar9 <= uVar6) {
        uVar10 = 0;
        if (uVar9 != 0) {
          uVar10 = uVar6 / uVar9;
        }
        unaff_x21 = uVar6 - uVar10 * uVar9;
      }
    }
  }
  lVar5 = *param_1;
  plVar4 = *(long **)(lVar5 + unaff_x21 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(lVar5 + unaff_x21 * 8) = plVar4;
    if (*plVar8 != 0) {
                    /* try { // try from 00a02de8 to 00b02df3 has its CatchHandler @ 00a02e00 */
      uVar6 = *(ulong *)(*plVar8 + 8);
      if ((uVar9 - 1 & uVar9) == 0) {
        uVar6 = uVar6 & uVar9 - 1;
      }
      else if (uVar9 <= uVar6) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a02de8 with catch @ 00a02e00
                        */
        uVar10 = 0;
        if (uVar9 != 0) {
          uVar10 = uVar6 / uVar9;
        }
        uVar6 = uVar6 - uVar10 * uVar9;
      }
      plVar4 = (long *)(*param_1 + uVar6 * 8);
      goto LAB_00a02e18;
    }
  }
  else {
    *plVar8 = *plVar4;
LAB_00a02e18:
    *plVar4 = (long)plVar8;
  }
  param_1[3] = param_1[3] + 1;
LAB_00a02e28:
  return plVar8 + 3;
}

