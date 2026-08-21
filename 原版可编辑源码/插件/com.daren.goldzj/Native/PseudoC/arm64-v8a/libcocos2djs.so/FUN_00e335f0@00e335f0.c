
void FUN_00e335f0(long *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)param_1[0x42];
  uVar1 = *(undefined8 *)(*param_1 + 0xb8);
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = puVar2[2];
    *(undefined4 *)(puVar2 + 0x60) = 0;
    FUN_00e139fc(uVar4,puVar2[6]);
    puVar2[6] = 0;
    puVar2[5] = 0;
    FUN_00e139fc(uVar4,puVar2[0x5f]);
    puVar2[0x5f] = 0;
    puVar2[0x5e] = 0;
    FUN_00e139fc(uVar4,puVar2[0x58]);
    puVar2[0x58] = 0;
    *(undefined4 *)(puVar2 + 0x57) = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    FUN_00e139fc(uVar4,puVar2);
    param_1[0x42] = 0;
  }
  FUN_00e139fc(uVar1,param_1[0x37]);
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FUN_00e139fc(uVar1,param_1[0x39]);
  lVar3 = param_1[0x3a];
  param_1[0x39] = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  if (lVar3 != 0) {
    FUN_00e139fc(lVar3,param_1[0x40]);
    param_1[0x40] = 0;
    FUN_00e139fc(lVar3,param_1[0x3f]);
    param_1[0x3f] = 0;
    FUN_00e139fc(lVar3,param_1[0x3d]);
    param_1[0x3d] = 0;
    FUN_00e139fc(lVar3,param_1[0x3c]);
    param_1[0x3c] = 0;
    FUN_00e139fc(lVar3,param_1[0x3e]);
    param_1[0x3e] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
  }
  FUN_00e139fc(uVar1,param_1[0x20]);
  param_1[0x20] = 0;
  FUN_00e139fc(uVar1,param_1[0x22]);
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x43] = -1;
  return;
}

