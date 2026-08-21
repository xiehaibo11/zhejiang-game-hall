
void FUN_0113a25c(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (0 < param_3) {
    param_3 = param_3 + 1;
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    do {
      uVar1 = LogLuv32fromXYZ(param_2,*(undefined4 *)(param_1 + 4));
      param_3 = param_3 + -1;
      *puVar2 = uVar1;
      param_2 = param_2 + 0xc;
      puVar2 = puVar2 + 1;
    } while (1 < param_3);
  }
  return;
}

