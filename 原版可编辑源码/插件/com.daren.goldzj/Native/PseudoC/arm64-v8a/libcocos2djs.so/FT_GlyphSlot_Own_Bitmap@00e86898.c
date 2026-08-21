
undefined8 FT_GlyphSlot_Own_Bitmap(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uVar1 = 0;
  if (param_1 != (undefined8 *)0x0) {
    if (*(int *)(param_1 + 0x12) != 0x62697473) {
      return 0;
    }
    if ((*(byte *)(param_1[0x25] + 8) & 1) != 0) {
      return 0;
    }
    local_30 = 0;
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uVar1 = FT_Bitmap_Copy(*param_1,param_1 + 0x13,&local_50);
    if ((int)uVar1 == 0) {
      param_1[0x17] = local_30;
      param_1[0x14] = uStack_48;
      param_1[0x13] = local_50;
      param_1[0x16] = uStack_38;
      param_1[0x15] = uStack_40;
      *(uint *)(param_1[0x25] + 8) = *(uint *)(param_1[0x25] + 8) | 1;
      return uVar1;
    }
  }
  return uVar1;
}

