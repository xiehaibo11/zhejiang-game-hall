
/* cocos2d::LabelLayout::fillAssembler(cocos2d::renderer::CustomAssembler*,
   cocos2d::renderer::EffectVariant*) */

void cocos2d::LabelLayout::fillAssembler(CustomAssembler *param_1,EffectVariant *param_2)

{
  Color4B *pCVar1;
  Rect *pRVar2;
  undefined8 *puVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  TextRenderGroup *pTVar9;
  FontAtlasFrame *pFVar10;
  Texture *pTVar11;
  EffectVariant *in_x2;
  Rect *in_x3;
  long lVar12;
  FontAtlas *this;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  EffectBase *pEVar16;
  long lVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int local_178;
  Color4F aCStack_150 [20];
  undefined4 local_13c;
  Rect aRStack_138 [20];
  undefined4 local_124;
  Size aSStack_120 [72];
  undefined8 local_d8;
  Size aSStack_d0 [8];
  Rect aRStack_c8 [16];
  int local_b8;
  undefined1 local_b4;
  long local_90;
  
  lVar7 = tpidr_el0;
  local_90 = *(long *)(lVar7 + 0x28);
                    /* try { // try from 009b0dd0 to 00ab0dfb has its CatchHandler @ 009b0f58 */
  (**(code **)(*(long *)param_2 + 0x20))(param_2);
  if ((*(TextRenderGroup **)(param_1 + 0x98) != (TextRenderGroup *)0x0) &&
     (TextRenderGroup::reset(*(TextRenderGroup **)(param_1 + 0x98)),
     *(long *)(param_1 + 0x80) != *(long *)(param_1 + 0x88))) {
    if (*(TextRenderGroup **)(param_1 + 0xa8) != (TextRenderGroup *)0x0) {
      TextRenderGroup::reset(*(TextRenderGroup **)(param_1 + 0xa8));
    }
                    /* try { // try from 009b0e00 to 00ab0e07 has its CatchHandler @ 009b0f3c */
    param_2[0x28] = (EffectVariant)0x1;
    local_124 = *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x2c);
    this = *(FontAtlas **)(*(long *)(param_1 + 0x68) + 0x28);
                    /* try { // try from 009b0e18 to 00ab0e1b has its CatchHandler @ 009b0f2c */
    Rect::Rect(aRStack_138);
    lVar12 = *(long *)(param_1 + 0x60);
    fVar18 = *(float *)(param_1 + 0x5c);
    pTVar9 = *(TextRenderGroup **)(param_1 + 0xa8);
                    /* try { // try from 009b0e2c to 00ab0e2f has its CatchHandler @ 009b0f38 */
    cVar5 = *(char *)(lVar12 + 0x36);
                    /* try { // try from 009b0e30 to 00ab0e4b has its CatchHandler @ 009b0f40 */
    if ((pTVar9 == (TextRenderGroup *)0x0) || (*(int *)(lVar12 + 0x24) < 0)) {
      local_178 = 0;
    }
    else {
      local_13c = *(undefined4 *)(lVar12 + 0x28);
      uVar19 = *(undefined8 *)(lVar12 + 0x1c);
                    /* try { // try from 009b0e50 to 00ab0e5b has its CatchHandler @ 009b0f34 */
      lVar12 = *(long *)(param_1 + 0x80);
      lVar4 = *(long *)(param_1 + 0x88);
      if (lVar12 != lVar4) {
                    /* try { // try from 009b0e6c to 00ab0eaf has its CatchHandler @ 009b0f30 */
        do {
          if (*(char *)(lVar12 + 0x30) == '\0') {
            lVar17 = *(long *)(lVar12 + 0x18);
            lVar6 = *(long *)(lVar12 + 0x20) - lVar17;
            if (lVar6 != 0) {
              uVar20 = *(undefined8 *)(lVar12 + 0x10);
              lVar14 = 0;
              uVar13 = (lVar6 >> 3) * -0x3333333333333333;
              uVar15 = 1;
                    /* try { // try from 009b0eb0 to 00ab0fa7 has its CatchHandler @ 009b0d80 */
              while( true ) {
                Rect::Rect((Rect *)&local_d8,(Rect *)(lVar17 + lVar14));
                Rect::Rect(aRStack_c8,(Rect *)(lVar17 + lVar14) + 0x10);
                local_b4 = *(undefined1 *)(lVar17 + lVar14 + 0x24);
                local_b8 = *(int *)(lVar17 + lVar14 + 0x20);
                if (*(char *)(*(long *)(lVar12 + 0x18) + lVar14 + 0x24) == '\0') {
                  Size::operator*(aSStack_d0,fVar18);
                  Size::operator=(aSStack_d0,aSStack_120);
                    /* catch() { ... } // from try @ 009b0e18 with catch @ 009b0f2c */
                  local_d8 = CONCAT44(fVar18 * ((float)((ulong)uVar20 >> 0x20) +
                                               (float)((ulong)uVar19 >> 0x20) +
                                               (float)((ulong)local_d8 >> 0x20)),
                                      fVar18 * ((float)uVar20 + (float)uVar19 + (float)local_d8));
                    /* catch() { ... } // from try @ 009b0e6c with catch @ 009b0f30 */
                    /* catch() { ... } // from try @ 009b0e50 with catch @ 009b0f34 */
                  pTVar9 = *(TextRenderGroup **)(param_1 + 0xa8);
                    /* catch() { ... } // from try @ 009b0e2c with catch @ 009b0f38 */
                    /* catch() { ... } // from try @ 009b0e00 with catch @ 009b0f3c */
                  pFVar10 = (FontAtlasFrame *)FontAtlas::frameAt(this,local_b8);
                    /* catch() { ... } // from try @ 009b0e30 with catch @ 009b0f40 */
                  pTVar11 = (Texture *)FontAtlasFrame::getTexture(pFVar10);
                    /* catch() { ... } // from try @ 009b0dd0 with catch @ 009b0f58 */
                  in_x3 = aRStack_c8;
                  TextRenderGroup::addRect
                            (pTVar9,pTVar11,(Rect *)&local_d8,aRStack_c8,(Color4B *)&local_13c,
                             cVar5 != '\0');
                }
                if (uVar13 < uVar15 || uVar13 - uVar15 == 0) break;
                lVar17 = *(long *)(lVar12 + 0x18);
                lVar14 = lVar14 + 0x28;
                uVar15 = uVar15 + 1;
              }
            }
          }
          lVar12 = lVar12 + 0x38;
        } while (lVar12 != lVar4);
        pTVar9 = *(TextRenderGroup **)(param_1 + 0xa8);
      }
      local_178 = TextRenderGroup::fill
                            (pTVar9,(CustomAssembler *)param_2,0,(LabelLayout *)in_x3,in_x2);
      in_x3 = (Rect *)(*(long *)(param_1 + 0x60) + 4);
      renderer::Technique::Parameter::Parameter((Parameter *)&local_d8,&DAT_01d38040,0xd,in_x3,1);
      if (*(float *)(*(long *)(param_1 + 0x60) + 4) <= 0.0) {
        if (0 < local_178) {
          uVar15 = 0;
          do {
                    /* try { // try from 009b1098 to 00ab109f has its CatchHandler @ 009b1130 */
                    /* try { // try from 009b10a0 to 00ab10bf has its CatchHandler @ 009b0fd0 */
            if (uVar15 < (ulong)(*(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 3)) {
              pEVar16 = *(EffectBase **)(*(long *)(param_2 + 0x50) + uVar15 * 8);
            }
            else {
              pEVar16 = (EffectBase *)0x0;
            }
            in_x3 = (Rect *)&DAT_ffffffff;
            renderer::EffectBase::setProperty
                      (pEVar16,(basic_string *)&DAT_01d38040,(Parameter *)&local_d8,-1);
                    /* try { // try from 009b10c0 to 00ab10c7 has its CatchHandler @ 009b1130 */
            uVar15 = uVar15 + 1;
                    /* try { // try from 009b10c8 to 00ab10e7 has its CatchHandler @ 009b0fd0 */
          } while ((long)uVar15 < (long)local_178);
        }
      }
      else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b1040 with catch @ 009b0fd0
                       catch(type#1 @ 00000000) { ... } // from try @ 009b1070 with catch @ 009b0fd0
                       catch(type#1 @ 00000000) { ... } // from try @ 009b10a0 with catch @ 009b0fd0
                       catch(type#1 @ 00000000) { ... } // from try @ 009b10c8 with catch @ 009b0fd0
                       catch(type#1 @ 00000000) { ... } // from try @ 009b10f4 with catch @ 009b0fd0
                        */
        Color4F::Color4F(aCStack_150,(Color4B *)(*(long *)(param_1 + 0x60) + 0x28));
        in_x3 = (Rect *)aCStack_150;
        renderer::Technique::Parameter::Parameter
                  ((Parameter *)aSStack_120,&DAT_01d38058,100,in_x3,1);
        if (0 < local_178) {
          uVar15 = 0;
          do {
            if (uVar15 < (ulong)(*(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 3)) {
              pEVar16 = *(EffectBase **)(*(long *)(param_2 + 0x50) + uVar15 * 8);
            }
            else {
              pEVar16 = (EffectBase *)0x0;
            }
                    /* try { // try from 009b1038 to 00ab103f has its CatchHandler @ 009b1134 */
                    /* try { // try from 009b1040 to 00ab1063 has its CatchHandler @ 009b0fd0 */
            renderer::EffectBase::setProperty
                      (pEVar16,(basic_string *)&DAT_01d38058,(Parameter *)aSStack_120,-1);
            in_x3 = (Rect *)&DAT_ffffffff;
            renderer::EffectBase::setProperty
                      (pEVar16,(basic_string *)&DAT_01d38040,(Parameter *)&local_d8,-1);
            uVar15 = uVar15 + 1;
                    /* try { // try from 009b1064 to 00ab106f has its CatchHandler @ 009b1134 */
          } while ((long)uVar15 < (long)local_178);
        }
        renderer::Technique::Parameter::~Parameter((Parameter *)aSStack_120);
                    /* try { // try from 009b1070 to 00ab1097 has its CatchHandler @ 009b0fd0 */
      }
      renderer::Technique::Parameter::~Parameter((Parameter *)&local_d8);
    }
    lVar4 = *(long *)(param_1 + 0x88);
    for (lVar12 = *(long *)(param_1 + 0x80); lVar12 != lVar4; lVar12 = lVar12 + 0x38) {
      if (*(char *)(lVar12 + 0x30) == '\0') {
                    /* try { // try from 009b10f4 to 00ab1137 has its CatchHandler @ 009b0fd0 */
        lVar17 = *(long *)(lVar12 + 0x18);
        lVar6 = *(long *)(lVar12 + 0x20) - lVar17;
        if (lVar6 != 0) {
          uVar19 = *(undefined8 *)(lVar12 + 0x10);
          lVar14 = 0;
          uVar13 = (lVar6 >> 3) * -0x3333333333333333;
          uVar15 = 1;
          while( true ) {
            pRVar2 = (Rect *)(lVar17 + lVar14);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b1098 with catch @ 009b1130
                       catch(type#1 @ 00000000) { ... } // from try @ 009b10c0 with catch @ 009b1130
                       catch(type#1 @ 00000000) { ... } // from try @ 009b10e8 with catch @ 009b1130
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b1038 with catch @ 009b1134
                       catch(type#1 @ 00000000) { ... } // from try @ 009b1064 with catch @ 009b1134
                        */
            if (pRVar2[0x24] == (Rect)0x0) {
              Size::operator*((Size *)(pRVar2 + 8),fVar18);
              Size::operator=((Size *)(pRVar2 + 8),(Size *)&local_d8);
              puVar3 = (undefined8 *)(lVar17 + lVar14);
              *puVar3 = CONCAT44(fVar18 * ((float)((ulong)uVar19 >> 0x20) +
                                          (float)((ulong)*puVar3 >> 0x20)),
                                 fVar18 * ((float)uVar19 + (float)*puVar3));
              pTVar9 = *(TextRenderGroup **)(param_1 + 0x98);
              pFVar10 = (FontAtlasFrame *)FontAtlas::frameAt(this,*(int *)(puVar3 + 4));
              pTVar11 = (Texture *)FontAtlasFrame::getTexture(pFVar10);
              in_x3 = (Rect *)(lVar17 + lVar14 + 0x10);
              TextRenderGroup::addRect
                        (pTVar9,pTVar11,pRVar2,in_x3,(Color4B *)&local_124,cVar5 != '\0');
            }
            if (uVar13 < uVar15 || uVar13 - uVar15 == 0) break;
            lVar17 = *(long *)(lVar12 + 0x18);
            lVar14 = lVar14 + 0x28;
            uVar15 = uVar15 + 1;
          }
        }
      }
    }
    iVar8 = TextRenderGroup::fill
                      (*(TextRenderGroup **)(param_1 + 0x98),(CustomAssembler *)param_2,local_178,
                       (LabelLayout *)in_x3,in_x2);
    pCVar1 = (Color4B *)(*(long *)(param_1 + 0x60) + 0x30);
                    /* try { // try from 009b11e8 to 00ab1297 has its CatchHandler @ 009b11e8
                       catch() { ... } // from try @ 009b11e8 with catch @ 009b11e8
                       catch() { ... } // from try @ 009b12c4 with catch @ 009b11e8 */
    if (*(float *)(*(long *)(param_1 + 0x60) + 4) <= 0.0) {
      Color4F::Color4F((Color4F *)aSStack_120,pCVar1);
                    /* try { // try from 009b12bc to 00ab12c3 has its CatchHandler @ 009b1328 */
                    /* try { // try from 009b12c4 to 00ab1347 has its CatchHandler @ 009b11e8 */
      renderer::Technique::Parameter::Parameter
                ((Parameter *)&local_d8,&DAT_01d38040,0xd,*(long *)(param_1 + 0x60) + 4,1);
      if (local_178 < iVar8) {
        uVar15 = (ulong)local_178;
        do {
          if (uVar15 < (ulong)(*(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 3)) {
            pEVar16 = *(EffectBase **)(*(long *)(param_2 + 0x50) + uVar15 * 8);
          }
          else {
            pEVar16 = (EffectBase *)0x0;
          }
          renderer::EffectBase::setProperty
                    (pEVar16,(basic_string *)&DAT_01d38040,(Parameter *)&local_d8,-1);
          uVar15 = uVar15 + 1;
        } while ((long)uVar15 < (long)iVar8);
      }
    }
    else {
      Color4F::Color4F(aCStack_150,pCVar1);
      renderer::Technique::Parameter::Parameter
                ((Parameter *)&local_d8,&DAT_01d38058,100,aCStack_150,1);
      renderer::Technique::Parameter::Parameter
                ((Parameter *)aSStack_120,&DAT_01d38040,0xd,*(long *)(param_1 + 0x60) + 4,1);
      if (local_178 < iVar8) {
        uVar15 = (ulong)local_178;
        do {
          if (uVar15 < (ulong)(*(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 3)) {
            pEVar16 = *(EffectBase **)(*(long *)(param_2 + 0x50) + uVar15 * 8);
          }
          else {
            pEVar16 = (EffectBase *)0x0;
          }
          renderer::EffectBase::setProperty
                    (pEVar16,(basic_string *)&DAT_01d38058,(Parameter *)&local_d8,-1);
          renderer::EffectBase::setProperty
                    (pEVar16,(basic_string *)&DAT_01d38040,(Parameter *)aSStack_120,-1);
          uVar15 = uVar15 + 1;
                    /* try { // try from 009b1298 to 00ab12b7 has its CatchHandler @ 009b132c */
        } while ((long)uVar15 < (long)iVar8);
      }
      renderer::Technique::Parameter::~Parameter((Parameter *)aSStack_120);
    }
                    /* catch() { ... } // from try @ 009b12bc with catch @ 009b1328 */
    renderer::Technique::Parameter::~Parameter((Parameter *)&local_d8);
  }
                    /* catch() { ... } // from try @ 009b1298 with catch @ 009b132c */
  if (*(long *)(lVar7 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

