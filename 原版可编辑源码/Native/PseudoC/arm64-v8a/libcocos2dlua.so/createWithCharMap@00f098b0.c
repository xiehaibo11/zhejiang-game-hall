
/* cocos2d::Label::createWithCharMap(cocos2d::Texture2D*, int, int, int) */

Ref * cocos2d::Label::createWithCharMap(Texture2D *param_1,int param_2,int param_3,int param_4)

{
  Ref *this;
  ulong uVar1;
  
  this = operator_new(0x6a0,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Label((Label *)this,0,0);
    uVar1 = (**(code **)(*(long *)this + 0x550))(this,param_1,param_2,param_3,param_4);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Ref *)0x0;
    }
    else {
      Ref::autorelease(this);
    }
  }
  return this;
}

