
/* std::__ndk1::deque<v8::internal::compiler::HandlerRangeMatcher::Range,
   std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>
   >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
::__add_back_capacity
          (deque<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
           *this)

{
  Range *pRVar1;
  ulong uVar2;
  Range **ppRVar3;
  undefined8 uVar4;
  long lVar5;
  Range **ppRVar6;
  ulong uVar7;
  Range *local_60;
  Range *pRStack_58;
  Range *local_50;
  Range *pRStack_48;
  deque<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
  *pdStack_40;
  Range *local_18;
  
  if (*(ulong *)(this + 0x20) < 0x155) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar5 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar5 >> 3) <= uVar7) {
      uVar2 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar2 = 1;
      }
      pdStack_40 = this + 0x18;
      pRStack_48 = (Range *)0x0;
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_60 = operator_new(uVar2 * 8);
      pRStack_58 = local_60 + uVar7 * 8;
      pRStack_48 = local_60 + uVar2 * 8;
      local_50 = pRStack_58;
      local_18 = operator_new(0xffc);
      __split_buffer<v8::internal::compiler::HandlerRangeMatcher::Range*,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range*>&>
      ::push_back((__split_buffer<v8::internal::compiler::HandlerRangeMatcher::Range*,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range*>&>
                   *)&local_60,&local_18);
      ppRVar3 = *(Range ***)(this + 8);
      ppRVar6 = *(Range ***)(this + 0x10);
      if (ppRVar6 != ppRVar3) {
        do {
          ppRVar6 = ppRVar6 + -1;
          __split_buffer<v8::internal::compiler::HandlerRangeMatcher::Range*,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range*>&>
          ::push_front((__split_buffer<v8::internal::compiler::HandlerRangeMatcher::Range*,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range*>&>
                        *)&local_60,ppRVar6);
          ppRVar3 = *(Range ***)(this + 8);
        } while (ppRVar6 != ppRVar3);
        ppRVar6 = *(Range ***)(this + 0x10);
      }
      pRVar1 = *(Range **)this;
      *(Range **)(this + 8) = pRStack_58;
      *(Range **)this = local_60;
      uVar4 = *(undefined8 *)(this + 0x18);
      *(Range **)(this + 0x18) = pRStack_48;
      *(Range **)(this + 0x10) = local_50;
      local_50 = (Range *)ppRVar6;
      if (ppRVar3 != ppRVar6) {
        local_50 = (Range *)(ppRVar6 +
                            ((ulong)((long)ppRVar6 + (-8 - (long)ppRVar3)) >> 3 ^ 0xffffffffffffffff
                            ));
      }
      if (pRVar1 == (Range *)0x0) {
        return;
      }
      local_60 = pRVar1;
      pRStack_58 = (Range *)ppRVar3;
      pRStack_48 = (Range *)uVar4;
      operator_delete(pRVar1);
      return;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0xffc);
      __split_buffer<v8::internal::compiler::HandlerRangeMatcher::Range*,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range*>>
      ::push_back((__split_buffer<v8::internal::compiler::HandlerRangeMatcher::Range*,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range*>>
                   *)this,&local_60);
      return;
    }
    local_60 = operator_new(0xffc);
    __split_buffer<v8::internal::compiler::HandlerRangeMatcher::Range*,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range*>>
    ::push_front((__split_buffer<v8::internal::compiler::HandlerRangeMatcher::Range*,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range*>>
                  *)this,&local_60);
    local_60 = (Range *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x155;
    local_60 = (Range *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_012ce518(this,&local_60);
  return;
}

