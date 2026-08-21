
/* fairygui::GMovieClip::handleInit() */

void __thiscall fairygui::GMovieClip::handleInit(GMovieClip *this)

{
  FUISprite *this_00;
  ulong uVar1;
  Action *this_01;
  
  this_00 = operator_new(0x570,(nothrow_t *)&std::nothrow);
  if (this_00 != (FUISprite *)0x0) {
    FUISprite::FUISprite(this_00);
    uVar1 = (**(code **)(*(long *)this_00 + 0x500))(this_00);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this_00 + 8))(this_00);
      this_00 = (FUISprite *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this_00);
    }
  }
  *(FUISprite **)(this + 0x1d8) = this_00;
  cocos2d::Ref::retain((Ref *)this_00);
  this_01 = operator_new(0xd0,(nothrow_t *)&std::nothrow);
  if (this_01 != (Action *)0x0) {
    cocos2d::Action::Action(this_01);
                    /* try { // try from 00a80fe0 to 00b8102f has its CatchHandler @ 00a80fe0
                       catch() { ... } // from try @ 00a80fe0 with catch @ 00a80fe0
                       catch() { ... } // from try @ 00a81068 with catch @ 00a80fe0
                       catch() { ... } // from try @ 00a810ac with catch @ 00a80fe0 */
    *(undefined4 *)(this_01 + 0xb0) = 0xffffffff;
    *(undefined8 *)(this_01 + 0x50) = 0;
    *(undefined8 *)(this_01 + 0x58) = 0;
    *(undefined8 *)(this_01 + 0x5d) = 0;
    this_01[0x70] = (Action)0x0;
    *(undefined8 *)(this_01 + 0xa0) = 0;
    *(undefined8 *)(this_01 + 0xbc) = 0;
    *(undefined8 *)(this_01 + 0xb4) = 0;
    *(undefined ***)this_01 = &PTR__ActionMovieClip_016a60d0;
    *(undefined ***)(this_01 + 0x28) = &PTR_clone_016a6130;
    *(undefined8 *)(this_01 + 0x68) = 0x3f800000;
    *(undefined4 *)(this_01 + 0xc4) = 0;
    cocos2d::Ref::autorelease((Ref *)this_01);
  }
  *(Action **)(this + 0x1e0) = this_01;
                    /* try { // try from 00a81030 to 00b81067 has its CatchHandler @ 00a810ec */
  cocos2d::Ref::retain((Ref *)this_01);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(this + 0x1d8);
  return;
}

