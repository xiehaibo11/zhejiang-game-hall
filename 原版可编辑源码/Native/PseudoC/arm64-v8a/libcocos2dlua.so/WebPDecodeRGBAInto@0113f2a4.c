
long WebPDecodeRGBAInto(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                       undefined4 param_5)

{
  int iVar1;
  undefined4 local_2b8 [3];
  undefined4 local_2ac;
  long local_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined4 *local_240;
  undefined1 auStack_238 [488];
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    WebPInitDecBufferInternal(local_2b8,0x208);
    memset(auStack_238,0,0x1e8);
    local_2b8[0] = 1;
    local_2ac = 1;
    local_2a8 = param_3;
    local_2a0 = param_5;
    local_298 = param_4;
    local_240 = local_2b8;
    iVar1 = FUN_0113f654(param_1,param_2,&local_240);
    if (iVar1 != 0) {
      param_3 = 0;
    }
  }
  return param_3;
}

