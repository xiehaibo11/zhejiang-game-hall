
ulong png_warning(long param_1,char *param_2)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*param_2 == '#') {
      if (param_2[1] == ' ') {
        uVar2 = 1;
        UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x120);
      }
      else if (param_2[2] == ' ') {
        uVar2 = 2;
        UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x120);
      }
      else if (param_2[3] == ' ') {
        uVar2 = 3;
        UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x120);
      }
      else if (param_2[4] == ' ') {
        uVar2 = 4;
        UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x120);
      }
      else if (param_2[5] == ' ') {
        uVar2 = 5;
        UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x120);
      }
      else if (param_2[6] == ' ') {
        uVar2 = 6;
        UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x120);
      }
      else if (param_2[7] == ' ') {
        uVar2 = 7;
        UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x120);
      }
      else if (param_2[8] == ' ') {
        uVar2 = 8;
        UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x120);
      }
      else if (param_2[9] == ' ') {
        uVar2 = 9;
        UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x120);
      }
      else if (param_2[10] == ' ') {
        uVar2 = 10;
        UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x120);
      }
      else if (param_2[0xb] == ' ') {
        uVar2 = 0xb;
        UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x120);
      }
      else if (param_2[0xc] == ' ') {
        uVar2 = 0xc;
        UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x120);
      }
      else {
        if (param_2[0xd] == ' ') {
          uVar2 = 0xd;
          UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x120);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_00d65ae0;
          goto LAB_00d65ac4;
        }
        uVar1 = 0xe;
        if (param_2[0xe] != ' ') {
          uVar1 = 0xf;
        }
        uVar2 = (ulong)uVar1;
        UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x120);
      }
    }
    else {
      uVar2 = 0;
      UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x120);
    }
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_00d65ac4:
                    /* WARNING: Could not recover jumptable at 0x00d65ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2 + uVar2);
      return uVar2;
    }
  }
LAB_00d65ae0:
  fprintf((FILE *)__cxa_thread_atexit_impl,"libpng warning: %s",param_2 + (int)uVar2);
  uVar1 = fputc(10,(FILE *)__cxa_thread_atexit_impl);
  return (ulong)uVar1;
}

