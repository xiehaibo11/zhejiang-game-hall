
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (cocos2d::TransitionScene::*)(),
   cocos2d::TransitionZoomFlipAngular*>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::TransitionScene::*)(), cocos2d::TransitionZoomFlipAngular*> >, void ()>::__clone()
   const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionZoomFlipAngular*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionZoomFlipAngular*>>,void()>
::__clone(__func<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionZoomFlipAngular*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionZoomFlipAngular*>>,void()>
          *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = operator_new(0x20);
                    /* try { // try from 00f5f96c to 0105fa07 has its CatchHandler @ 00f5f96c
                       catch() { ... } // from try @ 00f5f96c with catch @ 00f5f96c
                       catch() { ... } // from try @ 00f5fa28 with catch @ 00f5f96c */
  *puVar1 = &PTR_FUN_0171ce48;
  uVar3 = *(undefined8 *)(this + 8);
  uVar2 = *(undefined8 *)(this + 0x18);
  puVar1[2] = *(undefined8 *)(this + 0x10);
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
  return;
}

