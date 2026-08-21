
undefined4 png_get_sPLT(long param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined8 *)0x0)) {
    *param_3 = *(undefined8 *)(param_2 + 0x130);
    uVar1 = *(undefined4 *)(param_2 + 0x138);
  }
  return uVar1;
}

