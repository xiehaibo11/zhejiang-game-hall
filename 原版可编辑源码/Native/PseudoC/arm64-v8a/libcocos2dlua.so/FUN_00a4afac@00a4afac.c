
undefined8 FUN_00a4afac(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
                    /* try { // try from 00a4afc0 to 00b4afc3 has its CatchHandler @ 00a4b05c */
                    /* try { // try from 00a4afc4 to 00b4b027 has its CatchHandler @ 00a4af28 */
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
  FUN_00a4aa5c(plVar3,plVar4,param_1);
                    /* try { // try from 00a4b028 to 00b4b02b has its CatchHandler @ 00a4b058 */
                    /* try { // try from 00a4b02c to 00b4b06f has its CatchHandler @ 00a4af28 */
  param_1[5] = param_1[5] + -1;
  return 0;
}

