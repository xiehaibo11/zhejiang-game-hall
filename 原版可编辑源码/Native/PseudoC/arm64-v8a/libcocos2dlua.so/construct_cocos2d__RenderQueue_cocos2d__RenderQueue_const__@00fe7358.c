
/* void std::__ndk1::allocator<cocos2d::RenderQueue>::construct<cocos2d::RenderQueue,
   cocos2d::RenderQueue const&>(cocos2d::RenderQueue*, cocos2d::RenderQueue const&) */

void __thiscall
std::__ndk1::allocator<cocos2d::RenderQueue>::
construct<cocos2d::RenderQueue,cocos2d::RenderQueue_const&>
          (allocator<cocos2d::RenderQueue> *this,RenderQueue *param_1,RenderQueue *param_2)

{
  undefined2 uVar1;
  
  vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>>::vector
            ((vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>> *)
             param_1,(vector *)param_2);
  vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>>::vector
            ((vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>> *)
             (param_1 + 0x18),(vector *)(param_2 + 0x18));
  vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>>::vector
            ((vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>> *)
             (param_1 + 0x30),(vector *)(param_2 + 0x30));
  vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>>::vector
            ((vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>> *)
             (param_1 + 0x48),(vector *)(param_2 + 0x48));
  vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>>::vector
            ((vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>> *)
             (param_1 + 0x60),(vector *)(param_2 + 0x60));
  uVar1 = *(undefined2 *)(param_2 + 0x78);
  param_1[0x7a] = param_2[0x7a];
  *(undefined2 *)(param_1 + 0x78) = uVar1;
  return;
}

