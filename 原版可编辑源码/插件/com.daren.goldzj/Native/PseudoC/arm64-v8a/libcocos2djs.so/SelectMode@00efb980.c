
/* v8::internal::Coverage::SelectMode(v8::internal::Isolate*, v8::debug::CoverageMode) */

void v8::internal::Coverage::SelectMode(Isolate *param_1,int param_2)

{
  Isolate *pIVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  HeapObjectIterator aHStack_90 [40];
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *puStack_58;
  ulong *local_38;
  
  pIVar1 = param_1 + 0x95a0;
  if (*(int *)(param_1 + 0xb810) != param_2) {
    Isolate::CollectSourcePositionsForAllBytecodeArrays(param_1);
  }
  if (param_2 - 1U < 4) {
    lVar3 = *(long *)pIVar1;
    lVar4 = *(long *)(param_1 + 0x95a8);
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
    Deoptimizer::DeoptimizeAll(param_1);
    local_60 = (undefined8 *)0x0;
    puStack_58 = (undefined8 *)0x0;
    local_68 = (undefined8 *)0x0;
    HeapObjectIterator::HeapObjectIterator(aHStack_90,param_1 + 0x8850,0);
    while (uVar6 = HeapObjectIterator::Next(aHStack_90), (int)uVar6 != 0) {
      uVar9 = uVar6 & 0xffffffff00000000;
      uVar8 = uVar9 | 7;
      if (*(short *)(uVar8 + *(uint *)(uVar6 - 1)) == 0x439) {
        uVar2 = *(uint *)((uVar9 | *(uint *)(uVar6 + 0xb)) + 3);
        if (((uVar2 != 0x84) &&
            (((uVar2 & 1) == 0 || (1 < *(ushort *)(uVar8 + *(uint *)((uVar9 | uVar2) - 1)) - 0x95)))
            ) && (*(short *)(uVar8 + *(uint *)((uVar9 | *(uint *)((uVar9 | *(uint *)(uVar6 + 0x13))
                                                                 + 3)) - 1)) == 0x81)) {
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)pIVar1;
            if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
              puVar7 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar1 = puVar7 + 1;
            *puVar7 = uVar6;
          }
          else {
            puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
          }
          local_38 = puVar7;
          if (local_60 < puStack_58) {
            *local_60 = puVar7;
            local_60 = local_60 + 1;
          }
          else {
            std::__ndk1::
            vector<v8::internal::Handle<v8::internal::JSFunction>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::JSFunction>>>
            ::__push_back_slow_path<v8::internal::Handle<v8::internal::JSFunction>>
                      ((vector<v8::internal::Handle<v8::internal::JSFunction>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::JSFunction>>>
                        *)&local_68,(Handle *)&local_38);
          }
        }
      }
      else if (((param_2 == 4) || (param_2 == 2)) &&
              (*(short *)(uVar8 + *(uint *)(uVar6 - 1)) == 0xa6)) {
        *(uint *)(uVar6 + 0x1b) = *(uint *)(uVar6 + 0x1b) & 0xf7ffffff;
      }
      else if (*(short *)(uVar8 + *(uint *)(uVar6 - 1)) == 0x9f) {
        *(undefined4 *)(uVar6 + 0x13) = 0;
      }
    }
    HeapObjectIterator::~HeapObjectIterator(aHStack_90);
    puVar5 = local_60;
    for (puVar10 = local_68; puVar10 != puVar5; puVar10 = puVar10 + 1) {
      JSFunction::EnsureFeedbackVector(*puVar10);
    }
    Isolate::MaybeInitializeVectorListFromHeap(param_1);
    if (local_68 != (undefined8 *)0x0) {
      local_60 = local_68;
      operator_delete(local_68);
    }
    if (param_1 != (Isolate *)0x0) {
      *(long *)pIVar1 = lVar3;
      *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
      if (*(long *)(param_1 + 0x95a8) != lVar4) {
        *(long *)(param_1 + 0x95a8) = lVar4;
        HandleScope::DeleteExtensions(param_1);
      }
    }
  }
  else if ((param_2 == 0) &&
          (Debug::RemoveAllCoverageInfos(*(Debug **)(param_1 + 0xb6c8)),
          *(int *)(param_1 + 0xb814) != 1)) {
    Isolate::SetFeedbackVectorsForProfilingTools(param_1,*(undefined8 *)(param_1 + 0xa0));
  }
  *(int *)(param_1 + 0xb810) = param_2;
  return;
}

