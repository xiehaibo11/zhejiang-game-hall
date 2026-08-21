
void FUN_00a3047c(long *param_1)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  size_t sVar5;
  ssize_t sVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined1 auStack_968 [128];
  undefined1 auStack_8e8 [128];
  undefined1 auStack_868 [2048];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  memset(auStack_8e8,0,0x80);
  memset(auStack_968,0,0x80);
  lVar10 = *param_1;
  lVar11 = *(long *)(lVar10 + 0x218);
  FUN_00a30984(lVar10,0x3c,lVar11 + 0x1cb8,
               (*(long *)(lVar11 + 0x1ec0) + 2) - *(long *)(lVar11 + 0x1eb8));
  pcVar9 = *(char **)(lVar11 + 0x1eb8);
                    /* try { // try from 00a304fc to 00b305eb has its CatchHandler @ 00a302c0 */
  *(char **)(lVar11 + 0x1eb8) = pcVar9 + 1;
  cVar2 = *pcVar9;
  if (cVar2 == '\'') {
                    /* catch() { ... } // from try @ 00a3034c with catch @ 00a3057c */
                    /* catch() { ... } // from try @ 00a30340 with catch @ 00a30580 */
                    /* catch() { ... } // from try @ 00a30320 with catch @ 00a30584 */
    FUN_00a0e7c4(auStack_868,0x800,&DAT_01a3dc29,0xff,0xfa,0x27,0);
    puVar13 = *(undefined8 **)(lVar11 + 0x1cb0);
    if (puVar13 == (undefined8 *)0x0) {
      uVar12 = 4;
    }
    else {
                    /* catch() { ... } // from try @ 00a30358 with catch @ 00a30594 */
      uVar12 = 4;
      do {
        pcVar9 = (char *)*puVar13;
        sVar5 = strlen(pcVar9);
        uVar1 = uVar12 + sVar5 + 1;
        if ((uVar1 < 0x7fa) &&
           (iVar4 = sscanf(pcVar9,"%127[^,],%127s",auStack_8e8,auStack_968), iVar4 != 0)) {
                    /* try { // try from 00a305ec to 00b3063f has its CatchHandler @ 00a305ec
                       catch() { ... } // from try @ 00a305ec with catch @ 00a305ec
                       catch() { ... } // from try @ 00a3074c with catch @ 00a305ec */
          FUN_00a0e7c4(auStack_868 + uVar12,0x800 - uVar12,"%c%s%c%s",0,auStack_8e8,1,auStack_968);
          uVar12 = uVar1;
        }
        puVar13 = (undefined8 *)puVar13[1];
      } while (puVar13 != (undefined8 *)0x0);
    }
    FUN_00a0e7c4(auStack_868 + uVar12,0x800 - uVar12,&DAT_01a3dc2d,0xff,0xf0);
    sVar6 = send((int)param_1[0x4c],auStack_868,uVar12 + 2,0x4000);
    if (sVar6 < 0) {
      puVar7 = (undefined4 *)__errno();
      FUN_00a23020(lVar10,"Sending data failed (%d)",*puVar7);
    }
    FUN_00a30984(lVar10,0x3e,(ulong)auStack_868 | 2,uVar12);
  }
  else {
    if (cVar2 == '#') {
      pcVar9 = (char *)(lVar11 + 0x1c28);
      sVar5 = strlen(pcVar9);
                    /* try { // try from 00a30640 to 00b30657 has its CatchHandler @ 00a307c8 */
      uVar8 = 0x23;
    }
    else {
      if (cVar2 != '\x18') goto LAB_00a3071c;
      pcVar9 = (char *)(lVar11 + 0x1c08);
      sVar5 = strlen(pcVar9);
      uVar8 = 0x18;
    }
                    /* try { // try from 00a30660 to 00b3066b has its CatchHandler @ 00a307c4 */
    FUN_00a0e7c4(auStack_868,0x800,"%c%c%c%c%s%c%c",0xff,0xfa,uVar8,0,pcVar9,0xff,0xf0);
                    /* try { // try from 00a3066c to 00b30677 has its CatchHandler @ 00a307c0 */
    sVar6 = send((int)param_1[0x4c],auStack_868,sVar5 + 6,0x4000);
                    /* try { // try from 00a30678 to 00b3074b has its CatchHandler @ 00a307d8 */
    if (sVar6 < 0) {
      puVar7 = (undefined4 *)__errno();
      FUN_00a23020(lVar10,"Sending data failed (%d)",*puVar7);
    }
    FUN_00a30984(lVar10,0x3e,(ulong)auStack_868 | 2,sVar5 + 4);
  }
LAB_00a3071c:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a3074c to 00b3082f has its CatchHandler @ 00a305ec */
    __stack_chk_fail();
  }
  return;
}

