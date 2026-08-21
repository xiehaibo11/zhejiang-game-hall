
undefined8 TIFFVGetField(long param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = TIFFFindField(param_1,param_2,0);
  uVar2 = 0;
  if (lVar1 != 0) {
    if (((param_2 & 0xffff0000) == 0) &&
       ((1L << ((ulong)*(ushort *)(lVar1 + 0x18) & 0x1f) &
        *(ulong *)(param_1 + (ulong)(*(ushort *)(lVar1 + 0x18) >> 5) * 8 + 0x38)) == 0)) {
      uVar2 = 0;
    }
    else {
      uStack_38 = param_3[3];
      local_40 = param_3[2];
      uStack_48 = param_3[1];
      local_50 = *param_3;
      uVar2 = (**(code **)(param_1 + 0x410))(param_1,param_2 & 0xffffffff,&local_50);
    }
  }
  return uVar2;
}

