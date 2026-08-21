
/* cocos2d::SpriteFrame::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::Rect const&, bool, cocos2d::Vec2 const&,
   cocos2d::Size const&) */

SpriteFrame *
cocos2d::SpriteFrame::create
          (basic_string *param_1,Rect *param_2,bool param_3,Vec2 *param_4,Size *param_5)

{
  SpriteFrame *this;
  ulong uVar1;
  
  this = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (this != (SpriteFrame *)0x0) {
    SpriteFrame(this);
                    /* try { // try from 00f43aa0 to 01043aa7 has its CatchHandler @ 00f43c48 */
    uVar1 = initWithTextureFilename(this,param_1,param_2,param_3,param_4,param_5);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (SpriteFrame *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

