
/* v8::internal::MarkCompactCollector::CollectNewSpaceArrayBufferTrackerItems(v8::internal::ItemParallelJob*)
    */

int __thiscall
v8::internal::MarkCompactCollector::CollectNewSpaceArrayBufferTrackerItems
          (MarkCompactCollector *this,ItemParallelJob *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  Item *local_48;
  
  plVar2 = *(long **)(this + 0x26c8);
  plVar3 = *(long **)(this + 0x26d0);
  if (plVar2 == plVar3) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      lVar4 = *plVar2;
      if (((*(ulong *)(lVar4 + 8) & 0x600) == 0 && (*(ulong *)(lVar4 + 8) & 0x18) != 0) &&
         (*(long *)(lVar4 + 0xf8) != 0)) {
        iVar1 = iVar1 + 1;
        local_48 = operator_new(0x20);
        *(undefined ***)local_48 = &PTR__Item_01ca8668;
        *(undefined8 *)(local_48 + 8) = 0;
        *(long *)(local_48 + 0x10) = lVar4;
        *(undefined4 *)(local_48 + 0x18) = 0;
        if (*(undefined8 **)(param_1 + 8) == *(undefined8 **)(param_1 + 0x10)) {
          std::__ndk1::
          vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
          ::__push_back_slow_path<v8::internal::ItemParallelJob::Item*const&>
                    ((vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
                      *)param_1,&local_48);
        }
        else {
          **(undefined8 **)(param_1 + 8) = local_48;
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
        }
      }
      plVar2 = plVar2 + 1;
    } while (plVar3 != plVar2);
  }
  return iVar1;
}

