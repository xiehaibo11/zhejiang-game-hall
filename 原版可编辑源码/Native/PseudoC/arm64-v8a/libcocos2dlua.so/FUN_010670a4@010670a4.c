
void FUN_010670a4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)((long)param_1 + 0x2c);
  FT_Bitmap_Copy(uVar1,param_1 + 6,param_2 + 0x30);
  return;
}

