
/* std::__ndk1::__tree<cocos2d::experimental::FrameBuffer*,
   std::__ndk1::less<cocos2d::experimental::FrameBuffer*>,
   std::__ndk1::allocator<cocos2d::experimental::FrameBuffer*>
   >::destroy(std::__ndk1::__tree_node<cocos2d::experimental::FrameBuffer*, void*>*) */

void __thiscall
std::__ndk1::
__tree<cocos2d::experimental::FrameBuffer*,std::__ndk1::less<cocos2d::experimental::FrameBuffer*>,std::__ndk1::allocator<cocos2d::experimental::FrameBuffer*>>
::destroy(__tree<cocos2d::experimental::FrameBuffer*,std::__ndk1::less<cocos2d::experimental::FrameBuffer*>,std::__ndk1::allocator<cocos2d::experimental::FrameBuffer*>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    operator_delete(param_1);
    return;
  }
  return;
}

