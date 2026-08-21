
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
      else {
                    /* try { // try from 010c2008 to 011c205b has its CatchHandler @ 010c2008
                       catch() { ... } // from try @ 010c2008 with catch @ 010c2008
                       catch() { ... } // from try @ 010c206c with catch @ 010c2008 */
        if (param_2[4] == ' ') {
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
        else {
                    /* try { // try from 010c205c to 011c206b has its CatchHandler @ 010c20a4 */
          if (param_2[7] == ' ') {
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
                    /* try { // try from 010c2110 to 011c2117 has its CatchHandler @ 010c23e8 */
              if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_010c1f88;
              goto LAB_010c1f6c;
            }
                    /* try { // try from 010c2118 to 011c226f has its CatchHandler @ 010c20c0 */
            uVar1 = 0xe;
            if (param_2[0xe] != ' ') {
              uVar1 = 0xf;
            }
            uVar2 = (ulong)uVar1;
            UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x120);
          }
        }
      }
    }
    else {
      uVar2 = 0;
      UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x120);
    }
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_010c1f6c:
                    /* WARNING: Could not recover jumptable at 0x010c1f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2 + uVar2);
      return uVar2;
    }
  }
LAB_010c1f88:
  fprintf((FILE *)pthread_rwlock_tryrdlock,"libpng warning: %s",param_2 + (int)uVar2);
  uVar1 = fputc(10,(FILE *)pthread_rwlock_tryrdlock);
  return (ulong)uVar1;
}

