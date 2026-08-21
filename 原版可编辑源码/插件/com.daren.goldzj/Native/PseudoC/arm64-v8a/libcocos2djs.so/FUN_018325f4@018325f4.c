
void FUN_018325f4(undefined8 *param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  
  if (0xfff < param_3) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    pcVar1 = operator_new(0x30);
    param_1[2] = pcVar1;
    pcVar1[0x20] = 'o';
    pcVar1[0x21] = 'r';
    param_1[1] = 0x22;
    *param_1 = 0x31;
    builtin_strncpy(pcVar1,"unspecified generic_category err",0x20);
    pcVar1[0x22] = '\0';
    return;
  }
  FUN_018324ac(param_1);
  return;
}

