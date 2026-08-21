
void FUN_00e44ac4(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 != 0) {
    lVar4 = *(long *)(param_1 + 600);
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    if (lVar4 != 0) {
      iVar1 = *(int *)(param_1 + 0x238);
      if (0 < iVar1) {
        lVar5 = 8;
        lVar6 = 1;
        puVar2 = *(undefined8 **)(lVar4 + 8);
        while( true ) {
          if (puVar2 != (undefined8 *)0x0) {
            FUN_00e139fc(uVar3,*puVar2);
            **(undefined8 **)(lVar4 + lVar5) = 0;
            FUN_00e139fc(uVar3,*(undefined8 *)(lVar4 + lVar5));
            *(undefined8 *)(lVar4 + lVar5) = 0;
            iVar1 = *(int *)(param_1 + 0x238);
          }
          if (iVar1 <= lVar6) break;
          lVar4 = *(long *)(param_1 + 600);
          lVar5 = lVar5 + 0x10;
          lVar6 = lVar6 + 1;
          puVar2 = *(undefined8 **)(lVar4 + lVar5);
        }
        lVar4 = *(long *)(param_1 + 600);
      }
      FUN_00e139fc(uVar3,lVar4);
      *(undefined8 *)(param_1 + 600) = 0;
    }
    FUN_00e139fc(uVar3,*(undefined8 *)(param_1 + 0x138));
    *(undefined8 *)(param_1 + 0x138) = 0;
    FUN_00e139fc(uVar3,*(undefined8 *)(param_1 + 0x140));
    *(undefined8 *)(param_1 + 0x140) = 0;
    FUN_00e139fc(uVar3,*(undefined8 *)(param_1 + 0x148));
    *(undefined8 *)(param_1 + 0x148) = 0;
    FUN_00e139fc(uVar3,*(undefined8 *)(param_1 + 0x150));
    *(undefined8 *)(param_1 + 0x150) = 0;
    FUN_00e139fc(uVar3,*(undefined8 *)(param_1 + 0x158));
    *(undefined8 *)(param_1 + 0x158) = 0;
    FUN_00e139fc(uVar3,*(undefined8 *)(param_1 + 0x240));
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(undefined4 *)(param_1 + 0x238) = 0;
    FUN_00e139fc(uVar3,*(undefined8 *)(param_1 + 0x108));
    *(undefined8 *)(param_1 + 0x108) = 0;
    FUN_00e139fc(uVar3,*(undefined8 *)(param_1 + 0x120));
    *(undefined8 *)(param_1 + 0x120) = 0;
    FUN_00e139fc(uVar3,*(undefined8 *)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_00e139fc(uVar3,*(undefined8 *)(param_1 + 0x268));
    *(undefined8 *)(param_1 + 0x268) = 0;
    FUN_00e139fc(uVar3,*(undefined8 *)(param_1 + 0x270));
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  return;
}

