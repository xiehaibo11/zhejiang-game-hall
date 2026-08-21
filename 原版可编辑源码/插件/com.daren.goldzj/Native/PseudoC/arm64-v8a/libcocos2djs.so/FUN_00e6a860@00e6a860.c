
void FUN_00e6a860(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x67) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0x129) = 0;
    *(undefined4 *)(param_1 + 0x18a) = 0;
    FUN_00e139fc(*param_1);
    return;
  }
  return;
}

