
void locale_charset(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  long lVar6;
  void *__dest;
  FILE *__stream;
  ulong uVar7;
  char *pcVar8;
  size_t sVar9;
  ulong uVar10;
  char acStack_d0 [52];
  char acStack_9c [52];
  long local_68;
  
  lVar2 = tpidr_el0;
                    /* try { // try from 00a228b0 to 00b228bb has its CatchHandler @ 00a22928 */
  local_68 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00a228bc to 00b2295f has its CatchHandler @ 00a22838 */
  pcVar4 = DAT_01782388;
  if (DAT_01782388 != (char *)0x0) goto LAB_00a22b14;
  pcVar4 = getenv("CHARSETALIASDIR");
  if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
    pcVar4 = "c";
  }
  sVar5 = strlen(pcVar4);
  lVar6 = __strlen_chk(&DAT_013c1555,0xe);
  if (sVar5 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (ulong)(pcVar4[sVar5 - 1] != '/');
  }
                    /* catch() { ... } // from try @ 00a228b0 with catch @ 00a22928 */
  __dest = malloc(lVar6 + 1U + sVar5 + uVar10);
  if (__dest == (void *)0x0) {
                    /* try { // try from 00a22a9c to 00b22aab has its CatchHandler @ 00a22b10 */
    pcVar4 = "";
    DAT_01782388 = pcVar4;
    goto LAB_00a22b14;
  }
  memcpy(__dest,pcVar4,sVar5);
  if (uVar10 != 0) {
    *(undefined1 *)((long)__dest + sVar5) = 0x2f;
  }
  memcpy((void *)((long)__dest + uVar10 + sVar5),&DAT_013c1555,lVar6 + 1U);
  iVar3 = __open_2(__dest,0x8000);
  if (-1 < iVar3) {
    __stream = fdopen(iVar3,"r");
    if (__stream != (FILE *)0x0) {
      lVar6 = 0;
      pcVar4 = (char *)0x0;
switchD_00a229c0_caseD_9:
      iVar3 = getc_unlocked(__stream);
      switch(iVar3) {
      default:
        ungetc(iVar3,__stream);
        iVar3 = fscanf(__stream,"%50s %50s",acStack_9c,acStack_d0);
        if (iVar3 < 2) goto switchD_00a229c0_caseD_ffffffff;
        uVar10 = __strlen_chk(acStack_9c,0x33);
        uVar7 = __strlen_chk(acStack_d0,0x33);
        lVar1 = uVar10 + uVar7 + 2;
        if (lVar6 == 0) {
          pcVar8 = malloc(uVar10 + uVar7 + 3);
          lVar6 = lVar1;
        }
        else {
          lVar6 = lVar1 + lVar6;
          pcVar8 = realloc(pcVar4,lVar6 + 1);
        }
                    /* try { // try from 00a22a64 to 00b22a9b has its CatchHandler @ 00a22a64
                       catch() { ... } // from try @ 00a22a64 with catch @ 00a22a64
                       catch() { ... } // from try @ 00a22aac with catch @ 00a22a64 */
        if (pcVar8 == (char *)0x0) {
          free(pcVar4);
          lVar6 = 0;
          pcVar4 = (char *)0x0;
          goto switchD_00a229c0_caseD_ffffffff;
        }
        strcpy(pcVar8 + ~uVar7 + lVar6 + ~uVar10,acStack_9c);
        strcpy(pcVar8 + ~uVar7 + lVar6,acStack_d0);
        pcVar4 = pcVar8;
      case 9:
      case 10:
      case 0x20:
        goto switchD_00a229c0_caseD_9;
      case 0x23:
        do {
          iVar3 = getc_unlocked(__stream);
          if (iVar3 == -1) goto switchD_00a229c0_caseD_ffffffff;
        } while (iVar3 != 10);
        goto switchD_00a229c0_caseD_9;
      case -1:
        goto switchD_00a229c0_caseD_ffffffff;
      }
    }
    close(iVar3);
                    /* try { // try from 00a22aac to 00b22b2b has its CatchHandler @ 00a22a64 */
  }
LAB_00a22ad4:
  pcVar4 = "";
  goto LAB_00a22adc;
switchD_00a229c0_caseD_ffffffff:
  fclose(__stream);
  if (lVar6 == 0) goto LAB_00a22ad4;
  pcVar4[lVar6] = '\0';
LAB_00a22adc:
  free(__dest);
  DAT_01782388 = pcVar4;
LAB_00a22b14:
  do {
    if (*pcVar4 == '*') {
      if (pcVar4[1] == '\0') {
        sVar5 = strlen(pcVar4);
        pcVar4 = pcVar4 + sVar5 + 1;
        goto LAB_00a22b40;
      }
    }
    else if (*pcVar4 == '\0') {
      pcVar4 = "";
                    /* catch() { ... } // from try @ 00a22b68 with catch @ 00a22b2c */
LAB_00a22b40:
      pcVar8 = "ASCII";
      if (*pcVar4 != '\0') {
        pcVar8 = pcVar4;
      }
                    /* try { // try from 00a22b60 to 00b22b67 has its CatchHandler @ 00a22bac */
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00a22b68 to 00b22bc7 has its CatchHandler @ 00a22b2c */
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pcVar8);
    }
    sVar5 = strlen(pcVar4);
    sVar9 = strlen(pcVar4 + sVar5 + 1);
                    /* catch() { ... } // from try @ 00a22a9c with catch @ 00a22b10 */
    pcVar4 = pcVar4 + sVar5 + 1 + sVar9 + 1;
  } while( true );
}

