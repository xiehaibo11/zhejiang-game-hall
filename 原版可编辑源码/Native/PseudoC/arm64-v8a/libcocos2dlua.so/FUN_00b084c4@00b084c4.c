
ulong FUN_00b084c4(long param_1,void *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  
  sVar3 = 0;
  if ((param_2 != (void *)0x0) && (*(int *)(param_1 + 0x18) != 0)) {
    sVar3 = fread(param_2,1,(long)param_3,*(FILE **)(param_1 + 0x30));
    iVar1 = ferror(*(FILE **)(param_1 + 0x30));
    if (iVar1 != 0) {
      piVar2 = (int *)__errno();
      ERR_put_error(2,0xb,*piVar2,"crypto/bio/bss_file.c",0x9a);
      ERR_put_error(0x20,0x82,2,"crypto/bio/bss_file.c",0x9b);
      sVar3 = 0xffffffff;
    }
  }
  return sVar3 & 0xffffffff;
}

