
undefined8 FUN_00a20808(long *param_1)

{
  uint uVar1;
  char cVar2;
  size_t sVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  lVar5 = *(long *)(lVar6 + 0x218);
                    /* catch() { ... } // from try @ 00a2075c with catch @ 00a20824 */
  if (lVar5 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(lVar6 + 0x430);
                    /* catch() { ... } // from try @ 00a206f8 with catch @ 00a20834 */
  if ((uVar1 | 4) == 5) {
    return 0;
  }
  cVar2 = *(char *)((long)param_1 + 0x3ca);
  lVar7 = *(long *)(lVar5 + 0x30);
  if ((cVar2 == '\0') && (*(char *)((long)param_1 + 0x3c7) != '\0')) {
    if (uVar1 == 4) {
      sVar3 = *(size_t *)(lVar6 + 0x8cf8);
      goto LAB_00a2085c;
    }
    if (uVar1 == 3) {
      sVar3 = *(size_t *)(lVar5 + 8);
      goto LAB_00a2085c;
    }
                    /* try { // try from 00a208a8 to 00b208ab has its CatchHandler @ 00a20920 */
    if (uVar1 == 2) {
                    /* try { // try from 00a208ac to 00b20933 has its CatchHandler @ 00a20848 */
      sVar3 = *(size_t *)(lVar6 + 0x8cf8);
      if (sVar3 == 0xffffffffffffffff) {
        if (*(char **)(lVar6 + 0x290) == (char *)0x0) goto LAB_00a208cc;
        sVar3 = strlen(*(char **)(lVar6 + 0x290));
      }
      goto LAB_00a2085c;
    }
LAB_00a208cc:
    *(undefined1 *)((long)param_1 + 0x3cb) = 0;
    sVar3 = 0xffffffffffffffff;
  }
  else {
    sVar3 = 0;
LAB_00a2085c:
    *(undefined1 *)((long)param_1 + 0x3cb) = 0;
    if ((sVar3 != 0xffffffffffffffff) && ((long)sVar3 <= lVar7)) goto joined_r0x00a20874;
  }
  if ((((*(long *)(lVar6 + 0x8c20) == 8) || (*(long *)(lVar6 + 0x8c20) == 0x20)) ||
      (*(long *)(lVar6 + 0x8c00) == 0x20)) || (*(long *)(lVar6 + 0x8c00) == 8)) {
                    /* catch() { ... } // from try @ 00a208a8 with catch @ 00a20920 */
    if ((((long)(sVar3 - lVar7) < 2000) || ((int)param_1[0x96] != 0)) || ((int)param_1[0x9a] != 0))
    {
      if (cVar2 != '\0') {
        return 0;
      }
      *(undefined1 *)((long)param_1 + 0x3cb) = 1;
      FUN_00a22d58(lVar6,"Rewind stream after send\n");
      return 0;
    }
    if (*(char *)((long)param_1 + 0x3b9) != '\0') {
      return 0;
    }
    FUN_00a22d58(lVar6,"NTLM send, close instead of sending %ld bytes\n");
  }
  FUN_00a11300(param_1,2);
  *(undefined8 *)(lVar6 + 0x78) = 0;
joined_r0x00a20874:
  if (lVar7 == 0) {
                    /* try { // try from 00a20848 to 00b208a7 has its CatchHandler @ 00a20848
                       catch() { ... } // from try @ 00a20848 with catch @ 00a20848
                       catch() { ... } // from try @ 00a208ac with catch @ 00a20848 */
    return 0;
  }
  uVar4 = FUN_00a31b4c(param_1);
  return uVar4;
}

