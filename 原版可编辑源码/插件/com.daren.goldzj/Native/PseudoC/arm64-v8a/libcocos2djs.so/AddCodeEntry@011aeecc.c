
/* v8::internal::CodeMap::AddCodeEntry(unsigned long, v8::internal::CodeEntry*) */

ulong __thiscall v8::internal::CodeMap::AddCodeEntry(CodeMap *this,ulong param_1,CodeEntry *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = (ulong)*(uint *)(this + 0x48);
  if (*(uint *)(this + 0x48) == 0xffffffff) {
    lVar2 = *(long *)(this + 8);
    uVar1 = 0;
    if (*(long *)(this + 0x10) - lVar2 != 0) {
      uVar1 = (*(long *)(this + 0x10) - lVar2) * 0x40 - 1;
    }
    uVar3 = *(long *)(this + 0x28) + *(long *)(this + 0x20);
    if (uVar1 == uVar3) {
      std::__ndk1::
      deque<v8::internal::CodeMap::CodeEntrySlotInfo,std::__ndk1::allocator<v8::internal::CodeMap::CodeEntrySlotInfo>>
      ::__add_back_capacity
                ((deque<v8::internal::CodeMap::CodeEntrySlotInfo,std::__ndk1::allocator<v8::internal::CodeMap::CodeEntrySlotInfo>>
                  *)this);
      lVar2 = *(long *)(this + 8);
      uVar3 = *(long *)(this + 0x20) + *(long *)(this + 0x28);
    }
    *(CodeEntry **)(*(long *)(lVar2 + (uVar3 >> 6 & 0x3fffffffffffff8)) + (uVar3 & 0x1ff) * 8) =
         param_2;
    lVar2 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar2 + 1;
    uVar1 = (ulong)((int)(lVar2 + 1) - 1);
  }
  else {
    uVar3 = *(long *)(this + 0x20) + uVar1 >> 6 & 0x3fffffffffffff8;
    lVar2 = (*(long *)(this + 0x20) + uVar1 & 0x1ff) * 8;
    *(undefined4 *)(this + 0x48) = *(undefined4 *)(*(long *)(*(long *)(this + 8) + uVar3) + lVar2);
    *(CodeEntry **)(*(long *)(*(long *)(this + 8) + uVar3) + lVar2) = param_2;
  }
  return uVar1;
}

