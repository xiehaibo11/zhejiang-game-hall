
void FUN_010f94d0(long *param_1,undefined8 *param_2,long param_3)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  char *pcVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  char *pcVar18;
  uint auStack_898 [257];
  int local_494 [256];
  char cStack_91;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
                    /* catch() { ... } // from try @ 010f945c with catch @ 010f94d0 */
                    /* try { // try from 010f94e4 to 011f951b has its CatchHandler @ 010f94e4
                       catch() { ... } // from try @ 010f94e4 with catch @ 010f94e4
                       catch() { ... } // from try @ 010f9548 with catch @ 010f94e4 */
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 010f951c to 011f9547 has its CatchHandler @ 010f957c */
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  memset(local_494,0,0x404);
  memset(auStack_898,0xff,0x404);
  *(undefined8 *)(param_3 + 0x800) = 1;
                    /* try { // try from 010f9548 to 011f958f has its CatchHandler @ 010f94e4 */
  while( true ) {
    lVar11 = 0;
    uVar7 = 0xffffffff;
    lVar13 = 1000000000;
    do {
      lVar16 = *(long *)(param_3 + lVar11 * 8);
      uVar4 = (uint)uVar7;
      if (lVar16 != 0 && lVar16 <= lVar13) {
        uVar4 = (uint)lVar11;
      }
      uVar7 = (ulong)uVar4;
      lVar11 = lVar11 + 1;
      if (lVar16 != 0 && lVar16 <= lVar13) {
        lVar13 = lVar16;
      }
    } while (lVar11 != 0x101);
    uVar17 = 0;
    uVar12 = 0xffffffff;
    lVar11 = 1000000000;
    do {
      lVar13 = *(long *)(param_3 + uVar17 * 8);
      bVar3 = uVar7 != uVar17;
      uVar9 = (uint)uVar12;
      if (bVar3 && (lVar13 != 0 && lVar13 <= lVar11)) {
        uVar9 = (uint)uVar17;
      }
      uVar12 = (ulong)uVar9;
      uVar17 = uVar17 + 1;
      if (bVar3 && (lVar13 != 0 && lVar13 <= lVar11)) {
        lVar11 = lVar13;
      }
    } while (uVar17 != 0x101);
    if ((int)uVar9 < 0) break;
    uVar15 = -(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3;
    uVar17 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3;
    *(long *)(param_3 + uVar17) = *(long *)(param_3 + uVar17) + *(long *)(param_3 + uVar15);
    *(undefined8 *)(param_3 + uVar15) = 0;
    do {
      uVar17 = uVar7;
      uVar15 = -(uVar17 >> 0x1f) & 0xfffffffc00000000 | uVar17 << 2;
                    /* catch() { ... } // from try @ 010f951c with catch @ 010f957c */
      *(int *)((long)local_494 + uVar15) = *(int *)((long)local_494 + uVar15) + 1;
      uVar7 = (ulong)*(uint *)((long)auStack_898 + uVar15);
    } while (-1 < (int)*(uint *)((long)auStack_898 + uVar15));
    auStack_898[(int)uVar17] = uVar9;
    do {
      uVar7 = -(uVar12 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2;
      uVar12 = (ulong)*(uint *)((long)auStack_898 + uVar7);
      *(int *)((long)local_494 + uVar7) = *(int *)((long)local_494 + uVar7) + 1;
    } while (-1 < (int)*(uint *)((long)auStack_898 + uVar7));
  }
  lVar11 = 0;
  do {
    iVar5 = *(int *)((long)local_494 + lVar11);
    if (iVar5 != 0) {
      if (0x20 < iVar5) {
        puVar8 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar8 + 5) = 0x28;
        (*(code *)*puVar8)(param_1);
      }
      *(char *)((long)&local_90 + (long)iVar5) = *(char *)((long)&local_90 + (long)iVar5) + '\x01';
    }
    lVar11 = lVar11 + 4;
  } while (lVar11 != 0x404);
  lVar11 = 0x2000000000;
  pcVar14 = (char *)((long)&uStack_78 + 7);
  lVar13 = 0x20;
  do {
    cVar1 = *(char *)((long)&local_90 + lVar13);
    while (pcVar18 = pcVar14, lVar16 = lVar11, cVar1 != '\0') {
      do {
        pcVar18 = pcVar18 + -1;
        lVar16 = lVar16 + -0x100000000;
      } while (*pcVar18 == '\0');
      *(char *)((long)&local_90 + lVar13) = cVar1 + -2;
      (&cStack_91)[lVar13] = (&cStack_91)[lVar13] + '\x01';
      lVar16 = lVar16 >> 0x20;
      *(char *)((long)&local_90 + lVar16) = *(char *)((long)&local_90 + lVar16) + '\x02';
      *pcVar18 = *pcVar18 + -1;
      cVar1 = *(char *)((long)&local_90 + lVar13);
    }
    lVar11 = lVar11 + -0x100000000;
    pcVar14 = pcVar14 + -1;
    bVar3 = 0x11 < lVar13;
    lVar13 = lVar13 + -1;
  } while (bVar3);
  pcVar14 = (char *)((long)&local_80 + 1);
  do {
    pcVar14 = pcVar14 + -1;
  } while (*pcVar14 == '\0');
  *pcVar14 = *pcVar14 + -1;
  iVar5 = 0;
  *(undefined1 *)(param_2 + 2) = (undefined1)local_80;
  iVar10 = 1;
  param_2[1] = uStack_88;
  *param_2 = local_90;
  do {
    lVar11 = 0;
    do {
      if (local_494[lVar11] == iVar10) {
        lVar13 = (long)iVar5;
        iVar5 = iVar5 + 1;
        *(char *)((long)param_2 + lVar13 + 0x11) = (char)lVar11;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0x100);
    iVar10 = iVar10 + 1;
  } while (iVar10 != 0x21);
  *(undefined4 *)((long)param_2 + 0x114) = 0;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
                    /* try { // try from 010f9784 to 011f97b3 has its CatchHandler @ 010f9784
                       catch() { ... } // from try @ 010f9784 with catch @ 010f9784
                       catch() { ... } // from try @ 010f97c0 with catch @ 010f9784 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

