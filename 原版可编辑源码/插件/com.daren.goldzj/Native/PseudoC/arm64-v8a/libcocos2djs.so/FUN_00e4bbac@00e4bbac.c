
void FUN_00e4bbac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0xf8);
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    if (lVar2 != 0) {
      if (*(long *)(lVar2 + 0xd8) != 0) {
        FUN_00e1d86c(*(undefined8 *)(param_1 + 0xc0));
      }
      FUN_00e139fc(uVar1,*(undefined8 *)(lVar2 + 0xe8));
      *(undefined8 *)(lVar2 + 0xe8) = 0;
      FUN_00e139fc(uVar1,lVar2);
      *(undefined8 *)(param_1 + 0xf8) = 0;
    }
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}

