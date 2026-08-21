
/* non-virtual thunk to LuaSkeletonAnimation::~LuaSkeletonAnimation() */

void __thiscall LuaSkeletonAnimation::~LuaSkeletonAnimation(LuaSkeletonAnimation *this)

{
  ScriptHandlerMgr *this_00;
  SkeletonAnimation *this_01;
  
  this_01 = (SkeletonAnimation *)(this + -0x2f8);
  *(undefined ***)this_01 = &PTR__LuaSkeletonAnimation_0169d290;
                    /* catch() { ... } // from try @ 0094f750 with catch @ 0094f7e8 */
  *(undefined ***)this = &PTR__LuaSkeletonAnimation_0169d810;
                    /* catch() { ... } // from try @ 0094f768 with catch @ 0094f7ec */
  this_00 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::removeObjectAllHandlers(this_00,this_01);
  spine::SkeletonAnimation::~SkeletonAnimation(this_01);
  operator_delete(this_01);
  return;
}

