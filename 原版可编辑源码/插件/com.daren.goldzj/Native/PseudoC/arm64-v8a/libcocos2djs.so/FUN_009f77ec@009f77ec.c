
void FUN_009f77ec(void *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = *(long **)((long)param_1 + 0x40);
  if ((long *)((long)param_1 + 0x20) == plVar1) {
                    /* try { // try from 009f781c to 00af7823 has its CatchHandler @ 009f7824 */
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_009f7828;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
                    /* catch() { ... } // from try @ 009f7748 with catch @ 009f7824
                       catch() { ... } // from try @ 009f781c with catch @ 009f7824
                       try { // try from 009f7824 to 00af7877 has its CatchHandler @ 009f73bc */
  (*pcVar2)();
LAB_009f7828:
                    /* catch() { ... } // from try @ 009f7588 with catch @ 009f7828
                       catch() { ... } // from try @ 009f76f4 with catch @ 009f7828 */
                    /* catch() { ... } // from try @ 009f750c with catch @ 009f782c */
                    /* catch() { ... } // from try @ 009f74b8 with catch @ 009f7830 */
  operator_delete(param_1);
  return;
}

