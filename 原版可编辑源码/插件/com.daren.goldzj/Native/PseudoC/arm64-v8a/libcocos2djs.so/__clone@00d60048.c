
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (cocos2d::middleware::TypedArrayPool::*)(), cocos2d::middleware::TypedArrayPool*>,
   std::__ndk1::allocator<std::__ndk1::__bind<void (cocos2d::middleware::TypedArrayPool::*)(),
   cocos2d::middleware::TypedArrayPool*> >, void ()>::__clone() const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::middleware::TypedArrayPool::*)(),cocos2d::middleware::TypedArrayPool*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::middleware::TypedArrayPool::*)(),cocos2d::middleware::TypedArrayPool*>>,void()>
::__clone(__func<std::__ndk1::__bind<void(cocos2d::middleware::TypedArrayPool::*)(),cocos2d::middleware::TypedArrayPool*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::middleware::TypedArrayPool::*)(),cocos2d::middleware::TypedArrayPool*>>,void()>
          *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = operator_new(0x20);
  *puVar1 = &PTR_FUN_01c92010;
  uVar3 = *(undefined8 *)(this + 0x10);
  uVar2 = *(undefined8 *)(this + 8);
  puVar1[3] = *(undefined8 *)(this + 0x18);
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}

