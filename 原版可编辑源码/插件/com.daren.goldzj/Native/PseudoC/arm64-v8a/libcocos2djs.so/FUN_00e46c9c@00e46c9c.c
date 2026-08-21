
void FUN_00e46c9c(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x10);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x208));
    *(undefined8 *)(param_1 + 0x208) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x210));
    *(undefined8 *)(param_1 + 0x210) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x218));
    *(undefined8 *)(param_1 + 0x218) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x200));
    *(undefined8 *)(param_1 + 0x200) = 0;
    *(undefined4 *)(param_1 + 0x1fc) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 0x1ec) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x228));
    *(undefined8 *)(param_1 + 0x228) = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 600));
    *(undefined4 *)(param_1 + 0x248) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined8 *)(param_1 + 0x250) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x238));
    plVar2 = *(long **)(param_1 + 0x268);
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined4 *)(param_1 + 0x230) = 0;
    while (plVar2 != (long *)0x0) {
      plVar2 = (long *)*plVar2;
      FUN_00e139fc(uVar1);
    }
    *(undefined4 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
    FUN_00e139fc(uVar3,*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}

