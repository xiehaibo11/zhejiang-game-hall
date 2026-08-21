
void FT_Stroker_Done(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    uVar2 = **(undefined8 **)(param_1 + 0xd0);
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x80));
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x98) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0xa8));
    *(undefined8 *)(param_1 + 0xa8) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
    *(undefined1 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    FUN_00e139fc(uVar2,param_1);
    return;
  }
  return;
}

