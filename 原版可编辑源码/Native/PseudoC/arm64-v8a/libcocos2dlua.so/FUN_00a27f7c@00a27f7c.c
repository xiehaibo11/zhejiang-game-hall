
bool FUN_00a27f7c(long param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = (*(ulong *)(param_1 + 0xb8) & (long)param_2) != 0;
                    /* try { // try from 00a27f8c to 00b27fdb has its CatchHandler @ 00a27f8c
                       catch() { ... } // from try @ 00a27f8c with catch @ 00a27f8c
                       catch() { ... } // from try @ 00a2801c with catch @ 00a27f8c
                       catch() { ... } // from try @ 00a28060 with catch @ 00a27f8c */
  }
  return bVar1;
}

