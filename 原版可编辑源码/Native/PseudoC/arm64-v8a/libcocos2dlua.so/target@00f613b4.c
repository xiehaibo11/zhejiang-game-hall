
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (cocos2d::TransitionScene::*)(),
   cocos2d::TransitionProgress*>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::TransitionScene::*)(), cocos2d::TransitionProgress*> >, void ()>::target(std::type_info
   const&) const */

__func<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionProgress*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionProgress*>>,void()>
* __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionProgress*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionProgress*>>,void()>
::target(__func<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionProgress*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionProgress*>>,void()>
         *this,type_info *param_1)

{
  __func<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionProgress*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionProgress*>>,void()>
  *p_Var1;
  
                    /* try { // try from 00f613bc to 010613c3 has its CatchHandler @ 00f6148c */
  p_Var1 = this + 8;
                    /* try { // try from 00f613c4 to 0106149f has its CatchHandler @ 00f6124c */
  if (*(char **)(param_1 + 8) !=
      "NSt6__ndk16__bindIMN7cocos2d15TransitionSceneEFvvEJPNS1_18TransitionProgressEEEE") {
    p_Var1 = (__func<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionProgress*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionProgress*>>,void()>
              *)0x0;
  }
  return p_Var1;
}

