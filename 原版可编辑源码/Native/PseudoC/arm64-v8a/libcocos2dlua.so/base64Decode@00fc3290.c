
uint base64Decode(uchar *param_1,ulong param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  uchar *puVar3;
  uint local_24;
  
  local_24 = 0;
  puVar3 = malloc((ulong)(((uint)(param_2 >> 2) & 0x3fffffff) * 3 + 1));
  *param_3 = puVar3;
  uVar2 = 0;
  if ((puVar3 != (uchar *)0x0) &&
     (iVar1 = cocos2d::_base64Decode(param_1,(uint)param_2,puVar3,&local_24), uVar2 = local_24,
     0 < iVar1)) {
    printf("Base64Utils: error decoding");
    free((void *)*param_3);
    *param_3 = 0;
    uVar2 = 0;
  }
  return uVar2;
}

