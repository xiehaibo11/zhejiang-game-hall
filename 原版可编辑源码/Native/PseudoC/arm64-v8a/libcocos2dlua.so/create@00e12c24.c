
/* cocos2d::extension::ControlSwitchSprite::create(cocos2d::Sprite*, cocos2d::Sprite*,
   cocos2d::Sprite*, cocos2d::Sprite*, cocos2d::Label*, cocos2d::Label*) */

Sprite * cocos2d::extension::ControlSwitchSprite::create
                   (Sprite *param_1,Sprite *param_2,Sprite *param_3,Sprite *param_4,Label *param_5,
                   Label *param_6)

{
  Sprite *this;
  
  this = operator_new(0x590,(nothrow_t *)&std::nothrow);
  if (this != (Sprite *)0x0) {
    Sprite::Sprite(this);
    *(undefined8 *)(this + 0x538) = 0;
    *(undefined ***)this = &PTR__ControlSwitchSprite_016ebef0;
    *(undefined ***)(this + 0x2f8) = &PTR__ControlSwitchSprite_016ec618;
    *(undefined4 *)(this + 0x540) = 0;
    *(undefined ***)(this + 0x530) = &PTR__ControlSwitchSprite_016ec658;
    *(undefined8 *)(this + 0x550) = 0;
    *(undefined8 *)(this + 0x548) = 0;
    *(undefined8 *)(this + 0x560) = 0;
    *(undefined8 *)(this + 0x558) = 0;
    *(undefined8 *)(this + 0x570) = 0;
    *(undefined8 *)(this + 0x568) = 0;
    *(undefined8 *)(this + 0x580) = 0;
    *(undefined8 *)(this + 0x578) = 0;
  }
  initWithMaskSprite((ControlSwitchSprite *)this,param_1,param_2,param_3,param_4,param_5,param_6);
  Ref::autorelease((Ref *)this);
  return this;
}

