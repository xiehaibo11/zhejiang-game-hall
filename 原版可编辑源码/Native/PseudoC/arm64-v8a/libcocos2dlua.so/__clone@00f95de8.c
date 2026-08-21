
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (cocos2d::Director::*)(bool),
   cocos2d::Director*&, bool&>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::Director::*)(bool), cocos2d::Director*&, bool&> >, void
   ()>::__clone(std::__ndk1::__function::__base<void ()>*) const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::Director::*)(bool),cocos2d::Director*&,bool&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Director::*)(bool),cocos2d::Director*&,bool&>>,void()>
::__clone(__func<std::__ndk1::__bind<void(cocos2d::Director::*)(bool),cocos2d::Director*&,bool&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Director::*)(bool),cocos2d::Director*&,bool&>>,void()>
          *this,__base *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_01722730;
  uVar1 = *(undefined8 *)(this + 0x18);
  uVar3 = *(undefined8 *)(this + 0x10);
  uVar2 = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(this + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 8) = uVar2;
  return;
}

