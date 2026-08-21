
undefined4 png_get_unknown_chunks(long param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined8 *)0x0)) {
    *param_3 = *(undefined8 *)(param_2 + 0x120);
    uVar1 = *(undefined4 *)(param_2 + 0x128);
  }
  return uVar1;
}

