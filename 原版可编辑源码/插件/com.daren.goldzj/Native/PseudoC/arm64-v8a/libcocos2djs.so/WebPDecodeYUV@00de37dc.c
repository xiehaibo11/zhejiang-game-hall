
long WebPDecodeYUV(long param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  int iVar1;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 uStack_2c0;
  long local_2b8;
  undefined4 *local_250;
  undefined1 auStack_248 [488];
  
  WebPInitDecBufferInternal(&local_2c8,0x208);
  memset(auStack_248,0,0x1e8);
  local_2c8 = 0xb;
  if (param_1 != 0) {
    local_320 = 0;
    uStack_338 = 0;
    local_340 = 0;
    local_328 = 0;
    uStack_330 = 0;
    local_250 = &local_2c8;
    iVar1 = FUN_00de27bc(param_1,param_2,&local_340,(ulong)&local_340 | 4,&uStack_338,
                         (long)&uStack_338 + 4,&uStack_330,0);
    if (iVar1 == 0) {
      local_2c4 = (undefined4)local_340;
      uStack_2c0 = local_340._4_4_;
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = (undefined4)local_340;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = local_340._4_4_;
      }
      iVar1 = FUN_00de31ac(param_1,param_2,&local_250);
      if (iVar1 == 0) {
        FUN_00de4514(&local_2c8,&local_340);
        if (local_2b8 == 0) {
          return 0;
        }
        *param_5 = local_328;
        *param_6 = local_320;
        *param_7 = local_310;
        *param_8 = local_30c;
        return local_2b8;
      }
    }
  }
  return 0;
}

