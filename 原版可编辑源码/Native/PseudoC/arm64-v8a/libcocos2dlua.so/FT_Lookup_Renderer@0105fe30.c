
long FT_Lookup_Renderer(long param_1,int param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x118);
    if (param_3 != (long *)0x0) {
      if (*param_3 != 0) {
        lVar2 = *(long *)(*param_3 + 8);
      }
      *param_3 = 0;
    }
                    /* try { // try from 0105fe4c to 0115fe6f has its CatchHandler @ 0105fe4c
                       catch() { ... } // from try @ 0105fe4c with catch @ 0105fe4c
                       catch() { ... } // from try @ 0105fe94 with catch @ 0105fe4c */
    for (; lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar1 = *(long *)(lVar2 + 0x10);
      if (*(int *)(lVar1 + 0x20) == param_2) {
                    /* try { // try from 0105fe70 to 0115fe93 has its CatchHandler @ 0105fea0 */
        if (param_3 != (long *)0x0) {
          *param_3 = lVar2;
          return lVar1;
        }
        return lVar1;
      }
    }
  }
  return 0;
}

