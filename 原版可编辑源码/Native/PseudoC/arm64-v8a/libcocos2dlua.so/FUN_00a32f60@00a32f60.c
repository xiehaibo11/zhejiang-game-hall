
void FUN_00a32f60(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
                    /* catch() { ... } // from try @ 00a32ea0 with catch @ 00a32f80
                       catch() { ... } // from try @ 00a32f2c with catch @ 00a32f80 */
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
        (*(code *)PTR_free_01769a00)(plVar4[7]);
        (*(code *)PTR_free_01769a00)(plVar4[5]);
        (*(code *)PTR_free_01769a00)(plVar4[3]);
        (*(code *)PTR_free_01769a00)(plVar4[4]);
        (*(code *)PTR_free_01769a00)(plVar4[1]);
        (*(code *)PTR_free_01769a00)(plVar4[2]);
        (*(code *)PTR_free_01769a00)(plVar4[10]);
        (*(code *)PTR_free_01769a00)(plVar4[9]);
        (*(code *)PTR_free_01769a00)(plVar4);
        param_1[3] = param_1[3] + -1;
        plVar3 = plVar1;
      }
    }
    *param_1 = plVar3;
  }
  return;
}

