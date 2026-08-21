
void FUN_00e50eb4(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar2 = param_1[0x17];
    FUN_00e139fc(uVar2,*param_1);
    *param_1 = 0;
    if (param_1[0x15] != 0) {
      FUN_00e14580(param_1[0x15],uVar2);
      FUN_00e139fc(uVar2,param_1[0x15]);
      param_1[0x15] = 0;
    }
    FUN_00e139fc(uVar2,param_1[0x13]);
    uVar1 = param_1[0x10];
    param_1[0x13] = 0;
    if (uVar1 != 0) {
      lVar3 = 0;
      uVar5 = 0;
      do {
        if (*(int *)(param_1[0x12] + lVar3 + 8) == 1) {
          FUN_00e139fc(uVar2,*(undefined8 *)(param_1[0x12] + lVar3 + 0x10));
          *(undefined8 *)(param_1[0x12] + lVar3 + 0x10) = 0;
          uVar1 = param_1[0x10];
        }
        uVar5 = uVar5 + 1;
        lVar3 = lVar3 + 0x18;
      } while (uVar5 < uVar1);
    }
    FUN_00e139fc(uVar2,param_1[0x12]);
    param_1[0x12] = 0;
    if (param_1[0xb] != 0) {
      puVar4 = (undefined8 *)param_1[0xc];
      uVar1 = 0;
      do {
        FUN_00e139fc(uVar2,*puVar4);
        *puVar4 = 0;
        FUN_00e139fc(uVar2,puVar4[4]);
        puVar4[4] = 0;
        uVar1 = uVar1 + 1;
        puVar4 = puVar4 + 7;
      } while (uVar1 < (ulong)param_1[0xb]);
    }
    if (param_1[0xe] != 0) {
      puVar4 = (undefined8 *)param_1[0xf];
      uVar1 = 0;
      do {
        FUN_00e139fc(uVar2,*puVar4);
        *puVar4 = 0;
        FUN_00e139fc(uVar2,puVar4[4]);
        puVar4[4] = 0;
        uVar1 = uVar1 + 1;
        puVar4 = puVar4 + 7;
      } while (uVar1 < (ulong)param_1[0xe]);
    }
    FUN_00e139fc(uVar2,param_1[0xc]);
    param_1[0xc] = 0;
    FUN_00e139fc(uVar2,param_1[0xf]);
    param_1[0xf] = 0;
    FUN_00e14580(param_1 + 0x1a,uVar2);
    lVar3 = param_1[0x18];
    if (param_1[0x19] != 0) {
      uVar1 = 0;
      puVar4 = (undefined8 *)(lVar3 + 0x10);
      do {
        FUN_00e139fc(uVar2,puVar4[-2]);
        puVar4[-2] = 0;
        if (*(int *)(puVar4 + -1) == 1) {
          FUN_00e139fc(uVar2,*puVar4);
          *puVar4 = 0;
        }
        uVar1 = uVar1 + 1;
        puVar4 = puVar4 + 3;
      } while (uVar1 < (ulong)param_1[0x19]);
      lVar3 = param_1[0x18];
    }
    FUN_00e139fc(uVar2,lVar3);
    param_1[0x18] = 0;
  }
  return;
}

