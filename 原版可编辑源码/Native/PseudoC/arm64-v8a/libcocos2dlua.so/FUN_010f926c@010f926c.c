
void FUN_010f926c(long *param_1,int param_2,uint param_3,long *param_4)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  uint *puVar6;
  byte bVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  uint auStack_570 [257];
  byte local_16c [260];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (3 < param_3) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x34;
    *(uint *)((long)puVar5 + 0x2c) = param_3;
    (*(code *)*puVar5)(param_1);
  }
  plVar2 = param_1 + 0x14;
  if (param_2 == 0) {
    plVar2 = param_1 + 0x18;
  }
  lVar11 = plVar2[(int)param_3];
  if (lVar11 == 0) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x34;
    *(uint *)((long)puVar5 + 0x2c) = param_3;
    (*(code *)*puVar5)(param_1);
  }
  lVar9 = *param_4;
  if (lVar9 == 0) {
    lVar9 = (**(code **)param_1[1])(param_1,1,0x500);
    *param_4 = lVar9;
  }
  uVar12 = 0;
  lVar10 = 1;
  do {
    bVar7 = *(byte *)(lVar11 + lVar10);
    if (0x100 < (int)(uVar12 + bVar7)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 9;
      (*(code *)*puVar5)(param_1);
    }
    if (bVar7 != 0) {
                    /* try { // try from 010f9364 to 011f939b has its CatchHandler @ 010f9364
                       catch() { ... } // from try @ 010f9364 with catch @ 010f9364
                       catch() { ... } // from try @ 010f93d4 with catch @ 010f9364 */
      memset(local_16c + (int)uVar12,(int)lVar10,(ulong)(bVar7 - 1) + 1);
      uVar12 = uVar12 + bVar7;
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 0x11);
  local_16c[(int)uVar12] = 0;
  uVar14 = (ulong)local_16c[0];
  if (uVar14 != 0) {
    uVar16 = 0;
    iVar17 = 0;
                    /* try { // try from 010f939c to 011f93bb has its CatchHandler @ 010f940c */
    uVar15 = uVar14;
    do {
      if (uVar15 == uVar14) {
                    /* try { // try from 010f93bc to 011f93d3 has its CatchHandler @ 010f9408 */
        puVar6 = auStack_570 + iVar17;
        pbVar8 = (byte *)(((ulong)local_16c | 1) + (long)iVar17);
        do {
          *puVar6 = uVar16;
          bVar7 = *pbVar8;
          uVar16 = uVar16 + 1;
          iVar17 = iVar17 + 1;
          puVar6 = puVar6 + 1;
          pbVar8 = pbVar8 + 1;
                    /* try { // try from 010f93d4 to 011f941f has its CatchHandler @ 010f9364 */
        } while (uVar15 == bVar7);
      }
      if (1L << (uVar15 & 0x3f) <= (long)(ulong)uVar16) {
        puVar5 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar5 + 5) = 9;
        (*(code *)*puVar5)(param_1);
      }
      bVar7 = local_16c[iVar17];
      uVar14 = (ulong)bVar7;
      uVar16 = uVar16 << 1;
      uVar15 = uVar15 + 1;
                    /* catch() { ... } // from try @ 010f93bc with catch @ 010f9408 */
    } while (bVar7 != 0);
  }
                    /* catch() { ... } // from try @ 010f939c with catch @ 010f940c */
  memset((void *)(lVar9 + 0x400),0,0x100);
                    /* try { // try from 010f9420 to 011f945b has its CatchHandler @ 010f9420
                       catch() { ... } // from try @ 010f9420 with catch @ 010f9420
                       catch() { ... } // from try @ 010f9498 with catch @ 010f9420 */
  bVar7 = 0xf;
  if (param_2 == 0) {
    bVar7 = 0xff;
  }
  if (0 < (int)uVar12) {
    uVar14 = (ulong)uVar12;
    pbVar8 = (byte *)(lVar11 + 0x11);
    puVar6 = auStack_570;
    pbVar13 = local_16c;
    do {
      bVar3 = *pbVar8;
      pbVar1 = (byte *)(lVar9 + (ulong)bVar3 + 0x400);
                    /* try { // try from 010f945c to 011f947f has its CatchHandler @ 010f94d0 */
      if ((bVar7 < bVar3) || (*pbVar1 != 0)) {
        puVar5 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar5 + 5) = 9;
        (*(code *)*puVar5)(param_1);
      }
                    /* try { // try from 010f9480 to 011f9497 has its CatchHandler @ 010f94cc */
      uVar14 = uVar14 - 1;
      pbVar8 = pbVar8 + 1;
      *(uint *)(lVar9 + (ulong)bVar3 * 4) = *puVar6;
      *pbVar1 = *pbVar13;
      puVar6 = puVar6 + 1;
      pbVar13 = pbVar13 + 1;
    } while (uVar14 != 0);
  }
                    /* try { // try from 010f9498 to 011f94e3 has its CatchHandler @ 010f9420 */
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 010f9480 with catch @ 010f94cc */
  __stack_chk_fail();
}

