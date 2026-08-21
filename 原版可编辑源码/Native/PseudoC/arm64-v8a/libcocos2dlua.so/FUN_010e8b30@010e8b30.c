
undefined8 FUN_010e8b30(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  uint uVar8;
  
  puVar4 = (undefined8 *)param_1[5];
  pbVar6 = (byte *)*puVar4;
  lVar7 = puVar4[1];
  while( true ) {
    while( true ) {
      if (lVar7 == 0) {
        uVar2 = (*(code *)puVar4[3])(param_1);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        pbVar6 = (byte *)*puVar4;
        lVar7 = puVar4[1];
      }
      pbVar5 = pbVar6 + 1;
      lVar7 = lVar7 + -1;
      if (*pbVar6 == 0xff) break;
      *(int *)(param_1[0x4d] + 0x24) = *(int *)(param_1[0x4d] + 0x24) + 1;
      *puVar4 = pbVar5;
      puVar4[1] = lVar7;
      pbVar6 = pbVar5;
    }
    do {
      if (lVar7 == 0) {
        uVar2 = (*(code *)puVar4[3])(param_1);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        pbVar5 = (byte *)*puVar4;
        lVar7 = puVar4[1];
      }
      pbVar6 = pbVar5 + 1;
      lVar7 = lVar7 + -1;
      uVar8 = (uint)*pbVar5;
      pbVar5 = pbVar6;
    } while (uVar8 == 0xff);
    iVar1 = *(int *)(param_1[0x4d] + 0x24);
    if (uVar8 != 0) break;
    *(int *)(param_1[0x4d] + 0x24) = iVar1 + 2;
    *puVar4 = pbVar6;
    puVar4[1] = lVar7;
  }
  if (iVar1 != 0) {
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x28) = 0x77;
    *(int *)(lVar3 + 0x2c) = iVar1;
    *(uint *)(lVar3 + 0x30) = uVar8;
    (**(code **)(lVar3 + 8))(param_1,0xffffffff);
    *(undefined4 *)(param_1[0x4d] + 0x24) = 0;
  }
  *(uint *)((long)param_1 + 0x23c) = uVar8;
  *puVar4 = pbVar6;
  puVar4[1] = lVar7;
  return 1;
}

