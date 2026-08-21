
void FUN_00e4fbf0(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    FUN_00e50eb4(*(undefined8 *)(param_1 + 0x108));
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x110));
    *(undefined8 *)(param_1 + 0x110) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x100));
    *(undefined8 *)(param_1 + 0x100) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x108));
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  return;
}

