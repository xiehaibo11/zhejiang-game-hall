
int * ssl3_comp_find(long param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
                    /* catch() { ... } // from try @ 00ac4e74 with catch @ 00ac4fe4 */
  if (((param_1 != 0) && (param_2 != 0)) && (iVar1 = OPENSSL_sk_num(param_1), 0 < iVar1)) {
                    /* catch() { ... } // from try @ 00ac4efc with catch @ 00ac4fe8 */
    iVar3 = 0;
    do {
                    /* catch() { ... } // from try @ 00ac4ed0 with catch @ 00ac4fec */
      piVar2 = (int *)OPENSSL_sk_value(param_1,iVar3);
      if (*piVar2 == param_2) {
        return piVar2;
      }
      iVar3 = iVar3 + 1;
                    /* catch() { ... } // from try @ 00ac4d5c with catch @ 00ac500c */
    } while (iVar3 < iVar1);
  }
                    /* catch() { ... } // from try @ 00ac4f44 with catch @ 00ac5014 */
  return (int *)0x0;
}

