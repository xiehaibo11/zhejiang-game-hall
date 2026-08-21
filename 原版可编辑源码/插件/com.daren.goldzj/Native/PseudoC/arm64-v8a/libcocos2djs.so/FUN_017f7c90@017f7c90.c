
void FUN_017f7c90(undefined8 *param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  
  if ((param_3 != 1) && (param_3 < 0x1000)) {
    FUN_018324ac(param_1);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pcVar1 = operator_new(0x30);
  param_1[1] = 0x23;
  *param_1 = 0x31;
  param_1[2] = pcVar1;
  builtin_strncpy(pcVar1,"unspecified iostream_category error",0x24);
  return;
}

