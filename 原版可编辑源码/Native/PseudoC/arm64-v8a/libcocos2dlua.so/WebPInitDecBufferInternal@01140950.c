
undefined4 WebPInitDecBufferInternal(void *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != (void *)0x0) && ((param_2 & 0xffffff00) == 0x200)) {
    memset(param_1,0,0x78);
    uVar1 = 1;
  }
  return uVar1;
}

