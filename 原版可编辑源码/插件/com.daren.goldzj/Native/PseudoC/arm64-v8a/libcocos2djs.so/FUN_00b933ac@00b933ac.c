
int FUN_00b933ac(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  char *__s1;
  char *__s2;
  
  if (((char *)*param_1 == (char *)*param_2) ||
     (iVar2 = strcmp((char *)*param_1,(char *)*param_2), iVar2 == 0)) {
    __s1 = (char *)param_1[1];
    __s2 = (char *)param_2[1];
    if ((__s1 != (char *)0x0) && (__s2 != (char *)0x0)) {
      iVar2 = strcmp(__s1,__s2);
      return iVar2;
    }
    iVar1 = 1;
    if (__s1 == (char *)0x0) {
      iVar1 = -1;
    }
    iVar2 = 0;
    if (__s1 != __s2) {
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

