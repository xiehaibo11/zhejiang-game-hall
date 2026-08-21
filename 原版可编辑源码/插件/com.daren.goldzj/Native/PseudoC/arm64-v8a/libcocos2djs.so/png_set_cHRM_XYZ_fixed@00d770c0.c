
void png_set_cHRM_XYZ_fixed
               (long param_1,long param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
               undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    local_30 = param_9;
    uStack_2c = param_10;
    local_28 = param_11;
    local_48 = param_3;
    uStack_44 = param_4;
    local_40 = param_5;
    uStack_3c = param_6;
    local_38 = param_7;
    uStack_34 = param_8;
    iVar1 = png_colorspace_set_endpoints(param_1,param_2 + 0x34,&local_48,2);
    if (iVar1 != 0) {
      *(ushort *)(param_2 + 0x7e) = *(ushort *)(param_2 + 0x7e) | 0x10;
    }
    png_colorspace_sync_info(param_1,param_2);
  }
  return;
}

