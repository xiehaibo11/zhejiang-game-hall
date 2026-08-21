
void FUN_00e17b6c(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (param_1 != (long *)0x0) {
    lVar7 = *param_1;
    uVar2 = *(uint *)(lVar7 + 0x48);
    if (0 < (int)uVar2) {
      lVar4 = *(long *)(lVar7 + 0xb8);
      lVar6 = *(long *)(lVar7 + 0x50);
      lVar8 = 0;
      do {
        if (*(long **)(lVar6 + lVar8 * 8) == param_1) {
          uVar3 = uVar2 - 1;
          if ((int)(uVar3 | uVar2) < 0) {
            return;
          }
          uVar9 = *(undefined8 *)(lVar6 + (long)(int)uVar3 * 8);
          if (uVar3 == 0) {
            (**(code **)(lVar4 + 0x10))(lVar4,lVar6);
            lVar4 = 0;
          }
          else {
            if (0xfffffff < (int)uVar3) {
              return;
            }
            if (uVar2 == 0) {
              lVar4 = (**(code **)(lVar4 + 8))(lVar4,0xfffffffffffffff8);
              if (lVar4 == 0) {
                *(undefined8 *)(lVar7 + 0x50) = 0;
                return;
              }
            }
            else {
              lVar4 = (**(code **)(lVar4 + 0x18))
                                (lVar4,(long)(int)uVar2 << 3,(long)(int)uVar3 << 3,lVar6);
              if (lVar4 == 0) {
                *(long *)(lVar7 + 0x50) = lVar6;
                return;
              }
            }
          }
          iVar1 = *(int *)(lVar7 + 0x48);
          *(long *)(lVar7 + 0x50) = lVar4;
          if ((int)lVar8 + 1 < iVar1) {
            while( true ) {
              uVar5 = uVar9;
              if ((ulong)(iVar1 - 1U) - 1 != lVar8) {
                uVar5 = *(undefined8 *)(lVar4 + lVar8 * 8 + 8);
              }
              *(undefined8 *)(lVar4 + lVar8 * 8) = uVar5;
              if (iVar1 <= (int)lVar8 + 2) break;
              lVar4 = *(long *)(lVar7 + 0x50);
              lVar8 = lVar8 + 1;
            }
          }
          *(uint *)(lVar7 + 0x48) = iVar1 - 1U;
          if (*(long **)(lVar7 + 0xa8) == param_1) {
            *(undefined8 *)(lVar7 + 0xa8) = 0;
          }
          lVar7 = *(long *)(*param_1 + 0xb8);
          if (*(code **)(param_1[2] + 0x10) != (code *)0x0) {
            (**(code **)(param_1[2] + 0x10))(param_1);
          }
                    /* WARNING: Could not recover jumptable at 0x00e17ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar7 + 0x10))(lVar7,param_1);
          return;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)uVar2);
    }
  }
  return;
}

