
void FUN_00e4c344(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xb8);
    FUN_00e139fc(uVar4,*(undefined8 *)(param_1 + 0x210));
    *(undefined8 *)(param_1 + 0x210) = 0;
    FUN_00e139fc(uVar4,*(undefined8 *)(param_1 + 0x228));
    lVar3 = *(long *)(param_1 + 0x200);
    *(undefined8 *)(param_1 + 0x228) = 0;
    if (lVar3 != 0) {
      if (0 < *(int *)(param_1 + 0x1f8)) {
        lVar5 = 0;
        lVar6 = 1;
        lVar2 = lVar3;
        while( true ) {
          if (lVar2 != 0) {
            puVar1 = (undefined8 *)(lVar3 + lVar5);
            FUN_00e139fc(uVar4,*puVar1);
            *puVar1 = 0;
            if (*(char *)(puVar1 + 1) != '\0') {
              FUN_00e139fc(uVar4,puVar1[2]);
              puVar1[2] = 0;
            }
          }
          if (*(int *)(param_1 + 0x1f8) <= lVar6) break;
          lVar3 = *(long *)(param_1 + 0x200);
          lVar5 = lVar5 + 0x18;
          lVar6 = lVar6 + 1;
          lVar2 = lVar3 + lVar5;
        }
        lVar3 = *(long *)(param_1 + 0x200);
      }
      FUN_00e139fc(uVar4,lVar3);
      *(undefined8 *)(param_1 + 0x200) = 0;
    }
    FUN_00e139fc(uVar4,*(undefined8 *)(param_1 + 0x170));
    *(undefined8 *)(param_1 + 0x170) = 0;
    FUN_00e139fc(uVar4,*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    FUN_00e139fc(uVar4,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_00e139fc(uVar4,*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
    FUN_00e139fc(uVar4,*(undefined8 *)(param_1 + 0x150));
    *(undefined8 *)(param_1 + 0x150) = 0;
    FUN_00e139fc(uVar4,*(undefined8 *)(param_1 + 0x158));
    *(undefined8 *)(param_1 + 0x158) = 0;
    if (*(long *)(param_1 + 0xc0) == param_1 + 0xf8) {
      FUN_00e14cb4();
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x148);
    }
  }
  return;
}

