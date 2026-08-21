
/* cocos2d::Terrain::getHeightData() const */

void cocos2d::Terrain::getHeightData(void)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long in_x0;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  vector<float,std::__ndk1::allocator<float>> *in_x8;
  int iVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  undefined4 *puVar18;
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
                    /* catch() { ... } // from try @ 00d46c98 with catch @ 00d46cf0 */
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
                    /* try { // try from 00d46d04 to 00e46d63 has its CatchHandler @ 00d46d04
                       catch() { ... } // from try @ 00d46d04 with catch @ 00d46d04
                       catch() { ... } // from try @ 00d46d80 with catch @ 00d46d04
                       catch() { ... } // from try @ 00d46de4 with catch @ 00d46d04 */
  iVar12 = *(int *)(in_x0 + 0x8052c);
  uVar9 = (long)iVar12 * (long)*(int *)(in_x0 + 0x80528);
  if ((int)uVar9 != 0) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append(in_x8,uVar9);
    iVar12 = *(int *)(in_x0 + 0x8052c);
  }
  if (0 < iVar12) {
    uVar3 = *(uint *)(in_x0 + 0x80528);
    lVar14 = *(long *)in_x8;
    iVar16 = 0;
    uVar4 = 8;
    if ((uVar3 & 7) != 0) {
      uVar4 = uVar3 & 7;
    }
    iVar13 = 0;
                    /* try { // try from 00d46d64 to 00e46d7f has its CatchHandler @ 00d46e34 */
    iVar5 = uVar3 - uVar4;
    iVar15 = 4;
    do {
      if (0 < (int)uVar3) {
        lVar17 = *(long *)(in_x0 + 0x804f8);
        if (uVar3 < 9) {
LAB_00d46ddc:
          iVar11 = 0;
        }
        else {
          uVar4 = uVar3 * iVar13;
          uVar9 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
          lVar10 = (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3) * 4;
                    /* try { // try from 00d46db8 to 00e46dc3 has its CatchHandler @ 00d46e78 */
          iVar6 = iVar5;
          iVar7 = iVar15;
                    /* try { // try from 00d46dc4 to 00e46de3 has its CatchHandler @ 00d46e48 */
          if ((lVar14 + uVar9 < lVar17 + (ulong)(uVar3 - 1) * 0x20 + lVar10 + 8) &&
             (lVar17 + lVar10 + 4U < lVar14 + (ulong)(uVar3 - 1) * 4 + 4 + uVar9))
          goto LAB_00d46ddc;
          do {
            lVar10 = lVar17 + (long)iVar7 * 0x20;
            lVar2 = lVar17 + (long)(iVar7 + -4) * 0x20;
            auVar24 = *(undefined1 (*) [16])(lVar10 + 100);
            auVar23 = *(undefined1 (*) [16])(lVar10 + 0x44);
            uVar26 = *(undefined8 *)*(undefined1 (*) [16])(lVar2 + 0x44);
            auVar19._4_12_ = auVar24._4_12_;
            auVar19._0_4_ = auVar23._0_4_;
            auVar21._12_4_ = auVar24._12_4_;
            auVar21._0_8_ = auVar19._0_8_;
            auVar21._8_4_ = auVar23._4_4_;
            auVar20._8_8_ = auVar21._8_8_;
            auVar20._4_4_ = auVar24._0_4_;
            auVar20._0_4_ = auVar23._0_4_;
            auVar22._0_12_ = auVar20._0_12_;
            auVar22._12_4_ = auVar24._4_4_;
            auVar23 = NEON_ext(auVar23,auVar22,8,1);
            auVar25._4_4_ = SUB124(*(undefined1 (*) [12])(lVar2 + 100),0);
            auVar25._0_4_ = (int)uVar26;
            auVar25._8_4_ = (int)((ulong)uVar26 >> 0x20);
            auVar25._12_4_ = SUB124(*(undefined1 (*) [12])(lVar2 + 100),4);
                    /* catch() { ... } // from try @ 00d46d64 with catch @ 00d46e34 */
            auVar25 = NEON_ext(*(undefined1 (*) [16])(lVar2 + 0x44),auVar25,8,1);
            auVar24._4_4_ = SUB124(*(undefined1 (*) [12])(lVar10 + 0x24),0);
            auVar24._0_4_ = SUB124(*(undefined1 (*) [12])(lVar10 + 4),0);
            auVar24._8_4_ = SUB124(*(undefined1 (*) [12])(lVar10 + 4),4);
            auVar24._12_4_ = SUB124(*(undefined1 (*) [12])(lVar10 + 0x24),4);
            auVar24 = NEON_ext(auVar23,auVar24,8,1);
            auVar23._4_4_ = (int)*(undefined8 *)(lVar2 + 0x24);
            auVar23._0_4_ = (int)*(undefined8 *)(lVar2 + 4);
            auVar23._8_4_ = (int)((ulong)*(undefined8 *)(lVar2 + 4) >> 0x20);
            auVar23._12_4_ = (int)((ulong)*(undefined8 *)(lVar2 + 0x24) >> 0x20);
            auVar23 = NEON_ext(auVar25,auVar23,8,1);
            iVar6 = iVar6 + -8;
            puVar1 = (undefined8 *)(lVar14 + (long)(iVar7 + -4) * 4);
                    /* catch() { ... } // from try @ 00d46dc4 with catch @ 00d46e48 */
            auVar24 = NEON_ext(auVar24,auVar24,8,1);
            auVar23 = NEON_ext(auVar23,auVar23,8,1);
            puVar1[1] = auVar23._8_8_;
            *puVar1 = auVar23._0_8_;
            puVar1[3] = auVar24._8_8_;
            puVar1[2] = auVar24._0_8_;
            iVar11 = iVar5;
            iVar7 = iVar7 + 8;
          } while (iVar6 != 0);
        }
        puVar8 = (undefined4 *)(lVar14 + ((long)iVar16 + (long)iVar11) * 4);
        puVar18 = (undefined4 *)(lVar17 + ((long)iVar16 + (long)iVar11) * 0x20 + 4);
        do {
          iVar11 = iVar11 + 1;
                    /* catch() { ... } // from try @ 00d46db8 with catch @ 00d46e78 */
          *puVar8 = *puVar18;
          puVar8 = puVar8 + 1;
          puVar18 = puVar18 + 8;
        } while (iVar11 < (int)uVar3);
      }
      iVar13 = iVar13 + 1;
      iVar15 = iVar15 + uVar3;
                    /* try { // try from 00d46d80 to 00e46db7 has its CatchHandler @ 00d46d04 */
      iVar16 = iVar16 + uVar3;
    } while (iVar13 < iVar12);
  }
  return;
}

