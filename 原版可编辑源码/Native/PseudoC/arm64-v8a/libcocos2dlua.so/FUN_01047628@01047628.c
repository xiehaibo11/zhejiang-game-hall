
undefined8 FUN_01047628(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
                    /* catch() { ... } // from try @ 010475f4 with catch @ 01047634 */
  plVar2 = *(long **)(param_1 + 0x30);
  plVar1 = (long *)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    return 1;
  }
  do {
    if (plVar2 == param_2) {
      *plVar1 = *param_2;
      *(int *)(param_1 + 0x6ec) = *(int *)(param_1 + 0x6ec) + -1;
      if (param_2[2] != 0) {
        thunk_FUN_0104b1cc(param_2[2],0,"lws_free");
      }
                    /* try { // try from 010476b4 to 0114783b has its CatchHandler @ 01047894 */
      thunk_FUN_0104b1cc(param_2,0,"lws_free");
      return 0;
    }
                    /* try { // try from 01047650 to 011476b3 has its CatchHandler @ 01047650
                       catch() { ... } // from try @ 01047650 with catch @ 01047650
                       catch() { ... } // from try @ 0104783c with catch @ 01047650 */
    plVar3 = (long *)*plVar2;
    plVar1 = plVar2;
    plVar2 = plVar3;
  } while (plVar3 != (long *)0x0);
  return 1;
}

