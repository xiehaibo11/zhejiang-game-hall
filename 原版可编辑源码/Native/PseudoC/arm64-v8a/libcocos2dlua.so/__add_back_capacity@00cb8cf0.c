
/* std::__ndk1::deque<cocostudio::timeline::BoneNode*,
   std::__ndk1::allocator<cocostudio::timeline::BoneNode*> >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>::
__add_back_capacity(deque<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
                    *this)

{
  long lVar1;
  BoneNode **ppBVar2;
  ulong uVar3;
  BoneNode ***pppBVar4;
  long lVar5;
  BoneNode ***pppBVar6;
  ulong uVar7;
  BoneNode ***pppBVar8;
  undefined8 uVar9;
  BoneNode **local_68;
  BoneNode **local_60;
  BoneNode **ppBStack_58;
  BoneNode **local_50;
  BoneNode **ppBStack_48;
  deque<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
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
      ppBStack_48 = (BoneNode **)0x0;
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_60 = operator_new(uVar3 * 8);
      ppBStack_58 = local_60 + uVar7;
      ppBStack_48 = local_60 + uVar3;
      local_50 = ppBStack_58;
      local_68 = operator_new(0x1000);
      __split_buffer<cocostudio::timeline::BoneNode**,std::__ndk1::allocator<cocostudio::timeline::BoneNode**>&>
      ::push_back((__split_buffer<cocostudio::timeline::BoneNode**,std::__ndk1::allocator<cocostudio::timeline::BoneNode**>&>
                   *)&local_60,&local_68);
      pppBVar6 = *(BoneNode ****)(this + 0x10);
      while (pppBVar4 = *(BoneNode ****)(this + 8), pppBVar6 != pppBVar4) {
        pppBVar6 = pppBVar6 + -1;
        __split_buffer<cocostudio::timeline::BoneNode**,std::__ndk1::allocator<cocostudio::timeline::BoneNode**>&>
        ::push_front((__split_buffer<cocostudio::timeline::BoneNode**,std::__ndk1::allocator<cocostudio::timeline::BoneNode**>&>
                      *)&local_60,pppBVar6);
      }
      ppBVar2 = *(BoneNode ***)this;
      uVar9 = *(undefined8 *)(this + 0x18);
      pppBVar8 = *(BoneNode ****)(this + 0x10);
      *(BoneNode ***)(this + 8) = ppBStack_58;
      *(BoneNode ***)this = local_60;
      *(BoneNode ***)(this + 0x18) = ppBStack_48;
      *(BoneNode ***)(this + 0x10) = local_50;
      local_50 = (BoneNode **)pppBVar8;
      if (pppBVar8 != pppBVar6) {
        local_50 = (BoneNode **)
                   (pppBVar8 +
                   ((ulong)((long)pppBVar8 + (-8 - (long)pppBVar4)) >> 3 ^ 0xffffffffffffffff));
      }
      local_60 = ppBVar2;
      ppBStack_58 = (BoneNode **)pppBVar4;
      ppBStack_48 = (BoneNode **)uVar9;
      if (ppBVar2 != (BoneNode **)0x0) {
        operator_delete(ppBVar2);
      }
      goto LAB_00cb8d40;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0x1000);
      __split_buffer<cocostudio::timeline::BoneNode**,std::__ndk1::allocator<cocostudio::timeline::BoneNode**>>
      ::push_back((__split_buffer<cocostudio::timeline::BoneNode**,std::__ndk1::allocator<cocostudio::timeline::BoneNode**>>
                   *)this,&local_60);
      goto LAB_00cb8d40;
    }
    local_60 = operator_new(0x1000);
    __split_buffer<cocostudio::timeline::BoneNode**,std::__ndk1::allocator<cocostudio::timeline::BoneNode**>>
    ::push_front((__split_buffer<cocostudio::timeline::BoneNode**,std::__ndk1::allocator<cocostudio::timeline::BoneNode**>>
                  *)this,&local_60);
    local_60 = (BoneNode **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x200;
    local_60 = (BoneNode **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_00cb8f04(this,&local_60);
LAB_00cb8d40:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

