
undefined8 FUN_00fafa28(char *param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  
  sVar1 = strlen(param_1);
                    /* try { // try from 00fafa70 to 010afa77 has its CatchHandler @ 00fafb5c */
  if ((((sVar1 < 4) || (*param_1 != '$')) || (param_1[1] != '{')) || (param_1[sVar1 - 1] != '}')) {
    uVar2 = 0;
  }
  else {
    strncpy(param_2,param_1 + 2,sVar1 - 3);
    uVar2 = 1;
    param_2[sVar1 - 3] = '\0';
  }
  return uVar2;
}

