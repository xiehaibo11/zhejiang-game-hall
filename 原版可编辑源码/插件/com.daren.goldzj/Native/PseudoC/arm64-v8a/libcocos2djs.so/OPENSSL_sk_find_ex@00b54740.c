
ulong OPENSSL_sk_find_ex(int *param_1,long param_2)

{
  ulong uVar1;
  void *pvVar2;
  long local_28;
  
  if (param_1 != (int *)0x0) {
                    /* try { // try from 00b54760 to 00c5484b has its CatchHandler @ 00b54760
                       catch() { ... } // from try @ 00b54760 with catch @ 00b54760
                       catch() { ... } // from try @ 00b5489c with catch @ 00b54760 */
    if (*(__compar_fn_t *)(param_1 + 8) == (__compar_fn_t)0x0) {
      if (0 < *param_1) {
        uVar1 = 0;
        do {
          if (*(long *)(*(long *)(param_1 + 2) + uVar1 * 8) == param_2) {
            return uVar1;
          }
          uVar1 = uVar1 + 1;
        } while ((long)uVar1 < (long)*param_1);
      }
    }
    else {
      local_28 = param_2;
      if (param_1[4] == 0) {
        qsort(*(void **)(param_1 + 2),(long)*param_1,8,*(__compar_fn_t *)(param_1 + 8));
        param_1[4] = 1;
      }
      if ((param_2 != 0) &&
         (pvVar2 = OBJ_bsearch_ex_(&local_28,*(void **)(param_1 + 2),*param_1,8,
                                   *(cmp **)(param_1 + 8),1), pvVar2 != (void *)0x0)) {
        return (ulong)((long)pvVar2 - *(long *)(param_1 + 2)) >> 3;
      }
    }
  }
  return 0xffffffff;
}

