
/* std::__ndk1::deque<v8::internal::CodeMap::CodeEntrySlotInfo,
   std::__ndk1::allocator<v8::internal::CodeMap::CodeEntrySlotInfo> >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<v8::internal::CodeMap::CodeEntrySlotInfo,std::__ndk1::allocator<v8::internal::CodeMap::CodeEntrySlotInfo>>
::__add_back_capacity
          (deque<v8::internal::CodeMap::CodeEntrySlotInfo,std::__ndk1::allocator<v8::internal::CodeMap::CodeEntrySlotInfo>>
           *this)

{
  CodeEntrySlotInfo *pCVar1;
  ulong uVar2;
  CodeEntrySlotInfo **ppCVar3;
  undefined8 uVar4;
  long lVar5;
  CodeEntrySlotInfo **ppCVar6;
  ulong uVar7;
  CodeEntrySlotInfo *local_60;
  CodeEntrySlotInfo *pCStack_58;
  CodeEntrySlotInfo *local_50;
  CodeEntrySlotInfo *pCStack_48;
  deque<v8::internal::CodeMap::CodeEntrySlotInfo,std::__ndk1::allocator<v8::internal::CodeMap::CodeEntrySlotInfo>>
  *pdStack_40;
  CodeEntrySlotInfo *local_18;
  
  if (*(ulong *)(this + 0x20) < 0x200) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar5 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar5 >> 3) <= uVar7) {
      uVar2 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar2 = 1;
      }
      pdStack_40 = this + 0x18;
      pCStack_48 = (CodeEntrySlotInfo *)0x0;
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_60 = operator_new(uVar2 * 8);
      pCStack_58 = local_60 + uVar7 * 8;
      pCStack_48 = local_60 + uVar2 * 8;
      local_50 = pCStack_58;
      local_18 = operator_new(0x1000);
      __split_buffer<v8::internal::CodeMap::CodeEntrySlotInfo*,std::__ndk1::allocator<v8::internal::CodeMap::CodeEntrySlotInfo*>&>
      ::push_back((__split_buffer<v8::internal::CodeMap::CodeEntrySlotInfo*,std::__ndk1::allocator<v8::internal::CodeMap::CodeEntrySlotInfo*>&>
                   *)&local_60,&local_18);
      ppCVar3 = *(CodeEntrySlotInfo ***)(this + 8);
      ppCVar6 = *(CodeEntrySlotInfo ***)(this + 0x10);
      if (ppCVar6 != ppCVar3) {
        do {
          ppCVar6 = ppCVar6 + -1;
          __split_buffer<v8::internal::CodeMap::CodeEntrySlotInfo*,std::__ndk1::allocator<v8::internal::CodeMap::CodeEntrySlotInfo*>&>
          ::push_front((__split_buffer<v8::internal::CodeMap::CodeEntrySlotInfo*,std::__ndk1::allocator<v8::internal::CodeMap::CodeEntrySlotInfo*>&>
                        *)&local_60,ppCVar6);
          ppCVar3 = *(CodeEntrySlotInfo ***)(this + 8);
        } while (ppCVar6 != ppCVar3);
        ppCVar6 = *(CodeEntrySlotInfo ***)(this + 0x10);
      }
      pCVar1 = *(CodeEntrySlotInfo **)this;
      *(CodeEntrySlotInfo **)(this + 8) = pCStack_58;
      *(CodeEntrySlotInfo **)this = local_60;
      uVar4 = *(undefined8 *)(this + 0x18);
      *(CodeEntrySlotInfo **)(this + 0x18) = pCStack_48;
      *(CodeEntrySlotInfo **)(this + 0x10) = local_50;
      local_50 = (CodeEntrySlotInfo *)ppCVar6;
      if (ppCVar3 != ppCVar6) {
        local_50 = (CodeEntrySlotInfo *)
                   (ppCVar6 +
                   ((ulong)((long)ppCVar6 + (-8 - (long)ppCVar3)) >> 3 ^ 0xffffffffffffffff));
      }
      if (pCVar1 == (CodeEntrySlotInfo *)0x0) {
        return;
      }
      local_60 = pCVar1;
      pCStack_58 = (CodeEntrySlotInfo *)ppCVar3;
      pCStack_48 = (CodeEntrySlotInfo *)uVar4;
      operator_delete(pCVar1);
      return;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0x1000);
      __split_buffer<v8::internal::CodeMap::CodeEntrySlotInfo*,std::__ndk1::allocator<v8::internal::CodeMap::CodeEntrySlotInfo*>>
      ::push_back((__split_buffer<v8::internal::CodeMap::CodeEntrySlotInfo*,std::__ndk1::allocator<v8::internal::CodeMap::CodeEntrySlotInfo*>>
                   *)this,&local_60);
      return;
    }
    local_60 = operator_new(0x1000);
    __split_buffer<v8::internal::CodeMap::CodeEntrySlotInfo*,std::__ndk1::allocator<v8::internal::CodeMap::CodeEntrySlotInfo*>>
    ::push_front((__split_buffer<v8::internal::CodeMap::CodeEntrySlotInfo*,std::__ndk1::allocator<v8::internal::CodeMap::CodeEntrySlotInfo*>>
                  *)this,&local_60);
    local_60 = (CodeEntrySlotInfo *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x200;
    local_60 = (CodeEntrySlotInfo *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_011b241c(this,&local_60);
  return;
}

