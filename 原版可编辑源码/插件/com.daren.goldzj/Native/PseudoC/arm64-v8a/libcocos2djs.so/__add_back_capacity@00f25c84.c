
/* std::__ndk1::deque<v8::internal::TranslatedState::ObjectPosition,
   std::__ndk1::allocator<v8::internal::TranslatedState::ObjectPosition> >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<v8::internal::TranslatedState::ObjectPosition,std::__ndk1::allocator<v8::internal::TranslatedState::ObjectPosition>>
::__add_back_capacity
          (deque<v8::internal::TranslatedState::ObjectPosition,std::__ndk1::allocator<v8::internal::TranslatedState::ObjectPosition>>
           *this)

{
  ObjectPosition *pOVar1;
  ulong uVar2;
  ObjectPosition **ppOVar3;
  undefined8 uVar4;
  long lVar5;
  ObjectPosition **ppOVar6;
  ulong uVar7;
  ObjectPosition *local_60;
  ObjectPosition *pOStack_58;
  ObjectPosition *local_50;
  ObjectPosition *pOStack_48;
  deque<v8::internal::TranslatedState::ObjectPosition,std::__ndk1::allocator<v8::internal::TranslatedState::ObjectPosition>>
  *pdStack_40;
  ObjectPosition *local_18;
  
  if (*(ulong *)(this + 0x20) < 0x200) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar5 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar5 >> 3) <= uVar7) {
      uVar2 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar2 = 1;
      }
      pdStack_40 = this + 0x18;
      pOStack_48 = (ObjectPosition *)0x0;
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_60 = operator_new(uVar2 * 8);
      pOStack_58 = local_60 + uVar7 * 8;
      pOStack_48 = local_60 + uVar2 * 8;
      local_50 = pOStack_58;
      local_18 = operator_new(0x1000);
      __split_buffer<v8::internal::TranslatedState::ObjectPosition*,std::__ndk1::allocator<v8::internal::TranslatedState::ObjectPosition*>&>
      ::push_back((__split_buffer<v8::internal::TranslatedState::ObjectPosition*,std::__ndk1::allocator<v8::internal::TranslatedState::ObjectPosition*>&>
                   *)&local_60,&local_18);
      ppOVar3 = *(ObjectPosition ***)(this + 8);
      ppOVar6 = *(ObjectPosition ***)(this + 0x10);
      if (ppOVar6 != ppOVar3) {
        do {
          ppOVar6 = ppOVar6 + -1;
          __split_buffer<v8::internal::TranslatedState::ObjectPosition*,std::__ndk1::allocator<v8::internal::TranslatedState::ObjectPosition*>&>
          ::push_front((__split_buffer<v8::internal::TranslatedState::ObjectPosition*,std::__ndk1::allocator<v8::internal::TranslatedState::ObjectPosition*>&>
                        *)&local_60,ppOVar6);
          ppOVar3 = *(ObjectPosition ***)(this + 8);
        } while (ppOVar6 != ppOVar3);
        ppOVar6 = *(ObjectPosition ***)(this + 0x10);
      }
      pOVar1 = *(ObjectPosition **)this;
      *(ObjectPosition **)(this + 8) = pOStack_58;
      *(ObjectPosition **)this = local_60;
      uVar4 = *(undefined8 *)(this + 0x18);
      *(ObjectPosition **)(this + 0x18) = pOStack_48;
      *(ObjectPosition **)(this + 0x10) = local_50;
      local_50 = (ObjectPosition *)ppOVar6;
      if (ppOVar3 != ppOVar6) {
        local_50 = (ObjectPosition *)
                   (ppOVar6 +
                   ((ulong)((long)ppOVar6 + (-8 - (long)ppOVar3)) >> 3 ^ 0xffffffffffffffff));
      }
      if (pOVar1 == (ObjectPosition *)0x0) {
        return;
      }
      local_60 = pOVar1;
      pOStack_58 = (ObjectPosition *)ppOVar3;
      pOStack_48 = (ObjectPosition *)uVar4;
      operator_delete(pOVar1);
      return;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0x1000);
      __split_buffer<v8::internal::TranslatedState::ObjectPosition*,std::__ndk1::allocator<v8::internal::TranslatedState::ObjectPosition*>>
      ::push_back((__split_buffer<v8::internal::TranslatedState::ObjectPosition*,std::__ndk1::allocator<v8::internal::TranslatedState::ObjectPosition*>>
                   *)this,&local_60);
      return;
    }
    local_60 = operator_new(0x1000);
    __split_buffer<v8::internal::TranslatedState::ObjectPosition*,std::__ndk1::allocator<v8::internal::TranslatedState::ObjectPosition*>>
    ::push_front((__split_buffer<v8::internal::TranslatedState::ObjectPosition*,std::__ndk1::allocator<v8::internal::TranslatedState::ObjectPosition*>>
                  *)this,&local_60);
    local_60 = (ObjectPosition *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x200;
    local_60 = (ObjectPosition *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_00f25e14(this,&local_60);
  return;
}

