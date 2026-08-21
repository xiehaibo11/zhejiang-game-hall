
void FUN_00a3f068(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  FUN_00a20214();
  plVar1 = (long *)(lVar2 + 0x8ce0);
  if (*plVar1 == 0) {
    *plVar1 = 1;
  }
  plVar1 = (long *)(lVar2 + 0x8ce8);
  if (*plVar1 == 0) {
                    /* try { // try from 00a3f0a8 to 00b3f18b has its CatchHandler @ 00a3eeec */
    *plVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0xc5) = 0xffffffff;
  return;
}

