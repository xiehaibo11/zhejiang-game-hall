
/* cocos2d::Sprite::initWithSpriteFrame(cocos2d::SpriteFrame*) */

uint __thiscall cocos2d::Sprite::initWithSpriteFrame(Sprite *this,SpriteFrame *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_1 != (SpriteFrame *)0x0) {
    uVar2 = SpriteFrame::getTexture(param_1);
    uVar1 = (**(code **)(*(long *)this + 0x608))(this,uVar2,param_1 + 0x5c,param_1[0x58]);
                    /* try { // try from 00f3ea98 to 0103ea9f has its CatchHandler @ 00f3f4cc */
    (**(code **)(*(long *)this + 0x598))(this,param_1);
    return uVar1 & 1;
  }
  return 0;
}

