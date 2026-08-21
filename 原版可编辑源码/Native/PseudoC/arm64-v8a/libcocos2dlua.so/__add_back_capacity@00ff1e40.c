
/* std::__ndk1::deque<cocos2d::TextureCache::AsyncStruct*,
   std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct*> >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<cocos2d::TextureCache::AsyncStruct*,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct*>>
::__add_back_capacity
          (deque<cocos2d::TextureCache::AsyncStruct*,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct*>>
           *this)

{
  long lVar1;
  AsyncStruct **ppAVar2;
  ulong uVar3;
  AsyncStruct ***pppAVar4;
  long lVar5;
  AsyncStruct ***pppAVar6;
  ulong uVar7;
  AsyncStruct ***pppAVar8;
  undefined8 uVar9;
  AsyncStruct **local_68;
  AsyncStruct **local_60;
  AsyncStruct **ppAStack_58;
  AsyncStruct **local_50;
  AsyncStruct **ppAStack_48;
  deque<cocos2d::TextureCache::AsyncStruct*,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct*>>
  *pdStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(ulong *)(this + 0x20) < 0x200) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar5 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar5 >> 3) <= uVar7) {
      uVar3 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar3 = 1;
      }
      pdStack_40 = this + 0x18;
      ppAStack_48 = (AsyncStruct **)0x0;
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_60 = operator_new(uVar3 * 8);
                    /* try { // try from 00ff1f30 to 010f1f63 has its CatchHandler @ 00ff1f30
                       catch() { ... } // from try @ 00ff1f30 with catch @ 00ff1f30
                       catch() { ... } // from try @ 00ff1fa4 with catch @ 00ff1f30 */
      ppAStack_58 = local_60 + uVar7;
      ppAStack_48 = local_60 + uVar3;
      local_50 = ppAStack_58;
      local_68 = operator_new(0x1000);
      __split_buffer<cocos2d::TextureCache::AsyncStruct**,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct**>&>
      ::push_back((__split_buffer<cocos2d::TextureCache::AsyncStruct**,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct**>&>
                   *)&local_60,&local_68);
      pppAVar6 = *(AsyncStruct ****)(this + 0x10);
                    /* try { // try from 00ff1f64 to 010f1f6b has its CatchHandler @ 00ff1ff8 */
      while (pppAVar4 = *(AsyncStruct ****)(this + 8), pppAVar6 != pppAVar4) {
        pppAVar6 = pppAVar6 + -1;
                    /* try { // try from 00ff1f70 to 010f1f73 has its CatchHandler @ 00ff1fe8 */
        __split_buffer<cocos2d::TextureCache::AsyncStruct**,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct**>&>
        ::push_front((__split_buffer<cocos2d::TextureCache::AsyncStruct**,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct**>&>
                      *)&local_60,pppAVar6);
                    /* try { // try from 00ff1f7c to 010f1f83 has its CatchHandler @ 00ff1ff8 */
      }
      ppAVar2 = *(AsyncStruct ***)this;
                    /* try { // try from 00ff1f88 to 010f1f8f has its CatchHandler @ 00ff1fd8 */
      uVar9 = *(undefined8 *)(this + 0x18);
      pppAVar8 = *(AsyncStruct ****)(this + 0x10);
      *(AsyncStruct ***)(this + 8) = ppAStack_58;
      *(AsyncStruct ***)this = local_60;
                    /* try { // try from 00ff1f94 to 010f1f9b has its CatchHandler @ 00ff1fc8 */
                    /* try { // try from 00ff1fa0 to 010f1fa3 has its CatchHandler @ 00ff1fb4 */
      *(AsyncStruct ***)(this + 0x18) = ppAStack_48;
      *(AsyncStruct ***)(this + 0x10) = local_50;
      local_50 = (AsyncStruct **)pppAVar8;
                    /* try { // try from 00ff1fa4 to 010f200b has its CatchHandler @ 00ff1f30 */
      if (pppAVar8 != pppAVar6) {
                    /* catch() { ... } // from try @ 00ff1fa0 with catch @ 00ff1fb4 */
        local_50 = (AsyncStruct **)
                   (pppAVar8 +
                   ((ulong)((long)pppAVar8 + (-8 - (long)pppAVar4)) >> 3 ^ 0xffffffffffffffff));
      }
      local_60 = ppAVar2;
      ppAStack_58 = (AsyncStruct **)pppAVar4;
      ppAStack_48 = (AsyncStruct **)uVar9;
      if (ppAVar2 != (AsyncStruct **)0x0) {
                    /* catch() { ... } // from try @ 00ff1f94 with catch @ 00ff1fc8 */
        operator_delete(ppAVar2);
      }
      goto LAB_00ff1e90;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0x1000);
                    /* catch() { ... } // from try @ 00ff1f88 with catch @ 00ff1fd8 */
      __split_buffer<cocos2d::TextureCache::AsyncStruct**,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct**>>
      ::push_back((__split_buffer<cocos2d::TextureCache::AsyncStruct**,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct**>>
                   *)this,&local_60);
      goto LAB_00ff1e90;
    }
    local_60 = operator_new(0x1000);
    __split_buffer<cocos2d::TextureCache::AsyncStruct**,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct**>>
    ::push_front((__split_buffer<cocos2d::TextureCache::AsyncStruct**,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct**>>
                  *)this,&local_60);
    local_60 = (AsyncStruct **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x200;
    local_60 = (AsyncStruct **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_00ff2054(this,&local_60);
LAB_00ff1e90:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00ff1f70 with catch @ 00ff1fe8 */
  __stack_chk_fail();
}

