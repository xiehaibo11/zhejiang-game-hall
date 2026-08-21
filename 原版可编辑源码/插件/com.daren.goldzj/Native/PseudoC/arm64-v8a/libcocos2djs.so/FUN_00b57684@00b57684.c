
undefined8 FUN_00b57684(undefined8 param_1,UI_STRING *param_2)

{
  FILE *__stream;
  UI_string_types UVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *__s2;
  undefined8 uVar5;
  
  UVar1 = UI_get_string_type(param_2);
  __stream = DAT_01d3adc0;
  if (UVar1 == UIT_PROMPT) {
    pcVar4 = UI_get0_output_string(param_2);
    fputs(pcVar4,DAT_01d3adc0);
    fflush(DAT_01d3adc0);
    uVar2 = UI_get_input_flags(param_2);
    uVar5 = 1;
LAB_00b57740:
    uVar5 = FUN_00b5786c(param_1,param_2,uVar2 & 1,uVar5);
    return uVar5;
  }
  if (UVar1 == UIT_VERIFY) {
    pcVar4 = UI_get0_output_string(param_2);
    fprintf(__stream,"Verifying - %s",pcVar4);
    fflush(DAT_01d3adc0);
    uVar2 = UI_get_input_flags(param_2);
                    /* try { // try from 00b57798 to 00c57887 has its CatchHandler @ 00b57798
                       catch() { ... } // from try @ 00b57798 with catch @ 00b57798
                       catch() { ... } // from try @ 00b578d8 with catch @ 00b57798
                       catch() { ... } // from try @ 00b5797c with catch @ 00b57798 */
    uVar5 = FUN_00b5786c(param_1,param_2,uVar2 & 1,1);
    if ((int)uVar5 < 1) {
      return uVar5;
    }
    pcVar4 = UI_get0_result_string(param_2);
    __s2 = UI_get0_test_string(param_2);
    iVar3 = strcmp(pcVar4,__s2);
    if (iVar3 != 0) {
      fwrite("Verify failure\n",0xf,1,DAT_01d3adc0);
      fflush(DAT_01d3adc0);
      return 0;
    }
  }
  else if (UVar1 == UIT_BOOLEAN) {
    pcVar4 = UI_get0_output_string(param_2);
    fputs(pcVar4,DAT_01d3adc0);
    pcVar4 = UI_get0_action_string(param_2);
    fputs(pcVar4,DAT_01d3adc0);
    fflush(DAT_01d3adc0);
    uVar2 = UI_get_input_flags(param_2);
    uVar5 = 0;
    goto LAB_00b57740;
  }
  return 1;
}

