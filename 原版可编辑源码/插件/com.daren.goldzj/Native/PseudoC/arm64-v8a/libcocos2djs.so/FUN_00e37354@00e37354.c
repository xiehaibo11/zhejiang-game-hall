
undefined8 FUN_00e37354(long param_1,uint param_2,uint param_3,long *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  *param_4 = 0;
  param_4[1] = 0;
  lVar4 = *(long *)(param_1 + 0x318);
  if (lVar4 != 0) {
    puVar3 = *(uint **)(lVar4 + 0x48);
    puVar5 = puVar3 + (ulong)*(uint *)(lVar4 + 0x50) * 4 + -4;
    if (puVar3 <= puVar5) {
      uVar6 = (ulong)param_3 | (ulong)param_2 << 0x10;
      do {
        lVar4 = (long)puVar5 - (long)puVar3 >> 4;
        if (lVar4 < 0) {
          lVar4 = lVar4 + 1;
        }
        puVar1 = puVar3 + (lVar4 >> 1) * 4;
        uVar7 = (ulong)puVar1[1] | (ulong)*puVar1 << 0x10;
        if (uVar7 == uVar6) {
          uVar8 = *(undefined8 *)(puVar1 + 2);
          param_4[1] = (long)(int)((ulong)uVar8 >> 0x20);
          *param_4 = (long)(int)uVar8;
          return 0;
        }
        puVar2 = puVar1 + 4;
        if (uVar6 <= uVar7) {
          puVar2 = puVar3;
          puVar5 = puVar1 + -4;
        }
        puVar3 = puVar2;
      } while (puVar2 <= puVar5);
    }
    *param_4 = 0;
    param_4[1] = 0;
  }
  return 0;
}

