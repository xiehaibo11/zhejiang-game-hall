
undefined8 parseElfVersion(char *param_1,char *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    strncpy(param_2,param_1,0x10);
    uVar1 = 0;
    param_2[0xf] = '\0';
  }
  return uVar1;
}

