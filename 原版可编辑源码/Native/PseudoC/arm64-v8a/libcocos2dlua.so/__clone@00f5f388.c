
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (cocos2d::TransitionScene::*)(),
   cocos2d::TransitionMoveInL*>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::TransitionScene::*)(), cocos2d::TransitionMoveInL*> >, void ()>::__clone() const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionMoveInL*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionMoveInL*>>,void()>
::__clone(__func<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionMoveInL*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionMoveInL*>>,void()>
          *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 00f5f38c to 0105f397 has its CatchHandler @ 00f5f524 */
  puVar1 = operator_new(0x20);
  *puVar1 = &PTR_FUN_0171ca08;
  uVar3 = *(undefined8 *)(this + 8);
  uVar2 = *(undefined8 *)(this + 0x18);
  puVar1[2] = *(undefined8 *)(this + 0x10);
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
  return;
}

