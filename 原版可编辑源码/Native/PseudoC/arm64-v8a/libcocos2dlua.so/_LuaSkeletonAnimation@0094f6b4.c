
/* LuaSkeletonAnimation::~LuaSkeletonAnimation() */

void __thiscall LuaSkeletonAnimation::~LuaSkeletonAnimation(LuaSkeletonAnimation *this)

{
  ScriptHandlerMgr *this_00;
  
  *(undefined ***)this = &PTR__LuaSkeletonAnimation_0169d290;
  *(undefined ***)(this + 0x2f8) = &PTR__LuaSkeletonAnimation_0169d810;
  this_00 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::removeObjectAllHandlers(this_00,this);
  spine::SkeletonAnimation::~SkeletonAnimation((SkeletonAnimation *)this);
  return;
}

