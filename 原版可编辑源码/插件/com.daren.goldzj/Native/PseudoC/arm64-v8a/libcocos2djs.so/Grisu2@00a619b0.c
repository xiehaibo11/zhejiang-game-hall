
/* rapidjson::internal::Grisu2(double, char*, int*, int*) */

void rapidjson::internal::Grisu2(double param_1,char *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  double dVar23;
  long local_48;
  ulong local_40;
  long local_38;
  ulong uStack_30;
  long local_28;
  
  lVar7 = tpidr_el0;
  bVar8 = ((ulong)param_1 >> 0x34 & 0x7ff) != 0;
  uVar10 = (ulong)param_1 & 0xfffffffffffff;
  if (bVar8) {
    uVar10 = (ulong)param_1 & 0xfffffffffffff | 0x10000000000000;
  }
                    /* catch() { ... } // from try @ 00a618c0 with catch @ 00a619e0 */
  local_28 = *(long *)(lVar7 + 0x28);
                    /* catch() { ... } // from try @ 00a618b4 with catch @ 00a619e4 */
                    /* catch() { ... } // from try @ 00a618c8 with catch @ 00a619ec */
  iVar2 = -0x432;
  if (bVar8) {
    iVar2 = ((uint)((ulong)param_1 >> 0x34) & 0x7ff) - 0x433;
  }
                    /* try { // try from 00a61a08 to 00b61a5f has its CatchHandler @ 00a61a08
                       catch() { ... } // from try @ 00a61a08 with catch @ 00a61a08
                       catch() { ... } // from try @ 00a61c00 with catch @ 00a61a08 */
  uVar9 = uVar10 >> 0x34;
  iVar5 = iVar2 + -1;
  uVar11 = uVar10 << 1 | 1;
  while (uVar9 == 0) {
    iVar5 = iVar5 + -1;
    uVar9 = uVar11 >> 0x34 & 1;
    uVar11 = uVar11 << 1;
  }
  lVar6 = 0x3fffffffffffff;
  if (uVar10 != 0x10000000000000) {
    lVar6 = uVar10 * 2 + -1;
  }
                    /* try { // try from 00a61a60 to 00b61a67 has its CatchHandler @ 00a61c90 */
                    /* try { // try from 00a61a6c to 00b61a73 has its CatchHandler @ 00a61c88 */
                    /* try { // try from 00a61a74 to 00b61a83 has its CatchHandler @ 00a61c80 */
  dVar23 = (double)(-0x33 - iVar5) * 0.30102999566398114 + 347.0;
  iVar21 = (int)dVar23;
  iVar3 = iVar2 + -2;
  if (uVar10 != 0x10000000000000) {
    iVar3 = iVar2 + -1;
  }
                    /* try { // try from 00a61a8c to 00b61ac7 has its CatchHandler @ 00a61c98 */
  uVar1 = ((int)((uint)(0.0 < dVar23 - (double)iVar21) + iVar21) >> 3) + 1;
  uVar22 = *(ulong *)(GetCachedPowerByIndex(unsigned_long)::kCachedPowers_F + (ulong)uVar1 * 8);
  sVar4 = *(short *)(GetCachedPowerByIndex(unsigned_long)::kCachedPowers_E + (ulong)uVar1 * 2);
  uVar13 = uVar10 << (LZCOUNT(uVar10) & 0x3fU);
                    /* try { // try from 00a61ac8 to 00b61ad7 has its CatchHandler @ 00a61c7c */
  uVar14 = lVar6 << ((ulong)(uint)((iVar3 + 10) - iVar5) & 0x3f);
  uVar19 = uVar11 >> 0x16 & 0xffffffff;
  lVar6 = (uVar11 & 0x3fffff) * 0x400;
                    /* try { // try from 00a61ad8 to 00b61bff has its CatchHandler @ 00a61ca8 */
  uVar17 = uVar13 >> 0x20;
  uVar13 = uVar13 & 0xffffffff;
  uVar15 = uVar14 >> 0x20;
  uVar14 = uVar14 & 0xffffffff;
  *param_4 = uVar1 * -8 + 0x15c;
  uVar9 = uVar22 >> 0x20;
  uVar22 = uVar22 & 0xffffffff;
  uStack_30 = (ulong)(uint)(((iVar2 + 0x40) - (int)LZCOUNT(uVar10)) + (int)sVar4);
  uVar11 = uVar9 * uVar13;
  uVar12 = uVar9 * lVar6;
  uVar10 = uVar14 * uVar9;
  local_40 = (ulong)(iVar5 + sVar4 + 0x36);
  uVar18 = uVar22 * uVar17;
  uVar20 = uVar22 * uVar19;
  uVar16 = uVar15 * uVar22;
  local_38 = uVar9 * uVar17 + (uVar18 >> 0x20) + (uVar11 >> 0x20) +
             ((uVar22 * uVar13 >> 0x20) + (uVar18 & 0xffffffff) + (uVar11 & 0xffffffff) + 0x80000000
             >> 0x20);
  local_48 = uVar9 * uVar19 + (uVar20 >> 0x20) + (uVar12 >> 0x20) +
             ((uVar22 * lVar6 >> 0x20) + (uVar20 & 0xffffffff) + (uVar12 & 0xfffffc00) + 0x80000000
             >> 0x20) + -1;
  DigitGen((DiyFp *)&local_38,(DiyFp *)&local_48,
           local_48 +
           ~(uVar15 * uVar9 + (uVar16 >> 0x20) + (uVar10 >> 0x20) +
            ((uVar14 * uVar22 >> 0x20) + (uVar16 & 0xffffffff) + (uVar10 & 0xffffffff) + 0x80000000
            >> 0x20)),param_2,param_3,param_4);
  if (*(long *)(lVar7 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

