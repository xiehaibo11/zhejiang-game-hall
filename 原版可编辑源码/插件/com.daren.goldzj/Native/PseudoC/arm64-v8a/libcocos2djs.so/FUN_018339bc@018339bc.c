
void FUN_018339bc(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  switch(param_3) {
  case 0:
  case 4:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    pcVar1 = operator_new(0x60);
    param_1[2] = pcVar1;
    param_1[1] = 0x58;
    *param_1 = 0x61;
    builtin_strncpy(pcVar1,
                    "The associated promise has been destructed prior to the associated state becoming ready."
                    ,0x58);
    pcVar1 = pcVar1 + 0x58;
    break;
  case 1:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    pcVar1 = operator_new(0x50);
    param_1[1] = 0x48;
    *param_1 = 0x51;
    builtin_strncpy(pcVar1,"The future has already been retr",0x20);
    param_1[2] = pcVar1;
    builtin_strncpy(pcVar1 + 0x20,"ieved from the promise or packaged_task.",0x28);
    pcVar1 = pcVar1 + 0x48;
    break;
  case 2:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    pcVar1 = operator_new(0x30);
    param_1[2] = pcVar1;
    param_1[1] = 0x2e;
    *param_1 = 0x31;
    builtin_strncpy(pcVar1,"The state of the promise has already been set.",0x2e);
    pcVar1 = pcVar1 + 0x2e;
    break;
  case 3:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    pcVar1 = operator_new(0x50);
    param_1[1] = 0x41;
    *param_1 = 0x51;
    param_1[2] = pcVar1;
    builtin_strncpy(pcVar1,"Operation not permitted on an object without an associated state.",0x41)
    ;
    pcVar1 = pcVar1 + 0x41;
    break;
  default:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    pcVar2 = operator_new(0x20);
    pcVar1 = pcVar2 + 0x1e;
    param_1[2] = pcVar2;
    param_1[1] = 0x1e;
    *param_1 = 0x21;
    builtin_strncpy(pcVar2,"unspecified future_errc value\n",0x1e);
  }
  *pcVar1 = '\0';
  return;
}

