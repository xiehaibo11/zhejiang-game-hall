
/* cocos2d::FontFNT::createFontAtlas() */

FontAtlas * __thiscall cocos2d::FontFNT::createFontAtlas(FontFNT *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  FontAtlas *this_00;
  Director *this_01;
  TextureCache *this_02;
  Texture2D *pTVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  int local_70;
  long local_68;
  
                    /* try { // try from 00f033f4 to 010033ff has its CatchHandler @ 00f03620 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(this + 0x28);
                    /* try { // try from 00f03408 to 01003413 has its CatchHandler @ 00f0361c */
  if (((*(long *)(lVar5 + 0x40) != 0) && (*(long *)(*(long *)(lVar5 + 0xa8) + 0x10) != 0)) &&
     (*(int *)(lVar5 + 0x50) != 0)) {
                    /* try { // try from 00f0342c to 01003433 has its CatchHandler @ 00f03684 */
    this_00 = operator_new(0xd0,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00f03438 to 01003443 has its CatchHandler @ 00f03618 */
    if (this_00 == (FontAtlas *)0x0) goto LAB_00f035b0;
    FontAtlas::FontAtlas(this_00,(Font *)this);
                    /* try { // try from 00f03450 to 01003487 has its CatchHandler @ 00f03664 */
    fVar11 = (float)*(int *)(*(long *)(this + 0x28) + 0xb0);
    fVar7 = 1.0;
    if (1.1920929e-07 <= ABS(*(float *)(this + 0x38) - fVar11)) {
      fVar7 = *(float *)(this + 0x38) / fVar11;
    }
    FontAtlas::setLineHeight(this_00,fVar7 * (float)*(int *)(*(long *)(this + 0x28) + 0x50));
                    /* try { // try from 00f0348c to 010034a3 has its CatchHandler @ 00f03614 */
    for (plVar6 = *(long **)(*(long *)(this + 0x28) + 0x38); plVar6 != (long *)0x0;
        plVar6 = (long *)*plVar6) {
      Rect::Rect((Rect *)&local_a0);
      Rect::operator=((Rect *)&local_a0,(Rect *)(plVar6 + 3));
      fVar7 = local_a0;
      lVar5 = Director::getInstance();
      fVar11 = fStack_9c;
      fVar8 = *(float *)(lVar5 + 0x1a0);
      lVar5 = Director::getInstance();
      fVar2 = local_98;
                    /* try { // try from 00f034d4 to 010034e3 has its CatchHandler @ 00f03660 */
      fVar9 = *(float *)(lVar5 + 0x1a0);
      lVar5 = Director::getInstance();
      fVar3 = fStack_94;
      fVar10 = *(float *)(lVar5 + 0x1a0);
      lVar5 = Director::getInstance();
                    /* try { // try from 00f03504 to 0100350b has its CatchHandler @ 00f03664 */
      Rect::Rect((Rect *)local_90,fVar7 / fVar8,fVar11 / fVar9,fVar2 / fVar10,
                 fVar3 / *(float *)(lVar5 + 0x1a0));
                    /* try { // try from 00f03510 to 0100351f has its CatchHandler @ 00f03610 */
      Rect::operator=((Rect *)&local_a0,(Rect *)local_90);
                    /* try { // try from 00f0352c to 0100353b has its CatchHandler @ 00f0360c */
      local_80 = NEON_scvtf(CONCAT44((int)*(short *)((long)plVar6 + 0x2a),
                                     (int)*(short *)(plVar6 + 5)),4);
      local_78 = 0;
      local_74 = 1;
      local_90[0] = CONCAT44(fStack_9c + (float)((ulong)*(undefined8 *)(this + 0x30) >> 0x20),
                             local_a0 + (float)*(undefined8 *)(this + 0x30));
                    /* try { // try from 00f03554 to 0100357f has its CatchHandler @ 00f03684 */
      local_70 = (int)*(short *)((long)plVar6 + 0x2c);
      if ((uint)*(wchar32 *)((long)plVar6 + 0x14) >> 0x10 == 0) {
        FontAtlas::addLetterDefinition
                  (this_00,*(wchar32 *)((long)plVar6 + 0x14),(FontLetterDefinition *)local_90);
      }
    }
    this_01 = (Director *)Director::getInstance();
    this_02 = (TextureCache *)Director::getTextureCache(this_01);
    pTVar4 = (Texture2D *)
             TextureCache::addImage(this_02,(basic_string *)(*(long *)(this + 0x28) + 0x68));
    if (pTVar4 != (Texture2D *)0x0) {
      FontAtlas::addTexture(this_00,pTVar4,0);
      goto LAB_00f035b0;
    }
    Ref::release((Ref *)this_00);
  }
  this_00 = (FontAtlas *)0x0;
LAB_00f035b0:
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00f035d4 to 010035db has its CatchHandler @ 00f03608 */
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

