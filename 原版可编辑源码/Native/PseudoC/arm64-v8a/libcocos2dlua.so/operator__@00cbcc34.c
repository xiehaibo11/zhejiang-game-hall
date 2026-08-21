
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (cocostudio::timeline::SkeletonNode::*)(cocos2d::Mat4 const&),
   cocostudio::timeline::SkeletonNode*, cocos2d::Mat4&>,
   std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocostudio::timeline::SkeletonNode::*)(cocos2d::Mat4 const&),
   cocostudio::timeline::SkeletonNode*, cocos2d::Mat4&> >, void ()>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocostudio::timeline::SkeletonNode::*)(cocos2d::Mat4_const&),cocostudio::timeline::SkeletonNode*,cocos2d::Mat4&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocostudio::timeline::SkeletonNode::*)(cocos2d::Mat4_const&),cocostudio::timeline::SkeletonNode*,cocos2d::Mat4&>>,void()>
::operator()(__func<std::__ndk1::__bind<void(cocostudio::timeline::SkeletonNode::*)(cocos2d::Mat4_const&),cocostudio::timeline::SkeletonNode*,cocos2d::Mat4&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocostudio::timeline::SkeletonNode::*)(cocos2d::Mat4_const&),cocostudio::timeline::SkeletonNode*,cocos2d::Mat4&>>,void()>
             *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  plVar1 = (long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1));
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00cbcc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,this + 0x20);
  return;
}

