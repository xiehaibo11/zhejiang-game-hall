
long FUN_00a1d67c(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  
  plVar11 = *(long **)(param_1 + 0x938);
  if (((plVar11 == (long *)0x0) || (plVar11[3] == 0)) ||
     (plVar11 = (long *)*plVar11, plVar11 == (long *)0x0)) {
LAB_00a1d7a8:
    lVar8 = 0;
  }
  else {
                    /* try { // try from 00a1d6bc to 00b1d6c3 has its CatchHandler @ 00a1d6dc */
                    /* try { // try from 00a1d6c4 to 00b1d6cb has its CatchHandler @ 00a1d6cc */
                    /* catch() { ... } // from try @ 00a1d5b0 with catch @ 00a1d6cc
                       catch() { ... } // from try @ 00a1d6c4 with catch @ 00a1d6cc
                       try { // try from 00a1d6cc to 00b1d767 has its CatchHandler @ 00a1d484 */
    pcVar1 = "";
                    /* catch() { ... } // from try @ 00a1d528 with catch @ 00a1d6dc
                       catch() { ... } // from try @ 00a1d6bc with catch @ 00a1d6dc */
                    /* catch() { ... } // from try @ 00a1d610 with catch @ 00a1d6ec */
    lVar12 = 0;
    do {
      pcVar10 = (char *)plVar11[5];
      lVar8 = lVar12;
      if (pcVar10 != (char *)0x0) {
        pcVar2 = "#HttpOnly_";
        if (*(char *)((long)plVar11 + 0x5a) == '\0') {
          pcVar2 = pcVar1;
        }
        pcVar9 = pcVar1;
        if (((char)plVar11[8] != '\0') && (pcVar9 = ".", *pcVar10 == '.')) {
          pcVar9 = pcVar1;
        }
                    /* catch() { ... } // from try @ 00a1d5dc with catch @ 00a1d72c */
        pcVar3 = "TRUE";
        if ((char)plVar11[8] == '\0') {
          pcVar3 = "FALSE";
        }
        pcVar4 = "/";
        if ((char *)plVar11[3] != (char *)0x0) {
          pcVar4 = (char *)plVar11[3];
        }
        pcVar5 = "TRUE";
        if ((char)plVar11[0xb] == '\0') {
          pcVar5 = "FALSE";
        }
        pcVar6 = pcVar1;
        if ((char *)plVar11[2] != (char *)0x0) {
          pcVar6 = (char *)plVar11[2];
        }
        lVar7 = FUN_00a0e870("%s%s%s\t%s\t%s\t%s\t%ld\t%s\t%s",pcVar2,pcVar9,pcVar10,pcVar3,pcVar4,
                             pcVar5,plVar11[6],plVar11[1],pcVar6);
                    /* catch() { ... } // from try @ 00a1d810 with catch @ 00a1d768
                       catch() { ... } // from try @ 00a1d898 with catch @ 00a1d768
                       catch() { ... } // from try @ 00a1d8f4 with catch @ 00a1d768
                       catch() { ... } // from try @ 00a1d9a8 with catch @ 00a1d768 */
        if (lVar7 != 0) {
          lVar8 = FUN_00a16a58(lVar12,lVar7);
          if (lVar8 != 0) goto LAB_00a1d77c;
          (*(code *)PTR_free_01d1b748)(lVar7);
        }
        FUN_00a16c3c(lVar12);
        goto LAB_00a1d7a8;
      }
LAB_00a1d77c:
      plVar11 = (long *)*plVar11;
      lVar12 = lVar8;
    } while (plVar11 != (long *)0x0);
  }
  return lVar8;
}

