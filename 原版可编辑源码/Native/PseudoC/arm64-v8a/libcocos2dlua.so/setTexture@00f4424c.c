
/* cocos2d::SpriteFrame::setTexture(cocos2d::Texture2D*) */

void __thiscall cocos2d::SpriteFrame::setTexture(SpriteFrame *this,Texture2D *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x90);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    if (param_1 != (Texture2D *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f44100 with catch @ 00f4427c
                        */
      Ref::retain((Ref *)param_1);
    }
    *(Texture2D **)(this + 0x90) = param_1;
  }
                    /* catch() { ... } // from try @ 00f44bf8 with catch @ 00f44288 */
  return;
}

