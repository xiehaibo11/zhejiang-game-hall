
undefined8 FT_Bitmap_Done(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = 0x21;
  }
  else if (param_2 == (undefined8 *)0x0) {
    uVar1 = 6;
  }
  else {
    ft_mem_free(*param_1,param_2[2]);
    uVar1 = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
  }
  return uVar1;
}

