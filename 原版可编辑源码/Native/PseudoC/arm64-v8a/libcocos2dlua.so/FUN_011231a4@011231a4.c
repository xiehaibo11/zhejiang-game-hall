
void FUN_011231a4(long param_1,uint *param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                 int param_6,int param_7,int param_8,uint3 *param_9)

{
  long lVar1;
  uint3 *puVar2;
  uint3 *puVar3;
  uint3 uVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint3 *puVar9;
  
  if (param_6 != 0) {
    uVar5 = (ulong)*(ushort *)(param_1 + 0x1e);
    lVar1 = (ulong)(param_5 - 8 & 0xfffffff8) + 8;
    do {
      uVar8 = param_5;
      if (7 < param_5) {
        puVar7 = param_2 + lVar1;
        puVar9 = param_9;
        do {
          uVar8 = uVar8 - 8;
          *param_2 = *puVar9 | 0xff000000;
          puVar2 = (uint3 *)((long)((long)puVar9 + uVar5) + uVar5);
          param_2[1] = *(uint3 *)((long)puVar9 + uVar5) | 0xff000000;
          puVar9 = (uint3 *)((long)puVar2 + uVar5);
          param_2[2] = *puVar2 | 0xff000000;
          puVar2 = (uint3 *)((long)puVar9 + uVar5);
          param_2[3] = *puVar9 | 0xff000000;
          puVar9 = (uint3 *)((long)puVar2 + uVar5);
          param_2[4] = *puVar2 | 0xff000000;
          puVar2 = (uint3 *)((long)puVar9 + uVar5);
          param_2[5] = *puVar9 | 0xff000000;
          puVar3 = (uint3 *)((long)puVar2 + uVar5);
          param_2[6] = *puVar2 | 0xff000000;
          puVar9 = (uint3 *)((long)puVar3 + uVar5);
          param_2[7] = *puVar3 | 0xff000000;
          param_2 = param_2 + 8;
        } while (7 < uVar8);
        param_9 = (uint3 *)((long)param_9 + lVar1 * uVar5);
        param_2 = puVar7;
        uVar8 = param_5 - 8 & 7;
      }
      param_6 = param_6 + -1;
      puVar7 = param_2;
      puVar6 = param_2;
      switch(uVar8) {
      case 7:
        uVar4 = *param_9;
        param_9 = (uint3 *)((long)param_9 + uVar5);
        puVar6 = param_2 + 1;
        *param_2 = uVar4 | 0xff000000;
      case 6:
        uVar4 = *param_9;
        param_9 = (uint3 *)((long)param_9 + uVar5);
        puVar7 = puVar6 + 1;
        *puVar6 = uVar4 | 0xff000000;
      case 5:
        uVar4 = *param_9;
        param_9 = (uint3 *)((long)param_9 + uVar5);
        param_2 = puVar7 + 1;
        *puVar7 = uVar4 | 0xff000000;
      case 4:
        uVar4 = *param_9;
        param_9 = (uint3 *)((long)param_9 + uVar5);
        puVar7 = param_2 + 1;
        *param_2 = uVar4 | 0xff000000;
      case 3:
        uVar4 = *param_9;
        param_9 = (uint3 *)((long)param_9 + uVar5);
        param_2 = puVar7 + 1;
        *puVar7 = uVar4 | 0xff000000;
      case 2:
        uVar4 = *param_9;
        param_9 = (uint3 *)((long)param_9 + uVar5);
        puVar7 = param_2 + 1;
        *param_2 = uVar4 | 0xff000000;
      case 1:
        uVar4 = *param_9;
        param_9 = (uint3 *)((long)param_9 + uVar5);
        param_2 = puVar7 + 1;
        *puVar7 = uVar4 | 0xff000000;
      }
      param_2 = param_2 + param_8;
      param_9 = (uint3 *)((long)param_9 + uVar5 * (long)param_7);
    } while (param_6 != 0);
  }
  return;
}

