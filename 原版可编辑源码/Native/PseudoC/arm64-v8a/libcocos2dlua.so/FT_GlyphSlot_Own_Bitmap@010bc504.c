
undefined8 FT_GlyphSlot_Own_Bitmap(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar1 = 0;
  if (param_1 != (undefined8 *)0x0) {
    if ((*(int *)(param_1 + 0x12) == 0x62697473) && ((*(byte *)(param_1[0x25] + 8) & 1) == 0)) {
      local_28 = 0;
      uStack_30 = 0;
      local_38 = 0;
      uStack_40 = 0;
      local_48 = 0;
      uVar1 = FT_Bitmap_Copy(*param_1,param_1 + 0x13,&local_48);
      if ((int)uVar1 == 0) {
        param_1[0x17] = local_28;
        param_1[0x16] = uStack_30;
        param_1[0x15] = local_38;
        param_1[0x14] = uStack_40;
        param_1[0x13] = local_48;
        *(uint *)(param_1[0x25] + 8) = *(uint *)(param_1[0x25] + 8) | 1;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

