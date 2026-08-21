
void FT_CMap_Done(long *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (param_1 != (long *)0x0) {
    lVar7 = *param_1;
    uVar1 = *(uint *)(lVar7 + 0x48);
    if (0 < (int)uVar1) {
      lVar4 = *(long *)(lVar7 + 0xb8);
                    /* catch() { ... } // from try @ 0105efb0 with catch @ 0105f05c */
      lVar6 = *(long *)(lVar7 + 0x50);
      lVar8 = 0;
      do {
        if (*(long **)(lVar6 + lVar8 * 8) == param_1) {
          uVar3 = uVar1 - 1;
          if (-1 < (int)(uVar3 | uVar1)) {
            uVar9 = *(undefined8 *)(lVar6 + (long)(int)uVar3 * 8);
            if (uVar3 == 0) {
              (**(code **)(lVar4 + 0x10))(lVar4,lVar6);
              lVar4 = 0;
LAB_0105f0d4:
              iVar2 = *(int *)(lVar7 + 0x48);
              *(long *)(lVar7 + 0x50) = lVar4;
              if ((int)lVar8 + 1 < iVar2) {
                uVar5 = uVar9;
                if ((int)lVar8 - iVar2 != -2) {
                  uVar5 = *(undefined8 *)(lVar4 + lVar8 * 8 + 8);
                }
                    /* catch() { ... } // from try @ 0105f148 with catch @ 0105f110 */
                *(undefined8 *)(lVar4 + lVar8 * 8) = uVar5;
                if (lVar8 + 2 < (long)iVar2) {
                  do {
                    uVar5 = uVar9;
                    if (iVar2 + -3 != (int)lVar8) {
                      uVar5 = *(undefined8 *)(*(long *)(lVar7 + 0x50) + lVar8 * 8 + 0x10);
                    }
                    lVar4 = lVar8 + 3;
                    /* try { // try from 0105f140 to 0115f147 has its CatchHandler @ 0105f1ec */
                    *(undefined8 *)(*(long *)(lVar7 + 0x50) + (long)(int)(lVar8 + 1) * 8) = uVar5;
                    /* try { // try from 0105f148 to 0115f207 has its CatchHandler @ 0105f110 */
                    lVar8 = lVar8 + 1;
                  } while (lVar4 < iVar2);
                }
              }
              *(int *)(lVar7 + 0x48) = iVar2 + -1;
              if (*(long **)(lVar7 + 0xa8) == param_1) {
                *(undefined8 *)(lVar7 + 0xa8) = 0;
              }
              lVar7 = *(long *)(*param_1 + 0xb8);
              if (*(code **)(param_1[2] + 0x10) != (code *)0x0) {
                (**(code **)(param_1[2] + 0x10))(param_1);
              }
                    /* WARNING: Could not recover jumptable at 0x0105f198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar7 + 0x10))(lVar7,param_1);
              return;
            }
            if ((int)uVar1 < 0x10000001) {
              if (uVar1 == 0) {
                lVar6 = 0;
              }
              else {
                lVar4 = (**(code **)(lVar4 + 0x18))
                                  (lVar4,(long)(int)uVar1 << 3,(long)(int)uVar3 << 3,lVar6);
                if (lVar4 != 0) goto LAB_0105f0d4;
              }
            }
          }
          *(long *)(lVar7 + 0x50) = lVar6;
          return;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)uVar1);
    }
  }
  return;
}

