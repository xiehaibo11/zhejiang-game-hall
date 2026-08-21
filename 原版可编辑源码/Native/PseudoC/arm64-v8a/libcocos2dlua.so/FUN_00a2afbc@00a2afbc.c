
char * FUN_00a2afbc(long param_1,int param_2)

{
  char *__buf;
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
                    /* try { // try from 00a2afbc to 00b2afef has its CatchHandler @ 00a2b040 */
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  __buf = (char *)(param_1 + 0x508);
                    /* try { // try from 00a2aff0 to 00b2b08b has its CatchHandler @ 00a2ad38 */
  *(undefined1 *)(param_1 + 0x508) = 0;
  pcVar3 = strerror_r(param_2,__buf,0xff);
  if (((int)pcVar3 != 0) && (*__buf == '\0')) {
    FUN_00a241ac(__buf,0xff,"Unknown error %d",param_2);
  }
  *(undefined1 *)(param_1 + 0x607) = 0;
  pcVar3 = strrchr(__buf,10);
                    /* catch() { ... } // from try @ 00a2afa4 with catch @ 00a2b03c */
  if ((pcVar3 != (char *)0x0) && (1 < (long)pcVar3 - (long)__buf)) {
                    /* catch() { ... } // from try @ 00a2afbc with catch @ 00a2b040 */
    *pcVar3 = '\0';
  }
  pcVar3 = strrchr(__buf,0xd);
  if ((pcVar3 != (char *)0x0) && (0 < (long)pcVar3 - (long)__buf)) {
    *pcVar3 = '\0';
  }
  if (iVar1 != *piVar2) {
                    /* catch() { ... } // from try @ 00a2af70 with catch @ 00a2b070 */
    *piVar2 = iVar1;
  }
  return __buf;
}

