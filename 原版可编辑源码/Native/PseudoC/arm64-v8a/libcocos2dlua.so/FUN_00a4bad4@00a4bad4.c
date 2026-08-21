
void FUN_00a4bad4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
                    /* try { // try from 00a4bae8 to 00b4bb8f has its CatchHandler @ 00a4b9f8 */
  if (*(int *)(lVar1 + 0x14c) != 0) {
    inflateEnd(lVar1 + 0x150);
    *(undefined4 *)(lVar1 + 0x14c) = 0;
  }
  return;
}

