
/* std::__ndk1::deque<int, std::__ndk1::allocator<int> >::__add_back_capacity() */

void __thiscall
std::__ndk1::deque<int,std::__ndk1::allocator<int>>::__add_back_capacity
          (deque<int,std::__ndk1::allocator<int>> *this)

{
  int *piVar1;
  ulong uVar2;
  int **ppiVar3;
  undefined8 uVar4;
  long lVar5;
  int **ppiVar6;
  ulong uVar7;
  int *local_60;
  int **ppiStack_58;
  int **local_50;
  int *piStack_48;
  deque<int,std::__ndk1::allocator<int>> *pdStack_40;
  int *local_18;
  
  if (*(ulong *)(this + 0x20) < 0x400) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar5 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar5 >> 3) <= uVar7) {
      uVar2 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar2 = 1;
      }
      pdStack_40 = this + 0x18;
      piStack_48 = (int *)0x0;
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_60 = operator_new(uVar2 * 8);
      ppiStack_58 = (int **)(local_60 + uVar7 * 2);
      piStack_48 = local_60 + uVar2 * 2;
      local_50 = ppiStack_58;
      local_18 = operator_new(0x1000);
      __split_buffer<int*,std::__ndk1::allocator<int*>&>::push_back
                ((__split_buffer<int*,std::__ndk1::allocator<int*>&> *)&local_60,&local_18);
      ppiVar3 = *(int ***)(this + 8);
      ppiVar6 = *(int ***)(this + 0x10);
      if (ppiVar6 != ppiVar3) {
        do {
          ppiVar6 = ppiVar6 + -1;
          __split_buffer<int*,std::__ndk1::allocator<int*>&>::push_front
                    ((__split_buffer<int*,std::__ndk1::allocator<int*>&> *)&local_60,ppiVar6);
          ppiVar3 = *(int ***)(this + 8);
        } while (ppiVar6 != ppiVar3);
        ppiVar6 = *(int ***)(this + 0x10);
      }
      piVar1 = *(int **)this;
      *(int ***)(this + 8) = ppiStack_58;
      *(int **)this = local_60;
      uVar4 = *(undefined8 *)(this + 0x18);
      *(int **)(this + 0x18) = piStack_48;
      *(int ***)(this + 0x10) = local_50;
      local_50 = ppiVar6;
      if (ppiVar3 != ppiVar6) {
        local_50 = ppiVar6 + ((ulong)((long)ppiVar6 + (-8 - (long)ppiVar3)) >> 3 ^
                             0xffffffffffffffff);
      }
      if (piVar1 == (int *)0x0) {
        return;
      }
      local_60 = piVar1;
      ppiStack_58 = ppiVar3;
      piStack_48 = (int *)uVar4;
      operator_delete(piVar1);
      return;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0x1000);
      __split_buffer<int*,std::__ndk1::allocator<int*>>::push_back
                ((__split_buffer<int*,std::__ndk1::allocator<int*>> *)this,&local_60);
      return;
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
  FUN_00f26a10(this,&local_60);
  return;
}

