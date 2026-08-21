
int property_get(undefined8 param_1,void *param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = __system_property_get();
  if ((param_3 != (char *)0x0) && (iVar1 < 1)) {
    sVar2 = strlen(param_3);
    iVar1 = (int)sVar2;
    if (0x5a < iVar1) {
      iVar1 = 0x5b;
    }
    memcpy(param_2,param_3,(long)iVar1);
    *(undefined1 *)((long)param_2 + (long)iVar1) = 0;
  }
  return iVar1;
}

