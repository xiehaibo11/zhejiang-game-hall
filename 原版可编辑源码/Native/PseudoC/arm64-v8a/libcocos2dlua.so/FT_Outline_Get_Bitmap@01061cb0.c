
undefined8 FT_Outline_Get_Bitmap(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long local_70 [2];
  undefined4 local_60;
  
  if (param_3 != 0) {
    local_60 = 0;
    if ((*(byte *)(param_3 + 0x1a) < 7) &&
       ((1 << (ulong)(*(byte *)(param_3 + 0x1a) & 0x1f) & 100U) != 0)) {
      local_60 = 1;
    }
    local_70[0] = param_3;
    uVar1 = FT_Outline_Render(param_1,param_2,local_70);
    return uVar1;
  }
  return 6;
}

