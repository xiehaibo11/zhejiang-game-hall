
undefined8
TIFFGetField(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 *local_50;
  undefined1 **ppuStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puStack_80 = &local_c0;
  ppuStack_88 = &local_90;
  uStack_78 = 0xffffff80ffffffd0;
  local_c0 = param_3;
  uStack_b8 = param_4;
  local_b0 = param_5;
  uStack_a8 = param_6;
  local_a0 = param_7;
  uStack_98 = param_8;
  local_90 = (undefined1 *)register0x00000008;
  lVar1 = TIFFFindField(param_1,param_2,0);
  uVar2 = 0;
  if (lVar1 != 0) {
    if (((param_2 & 0xffff0000) == 0) &&
       ((1L << ((ulong)*(ushort *)(lVar1 + 0x18) & 0x1f) &
        *(ulong *)(param_1 + (ulong)(*(ushort *)(lVar1 + 0x18) >> 5) * 8 + 0x38)) == 0)) {
      uVar2 = 0;
    }
    else {
      ppuStack_48 = ppuStack_88;
      local_50 = local_90;
      uStack_38 = uStack_78;
      puStack_40 = puStack_80;
      uVar2 = (**(code **)(param_1 + 0x410))(param_1,param_2 & 0xffffffff,&local_50);
    }
  }
  return uVar2;
}

