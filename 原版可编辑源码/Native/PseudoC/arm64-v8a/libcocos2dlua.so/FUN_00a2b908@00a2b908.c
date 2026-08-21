
long * FUN_00a2b908(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long local_30;
  long local_28;
  
  if (param_3 == (long *)0x0) {
    return (long *)0x0;
  }
  local_30 = 0;
  local_28 = 0;
  plVar3 = &local_30;
  plVar4 = &local_30;
  do {
    while (param_3[3] <= param_1) {
      if (param_1 <= param_3[3]) {
        if (param_2 < param_3[4]) break;
        if (param_2 <= param_3[4]) goto LAB_00a2b9e0;
      }
      plVar1 = (long *)param_3[1];
      if (plVar1 == (long *)0x0) goto LAB_00a2b9e0;
      plVar2 = param_3;
                    /* try { // try from 00a2b9b0 to 00b2badf has its CatchHandler @ 00a2b9b0
                       catch() { ... } // from try @ 00a2b9b0 with catch @ 00a2b9b0
                       catch() { ... } // from try @ 00a2bb60 with catch @ 00a2b9b0 */
      if ((plVar1[3] <= param_1) && ((plVar1[3] < param_1 || (plVar1[4] < param_2)))) {
        param_3[1] = *plVar1;
        *plVar1 = (long)param_3;
        plVar2 = plVar1;
        param_3 = plVar1;
        if (plVar1[1] == 0) goto LAB_00a2b9e0;
      }
      plVar3[1] = (long)plVar2;
      plVar3 = plVar2;
      param_3 = (long *)plVar2[1];
    }
    plVar1 = (long *)*param_3;
    if (plVar1 == (long *)0x0) {
LAB_00a2b9e0:
      plVar3[1] = *param_3;
      *plVar4 = param_3[1];
      *param_3 = local_28;
      param_3[1] = local_30;
      return param_3;
    }
    if ((param_1 < plVar1[3]) || ((plVar2 = param_3, param_1 <= plVar1[3] && (param_2 < plVar1[4])))
       ) {
      *param_3 = plVar1[1];
      plVar1[1] = (long)param_3;
      plVar2 = plVar1;
      param_3 = plVar1;
      if (*plVar1 == 0) goto LAB_00a2b9e0;
    }
    *plVar4 = (long)plVar2;
    param_3 = (long *)*plVar2;
    plVar4 = plVar2;
  } while( true );
}

