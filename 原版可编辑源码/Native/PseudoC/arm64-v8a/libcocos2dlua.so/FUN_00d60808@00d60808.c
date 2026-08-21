
void FUN_00d60808(long *param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (0 < (int)param_2) {
    uVar1 = (ulong)param_2;
    do {
      lVar2 = *param_1;
      if (*(int *)(lVar2 + 0x7c) != 0) {
        FUN_00d60808(*(undefined8 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x18));
      }
                    /* try { // try from 00d6082c to 00e60847 has its CatchHandler @ 00d60a8c */
      uVar1 = uVar1 - 1;
      param_1 = param_1 + 1;
      *(undefined4 *)(lVar2 + 0x7c) = 0;
    } while (uVar1 != 0);
  }
                    /* try { // try from 00d60860 to 00e6086b has its CatchHandler @ 00d60a64 */
  return;
}

