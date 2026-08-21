
/* cocos2d::FontCharMap::createFontAtlas() */

FontAtlas * __thiscall cocos2d::FontCharMap::createFontAtlas(FontCharMap *this)

{
  float fVar1;
  long lVar2;
  FontAtlas *this_00;
  Size *pSVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined4 local_88;
  float local_80;
  float fStack_7c;
  long local_78;
  
                    /* try { // try from 00f01a84 to 01001a8f has its CatchHandler @ 00f01ca0 */
                    /* try { // try from 00f01a90 to 01001aa3 has its CatchHandler @ 00f01bf8 */
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  this_00 = operator_new(0xd0,(nothrow_t *)&std::nothrow);
  if (this_00 != (FontAtlas *)0x0) {
    FontAtlas::FontAtlas(this_00,(Font *)this);
    pSVar3 = (Size *)Texture2D::getContentSizeInPixels(*(Texture2D **)(this + 0x28));
                    /* try { // try from 00f01ae4 to 01001af7 has its CatchHandler @ 00f01bf4 */
    Size::Size((Size *)&local_80,pSVar3);
    iVar10 = *(int *)(this + 0x34);
    iVar5 = (int)(fStack_7c / (float)*(int *)(this + 0x38));
    FontAtlas::setLineHeight(this_00,(float)*(int *)(this + 0x38));
    lVar4 = Director::getInstance();
    fVar1 = *(float *)(lVar4 + 0x1a0);
    local_90 = 0;
    local_98 = 0;
    local_8c = 1;
    uVar9 = NEON_scvtf(*(undefined8 *)(this + 0x34),4);
    local_a0 = CONCAT44((float)((ulong)uVar9 >> 0x20) / fVar1,(float)uVar9 / fVar1);
    local_88 = (undefined4)*(undefined8 *)(this + 0x34);
                    /* try { // try from 00f01b38 to 01001b4b has its CatchHandler @ 00f01bf0 */
    if (0 < iVar5) {
      iVar7 = *(int *)(this + 0x30);
      iVar6 = 0;
      do {
        if (0 < (int)(local_80 / (float)iVar10)) {
          iVar8 = 0;
          do {
            uVar9 = NEON_scvtf(CONCAT44((int)((ulong)*(undefined8 *)(this + 0x34) >> 0x20) * iVar6,
                                        (int)*(undefined8 *)(this + 0x34) * iVar8),4);
            local_a8 = CONCAT44((float)((ulong)uVar9 >> 0x20) / fVar1,(float)uVar9 / fVar1);
                    /* try { // try from 00f01b8c to 01001b97 has its CatchHandler @ 00f01ca0 */
                    /* try { // try from 00f01b98 to 01001ed7 has its CatchHandler @ 00f01748 */
            FontAtlas::addLetterDefinition(this_00,iVar7 + iVar8,(FontLetterDefinition *)&local_a8);
            iVar8 = iVar8 + 1;
          } while ((int)(local_80 / (float)iVar10) != iVar8);
          iVar7 = iVar7 + iVar8;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != iVar5);
    }
    FontAtlas::addTexture(this_00,*(Texture2D **)(this + 0x28),0);
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
                    /* catch() { ... } // from try @ 00f01b38 with catch @ 00f01bf0 */
                    /* catch() { ... } // from try @ 00f01ae4 with catch @ 00f01bf4 */
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00f01a90 with catch @ 00f01bf8 */
  __stack_chk_fail();
}

