
undefined8 WebPGetInfo(long param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar2 = 0;
  if (param_1 != 0) {
    local_28 = 0;
    uStack_30 = 0;
    local_38 = 0;
    uStack_40 = 0;
    local_48 = 0;
    iVar1 = FUN_00de27bc(param_1,param_2,&local_48,(ulong)&local_48 | 4,&uStack_40,
                         (long)&uStack_40 + 4,&local_38,0);
    if (iVar1 == 0) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = (undefined4)local_48;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = local_48._4_4_;
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

