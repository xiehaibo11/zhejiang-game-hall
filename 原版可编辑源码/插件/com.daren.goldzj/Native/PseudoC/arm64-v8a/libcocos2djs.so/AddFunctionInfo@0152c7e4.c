
/* v8::internal::AllocationTracker::AddFunctionInfo(v8::internal::SharedFunctionInfo, unsigned int)
    */

ulong __thiscall
v8::internal::AllocationTracker::AddFunctionInfo(AllocationTracker *this,ulong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  FunctionInfo *pFVar4;
  undefined8 uVar5;
  UnresolvedLocation *pUVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  StringsStorage *pSVar10;
  ulong *puVar11;
  UnresolvedLocation *local_50;
  FunctionInfo *local_48;
  ulong local_28;
  
  uVar2 = ~param_3 + param_3 * 0x8000;
  uVar2 = (uVar2 ^ uVar2 >> 0xc) * 5;
  uVar2 = (uVar2 ^ uVar2 >> 4) * 0x809;
  uVar2 = uVar2 & 0x3fffffff ^ uVar2 >> 0x10;
  uVar7 = (ulong)(*(int *)(this + 0x168) - 1U & uVar2);
  puVar11 = (ulong *)(*(long *)(this + 0x160) + uVar7 * 0x18);
  uVar9 = (ulong)param_3;
  uVar8 = *puVar11;
  while (local_28 = param_2, uVar8 != 0) {
    if (uVar8 == uVar9) goto LAB_0152c8f8;
    uVar7 = (ulong)((int)uVar7 + 1U & *(int *)(this + 0x168) - 1U);
    puVar11 = (ulong *)(*(long *)(this + 0x160) + uVar7 * 0x18);
    uVar8 = *puVar11;
  }
  *puVar11 = uVar9;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 2) = uVar2;
  uVar1 = *(int *)(this + 0x16c) + 1;
  *(uint *)(this + 0x16c) = uVar1;
  if (*(uint *)(this + 0x168) <= uVar1 + (uVar1 >> 2)) {
    base::
    TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::base::DefaultAllocationPolicy>
    ::Resize(this + 0x160);
    uVar7 = (ulong)(*(int *)(this + 0x168) - 1U & uVar2);
    puVar11 = (ulong *)(*(long *)(this + 0x160) + uVar7 * 0x18);
    uVar8 = *puVar11;
    while ((uVar8 != 0 && (uVar8 != uVar9))) {
      uVar7 = (ulong)((int)uVar7 + 1U & *(int *)(this + 0x168) - 1U);
      puVar11 = (ulong *)(*(long *)(this + 0x160) + uVar7 * 0x18);
      uVar8 = *puVar11;
    }
  }
LAB_0152c8f8:
  uVar7 = puVar11[1];
  if (uVar7 == 0) {
    pFVar4 = operator_new(0x28);
    *(undefined4 *)(pFVar4 + 8) = 0;
    *(undefined1 **)pFVar4 = &DAT_0189703a;
    *(undefined1 **)(pFVar4 + 0x10) = &DAT_0189703a;
    *(undefined8 *)(pFVar4 + 0x18) = 0xffffffff00000000;
    *(undefined4 *)(pFVar4 + 0x20) = 0xffffffff;
    pSVar10 = *(StringsStorage **)(this + 8);
    local_48 = pFVar4;
    uVar5 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_28);
    uVar5 = StringsStorage::GetName(pSVar10,uVar5);
    *(undefined8 *)pFVar4 = uVar5;
    *(uint *)(pFVar4 + 8) = param_3;
    uVar8 = local_28 & 0xffffffff00000000;
    uVar9 = uVar8 | *(uint *)(local_28 + 0xf);
    uVar7 = uVar9;
    if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x5b) {
      uVar7 = uVar8 | *(uint *)(uVar9 + 0xb);
    }
    if (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x65) {
      if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x5b) {
        uVar9 = uVar8 | *(uint *)(uVar9 + 0xb);
      }
      uVar7 = uVar9 & 0xffffffff00000000;
      if (((*(uint *)(uVar9 + 7) & 1) != 0) &&
         (*(ushort *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | *(uint *)(uVar9 + 7)) - 1)) < 0x41)) {
        uVar5 = StringsStorage::GetName(*(StringsStorage **)(this + 8));
        *(undefined8 *)(local_48 + 0x10) = uVar5;
        pFVar4 = local_48;
      }
      *(int *)(pFVar4 + 0x18) = *(int *)(uVar9 + 0x1f) >> 1;
      pUVar6 = operator_new(0x18);
      uVar3 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_28);
      *(undefined8 *)pUVar6 = 0;
      *(undefined4 *)(pUVar6 + 8) = uVar3;
      *(FunctionInfo **)(pUVar6 + 0x10) = local_48;
      uVar5 = GlobalHandles::Create(*(GlobalHandles **)(uVar7 + 0x95e0),uVar9);
      *(undefined8 *)pUVar6 = uVar5;
      GlobalHandles::MakeWeak(uVar5,pUVar6,UnresolvedLocation::HandleWeakScript,0);
      local_50 = pUVar6;
      if (*(undefined8 **)(this + 0x180) < *(undefined8 **)(this + 0x188)) {
        **(undefined8 **)(this + 0x180) = pUVar6;
        *(long *)(this + 0x180) = *(long *)(this + 0x180) + 8;
      }
      else {
        std::__ndk1::
        vector<v8::internal::AllocationTracker::UnresolvedLocation*,std::__ndk1::allocator<v8::internal::AllocationTracker::UnresolvedLocation*>>
        ::__push_back_slow_path<v8::internal::AllocationTracker::UnresolvedLocation*>
                  ((vector<v8::internal::AllocationTracker::UnresolvedLocation*,std::__ndk1::allocator<v8::internal::AllocationTracker::UnresolvedLocation*>>
                    *)(this + 0x178),&local_50);
      }
    }
    puVar11[1] = *(long *)(this + 0x150) - *(long *)(this + 0x148) >> 3;
    if (*(undefined8 **)(this + 0x150) == *(undefined8 **)(this + 0x158)) {
      std::__ndk1::
      vector<v8::internal::AllocationTracker::FunctionInfo*,std::__ndk1::allocator<v8::internal::AllocationTracker::FunctionInfo*>>
      ::__push_back_slow_path<v8::internal::AllocationTracker::FunctionInfo*const&>
                ((vector<v8::internal::AllocationTracker::FunctionInfo*,std::__ndk1::allocator<v8::internal::AllocationTracker::FunctionInfo*>>
                  *)(this + 0x148),&local_48);
    }
    else {
      **(undefined8 **)(this + 0x150) = local_48;
      *(long *)(this + 0x150) = *(long *)(this + 0x150) + 8;
    }
    uVar7 = puVar11[1];
  }
  return uVar7;
}

