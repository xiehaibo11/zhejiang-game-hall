
/* void v8::internal::CallIterateBody::apply<v8::internal::EphemeronHashTable::BodyDescriptor,
   v8::internal::SlotCollectingVisitor>(v8::internal::Map, v8::internal::HeapObject, int,
   v8::internal::SlotCollectingVisitor*) */

void v8::internal::CallIterateBody::
     apply<v8::internal::EphemeronHashTable::BodyDescriptor,v8::internal::SlotCollectingVisitor>
               (undefined8 param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  ulong local_48;
  
  local_48 = param_2 + 7;
  if (local_48 < param_2 + 0x13U) {
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
    } while (local_48 < param_2 + 0x13U);
  }
  if ((int)*(uint *)(param_2 + 0xf) >> 1 != 0) {
    lVar1 = (long)((ulong)*(uint *)(param_2 + 0xf) << 0x20) >> 0x21;
    iVar2 = 0x18;
    do {
      (**(code **)(*param_4 + 0x28))(param_4,param_2,param_2 + -1 + (long)(iVar2 + -4));
      (**(code **)(*param_4 + 0x28))(param_4,param_2,param_2 + -1 + (long)iVar2);
      lVar1 = lVar1 + -1;
      iVar2 = iVar2 + 8;
    } while (lVar1 != 0);
  }
  return;
}

