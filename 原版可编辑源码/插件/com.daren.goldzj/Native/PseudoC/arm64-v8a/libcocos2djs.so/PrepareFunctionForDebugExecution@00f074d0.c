
/* v8::internal::Debug::PrepareFunctionForDebugExecution(v8::internal::Handle<v8::internal::SharedFunctionInfo>)
    */

void __thiscall v8::internal::Debug::PrepareFunctionForDebugExecution(Debug *this,ulong *param_2)

{
  uint *puVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_78 [3];
  
  puVar2 = (ulong *)GetOrCreateDebugInfo();
  if ((*(byte *)(*puVar2 + 0x1b) >> 2 & 1) != 0) {
    return;
  }
  puVar1 = (uint *)(*param_2 + 3);
  uVar8 = *puVar1;
  uVar6 = *param_2 & 0xffffffff00000000;
  if (((uVar8 & 1) == 0) ||
     (*(short *)((uVar6 | 7) + (ulong)*(uint *)((uVar6 | uVar8) - 1)) != 0x86)) {
    uVar8 = *puVar1;
    puVar4 = (ulong *)(*(long *)(this + 0x88) + 0xa0);
    if (((uVar8 & 1) == 0) ||
       (*(short *)((uVar6 | 7) + (ulong)*(uint *)((uVar6 | uVar8) - 1)) != 0x61)) goto LAB_00f076b4;
  }
  uVar6 = *param_2;
  uVar7 = uVar6 & 0xffffffff00000000;
  uVar10 = uVar7 | *(uint *)(uVar6 + 0xf);
  uVar9 = uVar7 | 7;
  if ((*(short *)(uVar9 + *(uint *)(uVar10 - 1)) == 0x5b) &&
     (*(short *)(uVar9 + *(uint *)((uVar7 | *(uint *)(uVar10 + 0x13)) - 1)) == 0x86)) {
    uVar8 = *(uint *)(uVar10 + 0xf);
  }
  else {
    uVar8 = *(uint *)(uVar6 + 3);
    if (((uVar8 & 1) == 0) || (*(short *)(uVar9 + *(uint *)((uVar7 | uVar8) - 1)) != 0x86)) {
      uVar8 = *(uint *)((uVar7 | *(uint *)(uVar6 + 3)) + 3);
    }
    else {
      uVar8 = *(uint *)(uVar6 + 3);
    }
  }
  pIVar3 = *(Isolate **)(this + 0x88);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar7 | uVar8;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar7 | uVar8);
  }
  puVar5 = (ulong *)Factory::CopyBytecodeArray(*(Factory **)(this + 0x88),puVar4);
  uVar7 = *puVar2;
  uVar6 = *puVar5;
  *(int *)(uVar7 + 0x13) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar9 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,uVar7 + 0x13,uVar6);
      uVar9 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0x13,uVar6);
    }
  }
  local_78[0] = *param_2;
  SharedFunctionInfo::SetDebugBytecodeArray((SharedFunctionInfo *)local_78,*puVar5);
LAB_00f076b4:
  uVar7 = *puVar2;
  uVar6 = *puVar4;
  *(int *)(uVar7 + 0xf) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar9 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,uVar7 + 0xf,uVar6);
      uVar9 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0xf,uVar6);
    }
  }
  local_78[0] = *puVar2;
  uVar6 = DebugInfo::CanBreakAtEntry((DebugInfo *)local_78);
  if ((uVar6 & 1) == 0) {
    DeoptimizeFunction(this,param_2);
    RedirectActiveFunctions::RedirectActiveFunctions((RedirectActiveFunctions *)local_78,*param_2,1)
    ;
    RedirectActiveFunctions::VisitThread
              ((RedirectActiveFunctions *)local_78,*(Isolate **)(this + 0x88),
               (ThreadLocalTop *)(*(Isolate **)(this + 0x88) + 0x2bb8));
    ThreadManager::IterateArchivedThreads
              (*(ThreadManager **)(*(long *)(this + 0x88) + 0x95f0),(ThreadVisitor *)local_78);
  }
  else {
    Deoptimizer::DeoptimizeAll(*(Isolate **)(this + 0x88));
    InstallDebugBreakTrampoline(this);
  }
  *(uint *)(*puVar2 + 0x1b) = *(uint *)(*puVar2 + 0x1b) & 0xfffffffe | 4;
  return;
}

