
/* v8::internal::SlotCollectingVisitor::VisitPointers(v8::internal::HeapObject,
   v8::internal::CompressedMaybeObjectSlot, v8::internal::CompressedMaybeObjectSlot) */

void __thiscall
v8::internal::SlotCollectingVisitor::VisitPointers
          (SlotCollectingVisitor *this,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong local_18;
  
  if (param_3 < param_4) {
    do {
      local_18 = param_3;
      if (*(ulong **)(this + 0x10) == *(ulong **)(this + 0x18)) {
        std::__ndk1::
        vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
        ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                  ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                    *)(this + 8),(CompressedMaybeObjectSlot *)&local_18);
      }
      else {
        **(ulong **)(this + 0x10) = param_3;
        *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
      }
      param_3 = local_18 + 4;
    } while (param_3 < param_4);
  }
  return;
}

