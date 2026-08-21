
/* cocos2d::Renderer::setupBuffer() */

void __thiscall cocos2d::Renderer::setupBuffer(Renderer *this)

{
  Configuration *this_00;
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 00fe46d4 with catch @ 00fe475c */
  this_00 = (Configuration *)Configuration::getInstance();
  uVar1 = Configuration::supportsShareableVAO(this_00);
  if ((uVar1 & 1) != 0) {
    setupVBOAndVAO(this);
    return;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fe486c with catch @ 00fe4778
                       catch(type#1 @ 00000000) { ... } // from try @ 00fe48cc with catch @ 00fe4778
                        */
  glGenBuffers(2,this + 0x1b007c);
  return;
}

