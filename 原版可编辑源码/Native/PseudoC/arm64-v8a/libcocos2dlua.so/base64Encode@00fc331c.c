
int base64Encode(uchar *param_1,uint param_2,undefined8 *param_3)

{
  char *pcVar1;
  
  pcVar1 = malloc((ulong)((param_2 + 2) / 3 << 2 | 1));
  *param_3 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    cocos2d::_base64Encode(param_1,param_2,pcVar1);
  }
  return ((uint)((ulong)(param_2 + 2) * 0xaaaaaaab >> 0x20) & 0x7ffffffe) << 1;
}

