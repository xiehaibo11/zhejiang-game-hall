
void FUN_00a391f0(long *param_1,uint param_2,char *param_3,size_t param_4)

{
  char *pcVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (param_4 == 0) {
    param_4 = strlen(param_3);
  }
  if (((((param_2 & 1) != 0) && ((*(byte *)(param_1[0x80] + 0x78) & 0xc) != 0)) &&
      ((char)param_1[0xd7] == 'A')) && ((param_3 != (char *)0x0 && (param_4 != 0)))) {
    pcVar1 = (char *)(lVar5 + 0x8caa);
    if (*pcVar1 != '\0') {
      if (*param_3 == '\n') {
        param_4 = param_4 - 1;
        memmove(param_3,param_3 + 1,param_4);
        *(long *)(lVar5 + 0x8cb0) = *(long *)(lVar5 + 0x8cb0) + 1;
      }
      *pcVar1 = '\0';
    }
    psVar3 = memchr(param_3,0xd,param_4);
    if (psVar3 != (short *)0x0) {
      psVar2 = (short *)(param_3 + param_4);
      psVar4 = psVar3;
      if (psVar3 < (short *)((long)psVar2 + -1)) {
        do {
          if (*psVar4 == 0xa0d) {
            psVar4 = (short *)((long)psVar4 + 1);
            *(char *)psVar3 = *(char *)psVar4;
            *(long *)(lVar5 + 0x8cb0) = *(long *)(lVar5 + 0x8cb0) + 1;
          }
          else if ((char)*psVar4 == '\r') {
            *(char *)psVar3 = '\n';
          }
          else {
            *(char *)psVar3 = (char)*psVar4;
          }
          psVar4 = (short *)((long)psVar4 + 1);
          psVar3 = (short *)((long)psVar3 + 1);
        } while (psVar4 < (short *)((long)psVar2 + -1));
      }
      if (psVar4 < psVar2) {
                    /* try { // try from 00a39330 to 00b39363 has its CatchHandler @ 00a39430 */
        if ((char)*psVar4 == '\r') {
          *(char *)psVar3 = '\n';
          *pcVar1 = '\x01';
        }
        else {
          *(char *)psVar3 = (char)*psVar4;
        }
        psVar3 = (short *)((long)psVar3 + 1);
      }
      if (psVar3 < psVar2) {
        *(char *)psVar3 = '\0';
      }
      param_4 = (long)psVar3 - (long)param_3;
    }
  }
                    /* try { // try from 00a39364 to 00b39377 has its CatchHandler @ 00a393fc */
                    /* try { // try from 00a3937c to 00b393af has its CatchHandler @ 00a39400 */
  FUN_00a38f0c(param_1,param_2,param_3,param_4);
  return;
}

