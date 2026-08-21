
long WebPDecodeYUVInto(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                      undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                      undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  int iVar1;
  undefined4 local_2c8 [3];
  undefined4 local_2bc;
  long local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined4 *local_250;
  undefined1 auStack_248 [488];
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    WebPInitDecBufferInternal(local_2c8,0x208);
    memset(auStack_248,0,0x1e8);
    local_250 = local_2c8;
    local_2c8[0] = 0xb;
    local_2a8 = param_9;
    local_290 = param_11;
    local_278 = param_10;
    local_2bc = 1;
    local_2b8 = param_3;
    uStack_2b0 = param_6;
    local_298 = param_5;
    uStack_294 = param_8;
    local_288 = param_4;
    uStack_280 = param_7;
    iVar1 = FUN_0113f654(param_1,param_2,&local_250);
    if (iVar1 != 0) {
      param_3 = 0;
    }
  }
  return param_3;
}

