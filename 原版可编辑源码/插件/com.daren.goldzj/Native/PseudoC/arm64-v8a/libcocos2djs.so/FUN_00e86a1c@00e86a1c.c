
void FUN_00e86a1c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *(undefined8 *)(param_2 + 0x28) = param_1[5];
  FT_Bitmap_Copy(uVar1,param_1 + 6,param_2 + 0x30);
  return;
}

