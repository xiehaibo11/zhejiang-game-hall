
int lws_plat_context_late_destroy(long param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  
                    /* try { // try from 00aaf7ec to 00baf863 has its CatchHandler @ 00aaf580 */
  sVar1 = *(short *)(param_1 + 0xca6);
  if (*(long *)(param_1 + 0x828) != 0) {
    thunk_FUN_00aa8a48(*(long *)(param_1 + 0x828),0,"lws_free");
  }
  if (sVar1 != 0) {
    iVar2 = -(int)sVar1;
    piVar3 = (int *)(param_1 + 0x7c4);
    do {
      if (piVar3[-1] != 0) {
        close(piVar3[-1]);
      }
      if (*piVar3 != 0) {
        close(*piVar3);
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x1be;
    } while (iVar2 != 0);
  }
  iVar2 = *(int *)(param_1 + 0xc6c);
  if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 00aaf64c with catch @ 00aaf860
                       catch() { ... } // from try @ 00aaf6cc with catch @ 00aaf860 */
    _lws_log(1,"ZERO RANDOM FD\n");
    iVar2 = *(int *)(param_1 + 0xc6c);
  }
  if (iVar2 == -1) {
                    /* try { // try from 00aaf888 to 00bafb33 has its CatchHandler @ 00aaf888
                       catch() { ... } // from try @ 00aaf888 with catch @ 00aaf888
                       catch() { ... } // from try @ 00aafb3c with catch @ 00aaf888 */
    return -1;
  }
                    /* catch() { ... } // from try @ 00aaf5fc with catch @ 00aaf850 */
                    /* catch() { ... } // from try @ 00aaf5e4 with catch @ 00aaf854 */
                    /* catch() { ... } // from try @ 00aaf69c with catch @ 00aaf858 */
                    /* catch() { ... } // from try @ 00aaf684 with catch @ 00aaf85c */
  iVar2 = close(iVar2);
  return iVar2;
}

