
undefined2 SSL_CONF_cmd_value_type(uint *param_1,char *param_2)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  ulong __n;
  char *__s2;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  __s2 = *(char **)(param_1 + 2);
  if (__s2 == (char *)0x0) {
    if ((*param_1 & 1) == 0) goto LAB_00af6bc0;
    if (*param_2 != '-') {
      return 0;
    }
    if (param_2[1] == '\0') {
      return 0;
    }
    __n = 1;
  }
  else {
    sVar4 = strlen(param_2);
    __n = *(ulong *)(param_1 + 4);
    if (sVar4 <= __n) {
      return 0;
    }
    uVar1 = *param_1;
    if (((uVar1 & 1) != 0) && (iVar3 = strncmp(param_2,__s2,__n), iVar3 != 0)) {
      return 0;
    }
    if (((uVar1 >> 1 & 1) != 0) && (iVar3 = strncasecmp(param_2,__s2,__n), iVar3 != 0)) {
      return 0;
    }
  }
  param_2 = param_2 + __n;
LAB_00af6bc0:
  lVar5 = FUN_00af68fc(param_1,param_2);
  uVar2 = 0;
  if (lVar5 != 0) {
    uVar2 = *(undefined2 *)(lVar5 + 0x1a);
  }
  return uVar2;
}

