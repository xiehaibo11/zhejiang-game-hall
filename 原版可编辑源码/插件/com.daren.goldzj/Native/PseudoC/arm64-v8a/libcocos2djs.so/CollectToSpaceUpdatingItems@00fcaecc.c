
/* v8::internal::MarkCompactCollectorBase::CollectToSpaceUpdatingItems(v8::internal::ItemParallelJob*)
    */

int __thiscall
v8::internal::MarkCompactCollectorBase::CollectToSpaceUpdatingItems
          (MarkCompactCollectorBase *this,ItemParallelJob *param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  Item *local_38;
  
  uVar9 = *(ulong *)(*(long *)(*(long *)(this + 8) + 0xe8) + 0x68);
  uVar10 = *(ulong *)(*(long *)(*(long *)(*(long *)(this + 8) + 0xe8) + 0xf0) + 0x20);
  uVar11 = *(ulong *)((uVar9 - 4 & 0xfffffffffffc0000) + 0xe0);
  uVar8 = uVar10 & 0xfffffffffffc0000;
  if (uVar11 == uVar8) {
    iVar3 = 0;
  }
  else {
    iVar1 = -1;
    do {
      iVar3 = iVar1;
      uVar7 = *(ulong *)(uVar8 + 0x20);
      if ((uVar10 < uVar7) || (uVar6 = uVar10, *(ulong *)(uVar8 + 0x28) <= uVar10)) {
        uVar6 = uVar7;
      }
      uVar2 = uVar9;
      if (*(ulong *)(uVar8 + 0x28) <= uVar9 || uVar9 < uVar7) {
        uVar2 = *(ulong *)(uVar8 + 0x28);
      }
      local_38 = (Item *)(**(code **)(*(long *)this + 0x68))(this,uVar8,uVar6,uVar2);
      if (*(undefined8 **)(param_1 + 8) == *(undefined8 **)(param_1 + 0x10)) {
        std::__ndk1::
        vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
        ::__push_back_slow_path<v8::internal::ItemParallelJob::Item*const&>
                  ((vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
                    *)param_1,&local_38);
      }
      else {
        **(undefined8 **)(param_1 + 8) = local_38;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      }
      uVar8 = *(ulong *)(uVar8 + 0xe0);
      iVar1 = iVar3 + 1;
    } while (uVar11 != uVar8);
    if (FLAG_parallel_pointer_update == '\0') {
      iVar3 = 1;
    }
    else {
      if (((DAT_01d3f358 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_01d3f358), iVar4 != 0)) {
        plVar5 = (long *)V8::GetCurrentPlatform();
        iVar4 = (**(code **)(*plVar5 + 0x28))();
        DAT_01d3f350 = iVar4 + 1;
        __cxa_guard_release(&DAT_01d3f358);
      }
      iVar3 = iVar3 + 2;
      if (DAT_01d3f350 <= iVar1) {
        iVar3 = DAT_01d3f350;
      }
    }
  }
  return iVar3;
}

