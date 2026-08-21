
int FUN_00cdfdcc(undefined8 param_1,byte *param_2)

{
  int iVar1;
  byte *__nptr;
  
  __nptr = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __nptr = param_2 + 1;
  }
  iVar1 = atoi((char *)__nptr);
  return iVar1;
}

