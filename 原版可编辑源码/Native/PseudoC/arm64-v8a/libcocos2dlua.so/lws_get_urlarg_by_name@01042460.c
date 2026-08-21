
char * lws_get_urlarg_by_name(undefined8 param_1,char *param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  
  sVar3 = strlen(param_2);
  iVar1 = lws_hdr_copy_fragment(param_1,param_3,param_4,0x4c,0);
  if (-1 < iVar1) {
    iVar1 = 1;
    do {
      iVar2 = strncmp(param_3,param_2,(long)(int)sVar3);
      if (iVar2 == 0) {
        return param_3 + (int)sVar3;
      }
      iVar2 = lws_hdr_copy_fragment(param_1,param_3,param_4,0x4c,iVar1);
      iVar1 = iVar1 + 1;
    } while (-1 < iVar2);
  }
  return (char *)0x0;
}

