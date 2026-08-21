
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (cocos2d::NodeGrid::*)(),
   cocos2d::NodeGrid*>, std::__ndk1::allocator<std::__ndk1::__bind<void (cocos2d::NodeGrid::*)(),
   cocos2d::NodeGrid*> >, void ()>::__clone(std::__ndk1::__function::__base<void ()>*) const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::NodeGrid::*)(),cocos2d::NodeGrid*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::NodeGrid::*)(),cocos2d::NodeGrid*>>,void()>
::__clone(__func<std::__ndk1::__bind<void(cocos2d::NodeGrid::*)(),cocos2d::NodeGrid*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::NodeGrid::*)(),cocos2d::NodeGrid*>>,void()>
          *this,__base *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_01707e10;
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar1 = *(undefined8 *)(this + 8);
                    /* catch() { ... } // from try @ 00f2c5a4 with catch @ 00f2c578 */
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}

