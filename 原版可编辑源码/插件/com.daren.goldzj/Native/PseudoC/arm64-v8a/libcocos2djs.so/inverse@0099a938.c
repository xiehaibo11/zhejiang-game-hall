
/* cocos2d::Mat4::inverse() */

void __thiscall cocos2d::Mat4::inverse(Mat4 *this)

{
  long lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  fVar28 = *(float *)(this + 0x10);
  fVar21 = *(float *)(this + 0x14);
  fVar26 = *(float *)this;
  fVar23 = *(float *)(this + 4);
  fVar4 = *(float *)(this + 0x18);
  fVar22 = *(float *)(this + 0x1c);
  fVar20 = *(float *)(this + 8);
  fVar24 = *(float *)(this + 0xc);
  fVar19 = *(float *)(this + 0x30);
  fVar8 = *(float *)(this + 0x34);
                    /* catch() { ... } // from try @ 0099a78c with catch @ 0099a984
                       catch() { ... } // from try @ 0099a878 with catch @ 0099a984 */
  fVar18 = *(float *)(this + 0x20);
  fVar10 = *(float *)(this + 0x24);
                    /* catch() { ... } // from try @ 0099a778 with catch @ 0099a988
                       catch() { ... } // from try @ 0099a830 with catch @ 0099a988 */
  fVar7 = *(float *)(this + 0x38);
  fVar9 = *(float *)(this + 0x3c);
  fVar12 = *(float *)(this + 0x28);
  fVar11 = *(float *)(this + 0x2c);
                    /* catch() { ... } // from try @ 0099a738 with catch @ 0099a9a0 */
                    /* catch() { ... } // from try @ 0099a72c with catch @ 0099a9a4 */
                    /* catch() { ... } // from try @ 0099a70c with catch @ 0099a9a8 */
                    /* catch() { ... } // from try @ 0099a744 with catch @ 0099a9b8
                       catch() { ... } // from try @ 0099a7c4 with catch @ 0099a9b8
                       catch() { ... } // from try @ 0099a8d4 with catch @ 0099a9b8 */
  fVar5 = fVar26 * fVar21 - fVar23 * fVar28;
  fVar6 = fVar26 * fVar4 - fVar28 * fVar20;
  fVar25 = fVar26 * fVar22 - fVar28 * fVar24;
  fVar27 = fVar23 * fVar4 - fVar21 * fVar20;
  fVar29 = fVar23 * fVar22 - fVar21 * fVar24;
  fVar30 = fVar20 * fVar22 - fVar4 * fVar24;
  fVar31 = fVar18 * fVar8 - fVar10 * fVar19;
  fVar13 = fVar18 * fVar7 - fVar19 * fVar12;
  fVar14 = fVar18 * fVar9 - fVar19 * fVar11;
                    /* try { // try from 0099aa10 to 00a9aa63 has its CatchHandler @ 0099aa10
                       catch() { ... } // from try @ 0099aa10 with catch @ 0099aa10
                       catch() { ... } // from try @ 0099ac5c with catch @ 0099aa10 */
  fVar17 = fVar10 * fVar9 - fVar8 * fVar11;
  fVar16 = fVar12 * fVar9 - fVar7 * fVar11;
  fVar15 = fVar10 * fVar7 - fVar8 * fVar12;
  fVar3 = fVar30 * fVar31 +
          ((fVar27 * fVar14 + fVar25 * fVar15 + (fVar5 * fVar16 - fVar6 * fVar17)) - fVar29 * fVar13
          );
  bVar2 = 2e-37 < ABS(fVar3);
                    /* try { // try from 0099aa64 to 00a9aa7b has its CatchHandler @ 0099ac90 */
  if (bVar2) {
                    /* try { // try from 0099aa84 to 00a9aa8f has its CatchHandler @ 0099ac8c */
                    /* try { // try from 0099aa90 to 00a9aa9b has its CatchHandler @ 0099ac88 */
                    /* try { // try from 0099aa9c to 00a9aab3 has its CatchHandler @ 0099aca0 */
                    /* try { // try from 0099aad0 to 00a9aae7 has its CatchHandler @ 0099ac70 */
                    /* try { // try from 0099ab04 to 00a9aba7 has its CatchHandler @ 0099aca0 */
                    /* try { // try from 0099ac18 to 00a9ac5b has its CatchHandler @ 0099ac70 */
                    /* try { // try from 0099ac5c to 00a9acf7 has its CatchHandler @ 0099aa10 */
                    /* catch() { ... } // from try @ 0099aad0 with catch @ 0099ac70
                       catch() { ... } // from try @ 0099ac18 with catch @ 0099ac70 */
    _local_b0 = CONCAT44((fVar20 * fVar17 - fVar23 * fVar16) - fVar24 * fVar15,
                         fVar22 * fVar15 + (fVar21 * fVar16 - fVar4 * fVar17));
                    /* catch() { ... } // from try @ 0099aa90 with catch @ 0099ac88 */
    _fStack_a8 = CONCAT44((fVar29 * fVar12 - fVar30 * fVar10) - fVar27 * fVar11,
                          (fVar8 * fVar30 - fVar29 * fVar7) + fVar27 * fVar9);
                    /* catch() { ... } // from try @ 0099aa84 with catch @ 0099ac8c */
    _local_a0 = CONCAT44(fVar24 * fVar13 + (fVar26 * fVar16 - fVar20 * fVar14),
                         (fVar4 * fVar14 - fVar28 * fVar16) - fVar22 * fVar13);
                    /* catch() { ... } // from try @ 0099aa64 with catch @ 0099ac90 */
    _local_98 = CONCAT44((fVar18 * fVar30 - fVar25 * fVar12) + fVar6 * fVar11,
                         (fVar25 * fVar7 - fVar30 * fVar19) - fVar6 * fVar9);
    _local_90 = CONCAT44((fVar23 * fVar14 - fVar26 * fVar17) - fVar24 * fVar31,
                         fVar22 * fVar31 + (fVar28 * fVar17 - fVar21 * fVar14));
    _fStack_88 = CONCAT44((fVar25 * fVar10 - fVar18 * fVar29) - fVar5 * fVar11,
                          (fVar29 * fVar19 - fVar8 * fVar25) + fVar5 * fVar9);
    _local_80 = CONCAT44(fVar20 * fVar31 + (fVar26 * fVar15 - fVar23 * fVar13),
                         (fVar21 * fVar13 - fVar28 * fVar15) - fVar4 * fVar31);
                    /* catch() { ... } // from try @ 0099aa9c with catch @ 0099aca0
                       catch() { ... } // from try @ 0099ab04 with catch @ 0099aca0 */
    _local_78 = CONCAT44((fVar27 * fVar18 - fVar6 * fVar10) + fVar5 * fVar12,
                         (fVar6 * fVar8 - fVar27 * fVar19) - fVar5 * fVar7);
    MathUtil::multiplyMatrix(&local_b0,1.0 / fVar3,(float *)this);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}

