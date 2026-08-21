
undefined8 ssl_allow_compression(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x1e6) >> 1 & 1) == 0) {
    uVar1 = ssl_security(param_1,0xf,0,0,0);
    return uVar1;
  }
  return 0;
}

