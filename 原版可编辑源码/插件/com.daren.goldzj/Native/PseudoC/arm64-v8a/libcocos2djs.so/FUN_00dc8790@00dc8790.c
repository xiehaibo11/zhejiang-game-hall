
void FUN_00dc8790(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5,int param_6,uint param_7,int param_8,byte *param_9)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  
  if (param_6 != 0) {
    lVar7 = *(long *)(param_1 + 0x58);
    if ((int)param_7 < 0) {
      param_7 = param_7 + 1;
    }
    lVar1 = (long)((ulong)param_7 << 0x20) >> 0x21;
    if (param_5 < 2) {
      do {
        puVar5 = param_2;
        pbVar9 = param_9;
        if (param_5 != 0) {
          pbVar9 = param_9 + 1;
          puVar5 = param_2 + 1;
          *param_2 = **(undefined4 **)(lVar7 + (ulong)*param_9 * 8);
        }
        param_2 = puVar5 + param_8;
        param_6 = param_6 + -1;
        param_9 = pbVar9 + lVar1;
      } while (param_6 != 0);
    }
    else {
      uVar2 = param_5 - 2;
      do {
        param_6 = param_6 + -1;
        puVar5 = param_2;
        pbVar9 = param_9;
        uVar3 = param_5;
        do {
          uVar3 = uVar3 - 2;
          puVar6 = *(undefined4 **)(lVar7 + (ulong)*pbVar9 * 8);
          *puVar5 = *puVar6;
          puVar5[1] = puVar6[1];
          puVar5 = puVar5 + 2;
          pbVar9 = pbVar9 + 1;
        } while (1 < uVar3);
        if ((uVar2 & 1) == 0) {
          lVar8 = 1;
          lVar4 = 2;
        }
        else {
          lVar8 = 2;
          param_2[(ulong)(uVar2 & 0xfffffffe) + 2] =
               **(undefined4 **)(lVar7 + (ulong)param_9[(ulong)(uVar2 >> 1) + 1] * 8);
          lVar4 = 3;
        }
        param_2 = param_2 + (ulong)(uVar2 & 0xfffffffe) + lVar4 + param_8;
        param_9 = param_9 + lVar1 + lVar8 + (ulong)(uVar2 >> 1);
      } while (param_6 != 0);
    }
  }
  return;
}

