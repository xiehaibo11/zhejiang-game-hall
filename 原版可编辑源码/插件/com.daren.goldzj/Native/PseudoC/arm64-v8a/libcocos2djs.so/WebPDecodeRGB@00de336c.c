
undefined8 WebPDecodeRGB(long param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 uStack_2c8;
  undefined8 local_2c0;
  undefined1 *local_258;
  undefined1 auStack_250 [488];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  WebPInitDecBufferInternal(&local_2d0,0x208);
  memset(auStack_250,0,0x1e8);
  local_2d0 = 0;
  if (param_1 != 0) {
    local_48 = 0;
    uStack_60 = 0;
    local_68 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    local_258 = (undefined1 *)&local_2d0;
    iVar1 = FUN_00de27bc(param_1,param_2,&local_68,(ulong)&local_68 | 4,&uStack_60,
                         (long)&uStack_60 + 4,&uStack_58,0);
    if (iVar1 == 0) {
      local_2cc = (undefined4)local_68;
      uStack_2c8 = local_68._4_4_;
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = (undefined4)local_68;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = local_68._4_4_;
      }
      iVar1 = FUN_00de31ac(param_1,param_2,&local_258);
      if (iVar1 == 0) {
        return local_2c0;
      }
    }
  }
  return 0;
}

