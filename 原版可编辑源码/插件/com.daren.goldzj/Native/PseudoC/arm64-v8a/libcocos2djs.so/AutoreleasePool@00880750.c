
/* cocos2d::AutoreleasePool::AutoreleasePool(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::AutoreleasePool::AutoreleasePool(AutoreleasePool *this,basic_string *param_1)

{
  long lVar1;
  void *__dest;
  vector<cocos2d::AutoreleasePool*,std::__ndk1::allocator<cocos2d::AutoreleasePool*>> *this_00;
  size_t __n;
  long lVar2;
  void *pvVar3;
  ulong __n_00;
  AutoreleasePool *__dest_00;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  AutoreleasePool *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  if (((byte)*param_1 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)param_1;
    pvVar3 = (void *)0x0;
    lVar2 = 0;
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x20) = uVar6;
    *(undefined8 *)(this + 0x18) = uVar5;
    goto LAB_00880818;
  }
  __n_00 = *(ulong *)(param_1 + 8);
  if (0xffffffffffffffef < __n_00) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar3 = *(void **)(param_1 + 0x10);
  if (__n_00 < 0x17) {
    __dest_00 = this + 0x19;
    this[0x18] = SUB41((int)__n_00 << 1,0);
    if (__n_00 != 0) goto LAB_008807fc;
  }
  else {
    uVar4 = __n_00 + 0x10 & 0xfffffffffffffff0;
    __dest_00 = operator_new(uVar4);
    *(ulong *)(this + 0x20) = __n_00;
    *(AutoreleasePool **)(this + 0x28) = __dest_00;
    *(ulong *)(this + 0x18) = uVar4 | 1;
LAB_008807fc:
    memcpy(__dest_00,pvVar3,__n_00);
  }
  __dest_00[__n_00] = (AutoreleasePool)0x0;
  lVar2 = *(long *)(this + 0x10);
  pvVar3 = *(void **)this;
LAB_00880818:
  if ((ulong)(lVar2 - (long)pvVar3 >> 3) < 0x96) {
    lVar2 = *(long *)(this + 8);
    __dest = operator_new(0x4b0);
    __n = lVar2 - (long)pvVar3;
    if (0 < (long)__n) {
      memcpy(__dest,pvVar3,__n);
    }
    *(void **)this = __dest;
    *(size_t *)(this + 8) = (long)__dest + __n;
    *(long *)(this + 0x10) = (long)__dest + 0x4b0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  this_00 = (vector<cocos2d::AutoreleasePool*,std::__ndk1::allocator<cocos2d::AutoreleasePool*>> *)
            PoolManager::getInstance();
  local_60 = this;
  if (*(undefined8 **)(this_00 + 8) == *(undefined8 **)(this_00 + 0x10)) {
    std::__ndk1::vector<cocos2d::AutoreleasePool*,std::__ndk1::allocator<cocos2d::AutoreleasePool*>>
    ::__push_back_slow_path<cocos2d::AutoreleasePool*const&>(this_00,&local_60);
  }
  else {
    **(undefined8 **)(this_00 + 8) = this;
    *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

