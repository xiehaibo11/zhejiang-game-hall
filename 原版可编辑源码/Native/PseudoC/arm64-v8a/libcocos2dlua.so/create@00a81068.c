
/* fairygui::ActionMovieClip::create(cocos2d::Animation*, float, bool) */

Action * fairygui::ActionMovieClip::create(Animation *param_1,float param_2,bool param_3)

{
  Action *this;
  
                    /* try { // try from 00a81068 to 00b81097 has its CatchHandler @ 00a80fe0 */
  this = operator_new(0xd0,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00a81098 to 00b810ab has its CatchHandler @ 00a810ec */
  if (this != (Action *)0x0) {
    cocos2d::Action::Action(this);
                    /* try { // try from 00a810ac to 00b81107 has its CatchHandler @ 00a80fe0 */
    *(undefined4 *)(this + 0xb0) = 0xffffffff;
    *(undefined8 *)(this + 0x68) = 0x3f800000;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x5d) = 0;
    this[0x70] = (Action)0x0;
    *(undefined8 *)(this + 0xa0) = 0;
                    /* catch() { ... } // from try @ 00a81030 with catch @ 00a810ec
                       catch() { ... } // from try @ 00a81098 with catch @ 00a810ec */
    *(undefined8 *)(this + 0xbc) = 0;
    *(undefined8 *)(this + 0xb4) = 0;
    *(undefined ***)this = &PTR__ActionMovieClip_016a60d0;
    *(undefined ***)(this + 0x28) = &PTR_clone_016a6130;
    *(undefined4 *)(this + 0xc4) = 0;
    setAnimation((ActionMovieClip *)this,param_1,param_2,param_3);
    cocos2d::Ref::autorelease((Ref *)this);
  }
  return this;
}

