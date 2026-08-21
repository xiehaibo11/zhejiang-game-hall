
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (cocos2d::TransitionScene::*)(),
   cocos2d::TransitionMoveInL*>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::TransitionScene::*)(), cocos2d::TransitionMoveInL*> >, void
   ()>::__clone(std::__ndk1::__function::__base<void ()>*) const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionMoveInL*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionMoveInL*>>,void()>
::__clone(__func<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionMoveInL*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionMoveInL*>>,void()>
          *this,__base *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00f5f3d0 to 0105f3db has its CatchHandler @ 00f5f520 */
  *(undefined ***)param_1 = &PTR_FUN_0171ca08;
                    /* try { // try from 00f5f3dc to 0105f3e7 has its CatchHandler @ 00f5f510 */
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}

