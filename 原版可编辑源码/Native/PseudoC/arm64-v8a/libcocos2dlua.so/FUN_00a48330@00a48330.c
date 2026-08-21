
void FUN_00a48330(long *param_1,int param_2,int *param_3)

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
  
                    /* try { // try from 00a48344 to 00b4838f has its CatchHandler @ 00a482d4 */
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
                    /* try { // try from 00a48390 to 00b483f3 has its CatchHandler @ 00a484c8 */
  plVar10 = (long *)(lVar8 + 0x208);
  iVar2 = (**(code **)(lVar8 + 0x8d10))(lVar7,1,uVar9,*(undefined8 *)(lVar8 + 0x8d18));
  if (iVar2 == 0x10000001) {
    if ((*(byte *)(param_1[0x80] + 0x7c) >> 4 & 1) == 0) {
                    /* try { // try from 00a483f4 to 00b4841f has its CatchHandler @ 00a482d4 */
      *(uint *)(lVar8 + 0x1e4) = *(uint *)(lVar8 + 0x1e4) | 0x20;
      if (*(char *)(lVar8 + 0x211) != '\0') {
        *plVar10 = *plVar10 + -10;
      }
      uVar4 = 0;
      *param_3 = 0;
      goto LAB_00a48504;
    }
                    /* try { // try from 00a48440 to 00b4844b has its CatchHandler @ 00a484c8 */
    pcVar6 = "Read callback asked for PAUSE when not supported!";
  }
  else {
    if (iVar2 == 0x10000000) {
      FUN_00a38a08(lVar8,"operation aborted by callback");
      *param_3 = 0;
      uVar4 = 0x2a;
      goto LAB_00a48504;
    }
                    /* try { // try from 00a48420 to 00b4842b has its CatchHandler @ 00a48498 */
    if ((ulong)(long)iVar2 <= uVar9) {
      if ((*(char *)(lVar8 + 0x213) == '\0') && (*(char *)(lVar8 + 0x211) != '\0')) {
        pcVar6 = "\n";
        if ((*(char *)(lVar8 + 0x613) == '\0') &&
           (pcVar6 = "\r\n", *(char *)(lVar8 + 0x3d2) != '\0')) {
          pcVar6 = "\n";
        }
                    /* try { // try from 00a48490 to 00b48497 has its CatchHandler @ 00a484c8 */
                    /* catch() { ... } // from try @ 00a48420 with catch @ 00a48498
                       try { // try from 00a48498 to 00b484e3 has its CatchHandler @ 00a482d4 */
        iVar3 = FUN_00a241ac(auStack_64,0xb,&DAT_013c64b7,iVar2,pcVar6);
        __dest = (void *)(*plVar10 - (long)iVar3);
        *plVar10 = (long)__dest;
        memcpy(__dest,auStack_64,(long)iVar3);
        lVar7 = *plVar10;
                    /* catch() { ... } // from try @ 00a4832c with catch @ 00a484c8
                       catch() { ... } // from try @ 00a48390 with catch @ 00a484c8
                       catch() { ... } // from try @ 00a48440 with catch @ 00a484c8
                       catch() { ... } // from try @ 00a48490 with catch @ 00a484c8 */
        sVar5 = strlen(pcVar6);
        memcpy((void *)(lVar7 + (iVar3 + iVar2)),pcVar6,sVar5);
        if (iVar2 == 0) {
          *(undefined1 *)(lVar8 + 0x1e8) = 1;
        }
        sVar5 = strlen(pcVar6);
        iVar2 = iVar3 + iVar2 + (int)sVar5;
      }
      uVar4 = 0;
      *param_3 = iVar2;
      goto LAB_00a48504;
    }
    *param_3 = 0;
    pcVar6 = "read function returned funny value";
  }
  FUN_00a38a08(lVar8,pcVar6);
                    /* try { // try from 00a4844c to 00b4848f has its CatchHandler @ 00a482d4 */
  uVar4 = 0x1a;
LAB_00a48504:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

