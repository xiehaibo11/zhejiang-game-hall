
void FUN_00a2fae4(long param_1)

{
  undefined8 local_30;
  time_t tStack_28;
  time_t local_18;
  
                    /* try { // try from 00a2faec to 00b2fb37 has its CatchHandler @ 00a2faec
                       catch() { ... } // from try @ 00a2faec with catch @ 00a2faec
                       catch() { ... } // from try @ 00a2fb3c with catch @ 00a2faec */
  if ((*(long *)(param_1 + 0x5c8) != -1) && (*(long *)(param_1 + 0x50) != 0)) {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00a4bf64(param_1,3,2);
    }
    time(&local_18);
    local_30 = *(undefined8 *)(param_1 + 0x5c8);
                    /* try { // try from 00a2fb38 to 00b2fb3b has its CatchHandler @ 00a2fb70 */
                    /* try { // try from 00a2fb3c to 00b2fb83 has its CatchHandler @ 00a2faec */
    tStack_28 = local_18;
    FUN_00a4b1d0(*(undefined8 *)(param_1 + 0x50),&local_30,FUN_00a3065c);
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00a4bfbc(param_1,3);
    }
  }
  return;
}

