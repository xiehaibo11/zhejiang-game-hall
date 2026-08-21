
long * FUN_01031d58(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  do {
                    /* try { // try from 01031d70 to 01131d93 has its CatchHandler @ 01033310 */
                    /* try { // try from 01031d94 to 01131dbf has its CatchHandler @ 01031838 */
    for (; ((plVar3 = (long *)param_1[0xd], *param_1 != *plVar3 || (param_1[1] != plVar3[1])) ||
           ((param_1[2] == param_1[4] && (param_1[3] == param_1[5]))));
        param_1 = (long *)param_1[0xc]) {
    }
    if ((param_1[7] != 0) && (plVar3[7] != 0)) {
      return param_1;
    }
    lVar4 = plVar3[7];
    plVar2 = param_1;
    while (plVar1 = plVar3, lVar4 == 0) {
                    /* try { // try from 01031dc0 to 01131de3 has its CatchHandler @ 0103330c */
      plVar3 = (long *)plVar1[0xd];
      plVar2 = plVar1;
      lVar4 = ((long *)plVar1[0xd])[7];
    }
    param_1 = plVar2;
    plVar3 = plVar1;
    if (plVar2[7] == 0) {
      do {
        param_1 = (long *)param_1[0xc];
                    /* try { // try from 01031de4 to 01131e0f has its CatchHandler @ 01031838 */
      } while (param_1[7] == 0);
      plVar3 = (long *)param_1[0xd];
    }
  } while (param_1[5] == plVar3[1]);
  if (*param_1 <= *plVar1) {
    plVar2 = param_1;
  }
                    /* try { // try from 01031e10 to 01131e33 has its CatchHandler @ 01033308 */
  return plVar2;
}

