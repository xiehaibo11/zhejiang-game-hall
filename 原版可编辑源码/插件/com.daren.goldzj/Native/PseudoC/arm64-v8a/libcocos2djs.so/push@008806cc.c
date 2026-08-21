
/* cocos2d::PoolManager::push(cocos2d::AutoreleasePool*) */

void __thiscall cocos2d::PoolManager::push(PoolManager *this,AutoreleasePool *param_1)

{
  long lVar1;
  AutoreleasePool *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  if (*(undefined8 **)(this + 8) == *(undefined8 **)(this + 0x10)) {
    std::__ndk1::vector<cocos2d::AutoreleasePool*,std::__ndk1::allocator<cocos2d::AutoreleasePool*>>
    ::__push_back_slow_path<cocos2d::AutoreleasePool*const&>
              ((vector<cocos2d::AutoreleasePool*,std::__ndk1::allocator<cocos2d::AutoreleasePool*>>
                *)this,&local_30);
  }
  else {
    **(undefined8 **)(this + 8) = param_1;
    *(long *)(this + 8) = *(long *)(this + 8) + 8;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

