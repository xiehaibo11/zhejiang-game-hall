
/* LuaSkeletonAnimation::~LuaSkeletonAnimation() */

void __thiscall LuaSkeletonAnimation::~LuaSkeletonAnimation(LuaSkeletonAnimation *this)

{
  ScriptHandlerMgr *this_00;
  
                    /* try { // try from 0094f768 to 00a4f79b has its CatchHandler @ 0094f7ec */
  *(undefined ***)this = &PTR__LuaSkeletonAnimation_0169d290;
  *(undefined ***)(this + 0x2f8) = &PTR__LuaSkeletonAnimation_0169d810;
  this_00 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::removeObjectAllHandlers(this_00,this);
                    /* try { // try from 0094f79c to 00a4f837 has its CatchHandler @ 0094f604 */
  spine::SkeletonAnimation::~SkeletonAnimation((SkeletonAnimation *)this);
  operator_delete(this);
  return;
}

