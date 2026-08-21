
void FUN_00ddc7c0(long param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  
  if (0 < param_3) {
    param_3 = param_3 + 1;
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    do {
      LogLuv24toXYZ(*puVar1,param_2);
      param_3 = param_3 + -1;
      param_2 = param_2 + 0xc;
      puVar1 = puVar1 + 1;
    } while (1 < param_3);
  }
  return;
}

