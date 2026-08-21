
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (cocostudio::timeline::SkeletonNode::*)(cocos2d::Mat4 const&),
   cocostudio::timeline::SkeletonNode*, cocos2d::Mat4&>,
   std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocostudio::timeline::SkeletonNode::*)(cocos2d::Mat4 const&),
   cocostudio::timeline::SkeletonNode*, cocos2d::Mat4&> >, void ()>::destroy_deallocate() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocostudio::timeline::SkeletonNode::*)(cocos2d::Mat4_const&),cocostudio::timeline::SkeletonNode*,cocos2d::Mat4&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocostudio::timeline::SkeletonNode::*)(cocos2d::Mat4_const&),cocostudio::timeline::SkeletonNode*,cocos2d::Mat4&>>,void()>
::destroy_deallocate
          (__func<std::__ndk1::__bind<void(cocostudio::timeline::SkeletonNode::*)(cocos2d::Mat4_const&),cocostudio::timeline::SkeletonNode*,cocos2d::Mat4&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocostudio::timeline::SkeletonNode::*)(cocos2d::Mat4_const&),cocostudio::timeline::SkeletonNode*,cocos2d::Mat4&>>,void()>
           *this)

{
  cocos2d::Mat4::~Mat4((Mat4 *)(this + 0x20));
  operator_delete(this);
  return;
}

