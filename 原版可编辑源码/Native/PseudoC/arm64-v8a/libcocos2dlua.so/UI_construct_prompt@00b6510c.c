
char * UI_construct_prompt(UI *ui_method,char *object_desc,char *object_name)

{
  char *pcVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  undefined2 local_44 [2];
  undefined4 local_40;
  undefined2 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  if (*(code **)(*(long *)ui_method + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b6514c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar1 = (char *)(**(code **)(*(long *)ui_method + 0x30))(ui_method,object_desc,object_name);
    return pcVar1;
  }
  local_32 = 0;
  local_34 = 0x2072;
  local_38 = 0x65746e45;
  local_3c = 0x20;
  local_40 = 0x726f6620;
  local_44[0] = 0x3a;
  if (object_desc != (char *)0x0) {
    sVar2 = strlen(object_desc);
    lVar3 = sVar2 + 6;
    if (object_name != (char *)0x0) {
      sVar2 = strlen(object_name);
      lVar3 = sVar2 + (long)(int)lVar3 + 5;
    }
    lVar3 = (lVar3 << 0x20) + 0x200000000;
    lVar4 = lVar3 >> 0x20;
    pcVar1 = CRYPTO_malloc((int)((ulong)lVar3 >> 0x20),"crypto/ui/ui_lib.c",0x173);
    if (pcVar1 != (char *)0x0) {
      OPENSSL_strlcpy(pcVar1,&local_38,lVar4);
      OPENSSL_strlcat(pcVar1,object_desc,lVar4);
      if (object_name != (char *)0x0) {
        OPENSSL_strlcat(pcVar1,&local_40,lVar4);
        OPENSSL_strlcat(pcVar1,object_name,lVar4);
      }
      OPENSSL_strlcat(pcVar1,local_44,lVar4);
      return pcVar1;
    }
  }
  return (char *)0x0;
}

