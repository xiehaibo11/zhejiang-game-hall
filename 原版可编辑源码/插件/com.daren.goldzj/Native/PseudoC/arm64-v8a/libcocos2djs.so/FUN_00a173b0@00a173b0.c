
void FUN_00a173b0(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)**(long **)(param_2 + 0x478);
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return;
    }
    if (*plVar1 == param_1) break;
    plVar1 = (long *)plVar1[2];
  }
  FUN_00a34220(*(long **)(param_2 + 0x478),plVar1,*(long *)(param_2 + 0x480),
               *(undefined8 *)(*(long *)(param_2 + 0x480) + 8));
  if (**(long **)(param_2 + 0x478) == 0) {
    return;
  }
  *(undefined1 *)(param_2 + 0x471) = 0;
  FUN_00a11760(*(undefined8 *)**(long **)(param_2 + 0x478),0);
  return;
}

