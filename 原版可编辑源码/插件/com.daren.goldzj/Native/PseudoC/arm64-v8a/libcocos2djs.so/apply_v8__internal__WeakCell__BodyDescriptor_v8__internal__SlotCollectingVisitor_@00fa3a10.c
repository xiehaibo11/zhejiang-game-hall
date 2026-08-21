
/* void v8::internal::CallIterateBody::apply<v8::internal::WeakCell::BodyDescriptor,
   v8::internal::SlotCollectingVisitor>(v8::internal::Map, v8::internal::HeapObject, int,
   v8::internal::SlotCollectingVisitor*) */

void v8::internal::CallIterateBody::
     apply<v8::internal::WeakCell::BodyDescriptor,v8::internal::SlotCollectingVisitor>
               (undefined8 param_1,long param_2,int param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_48;
  
  local_48 = param_2 + 3;
  uVar1 = param_2 + 7;
  if (local_48 < uVar1) {
    do {
      if ((ulong *)param_4[2] == (ulong *)param_4[3]) {
        std::__ndk1::
        vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
        ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                  ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                    *)(param_4 + 1),(CompressedMaybeObjectSlot *)&local_48);
      }
      else {
        *(ulong *)param_4[2] = local_48;
        param_4[2] = param_4[2] + 8;
      }
      local_48 = local_48 + 4;
    } while (local_48 < uVar1);
  }
  uVar2 = param_2 + 0xb;
  (**(code **)(*param_4 + 0x20))(param_4,param_2,uVar1,uVar2);
  uVar1 = param_2 + -1 + (long)param_3;
  if (uVar2 < uVar1) {
    do {
      local_48 = uVar2;
      if ((ulong *)param_4[2] == (ulong *)param_4[3]) {
        std::__ndk1::
        vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
        ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                  ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                    *)(param_4 + 1),(CompressedMaybeObjectSlot *)&local_48);
      }
      else {
        *(ulong *)param_4[2] = uVar2;
        param_4[2] = param_4[2] + 8;
      }
      uVar2 = local_48 + 4;
    } while (uVar2 < uVar1);
  }
  return;
}

