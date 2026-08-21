
/* v8::internal::MarkCompactCollector::CollectOldSpaceArrayBufferTrackerItems(v8::internal::ItemParallelJob*)
    */

int __thiscall
v8::internal::MarkCompactCollector::CollectOldSpaceArrayBufferTrackerItems
          (MarkCompactCollector *this,ItemParallelJob *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  Item *local_58;
  
  plVar4 = *(long **)(this + 0x26b8);
  iVar1 = 0;
  for (plVar3 = *(long **)(this + 0x26b0); plVar3 != plVar4; plVar3 = plVar3 + 1) {
    lVar6 = *plVar3;
    if (((*(ulong *)(lVar6 + 8) & 0x658) == 0x40) && (*(long *)(lVar6 + 0xf8) != 0)) {
      iVar1 = iVar1 + 1;
      local_58 = operator_new(0x20);
      *(undefined ***)local_58 = &PTR__Item_01ca8668;
      *(undefined8 *)(local_58 + 8) = 0;
      *(long *)(local_58 + 0x10) = lVar6;
      *(undefined4 *)(local_58 + 0x18) = 0;
      if (*(undefined8 **)(param_1 + 8) == *(undefined8 **)(param_1 + 0x10)) {
        std::__ndk1::
        vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
        ::__push_back_slow_path<v8::internal::ItemParallelJob::Item*const&>
                  ((vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
                    *)param_1,&local_58);
      }
      else {
        **(undefined8 **)(param_1 + 8) = local_58;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      }
    }
  }
  lVar2 = *(long *)(this + 0x26e8);
  for (lVar6 = *(long *)(this + 0x26e0); lVar6 != lVar2; lVar6 = lVar6 + 0x10) {
    lVar5 = *(long *)(lVar6 + 8);
    if (*(long *)(lVar5 + 0xf8) != 0) {
      iVar1 = iVar1 + 1;
      local_58 = operator_new(0x20);
      *(undefined ***)local_58 = &PTR__Item_01ca8668;
      *(undefined8 *)(local_58 + 8) = 0;
      *(long *)(local_58 + 0x10) = lVar5;
      *(undefined4 *)(local_58 + 0x18) = 1;
      if (*(undefined8 **)(param_1 + 8) == *(undefined8 **)(param_1 + 0x10)) {
        std::__ndk1::
        vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
        ::__push_back_slow_path<v8::internal::ItemParallelJob::Item*const&>
                  ((vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
                    *)param_1,&local_58);
      }
      else {
        **(undefined8 **)(param_1 + 8) = local_58;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      }
    }
  }
  return iVar1;
}

