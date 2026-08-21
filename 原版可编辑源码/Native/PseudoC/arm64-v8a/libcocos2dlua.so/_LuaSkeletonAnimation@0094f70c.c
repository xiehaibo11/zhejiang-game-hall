
/* non-virtual thunk to LuaSkeletonAnimation::~LuaSkeletonAnimation() */

void __thiscall LuaSkeletonAnimation::~LuaSkeletonAnimation(LuaSkeletonAnimation *this)

{
  ScriptHandlerMgr *this_00;
  SkeletonAnimation *this_01;
  
                    /* try { // try from 0094f71c to 00a4f74f has its CatchHandler @ 0094f81c */
  this_01 = (SkeletonAnimation *)(this + -0x2f8);
  *(undefined ***)this_01 = &PTR__LuaSkeletonAnimation_0169d290;
  *(undefined ***)this = &PTR__LuaSkeletonAnimation_0169d810;
  this_00 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::removeObjectAllHandlers(this_00,this_01);
  spine::SkeletonAnimation::~SkeletonAnimation(this_01);
  return;
}

