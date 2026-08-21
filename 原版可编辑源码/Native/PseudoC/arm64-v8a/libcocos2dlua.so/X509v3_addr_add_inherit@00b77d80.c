
undefined8 X509v3_addr_add_inherit(void)

{
  long lVar1;
  ASN1_NULL *pAVar2;
  int *piVar3;
  
  lVar1 = FUN_00b77dfc();
  if (lVar1 == 0) {
    return 0;
  }
  piVar3 = *(int **)(lVar1 + 8);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  if (*piVar3 == 0) {
                    /* try { // try from 00b77dcc to 00c77de3 has its CatchHandler @ 00b77f3c */
    if (*(long *)(piVar3 + 2) != 0) {
      return 1;
    }
  }
  else {
    if ((*piVar3 == 1) && (*(long *)(piVar3 + 2) != 0)) {
      return 0;
    }
                    /* try { // try from 00b77dc0 to 00c77dcb has its CatchHandler @ 00b77f4c */
    if (*(long *)(piVar3 + 2) != 0) goto LAB_00b77de8;
  }
  pAVar2 = ASN1_NULL_new();
  *(ASN1_NULL **)(*(long *)(lVar1 + 8) + 8) = pAVar2;
  if (pAVar2 == (ASN1_NULL *)0x0) {
    return 0;
  }
                    /* try { // try from 00b77de4 to 00c77e37 has its CatchHandler @ 00b77d30 */
  piVar3 = *(int **)(lVar1 + 8);
LAB_00b77de8:
  *piVar3 = 0;
  return 1;
}

