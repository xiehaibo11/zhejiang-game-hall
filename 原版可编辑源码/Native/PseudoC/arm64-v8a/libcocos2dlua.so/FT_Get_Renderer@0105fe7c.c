
long FT_Get_Renderer(long param_1,int param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    for (lVar1 = *(long *)(param_1 + 0x118); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
                    /* try { // try from 0105fe94 to 0115feb3 has its CatchHandler @ 0105fe4c */
      if (*(int *)(*(long *)(lVar1 + 0x10) + 0x20) == param_2) {
        return *(long *)(lVar1 + 0x10);
      }
    }
  }
  return 0;
}

