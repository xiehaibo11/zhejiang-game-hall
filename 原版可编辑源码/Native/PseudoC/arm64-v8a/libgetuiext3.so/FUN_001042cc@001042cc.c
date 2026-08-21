
void FUN_001042cc(undefined8 *param_1,int param_2,code *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  
  for (; 1 < param_2; param_2 = param_2 - (int)uVar4) {
    param_2 = param_2 + -1;
    uVar5 = param_1[param_2];
    lVar7 = 0;
    uVar4 = 0;
    puVar6 = param_1;
    do {
      iVar1 = (*param_3)(*puVar6,uVar5);
      if (iVar1 < 0) {
        uVar2 = -(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar4 << 3;
        uVar3 = *puVar6;
        uVar4 = (ulong)((int)uVar4 + 1);
        *puVar6 = *(undefined8 *)((long)param_1 + uVar2);
        *(undefined8 *)((long)param_1 + uVar2) = uVar3;
      }
      lVar7 = lVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (lVar7 < param_2);
    puVar6 = param_1 + (int)uVar4;
    param_1[param_2] = *puVar6;
    *puVar6 = uVar5;
    FUN_001042cc(param_1,uVar4,param_3);
    param_1 = puVar6 + 1;
  }
  return;
}

