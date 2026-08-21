
undefined8 FUN_00a3491c(void *param_1,size_t param_2,void *param_3,size_t param_4)

{
  int iVar1;
  
  if (param_2 == param_4) {
                    /* catch() { ... } // from try @ 00a34780 with catch @ 00a3492c */
                    /* catch() { ... } // from try @ 00a34774 with catch @ 00a34930 */
                    /* catch() { ... } // from try @ 00a34754 with catch @ 00a34934 */
    iVar1 = memcmp(param_1,param_3,param_2);
    if (iVar1 == 0) {
      return 1;
    }
  }
                    /* catch() { ... } // from try @ 00a3478c with catch @ 00a34944 */
  return 0;
}

