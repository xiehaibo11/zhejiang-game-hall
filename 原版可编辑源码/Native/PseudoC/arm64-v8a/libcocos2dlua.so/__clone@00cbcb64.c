
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (cocostudio::timeline::SkeletonNode::*)(cocos2d::Mat4 const&),
   cocostudio::timeline::SkeletonNode*, cocos2d::Mat4&>,
   std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocostudio::timeline::SkeletonNode::*)(cocos2d::Mat4 const&),
   cocostudio::timeline::SkeletonNode*, cocos2d::Mat4&> >, void ()>::__clone() const */

undefined8 * __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocostudio::timeline::SkeletonNode::*)(cocos2d::Mat4_const&),cocostudio::timeline::SkeletonNode*,cocos2d::Mat4&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocostudio::timeline::SkeletonNode::*)(cocos2d::Mat4_const&),cocostudio::timeline::SkeletonNode*,cocos2d::Mat4&>>,void()>
::__clone(__func<std::__ndk1::__bind<void(cocostudio::timeline::SkeletonNode::*)(cocos2d::Mat4_const&),cocostudio::timeline::SkeletonNode*,cocos2d::Mat4&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocostudio::timeline::SkeletonNode::*)(cocos2d::Mat4_const&),cocostudio::timeline::SkeletonNode*,cocos2d::Mat4&>>,void()>
          *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(0x60);
  *puVar1 = &PTR____func_016cdc40;
  uVar2 = *(undefined8 *)(this + 8);
  puVar1[2] = *(undefined8 *)(this + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(this + 0x18);
  cocos2d::Mat4::Mat4((Mat4 *)(puVar1 + 4),(Mat4 *)(this + 0x20));
  return puVar1;
}

