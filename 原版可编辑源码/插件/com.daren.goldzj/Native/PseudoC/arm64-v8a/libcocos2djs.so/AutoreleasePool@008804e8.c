
/* cocos2d::AutoreleasePool::AutoreleasePool() */

void __thiscall cocos2d::AutoreleasePool::AutoreleasePool(AutoreleasePool *this)

{
  long lVar1;
  void *pvVar2;
  vector<cocos2d::AutoreleasePool*,std::__ndk1::allocator<cocos2d::AutoreleasePool*>> *this_00;
  AutoreleasePool *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x19] = (AutoreleasePool)0x0;
  pvVar2 = operator_new(0x4b0);
  *(void **)(this + 8) = pvVar2;
  *(void **)this = pvVar2;
  *(long *)(this + 0x10) = (long)pvVar2 + 0x4b0;
  this_00 = (vector<cocos2d::AutoreleasePool*,std::__ndk1::allocator<cocos2d::AutoreleasePool*>> *)
            PoolManager::getInstance();
  local_30 = this;
  if (*(undefined8 **)(this_00 + 8) == *(undefined8 **)(this_00 + 0x10)) {
    std::__ndk1::vector<cocos2d::AutoreleasePool*,std::__ndk1::allocator<cocos2d::AutoreleasePool*>>
    ::__push_back_slow_path<cocos2d::AutoreleasePool*const&>(this_00,&local_30);
  }
  else {
    **(undefined8 **)(this_00 + 8) = this;
    *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

