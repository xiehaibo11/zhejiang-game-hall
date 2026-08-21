
void FUN_00a350ec(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x14c) != 0) {
    inflateEnd(lVar1 + 0x150);
    *(undefined4 *)(lVar1 + 0x14c) = 0;
  }
                    /* try { // try from 00a35114 to 00b3522b has its CatchHandler @ 00a3500c */
  return;
}

