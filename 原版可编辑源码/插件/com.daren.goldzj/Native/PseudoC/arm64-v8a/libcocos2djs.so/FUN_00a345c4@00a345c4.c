
undefined8 FUN_00a345c4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
                    /* try { // try from 00a345cc to 00b345db has its CatchHandler @ 00a346e4 */
                    /* try { // try from 00a345dc to 00b346ff has its CatchHandler @ 00a34578 */
  lVar2 = *param_1;
  lVar1 = (*(code *)param_1[1])(param_2,param_3,(long)(int)param_1[4]);
  plVar3 = *(long **)(lVar2 + lVar1 * 8);
  plVar4 = (long *)*plVar3;
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return 1;
    }
    lVar2 = (*(code *)param_1[2])
                      (*(undefined8 *)(*plVar4 + 8),*(undefined8 *)(*plVar4 + 0x10),param_2,param_3)
    ;
    if (lVar2 != 0) break;
    plVar4 = (long *)plVar4[2];
  }
  FUN_00a34074(plVar3,plVar4,param_1);
  param_1[5] = param_1[5] + -1;
  return 0;
}

