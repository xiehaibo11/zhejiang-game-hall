
undefined8 FUN_00a361f0(long *param_1)

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
  if (lVar5 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(lVar6 + 0x430);
  if ((uVar1 | 4) == 5) {
    return 0;
  }
  cVar2 = *(char *)((long)param_1 + 0x3ca);
  lVar7 = *(long *)(lVar5 + 0x30);
                    /* try { // try from 00a3623c to 00b36253 has its CatchHandler @ 00a3631c */
  if ((cVar2 == '\0') && (*(char *)((long)param_1 + 0x3c7) != '\0')) {
    if (uVar1 == 4) {
      sVar3 = *(size_t *)(lVar6 + 0x8cf8);
      goto LAB_00a36244;
    }
                    /* try { // try from 00a36284 to 00b362ab has its CatchHandler @ 00a361ec */
    if (uVar1 == 3) {
                    /* try { // try from 00a36338 to 00b36387 has its CatchHandler @ 00a36338
                       catch() { ... } // from try @ 00a36338 with catch @ 00a36338
                       catch() { ... } // from try @ 00a363d0 with catch @ 00a36338
                       catch() { ... } // from try @ 00a36450 with catch @ 00a36338 */
      sVar3 = *(size_t *)(lVar5 + 8);
      goto LAB_00a36244;
    }
    if (uVar1 == 2) {
      sVar3 = *(size_t *)(lVar6 + 0x8cf8);
      if (sVar3 == 0xffffffffffffffff) {
        if (*(char **)(lVar6 + 0x290) == (char *)0x0) goto LAB_00a362b4;
                    /* try { // try from 00a362ac to 00b362bf has its CatchHandler @ 00a3631c */
        sVar3 = strlen(*(char **)(lVar6 + 0x290));
      }
      goto LAB_00a36244;
    }
LAB_00a362b4:
    *(undefined1 *)((long)param_1 + 0x3cb) = 0;
    sVar3 = 0xffffffffffffffff;
  }
  else {
    sVar3 = 0;
LAB_00a36244:
    *(undefined1 *)((long)param_1 + 0x3cb) = 0;
                    /* try { // try from 00a36258 to 00b36283 has its CatchHandler @ 00a36318 */
    if ((sVar3 != 0xffffffffffffffff) && ((long)sVar3 <= lVar7)) goto joined_r0x00a3625c;
  }
  if ((((*(long *)(lVar6 + 0x8c20) == 8) || (*(long *)(lVar6 + 0x8c20) == 0x20)) ||
      (*(long *)(lVar6 + 0x8c00) == 0x20)) || (*(long *)(lVar6 + 0x8c00) == 8)) {
                    /* try { // try from 00a362fc to 00b36303 has its CatchHandler @ 00a36318 */
                    /* try { // try from 00a36304 to 00b36337 has its CatchHandler @ 00a361ec */
    if ((((long)(sVar3 - lVar7) < 2000) || ((int)param_1[0x96] != 0)) || ((int)param_1[0x9a] != 0))
    {
      if (cVar2 != '\0') {
        return 0;
      }
                    /* catch() { ... } // from try @ 00a36258 with catch @ 00a36318
                       catch() { ... } // from try @ 00a362fc with catch @ 00a36318 */
                    /* catch() { ... } // from try @ 00a3623c with catch @ 00a3631c
                       catch() { ... } // from try @ 00a362ac with catch @ 00a3631c */
      *(undefined1 *)((long)param_1 + 0x3cb) = 1;
      FUN_00a38740(lVar6,"Rewind stream after send\n");
      return 0;
    }
    if (*(char *)((long)param_1 + 0x3b9) != '\0') {
      return 0;
    }
    FUN_00a38740(lVar6,"NTLM send, close instead of sending %ld bytes\n");
  }
  FUN_00a26ce8(param_1,2);
  *(undefined8 *)(lVar6 + 0x78) = 0;
joined_r0x00a3625c:
  if (lVar7 == 0) {
    return 0;
  }
  uVar4 = FUN_00a48534(param_1);
  return uVar4;
}

