
undefined8 FUN_01078d04(long param_1,uint param_2,uint param_3,long *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  
  *param_4 = 0;
  param_4[1] = 0;
  lVar4 = *(long *)(param_1 + 0x310);
  if (lVar4 != 0) {
    piVar3 = *(int **)(lVar4 + 0x48);
    piVar5 = piVar3 + (long)*(int *)(lVar4 + 0x50) * 4 + -4;
    if (piVar3 <= piVar5) {
      uVar6 = (ulong)param_3 | (ulong)param_2 << 0x10;
      do {
        lVar4 = (long)piVar5 - (long)piVar3 >> 4;
        if (lVar4 < 0) {
          lVar4 = lVar4 + 1;
        }
        piVar1 = piVar3 + (lVar4 >> 1) * 4;
        uVar7 = (long)piVar1[1] | (long)*piVar1 << 0x10;
        if (uVar7 == uVar6) {
          *param_4 = (long)piVar1[2];
          lVar4 = (long)piVar1[3];
          goto LAB_01078d90;
        }
        piVar2 = piVar1 + 4;
        if (uVar6 <= uVar7) {
          piVar2 = piVar3;
          piVar5 = piVar1 + -4;
        }
        piVar3 = piVar2;
      } while (piVar2 <= piVar5);
    }
    lVar4 = 0;
    *param_4 = 0;
LAB_01078d90:
    param_4[1] = lVar4;
  }
  return 0;
}

