
void FUN_00a277ec(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
                    /* try { // try from 00a277f8 to 00b27893 has its CatchHandler @ 00a2758c */
  if ((*(long *)(param_1 + 0x60) != 0) &&
     ((*(long *)(param_1 + 0x8c50) != 0 || (*(long *)(param_1 + 0x8c58) != 0)))) {
    lVar3 = *(long *)(param_1 + 0x8c90);
    iVar1 = FUN_00a2bbf4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x80),param_1 + 0x8c60);
    if (iVar1 == 0) goto LAB_00a27870;
                    /* catch() { ... } // from try @ 00a277ac with catch @ 00a27844 */
                    /* catch() { ... } // from try @ 00a277c4 with catch @ 00a27848 */
    FUN_00a38740(param_1,"Internal error clearing splay node = %d\n",iVar1);
    lVar2 = *(long *)(lVar3 + 0x18);
    while (lVar2 != 0) {
      FUN_00a4aa5c(lVar3,*(undefined8 *)(lVar3 + 8),0);
LAB_00a27870:
      lVar2 = *(long *)(lVar3 + 0x18);
    }
                    /* catch() { ... } // from try @ 00a27778 with catch @ 00a27878 */
    *(long *)(param_1 + 0x8c50) = 0;
    *(undefined8 *)(param_1 + 0x8c58) = 0;
  }
  return;
}

