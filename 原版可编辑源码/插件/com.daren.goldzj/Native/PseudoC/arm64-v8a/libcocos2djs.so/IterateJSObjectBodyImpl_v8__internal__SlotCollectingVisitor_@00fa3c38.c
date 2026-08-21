
/* void 
   v8::internal::BodyDescriptorBase::IterateJSObjectBodyImpl<v8::internal::SlotCollectingVisitor>(v8::internal::Map,
   v8::internal::HeapObject, int, int, v8::internal::SlotCollectingVisitor*) */

void v8::internal::BodyDescriptorBase::IterateJSObjectBodyImpl<v8::internal::SlotCollectingVisitor>
               (long param_1,long param_2,int param_3,int param_4,long *param_5)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong local_58;
  
  if (*(short *)(param_1 + 7) == 0x421) {
    iVar2 = 0xc;
  }
  else {
    iVar2 = JSObject::GetHeaderSize(*(short *)(param_1 + 7),*(char *)(param_1 + 9) < '\0');
  }
  lVar4 = (ulong)*(byte *)(param_1 + 4) * 4;
  iVar3 = (int)lVar4;
  if (iVar2 < iVar3) {
    lVar5 = (long)iVar2;
    local_58 = param_2 + -1 + (long)param_3;
    uVar1 = param_2 + -1 + lVar5;
    if (local_58 < uVar1) {
      do {
        if ((ulong *)param_5[2] == (ulong *)param_5[3]) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 1),(CompressedMaybeObjectSlot *)&local_58);
        }
        else {
          *(ulong *)param_5[2] = local_58;
          param_5[2] = param_5[2] + 8;
        }
        local_58 = local_58 + 4;
      } while (local_58 < uVar1);
    }
    do {
      (**(code **)(*param_5 + 0x10))(param_5,param_2,param_2 + lVar5 + -1,param_2 + lVar5 + 3);
      lVar5 = lVar5 + 8;
      param_3 = iVar3;
    } while (lVar5 < lVar4);
  }
  local_58 = param_2 + -1 + (long)param_3;
  uVar1 = param_2 + -1 + (long)param_4;
  if (local_58 < uVar1) {
    do {
      if ((ulong *)param_5[2] == (ulong *)param_5[3]) {
        std::__ndk1::
        vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
        ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                  ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                    *)(param_5 + 1),(CompressedMaybeObjectSlot *)&local_58);
      }
      else {
        *(ulong *)param_5[2] = local_58;
        param_5[2] = param_5[2] + 8;
      }
      local_58 = local_58 + 4;
    } while (local_58 < uVar1);
  }
  return;
}

