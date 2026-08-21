
/* rapidjson::internal::Grisu2(double, char*, int*, int*) */

void rapidjson::internal::Grisu2(double param_1,char *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  short sVar6;
  int iVar7;
  long lVar8;
  bool bVar9;
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
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  double dVar25;
  long local_48;
  ulong uStack_40;
  long local_38;
  ulong uStack_30;
  long local_28;
  
  lVar8 = tpidr_el0;
  bVar9 = ((ulong)param_1 >> 0x34 & 0x7ff) != 0;
  uVar4 = (ulong)param_1 & 0xfffffffffffff;
  if (bVar9) {
    uVar4 = (ulong)param_1 & 0xfffffffffffff | 0x10000000000000;
  }
  local_28 = *(long *)(lVar8 + 0x28);
  iVar2 = -0x432;
  if (bVar9) {
    iVar2 = ((uint)((ulong)param_1 >> 0x34) & 0x7ff) - 0x433;
  }
                    /* try { // try from 00924cb4 to 00a24cff has its CatchHandler @ 00924cb4
                       catch() { ... } // from try @ 00924cb4 with catch @ 00924cb4
                       catch() { ... } // from try @ 00924d04 with catch @ 00924cb4 */
  uVar10 = uVar4 >> 0x34;
  iVar7 = iVar2 + -1;
  uVar11 = uVar4 << 1 | 1;
  while (uVar10 == 0) {
    iVar7 = iVar7 + -1;
    uVar10 = uVar11 >> 0x34 & 1;
    uVar11 = uVar11 << 1;
  }
                    /* try { // try from 00924d00 to 00a24d03 has its CatchHandler @ 00924d58 */
                    /* try { // try from 00924d04 to 00a24d6b has its CatchHandler @ 00924cb4 */
  lVar5 = 0x3fffffffffffff;
  if (uVar4 != 0x10000000000000) {
    lVar5 = uVar4 * 2 + -1;
  }
  iVar3 = iVar2 + -2;
  if (uVar4 != 0x10000000000000) {
    iVar3 = iVar2 + -1;
  }
  dVar25 = (double)(-0x33 - iVar7) * 0.30102999566398114 + 347.0;
  uVar14 = uVar4 << (LZCOUNT(uVar4) & 0x3fU);
  iVar23 = (int)dVar25;
                    /* catch() { ... } // from try @ 00924d00 with catch @ 00924d58 */
  uVar1 = ((int)((uint)(0.0 < dVar25 - (double)iVar23) + iVar23) >> 3) + 1;
                    /* try { // try from 00924d6c to 00a24e23 has its CatchHandler @ 00924d6c
                       catch() { ... } // from try @ 00924d6c with catch @ 00924d6c
                       catch() { ... } // from try @ 00924ea4 with catch @ 00924d6c */
  uVar24 = *(ulong *)(GetCachedPowerByIndex(unsigned_long)::kCachedPowers_F + (ulong)uVar1 * 8);
  sVar6 = *(short *)(GetCachedPowerByIndex(unsigned_long)::kCachedPowers_E + (ulong)uVar1 * 2);
  uVar18 = lVar5 << ((ulong)((iVar3 - iVar7) + 10) & 0x3f);
  uVar15 = (ulong)(uint)((int)uVar11 << 10);
  uVar16 = uVar11 >> 0x16 & 0xffffffff;
  uVar21 = uVar14 >> 0x20;
  uVar14 = uVar14 & 0xffffffff;
  uVar19 = uVar18 >> 0x20;
  uVar18 = uVar18 & 0xffffffff;
  *param_4 = uVar1 * -8 + 0x15c;
  uVar10 = uVar24 >> 0x20;
  uVar24 = uVar24 & 0xffffffff;
  uVar12 = uVar10 * uVar14;
  uVar13 = uVar10 * uVar15;
  uVar11 = uVar18 * uVar10;
  uVar22 = uVar24 * uVar21;
  uVar17 = uVar24 * uVar16;
  uVar20 = uVar19 * uVar24;
                    /* try { // try from 00924e24 to 00a24e57 has its CatchHandler @ 00924f24 */
  uStack_30 = (ulong)((iVar2 - (int)LZCOUNT(uVar4)) + (int)sVar6 + 0x40);
  local_38 = uVar10 * uVar21 + (uVar22 >> 0x20) + (uVar12 >> 0x20) +
             ((uVar24 * uVar14 >> 0x20) + (uVar22 & 0xffffffff) + (uVar12 & 0xffffffff) + 0x80000000
             >> 0x20);
  local_48 = uVar10 * uVar16 + (uVar17 >> 0x20) + (uVar13 >> 0x20) +
             ((uVar24 * uVar15 >> 0x20) + (uVar17 & 0xffffffff) + (uVar13 & 0xfffffc00) + 0x80000000
             >> 0x20) + -1;
  uStack_40 = (ulong)(iVar7 + sVar6 + 0x36);
                    /* try { // try from 00924e58 to 00a24e6b has its CatchHandler @ 00924ef0 */
  DigitGen((DiyFp *)&local_38,(DiyFp *)&local_48,
           local_48 +
           ~(uVar19 * uVar10 + (uVar20 >> 0x20) + (uVar11 >> 0x20) +
            ((uVar18 * uVar24 >> 0x20) + (uVar20 & 0xffffffff) + (uVar11 & 0xffffffff) + 0x80000000
            >> 0x20)),param_2,param_3,param_4);
                    /* try { // try from 00924e70 to 00a24ea3 has its CatchHandler @ 00924ef4 */
  if (*(long *)(lVar8 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

