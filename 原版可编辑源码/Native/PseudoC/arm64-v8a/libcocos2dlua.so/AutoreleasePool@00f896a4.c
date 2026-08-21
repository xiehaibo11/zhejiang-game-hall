
/* cocos2d::AutoreleasePool::AutoreleasePool() */

void __thiscall cocos2d::AutoreleasePool::AutoreleasePool(AutoreleasePool *this)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  vector<cocos2d::AutoreleasePool*,std::__ndk1::allocator<cocos2d::AutoreleasePool*>> *this_00;
  void *pvVar4;
  long lVar5;
  AutoreleasePool *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x18),"");
  pvVar4 = *(void **)this;
  if ((ulong)(*(long *)(this + 0x10) - (long)pvVar4 >> 3) < 0x96) {
    lVar5 = *(long *)(this + 8);
    pvVar3 = operator_new(0x4b0);
    lVar5 = lVar5 - (long)pvVar4;
    if (0 < lVar5) {
      __memcpy_chk(pvVar3,pvVar4,lVar5,0x4b0);
      pvVar4 = *(void **)this;
    }
    *(void **)this = pvVar3;
    *(long *)(this + 8) = (long)pvVar3 + lVar5;
    *(long *)(this + 0x10) = (long)pvVar3 + 0x4b0;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
  }
  this_00 = (vector<cocos2d::AutoreleasePool*,std::__ndk1::allocator<cocos2d::AutoreleasePool*>> *)
            PoolManager::getInstance();
  puVar1 = *(undefined8 **)(this_00 + 8);
  local_60 = this;
  if (puVar1 == *(undefined8 **)(this_00 + 0x10)) {
    std::__ndk1::vector<cocos2d::AutoreleasePool*,std::__ndk1::allocator<cocos2d::AutoreleasePool*>>
    ::__push_back_slow_path<cocos2d::AutoreleasePool*const&>(this_00,&local_60);
  }
  else {
    *puVar1 = this;
    *(undefined8 **)(this_00 + 8) = puVar1 + 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

