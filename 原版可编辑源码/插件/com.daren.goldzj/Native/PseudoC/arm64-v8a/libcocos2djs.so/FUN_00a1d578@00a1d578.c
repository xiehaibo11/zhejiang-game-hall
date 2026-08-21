
void FUN_00a1d578(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (plVar3 = (long *)*param_1, plVar6 = plVar3, plVar5 = plVar3, plVar3 != (long *)0x0)) {
    while (plVar4 = plVar5, plVar2 = plVar6, plVar4 != (long *)0x0) {
      plVar5 = (long *)*plVar4;
      plVar6 = plVar4;
      if (plVar4[6] == 0) {
        plVar1 = plVar5;
        if (plVar3 != plVar4) {
          plVar1 = plVar3;
        }
        plVar6 = plVar5;
        if (plVar2 != plVar4) {
          *plVar2 = (long)plVar5;
          plVar6 = plVar2;
        }
                    /* try { // try from 00a1d5b0 to 00b1d5b7 has its CatchHandler @ 00a1d6cc */
                    /* try { // try from 00a1d5b8 to 00b1d5db has its CatchHandler @ 00a1d484 */
        (*(code *)PTR_free_01d1b748)(plVar4[7]);
        (*(code *)PTR_free_01d1b748)(plVar4[5]);
        (*(code *)PTR_free_01d1b748)(plVar4[3]);
                    /* try { // try from 00a1d5dc to 00b1d5f3 has its CatchHandler @ 00a1d72c */
        (*(code *)PTR_free_01d1b748)(plVar4[4]);
        (*(code *)PTR_free_01d1b748)(plVar4[1]);
        (*(code *)PTR_free_01d1b748)(plVar4[2]);
        (*(code *)PTR_free_01d1b748)(plVar4[10]);
        (*(code *)PTR_free_01d1b748)(plVar4[9]);
                    /* try { // try from 00a1d610 to 00b1d617 has its CatchHandler @ 00a1d6ec */
                    /* try { // try from 00a1d618 to 00b1d6bb has its CatchHandler @ 00a1d484 */
        (*(code *)PTR_free_01d1b748)(plVar4);
        param_1[3] = param_1[3] + -1;
        plVar3 = plVar1;
      }
    }
    *param_1 = plVar3;
  }
  return;
}

