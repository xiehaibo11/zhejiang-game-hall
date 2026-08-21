
/* std::__ndk1::deque<int, std::__ndk1::allocator<int> >::__add_back_capacity() */

void __thiscall
std::__ndk1::deque<int,std::__ndk1::allocator<int>>::__add_back_capacity
          (deque<int,std::__ndk1::allocator<int>> *this)

{
  long lVar1;
  int *piVar2;
  ulong uVar3;
  int **ppiVar4;
  long lVar5;
  int **ppiVar6;
  ulong uVar7;
  int **ppiVar8;
  undefined8 uVar9;
  int *local_68;
  int *local_60;
  int **ppiStack_58;
  int **local_50;
  int *piStack_48;
  deque<int,std::__ndk1::allocator<int>> *pdStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(ulong *)(this + 0x20) < 0x400) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar5 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar5 >> 3) <= uVar7) {
      uVar3 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar3 = 1;
      }
      pdStack_40 = this + 0x18;
      piStack_48 = (int *)0x0;
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_60 = operator_new(uVar3 * 8);
      ppiStack_58 = (int **)(local_60 + uVar7 * 2);
      piStack_48 = local_60 + uVar3 * 2;
      local_50 = ppiStack_58;
      local_68 = operator_new(0x1000);
      __split_buffer<int*,std::__ndk1::allocator<int*>&>::push_back
                ((__split_buffer<int*,std::__ndk1::allocator<int*>&> *)&local_60,&local_68);
      ppiVar6 = *(int ***)(this + 0x10);
      while (ppiVar4 = *(int ***)(this + 8), ppiVar6 != ppiVar4) {
        ppiVar6 = ppiVar6 + -1;
        __split_buffer<int*,std::__ndk1::allocator<int*>&>::push_front
                  ((__split_buffer<int*,std::__ndk1::allocator<int*>&> *)&local_60,ppiVar6);
      }
      piVar2 = *(int **)this;
      uVar9 = *(undefined8 *)(this + 0x18);
      ppiVar8 = *(int ***)(this + 0x10);
      *(int ***)(this + 8) = ppiStack_58;
      *(int **)this = local_60;
      *(int **)(this + 0x18) = piStack_48;
      *(int ***)(this + 0x10) = local_50;
      local_50 = ppiVar8;
      if (ppiVar8 != ppiVar6) {
        local_50 = ppiVar8 + ((ulong)((long)ppiVar8 + (-8 - (long)ppiVar4)) >> 3 ^
                             0xffffffffffffffff);
      }
      local_60 = piVar2;
      ppiStack_58 = ppiVar4;
      piStack_48 = (int *)uVar9;
      if (piVar2 != (int *)0x0) {
        operator_delete(piVar2);
      }
      goto LAB_00fe69dc;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0x1000);
      __split_buffer<int*,std::__ndk1::allocator<int*>>::push_back
                ((__split_buffer<int*,std::__ndk1::allocator<int*>> *)this,&local_60);
      goto LAB_00fe69dc;
    }
    local_60 = operator_new(0x1000);
    __split_buffer<int*,std::__ndk1::allocator<int*>>::push_front
              ((__split_buffer<int*,std::__ndk1::allocator<int*>> *)this,&local_60);
    local_60 = (int *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x400;
    local_60 = (int *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_00fe6ba0(this,&local_60);
LAB_00fe69dc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

