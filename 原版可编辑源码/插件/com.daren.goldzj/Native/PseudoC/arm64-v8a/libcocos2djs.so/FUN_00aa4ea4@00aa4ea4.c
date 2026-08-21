
undefined8 FUN_00aa4ea4(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)(param_1 + 0x30);
  plVar1 = (long *)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
                    /* catch() { ... } // from try @ 00aa4e30 with catch @ 00aa4ee4
                       catch() { ... } // from try @ 00aa4edc with catch @ 00aa4ee4
                       try { // try from 00aa4ee4 to 00ba4f47 has its CatchHandler @ 00aa4d4c */
    return 1;
  }
  do {
    if (plVar2 == param_2) {
                    /* catch() { ... } // from try @ 00aa4e5c with catch @ 00aa4ef4 */
      *plVar1 = *param_2;
      *(int *)(param_1 + 0x6ec) = *(int *)(param_1 + 0x6ec) + -1;
      if (param_2[2] != 0) {
        thunk_FUN_00aa8a48(param_2[2],0,"lws_free");
      }
      thunk_FUN_00aa8a48(param_2,0,"lws_free");
      return 0;
    }
    plVar3 = (long *)*plVar2;
    plVar1 = plVar2;
    plVar2 = plVar3;
  } while (plVar3 != (long *)0x0);
                    /* try { // try from 00aa4edc to 00ba4ee3 has its CatchHandler @ 00aa4ee4 */
  return 1;
}

