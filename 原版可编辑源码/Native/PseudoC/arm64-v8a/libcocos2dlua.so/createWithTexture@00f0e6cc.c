
/* cocos2d::LabelLetter::createWithTexture(cocos2d::Texture2D*, cocos2d::Rect const&, bool) */

Sprite * cocos2d::LabelLetter::createWithTexture(Texture2D *param_1,Rect *param_2,bool param_3)

{
  Sprite *this;
  ulong uVar1;
  
  this = operator_new(0x530,(nothrow_t *)&std::nothrow);
  if (this != (Sprite *)0x0) {
    Sprite::Sprite(this);
    *(undefined8 *)(this + 0x300) = 0;
    this[0x52d] = (Sprite)0x1;
    *(undefined ***)this = &PTR__Sprite_016fd9f8;
    *(undefined ***)(this + 0x2f8) = &PTR__LabelLetter_016fe078;
    uVar1 = Sprite::initWithTexture(this,param_1,param_2,param_3);
    if ((uVar1 & 1) == 0) {
                    /* catch() { ... } // from try @ 00f0e618 with catch @ 00f0e768 */
                    /* catch() { ... } // from try @ 00f0e5c4 with catch @ 00f0e76c */
      (**(code **)(*(long *)this + 8))(this);
      this = (Sprite *)0x0;
    }
    else {
      Sprite::setVisible(this,false);
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

