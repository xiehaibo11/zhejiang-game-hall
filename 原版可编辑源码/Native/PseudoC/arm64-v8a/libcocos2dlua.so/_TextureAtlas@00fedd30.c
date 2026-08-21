
/* cocos2d::TextureAtlas::~TextureAtlas() */

void __thiscall cocos2d::TextureAtlas::~TextureAtlas(TextureAtlas *this)

{
  Configuration *this_00;
  ulong uVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__TextureAtlas_01724470;
  if (*(void **)(this + 0x58) != (void *)0x0) {
    free(*(void **)(this + 0x58));
    *(undefined8 *)(this + 0x58) = 0;
  }
                    /* try { // try from 00fedd64 to 010edd6b has its CatchHandler @ 00fede4c */
  if (*(void **)(this + 0x28) != (void *)0x0) {
    free(*(void **)(this + 0x28));
                    /* try { // try from 00fedd6c to 010ede7b has its CatchHandler @ 00fedb44 */
    *(undefined8 *)(this + 0x28) = 0;
  }
  glDeleteBuffers(2,this + 0x34);
  this_00 = (Configuration *)Configuration::getInstance();
  uVar1 = Configuration::supportsShareableVAO(this_00);
  if ((uVar1 & 1) != 0) {
    (*glDeleteVertexArraysOESEXT)(1,this + 0x30);
    GL::bindVAO(0);
  }
  if (*(Ref **)(this + 0x50) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x50));
  }
  lVar2 = Director::getInstance();
  EventDispatcher::removeEventListener
            (*(EventDispatcher **)(lVar2 + 0xb0),*(EventListener **)(this + 0x60));
  Ref::~Ref((Ref *)this);
  return;
}

