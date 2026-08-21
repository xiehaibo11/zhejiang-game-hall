
/* v8::internal::TypedSlots::Insert(v8::internal::SlotType, unsigned int) */

void __thiscall v8::internal::TypedSlots::Insert(TypedSlots *this,int param_2,uint param_3)

{
  long lVar1;
  uint local_8 [2];
  
  param_3 = param_3 | param_2 << 0x1d;
  local_8[0] = param_3;
  lVar1 = EnsureChunk(this);
  if (*(uint **)(lVar1 + 0x10) == *(uint **)(lVar1 + 0x18)) {
    std::__ndk1::
    vector<v8::internal::TypedSlots::TypedSlot,std::__ndk1::allocator<v8::internal::TypedSlots::TypedSlot>>
    ::__push_back_slow_path<v8::internal::TypedSlots::TypedSlot_const&>
              ((vector<v8::internal::TypedSlots::TypedSlot,std::__ndk1::allocator<v8::internal::TypedSlots::TypedSlot>>
                *)(lVar1 + 8),(TypedSlot *)local_8);
  }
  else {
    **(uint **)(lVar1 + 0x10) = param_3;
    *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 4;
  }
  return;
}

