
void FUN_00a31948(long *param_1,int param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  size_t sVar5;
  char *pcVar6;
  void *__dest;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 auStack_64 [12];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar9 = (ulong)param_2;
  lVar8 = *param_1;
  if (*(char *)(lVar8 + 0x211) == '\0') {
    lVar7 = *(long *)(lVar8 + 0x208);
  }
  else {
    uVar9 = uVar9 - 0xc;
    lVar7 = *(long *)(lVar8 + 0x208) + 10;
    *(long *)(lVar8 + 0x208) = lVar7;
  }
  plVar10 = (long *)(lVar8 + 0x208);
  iVar2 = (**(code **)(lVar8 + 0x8d10))(lVar7,1,uVar9,*(undefined8 *)(lVar8 + 0x8d18));
                    /* catch() { ... } // from try @ 00a318c8 with catch @ 00a319c8 */
  if (iVar2 == 0x10000001) {
    if ((*(byte *)(param_1[0x80] + 0x7c) >> 4 & 1) == 0) {
      *(uint *)(lVar8 + 0x1e4) = *(uint *)(lVar8 + 0x1e4) | 0x20;
      if (*(char *)(lVar8 + 0x211) != '\0') {
                    /* try { // try from 00a31a28 to 00b31a3f has its CatchHandler @ 00a31a70 */
        *plVar10 = *plVar10 + -10;
      }
      uVar4 = 0;
      *param_3 = 0;
      goto LAB_00a31b1c;
    }
    pcVar6 = "Read callback asked for PAUSE when not supported!";
  }
  else {
    if (iVar2 == 0x10000000) {
                    /* try { // try from 00a319e4 to 00b31a27 has its CatchHandler @ 00a319e4
                       catch() { ... } // from try @ 00a319e4 with catch @ 00a319e4
                       catch() { ... } // from try @ 00a31a40 with catch @ 00a319e4 */
      FUN_00a23020(lVar8,"operation aborted by callback");
      *param_3 = 0;
      uVar4 = 0x2a;
      goto LAB_00a31b1c;
    }
                    /* try { // try from 00a31a40 to 00b31a83 has its CatchHandler @ 00a319e4 */
    if ((ulong)(long)iVar2 <= uVar9) {
                    /* catch() { ... } // from try @ 00a31a28 with catch @ 00a31a70 */
      if ((*(char *)(lVar8 + 0x213) == '\0') && (*(char *)(lVar8 + 0x211) != '\0')) {
                    /* catch() { ... } // from try @ 00a31aec with catch @ 00a31a84 */
        pcVar6 = "\n";
        if ((*(char *)(lVar8 + 0x613) == '\0') &&
           (pcVar6 = "\r\n", *(char *)(lVar8 + 0x3d2) != '\0')) {
          pcVar6 = "\n";
        }
        iVar3 = FUN_00a0e7c4(auStack_64,0xb,&DAT_01893b7b,iVar2,pcVar6);
        __dest = (void *)(*plVar10 - (long)iVar3);
        *plVar10 = (long)__dest;
        memcpy(__dest,auStack_64,(long)iVar3);
        lVar7 = *plVar10;
                    /* try { // try from 00a31ae0 to 00b31aeb has its CatchHandler @ 00a31b90 */
        sVar5 = strlen(pcVar6);
                    /* try { // try from 00a31aec to 00b31bab has its CatchHandler @ 00a31a84 */
        memcpy((void *)(lVar7 + (iVar3 + iVar2)),pcVar6,sVar5);
        if (iVar2 == 0) {
          *(undefined1 *)(lVar8 + 0x1e8) = 1;
        }
        sVar5 = strlen(pcVar6);
        iVar2 = iVar3 + iVar2 + (int)sVar5;
      }
      uVar4 = 0;
      *param_3 = iVar2;
      goto LAB_00a31b1c;
    }
    *param_3 = 0;
    pcVar6 = "read function returned funny value";
  }
  FUN_00a23020(lVar8,pcVar6);
  uVar4 = 0x1a;
LAB_00a31b1c:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

