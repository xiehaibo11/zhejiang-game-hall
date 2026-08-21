
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* cocos2d::LabelLayout::updateContent() */

void __thiscall cocos2d::LabelLayout::updateContent(LabelLayout *this)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  float *pfVar8;
  void *pvVar9;
  undefined8 uVar10;
  long lVar11;
  float *pfVar12;
  ulong uVar13;
  TextRowSpace *pTVar14;
  void *pvVar15;
  int iVar16;
  LabelLayout *pLVar17;
  TextRowSpace *pTVar18;
  ulong uVar19;
  FontAtlas *this_00;
  void *pvVar20;
  basic_string *pbVar21;
  TextRowSpace *pTVar22;
  void *pvVar23;
  basic_string *pbVar24;
  TextRowSpace *pTVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  long *local_1a0;
  float local_180;
  undefined4 local_17c;
  float local_178;
  float fStack_174;
  float local_170;
  float local_16c;
  float local_168;
  float fStack_164;
  undefined8 local_160;
  float local_158;
  float local_154;
  undefined8 local_150;
  float local_148;
  float fStack_144;
  float local_140 [2];
  TextRowSpace *local_138;
  TextRowSpace *local_130;
  undefined8 local_128;
  Rect aRStack_120 [16];
  float local_110;
  undefined4 local_10c;
  Size aSStack_108 [8];
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  void *pvStack_d8;
  void *local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  long local_b0;
  
  lVar7 = tpidr_el0;
  local_b0 = *(long *)(lVar7 + 0x28);
  lVar11 = *(long *)(this + 0x68);
  if (lVar11 == 0) {
    uVar10 = 0;
    goto LAB_009b07d0;
  }
  this_00 = *(FontAtlas **)(lVar11 + 0x28);
  pbVar21 = *(basic_string **)(lVar11 + 0x38);
  Rect::Rect(aRStack_120);
  pfVar12 = *(float **)(this + 0x60);
  fVar27 = *pfVar12;
  cVar2 = *(char *)((long)pfVar12 + 0x39);
  bVar3 = *(byte *)((long)pfVar12 + 0x3a);
  cVar4 = *(char *)(pfVar12 + 0xd);
  fVar38 = pfVar12[2];
  fVar35 = pfVar12[3];
  cVar5 = *(char *)(pfVar12 + 0xe);
  cVar6 = *(char *)((long)pfVar12 + 0x37);
                    /* try { // try from 009afc9c to 00aafccb has its CatchHandler @ 009afd40 */
  fVar36 = pfVar12[4];
  fVar28 = pfVar12[5];
  fVar29 = pfVar12[6];
  uStack_e8 = 0x80000000800000;
  local_f0 = 0x7f7fffff7f7fffff;
  local_140[0] = 1.1754944e-38;
  local_130 = (TextRowSpace *)0x0;
  local_128 = 0;
  local_138 = (TextRowSpace *)0x0;
  local_c0 = 0;
                    /* try { // try from 009afcd0 to 00aafcd7 has its CatchHandler @ 009afd3c */
  pvStack_d8 = (void *)0x0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = (void *)0x0;
                    /* try { // try from 009afcd8 to 00aafd5b has its CatchHandler @ 009afbec */
  Rect::Rect((Rect *)&local_150);
  if (this[0x78] == (LabelLayout)0x0) {
    local_1a0 = (long *)0x0;
  }
  else {
    FontFreeType::getHorizontalKerningForUTF32Text(pbVar21);
    local_1a0 = (long *)CONCAT44(fStack_fc,local_100);
  }
  pbVar24 = (basic_string *)(this + 0x20);
  FontAtlas::prepareLetters(this_00,pbVar24,(FontFreeType *)pbVar21);
  iVar16 = (int)fVar36;
                    /* catch() { ... } // from try @ 009afcd0 with catch @ 009afd3c */
                    /* catch() { ... } // from try @ 009afc9c with catch @ 009afd40 */
  uVar19 = 0;
  pfVar12 = (float *)0x0;
  fVar36 = (float)(int)fVar35;
  fVar26 = 0.0;
  uVar13 = (ulong)(byte)*pbVar24;
  if (((byte)*pbVar24 & 1) == 0) goto LAB_009aff70;
  while (uVar19 < *(ulong *)(this + 0x28)) {
    while( true ) {
      pLVar17 = this + 0x24;
      if ((uVar13 & 1) != 0) {
        pLVar17 = *(LabelLayout **)(this + 0x30);
      }
      uVar1 = *(uint *)(pLVar17 + uVar19 * 4);
      fVar31 = 0.0;
      if (uVar1 != 0xd) {
        if (uVar1 == 10) {
          TextSpaceArray::addSpace((TextSpaceArray *)local_140,(TextRowSpace *)&local_f0);
          fVar31 = 0.0;
        }
        else {
                    /* try { // try from 009afdc8 to 00aafdfb has its CatchHandler @ 009afdc8
                       catch() { ... } // from try @ 009afdc8 with catch @ 009afdc8
                       catch() { ... } // from try @ 009afe10 with catch @ 009afdc8 */
          pfVar12 = (float *)FontAtlas::getOrLoad(this_00,(ulong)uVar1,(FontFreeType *)pbVar21);
          fVar31 = fVar26;
          if (pfVar12 != (float *)0x0) {
            Rect::operator=((Rect *)&local_150,(Rect *)(pfVar12 + 4));
            fVar31 = *(float *)(this + 0x58);
            local_150 = CONCAT44((float)((ulong)local_150 >> 0x20) * fVar31,
                                 (float)local_150 * fVar31);
                    /* try { // try from 009afdfc to 00aafe03 has its CatchHandler @ 009afe34 */
            Size::Size((Size *)&local_100,fVar31 * local_148,fVar31 * fStack_144);
                    /* try { // try from 009afe0c to 00aafe0f has its CatchHandler @ 009afe24 */
                    /* try { // try from 009afe10 to 00aafe47 has its CatchHandler @ 009afdc8 */
            Size::operator=((Size *)&local_148,(Size *)&local_100);
                    /* catch() { ... } // from try @ 009afe0c with catch @ 009afe24 */
            if ((local_1a0 == (long *)0x0) || (this[0x78] == (LabelLayout)0x0)) {
              fVar31 = *(float *)(this + 0x58);
            }
            else {
                    /* catch() { ... } // from try @ 009afdfc with catch @ 009afe34 */
              if ((ulong)(local_1a0[1] - *local_1a0 >> 2) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
              }
              fVar31 = *(float *)(this + 0x58);
                    /* try { // try from 009afe48 to 00aafe7f has its CatchHandler @ 009afe48
                       catch() { ... } // from try @ 009afe48 with catch @ 009afe48
                       catch() { ... } // from try @ 009afe88 with catch @ 009afe48 */
              fVar26 = fVar26 + fVar31 * (float)*(int *)(*local_1a0 + uVar19 * 4);
            }
            fVar37 = pfVar12[10];
            fVar32 = (float)Rect::getMinX((Rect *)&local_150);
            fVar39 = pfVar12[10];
            fVar33 = *(float *)(this + 0x58);
            fVar30 = (float)Rect::getMaxY((Rect *)&local_150);
                    /* try { // try from 009afe80 to 00aafe87 has its CatchHandler @ 009afe98 */
                    /* try { // try from 009afe88 to 00aafeab has its CatchHandler @ 009afe48 */
            fVar32 = fVar32 + (fVar26 - fVar31 * (float)(int)fVar37);
                    /* catch() { ... } // from try @ 009afe80 with catch @ 009afe98 */
            if (bVar3 == 3 || bVar3 == 1 && cVar4 != '\0') {
              fVar31 = fVar32 + local_148;
              if (local_d0 == pvStack_d8) {
                fVar31 = fVar31 - fVar32;
              }
              else {
                if (fVar31 <= (float)uStack_e8) {
                  fVar31 = (float)uStack_e8;
                }
                fVar37 = fVar32;
                if ((float)local_f0 <= fVar32) {
                  fVar37 = (float)local_f0;
                }
                fVar31 = fVar31 - fVar37;
              }
              if (fVar36 < fVar31) {
                TextSpaceArray::addSpace((TextSpaceArray *)local_140,(TextRowSpace *)&local_f0);
                fVar31 = pfVar12[10];
                fVar37 = *(float *)(this + 0x58);
                fVar32 = (float)Rect::getMinX((Rect *)&local_150);
                fVar26 = 0.0;
                    /* catch() { ... } // from try @ 009b0068 with catch @ 009aff08 */
                fVar32 = fVar32 + (0.0 - fVar37 * (float)(int)fVar31);
              }
            }
            Rect::Rect((Rect *)&local_100,fVar32,fVar33 * (float)(int)fVar39 - fVar30,local_148,
                       fStack_144);
            Rect::Rect((Rect *)&local_110,*pfVar12,pfVar12[1],pfVar12[2],pfVar12[3]);
            TextRowSpace::fillRect
                      ((TextRowSpace *)&local_f0,(int)pfVar12[8],(Rect *)&local_100,
                       (Rect *)&local_110);
            fVar31 = fVar26 + fVar38 + pfVar12[9] * *(float *)(this + 0x58);
          }
        }
      }
      fVar26 = fVar31;
      uVar19 = uVar19 + 1;
      uVar13 = (ulong)(byte)*pbVar24;
      if (((byte)*pbVar24 & 1) != 0) break;
LAB_009aff70:
                    /* try { // try from 009aff70 to 00aaff87 has its CatchHandler @ 009b01ac */
      if (uVar13 >> 1 <= uVar19) goto LAB_009aff7c;
    }
  }
LAB_009aff7c:
  TextSpaceArray::addSpace((TextSpaceArray *)local_140,(TextRowSpace *)&local_f0);
                    /* try { // try from 009aff90 to 00aaffbb has its CatchHandler @ 009b0134 */
  if ((cVar6 != '\0') &&
     (pfVar8 = (float *)FontAtlas::getOrLoad(this_00,0x5f,(FontFreeType *)pbVar21),
     pTVar14 = local_130, local_138 != local_130)) {
                    /* try { // try from 009affc0 to 00aaffc7 has its CatchHandler @ 009b0114 */
                    /* try { // try from 009affd8 to 00aaffdb has its CatchHandler @ 009b010c */
                    /* try { // try from 009affec to 00aaffef has its CatchHandler @ 009b0110 */
                    /* try { // try from 009afff0 to 00ab000b has its CatchHandler @ 009b011c */
    pTVar22 = local_138 + 8;
                    /* try { // try from 009b000c to 00ab0067 has its CatchHandler @ 009b0118 */
    do {
      Rect::Rect((Rect *)&local_160,(Rect *)(pfVar8 + 4));
      fVar38 = *(float *)(this + 0x58);
      local_160 = CONCAT44((float)((ulong)local_160 >> 0x20) * fVar38,(float)local_160 * fVar38);
      Size::Size((Size *)&local_100,fVar38 * local_158,fVar38 * local_154);
      Size::operator=((Size *)&local_158,(Size *)&local_100);
      fVar38 = pfVar8[10];
      fVar37 = *(float *)(this + 0x58);
      fVar26 = (float)Rect::getMaxY((Rect *)&local_160);
                    /* try { // try from 009b0068 to 00ab01bb has its CatchHandler @ 009aff08 */
      pTVar25 = pTVar22 + -8;
      fVar31 = 0.0;
      if (*(long *)(pTVar22 + 0x18) != *(long *)(pTVar22 + 0x10)) {
        fVar31 = *(float *)pTVar22 - *(float *)pTVar25;
      }
      Rect::Rect((Rect *)&local_170,
                 *(float *)(this + 0x58) * (float)-(int)pfVar12[10] + *(float *)pTVar25,
                 fVar37 * (float)(int)fVar38 - fVar26,fVar31,local_154);
      Rect::Rect((Rect *)&local_180,*pfVar8,pfVar8[1],pfVar8[2],pfVar8[3]);
      fVar38 = pfVar8[8];
      Rect::Rect((Rect *)&local_100);
      Rect::Rect((Rect *)&local_110);
      fVar26 = local_168 * 0.3;
      local_100 = local_170 + 0.0;
      fStack_fc = local_16c;
      Size::setSize((Size *)&local_f8,fVar26,fStack_164);
                    /* catch() { ... } // from try @ 009affd8 with catch @ 009b010c */
                    /* catch() { ... } // from try @ 009affec with catch @ 009b0110 */
                    /* catch() { ... } // from try @ 009affc0 with catch @ 009b0114 */
                    /* catch() { ... } // from try @ 009b000c with catch @ 009b0118 */
      local_110 = local_180 + (local_178 * 0.0) / local_168;
                    /* catch() { ... } // from try @ 009afff0 with catch @ 009b011c */
      local_10c = local_17c;
      Size::setSize(aSStack_108,(fVar26 * local_178) / local_168,fStack_174);
                    /* catch() { ... } // from try @ 009aff90 with catch @ 009b0134 */
      fVar37 = local_158 * 0.3;
      local_f8 = fVar37;
      TextRowSpace::fillRect(pTVar25,(int)fVar38,(Rect *)&local_100,(Rect *)&local_110);
      fVar31 = local_168 * 0.3;
      fVar26 = local_168 * 0.4;
      local_100 = local_170 + fVar31;
      fStack_fc = local_16c;
      Size::setSize((Size *)&local_f8,fVar26,fStack_164);
      local_110 = local_180 + (fVar31 * local_178) / local_168;
      local_10c = local_17c;
                    /* catch() { ... } // from try @ 009aff70 with catch @ 009b01ac */
      Size::setSize(aSStack_108,(fVar26 * local_178) / local_168,fStack_174);
      fVar31 = local_158;
      fVar26 = local_168;
      local_100 = fVar37 + local_170;
      local_f8 = local_168 + local_158 * -0.6;
                    /* try { // try from 009b01e4 to 00ab029b has its CatchHandler @ 009b01e4
                       catch() { ... } // from try @ 009b01e4 with catch @ 009b01e4
                       catch() { ... } // from try @ 009b02cc with catch @ 009b01e4 */
      TextRowSpace::fillRect(pTVar25,(int)fVar38,(Rect *)&local_100,(Rect *)&local_110);
      fVar39 = local_168 * 0.70000005;
      fVar37 = local_168 * 0.3;
      local_100 = local_170 + fVar39;
      fStack_fc = local_16c;
      Size::setSize((Size *)&local_f8,fVar37,fStack_164);
      local_110 = local_180 + (fVar39 * local_178) / local_168;
      local_10c = local_17c;
      Size::setSize(aSStack_108,(fVar37 * local_178) / local_168,fStack_174);
      local_100 = fVar26 + fVar31 * -0.3 + local_170;
      local_f8 = local_158 * 0.3;
      TextRowSpace::fillRect(pTVar25,(int)fVar38,(Rect *)&local_100,(Rect *)&local_110);
      pTVar25 = pTVar22 + 0x30;
      pTVar22 = pTVar22 + 0x38;
    } while (pTVar25 != pTVar14);
  }
  pTVar25 = local_130;
  pTVar22 = local_138;
  fVar26 = local_140[0];
  Rect::Rect((Rect *)&local_100,0.0,0.0,0.0,0.0);
                    /* try { // try from 009b02c4 to 00ab02cb has its CatchHandler @ 009b0350 */
                    /* try { // try from 009b02cc to 00ab0387 has its CatchHandler @ 009b01e4 */
  fVar37 = 1.0 - fVar29;
  fVar31 = 1.0 - fVar28;
  fVar38 = (0.5 - fVar28) * fVar36;
  pTVar14 = local_130;
  pTVar18 = local_130;
  if (local_130 != local_138) {
                    /* catch() { ... } // from try @ 009b02c4 with catch @ 009b0350 */
                    /* catch() { ... } // from try @ 009b029c with catch @ 009b0354 */
    lVar11 = 0;
    uVar19 = 0;
    pTVar14 = local_138;
    do {
      if (*(long *)(pTVar14 + lVar11 + 0x20) != *(long *)(pTVar14 + lVar11 + 0x18)) {
        fVar39 = fVar38;
        if (cVar2 != '\x01') {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b03f8 with catch @ 009b0388
                       catch(type#1 @ 00000000) { ... } // from try @ 009b0428 with catch @ 009b0388
                       catch(type#1 @ 00000000) { ... } // from try @ 009b0458 with catch @ 009b0388
                       catch(type#1 @ 00000000) { ... } // from try @ 009b0480 with catch @ 009b0388
                       catch(type#1 @ 00000000) { ... } // from try @ 009b04ac with catch @ 009b0388
                        */
          pTVar18 = pTVar14 + lVar11;
          if (cVar2 == '\0') {
            fVar39 = (*(float *)(pTVar18 + 8) - *(float *)pTVar18) * 0.5 + -(fVar28 * fVar26);
          }
          else {
            fVar39 = fVar31 * fVar26 + (*(float *)(pTVar18 + 8) - *(float *)pTVar18) * -0.5;
          }
        }
        pTVar14 = pTVar14 + lVar11;
        fVar32 = *(float *)pTVar14;
        fVar33 = *(float *)(pTVar14 + 4);
                    /* try { // try from 009b03f0 to 00ab03f7 has its CatchHandler @ 009b04ec */
                    /* try { // try from 009b03f8 to 00ab041b has its CatchHandler @ 009b0388 */
        fVar39 = *(float *)(pTVar14 + 0x10) + (fVar39 - (fVar32 + *(float *)(pTVar14 + 8)) * 0.5);
        fVar30 = *(float *)(pTVar14 + 0x14) +
                 ((fVar37 * (fVar27 * (float)(ulong)(((long)pTVar25 - (long)pTVar22 >> 3) *
                                                    0x6db6db6db6db6db7) - fVar27) -
                  fVar27 * (float)(int)uVar19) - (fVar33 + *(float *)(pTVar14 + 0xc)) * 0.5);
        *(float *)(pTVar14 + 0x10) = fVar39;
        *(float *)(pTVar14 + 0x14) = fVar30;
                    /* try { // try from 009b041c to 00ab0427 has its CatchHandler @ 009b04ec */
        Rect::Rect((Rect *)&local_110,fVar32 + fVar39,fVar33 + fVar30,
                   *(float *)(pTVar14 + 8) - fVar32,*(float *)(pTVar14 + 0xc) - fVar33);
                    /* try { // try from 009b0428 to 00ab044f has its CatchHandler @ 009b0388 */
        Rect::merge((Rect *)&local_100,(Rect *)&local_110);
        pTVar14 = local_138;
        pTVar18 = local_130;
      }
      uVar19 = uVar19 + 1;
      uVar13 = ((long)pTVar18 - (long)pTVar14 >> 3) * 0x6db6db6db6db6db7;
      lVar11 = lVar11 + 0x38;
    } while (uVar19 <= uVar13 && uVar13 - uVar19 != 0);
  }
                    /* try { // try from 009b0450 to 00ab0457 has its CatchHandler @ 009b04e8 */
                    /* try { // try from 009b0458 to 00ab0477 has its CatchHandler @ 009b0388 */
  if (bVar3 < 2) {
LAB_009b046c:
    fVar26 = (float)iVar16;
                    /* try { // try from 009b0478 to 00ab047f has its CatchHandler @ 009b04e8 */
    fVar27 = fStack_f4;
    fVar38 = local_f8;
                    /* try { // try from 009b0480 to 00ab049f has its CatchHandler @ 009b0388 */
    if (bVar3 != 0) {
      fVar27 = fVar26;
      fVar38 = fVar36;
    }
    if (cVar2 == '\x02') {
      fVar31 = fVar31 * fVar38 - local_f8 * 0.5;
    }
    else if (cVar2 == '\x01') {
      fVar31 = (0.5 - fVar28) * fVar38;
    }
    else {
      fVar31 = fStack_f4;
      if (cVar2 == '\0') {
                    /* try { // try from 009b04a0 to 00ab04ab has its CatchHandler @ 009b04e8 */
        fVar31 = local_f8 * 0.5 - fVar28 * fVar38;
                    /* try { // try from 009b04ac to 00ab04ef has its CatchHandler @ 009b0388 */
      }
    }
    if (cVar5 == '\x02') {
                    /* try { // try from 009b061c to 00ab063f has its CatchHandler @ 009b05dc */
      fVar38 = fStack_f4 * 0.5 - fVar29 * fVar27;
    }
    else if (cVar5 == '\x01') {
      fVar38 = (0.5 - fVar29) * fVar26;
                    /* try { // try from 009b0614 to 00ab061b has its CatchHandler @ 009b062c */
    }
    else if (cVar5 == '\0') {
                    /* try { // try from 009b055c to 00ab058f has its CatchHandler @ 009b055c
                       catch() { ... } // from try @ 009b055c with catch @ 009b055c
                       catch() { ... } // from try @ 009b05a4 with catch @ 009b055c */
      fVar38 = fVar37 * fVar27 - fStack_f4 * 0.5;
    }
                    /* catch() { ... } // from try @ 009b0614 with catch @ 009b062c */
    if (pTVar14 != pTVar18) {
      auVar34 = NEON_fmov(0x3fe0000000000000,8);
      do {
                    /* try { // try from 009b0590 to 00ab0597 has its CatchHandler @ 009b05c8 */
        *(ulong *)(pTVar14 + 0x10) =
             CONCAT44((fVar38 - (float)((double)fStack_f4 * auVar34._8_8_ + (double)fStack_fc)) +
                      (float)((ulong)*(undefined8 *)(pTVar14 + 0x10) >> 0x20),
                      (fVar31 - (float)((double)local_f8 * auVar34._0_8_ + (double)local_100)) +
                      (float)*(undefined8 *)(pTVar14 + 0x10));
        pTVar14 = pTVar14 + 0x38;
                    /* try { // try from 009b05a0 to 00ab05a3 has its CatchHandler @ 009b05b8 */
      } while (pTVar18 != pTVar14);
    }
                    /* try { // try from 009b05a4 to 00ab05db has its CatchHandler @ 009b055c */
    if (bVar3 == 1) {
                    /* catch() { ... } // from try @ 009b05a0 with catch @ 009b05b8 */
                    /* catch() { ... } // from try @ 009b0590 with catch @ 009b05c8 */
      Rect::Rect((Rect *)&local_110,fVar28 * (float)-(int)fVar35,fVar29 * (float)-iVar16,fVar36,
                 fVar26);
      pTVar22 = local_130;
                    /* try { // try from 009b05dc to 00ab0613 has its CatchHandler @ 009b05dc
                       catch() { ... } // from try @ 009b05dc with catch @ 009b05dc
                       catch() { ... } // from try @ 009b061c with catch @ 009b05dc */
      for (pTVar14 = local_138; pTVar14 != pTVar22; pTVar14 = pTVar14 + 0x38) {
        TextRowSpace::clip(pTVar14,(Rect *)&local_110);
      }
    }
  }
  else if (bVar3 == 2) {
    fVar27 = (float)iVar16;
    local_110 = fVar36 / local_f8;
    local_160 = CONCAT44(local_160._4_4_,fVar27 / fStack_f4);
    pfVar12 = (float *)&local_160;
    if (fVar36 / local_f8 <= fVar27 / fStack_f4) {
      pfVar12 = &local_110;
    }
    fVar35 = *pfVar12;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b0450 with catch @ 009b04e8
                       catch(type#1 @ 00000000) { ... } // from try @ 009b0478 with catch @ 009b04e8
                       catch(type#1 @ 00000000) { ... } // from try @ 009b04a0 with catch @ 009b04e8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b03f0 with catch @ 009b04ec
                       catch(type#1 @ 00000000) { ... } // from try @ 009b041c with catch @ 009b04ec
                        */
    if (1.0 <= fVar35) {
      fVar35 = 1.0;
    }
    *(float *)(this + 0x5c) = fVar35;
    fVar26 = fVar35 * local_f8 * 0.5;
    if (cVar2 == '\x02') {
      fVar26 = fVar31 * fVar36 - fVar26;
      fVar38 = fVar26;
    }
    else if (cVar2 == '\0') {
      fVar26 = fVar26 - fVar28 * fVar36;
      fVar38 = fVar26;
    }
    fVar28 = fVar35 * fStack_f4 * 0.5;
    if (cVar5 == '\x02') {
      fVar26 = fVar28 - fVar29 * fVar27;
    }
    else if (cVar5 == '\x01') {
      fVar26 = (0.5 - fVar29) * fVar27;
    }
    else if (cVar5 == '\0') {
      fVar26 = fVar37 * fVar27 - fVar28;
    }
                    /* try { // try from 009b069c to 00ab06e3 has its CatchHandler @ 009b069c
                       catch() { ... } // from try @ 009b069c with catch @ 009b069c
                       catch() { ... } // from try @ 009b074c with catch @ 009b069c */
    if (pTVar14 != pTVar18) {
      do {
        *(ulong *)(pTVar14 + 0x10) =
             CONCAT44((fVar26 / fVar35 - (fStack_f4 * 0.5 + fStack_fc)) +
                      (float)((ulong)*(undefined8 *)(pTVar14 + 0x10) >> 0x20),
                      (fVar38 / fVar35 - (local_f8 * 0.5 + local_100)) +
                      (float)*(undefined8 *)(pTVar14 + 0x10));
        pTVar14 = pTVar14 + 0x38;
      } while (pTVar18 != pTVar14);
    }
  }
  else if (bVar3 == 3) goto LAB_009b046c;
  pLVar17 = this + 0x80;
  pvVar20 = *(void **)pLVar17;
  if (pvVar20 != (void *)0x0) {
    pvVar15 = *(void **)(this + 0x88);
                    /* try { // try from 009b06e4 to 00ab06ff has its CatchHandler @ 009b07e4 */
    pvVar9 = pvVar20;
    if (pvVar15 != pvVar20) {
      do {
        pvVar9 = *(void **)((long)pvVar15 + -0x20);
        pvVar23 = (void *)((long)pvVar15 + -0x38);
        if (pvVar9 != (void *)0x0) {
          *(void **)((long)pvVar15 + -0x18) = pvVar9;
          operator_delete(pvVar9);
        }
                    /* try { // try from 009b0700 to 00ab0707 has its CatchHandler @ 009b07c8 */
        pvVar15 = pvVar23;
      } while (pvVar20 != pvVar23);
      pvVar9 = *(void **)pLVar17;
    }
    *(void **)(this + 0x88) = pvVar20;
    operator_delete(pvVar9);
    *(undefined8 *)pLVar17 = 0;
    *(undefined8 *)(this + 0x88) = 0;
                    /* try { // try from 009b072c to 00ab072f has its CatchHandler @ 009b07c4 */
    *(undefined8 *)(this + 0x90) = 0;
  }
                    /* try { // try from 009b0730 to 00ab074b has its CatchHandler @ 009b07cc */
  *(TextRowSpace **)(this + 0x80) = local_138;
  *(TextRowSpace **)(this + 0x88) = local_130;
  *(undefined8 *)(this + 0x90) = local_128;
                    /* try { // try from 009b074c to 00ab0833 has its CatchHandler @ 009b069c */
  local_138 = (void *)0x0;
  local_130 = (void *)0x0;
  local_128 = 0;
  if (local_1a0 != (long *)0x0) {
    pvVar20 = (void *)*local_1a0;
    if (pvVar20 != (void *)0x0) {
      local_1a0[1] = (long)pvVar20;
      operator_delete(pvVar20);
    }
    operator_delete(local_1a0);
  }
  if (pvStack_d8 != (void *)0x0) {
    local_d0 = pvStack_d8;
    operator_delete(pvStack_d8);
  }
  pTVar14 = local_138;
  pTVar22 = local_130;
  if (local_138 != (void *)0x0) {
    while (pvVar20 = pTVar22, pvVar20 != pTVar14) {
      pvVar9 = *(void **)((long)pvVar20 + -0x20);
      pTVar22 = (void *)((long)pvVar20 + -0x38);
      if (pvVar9 != (void *)0x0) {
        *(void **)((long)pvVar20 + -0x18) = pvVar9;
        operator_delete(pvVar9);
      }
    }
                    /* catch() { ... } // from try @ 009b072c with catch @ 009b07c4 */
    local_130 = pTVar14;
                    /* catch() { ... } // from try @ 009b0700 with catch @ 009b07c8 */
    operator_delete(local_138);
  }
                    /* catch() { ... } // from try @ 009b0730 with catch @ 009b07cc */
  uVar10 = 1;
LAB_009b07d0:
  if (*(long *)(lVar7 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
                    /* catch() { ... } // from try @ 009b06e4 with catch @ 009b07e4 */
  return;
}

