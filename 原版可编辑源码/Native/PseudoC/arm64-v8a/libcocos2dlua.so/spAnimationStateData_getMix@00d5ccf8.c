
undefined4 spAnimationStateData_getMix(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x10);
  do {
    if (plVar1 == (long *)0x0) {
      return *(undefined4 *)(param_1 + 8);
    }
    if (*plVar1 == param_2) {
      for (plVar2 = (long *)plVar1[1]; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
        if (*plVar2 == param_3) {
          return (int)plVar2[1];
        }
      }
    }
    plVar1 = (long *)plVar1[2];
  } while( true );
}

