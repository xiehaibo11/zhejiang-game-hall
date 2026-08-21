
int UI_set_result(UI *ui,UI_STRING *uis,char *result)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  int line;
  uint __c;
  char *__s;
  char *__s_00;
  char acStack_60 [16];
  char acStack_50 [16];
  
  sVar2 = strlen(result);
  *(uint *)(ui + 0x20) = *(uint *)(ui + 0x20) & 0xfffffffe;
  if (*(int *)uis - 1U < 2) {
    BIO_snprintf(acStack_50,0xd,"%d",(ulong)*(uint *)(uis + 0x20));
    BIO_snprintf(acStack_60,0xd,"%d",(ulong)*(uint *)(uis + 0x24));
    if ((int)sVar2 < *(int *)(uis + 0x20)) {
      iVar1 = 0x65;
      line = 0x2f8;
      *(uint *)(ui + 0x20) = *(uint *)(ui + 0x20) | 1;
    }
    else {
      if ((int)sVar2 <= *(int *)(uis + 0x24)) {
        if (*(long *)(uis + 0x18) != 0) {
          OPENSSL_strlcpy(*(long *)(uis + 0x18),result,(long)*(int *)(uis + 0x24) + 1);
          return 0;
        }
        iVar1 = 0x307;
LAB_00b65994:
        ERR_put_error(0x28,0x69,0x69,"crypto/ui/ui_lib.c",iVar1);
        return -1;
      }
      *(uint *)(ui + 0x20) = *(uint *)(ui + 0x20) | 1;
      iVar1 = 100;
      line = 0x2ff;
    }
    ERR_put_error(0x28,0x69,iVar1,"crypto/ui/ui_lib.c",line);
    ERR_add_error_data(5,"You must type in ",acStack_50," to ",acStack_60," characters");
    iVar1 = -1;
  }
  else {
    if (*(int *)uis == 3) {
      if (*(undefined1 **)(uis + 0x18) == (undefined1 *)0x0) {
        iVar1 = 0x313;
        goto LAB_00b65994;
      }
      **(undefined1 **)(uis + 0x18) = 0;
      __c = (uint)(byte)*result;
      if (*result != 0) {
        __s = *(char **)(uis + 0x28);
        do {
          result = result + 1;
          pcVar3 = strchr(__s,__c);
          __s_00 = __s;
          if (pcVar3 != (char *)0x0) {
LAB_00b659a4:
            **(char **)(uis + 0x18) = *__s_00;
            return 0;
          }
          __s_00 = *(char **)(uis + 0x30);
          pcVar3 = strchr(__s_00,__c);
          if (pcVar3 != (char *)0x0) goto LAB_00b659a4;
          __c = (uint)(byte)*result;
        } while (__c != 0);
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}

