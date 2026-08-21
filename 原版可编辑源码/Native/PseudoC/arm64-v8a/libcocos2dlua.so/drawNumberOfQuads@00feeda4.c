
/* cocos2d::TextureAtlas::drawNumberOfQuads(long, long) */

void __thiscall
cocos2d::TextureAtlas::drawNumberOfQuads(TextureAtlas *this,long param_1,long param_2)

{
  long *plVar1;
  Configuration *this_00;
  ulong uVar2;
  void *__dest;
  long lVar3;
  long lVar4;
  
  if (param_1 != 0) {
    GL::bindTexture2D(*(Texture2D **)(this + 0x50));
    this_00 = (Configuration *)Configuration::getInstance();
    uVar2 = Configuration::supportsShareableVAO(this_00);
    if (((uVar2 & 1) == 0) || (uVar2 = Configuration::supportsMapBuffer(this_00), (uVar2 & 1) == 0))
    {
      glBindBuffer(0x8892,*(undefined4 *)(this + 0x34));
      if (this[0x3c] != (TextureAtlas)0x0) {
                    /* try { // try from 00feeea8 to 010eeeaf has its CatchHandler @ 00feeeec */
                    /* try { // try from 00feeeb0 to 010eef07 has its CatchHandler @ 00feee84 */
        glBufferSubData(0x8892,0,*(long *)(this + 0x40) * 0x60,*(undefined8 *)(this + 0x58));
        this[0x3c] = (TextureAtlas)0x0;
      }
      GL::enableVertexAttribs(7);
      glVertexAttribPointer(0,3,0x1406,0,0x18,0);
                    /* catch() { ... } // from try @ 00feeea8 with catch @ 00feeeec */
      glVertexAttribPointer(1,4,0x1401,1,0x18,0xc);
      glVertexAttribPointer(2,2,0x1406,0,0x18,0x10);
      glBindBuffer(0x8893,*(undefined4 *)(this + 0x38));
      glDrawElements(4,(int)param_1 * 6,0x1403,param_2 * 0xc);
      glBindBuffer(0x8892,0);
    }
    else {
      if (this[0x3c] != (TextureAtlas)0x0) {
        glBindBuffer(0x8892,*(undefined4 *)(this + 0x34));
        glBufferData(0x8892,*(long *)(this + 0x48) * 0x60,0,0x88e8);
        __dest = (void *)glMapBufferOES(0x8892,0x88b9);
        memcpy(__dest,*(void **)(this + 0x58),*(long *)(this + 0x40) * 0x60);
        glUnmapBufferOES(0x8892);
        glBindBuffer(0x8892,0);
        this[0x3c] = (TextureAtlas)0x0;
      }
      GL::bindVAO(*(uint *)(this + 0x30));
      glBindBuffer(0x8893,*(undefined4 *)(this + 0x38));
      glDrawElements(4,(int)param_1 * 6,0x1403,param_2 * 0xc);
                    /* catch() { ... } // from try @ 00feeeb0 with catch @ 00feee84 */
      GL::bindVAO(0);
    }
    glBindBuffer(0x8893,0);
    lVar3 = Director::getInstance();
    lVar4 = *(long *)(lVar3 + 0x1b0);
    plVar1 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar4);
    lVar3 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4);
    *plVar1 = *plVar1 + 1;
    *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4) = lVar3 + param_1 * 6;
  }
  return;
}

