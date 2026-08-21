
int FUN_00a5f304(void *param_1,int param_2,int param_3,char *param_4)

{
  int iVar1;
  
                    /* try { // try from 00a5f308 to 00b5f367 has its CatchHandler @ 00a5f308
                       catch() { ... } // from try @ 00a5f308 with catch @ 00a5f308
                       catch() { ... } // from try @ 00a5f52c with catch @ 00a5f308
                       catch() { ... } // from try @ 00a5f624 with catch @ 00a5f308 */
  if (param_3 == 0) {
    strlen(param_4);
    iVar1 = FUN_00a2c6d4();
    if (iVar1 < param_2) {
      memcpy(param_1,param_4,(long)(iVar1 + 1));
      return iVar1;
    }
  }
                    /* try { // try from 00a5f368 to 00b5f37f has its CatchHandler @ 00a5f64c */
  return 0;
}

