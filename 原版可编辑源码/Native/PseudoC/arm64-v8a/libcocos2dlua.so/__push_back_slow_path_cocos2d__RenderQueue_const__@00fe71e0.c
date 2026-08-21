
/* void std::__ndk1::vector<cocos2d::RenderQueue, std::__ndk1::allocator<cocos2d::RenderQueue>
   >::__push_back_slow_path<cocos2d::RenderQueue const&>(cocos2d::RenderQueue const&) */

void __thiscall
std::__ndk1::vector<cocos2d::RenderQueue,std::__ndk1::allocator<cocos2d::RenderQueue>>::
__push_back_slow_path<cocos2d::RenderQueue_const&>
          (vector<cocos2d::RenderQueue,std::__ndk1::allocator<cocos2d::RenderQueue>> *this,
          RenderQueue *param_1)

{
  allocator<cocos2d::RenderQueue> *this_00;
  RenderQueue *pRVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  void *local_70;
  RenderQueue *local_68;
  RenderQueue *local_60;
  void *local_58;
  allocator<cocos2d::RenderQueue> *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)(this + 8) - *(long *)this >> 7;
  uVar6 = lVar5 + 1;
  if (uVar6 >> 0x39 != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  this_00 = (allocator<cocos2d::RenderQueue> *)(this + 0x10);
  lVar3 = *(long *)(this + 0x10) - *(long *)this;
  local_50 = this_00;
  if ((ulong)(lVar3 >> 7) < 0xffffffffffffff) {
    uVar4 = lVar3 >> 6;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    local_58 = (void *)0x0;
    if (uVar6 == 0) {
      local_70 = (void *)0x0;
      goto LAB_00fe7274;
    }
    if (uVar6 >> 0x39 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar6 = 0x1ffffffffffffff;
  }
  local_58 = (void *)0x0;
  local_70 = operator_new(uVar6 << 7);
LAB_00fe7274:
  pRVar1 = (RenderQueue *)((long)local_70 + lVar5 * 0x80);
  local_58 = (void *)((long)local_70 + uVar6 * 0x80);
  local_68 = pRVar1;
  local_60 = pRVar1;
  allocator<cocos2d::RenderQueue>::construct<cocos2d::RenderQueue,cocos2d::RenderQueue_const&>
            (this_00,pRVar1,param_1);
  local_60 = pRVar1 + 0x80;
  __swap_out_circular_buffer(this,(__split_buffer *)&local_70);
  pRVar1 = local_68;
  while (local_60 != pRVar1) {
    local_60 = local_60 + -0x80;
    FUN_00fe6918(local_50);
  }
  if (local_70 != (void *)0x0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

