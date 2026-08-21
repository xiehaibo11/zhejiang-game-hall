
void FUN_00a29ab0(long *param_1)

{
  long *plVar1;
  
  if (*(char *)(*param_1 + 0x628) == '\0') {
    return;
  }
                    /* try { // try from 00a29ac0 to 00b29ba3 has its CatchHandler @ 00a298fc */
  if (*(char *)((long)param_1 + 0x3bf) == '\0') {
    plVar1 = param_1 + 0x2b;
    if (*(char *)((long)param_1 + 0x3be) == '\0') {
      plVar1 = param_1 + 0x16;
    }
  }
  else {
    plVar1 = param_1 + 0x23;
  }
  FUN_00a22d58(*param_1,"Connected to %s (%s) port %ld (#%ld)\n",plVar1[3],param_1 + 0xf,
               param_1[0x33],param_1[10]);
  return;
}

