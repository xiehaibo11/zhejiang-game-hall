
/* v8::internal::Genesis::Genesis(v8::internal::Isolate*,
   v8::internal::MaybeHandle<v8::internal::JSGlobalProxy>, v8::Local<v8::ObjectTemplate>, unsigned
   long, v8::DeserializeInternalFieldsCallback, v8::MicrotaskQueue*) */

void __thiscall
v8::internal::Genesis::Genesis
          (Genesis *this,Factory *param_1,long param_3,ObjectTemplate *param_4,long param_5,
          undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long local_b8;
  long local_b0;
  SaveContext aSStack_a8 [24];
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  *(Factory **)this = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  lVar10 = *(long *)(param_1 + 0x9508);
  *(long *)(this + 0x38) = lVar10;
  *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x8b);
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  SaveContext::SaveContext(aSStack_a8,(Isolate *)param_1);
  if (param_3 == 0) {
    if (param_5 == 0) {
      if (param_4 == (ObjectTemplate *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = ObjectTemplate::InternalFieldCount(param_4);
      }
      iVar4 = iVar4 * 8 + 0x10;
    }
    else {
      iVar4 = *(int *)(*(long *)(param_1 + 0xf90) + (long)((int)param_5 * 4 + -4) + 7) >> 1;
    }
    param_3 = Factory::NewUninitializedJSGlobalProxy(param_1,iVar4);
    if (param_1[0xb6ba] != (Factory)0x0) goto LAB_0103c594;
LAB_0103c5d4:
    puVar5 = *(ulong **)(this + 0x10);
    if (puVar5 != (ulong *)0x0) goto LAB_0103c5dc;
LAB_0103c5b8:
    if (FLAG_profile_deserialization == '\0') {
      local_b8 = 0;
    }
    else {
      local_b8 = base::TimeTicks::HighResolutionNow();
    }
    CreateRoots(this);
    MathRandom::InitializeContext(param_1,*(undefined8 *)(this + 0x10));
    uVar7 = CreateEmptyFunction(this);
    CreateSloppyModeFunctionMaps(this,uVar7);
    CreateStrictModeFunctionMaps(this,uVar7);
    CreateObjectFunction(this,uVar7);
    CreateIteratorMaps(this,uVar7);
    CreateAsyncIteratorMaps(this,uVar7);
    CreateAsyncFunctionMaps(this,uVar7);
    uVar8 = CreateNewGlobals(this,param_4,param_3);
    InitializeGlobal(this,uVar8,uVar7);
    puVar5 = (ulong *)NormalizedMapCache::New(*(Isolate **)this);
    uVar9 = *puVar5;
    uVar13 = **(ulong **)(this + 0x10);
    puVar1 = (undefined4 *)(uVar13 + 0x1eb);
    *puVar1 = (int)uVar9;
    if ((uVar9 & 1) != 0) {
      uVar11 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar11 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar13,puVar1,uVar9);
        uVar11 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar13,puVar1,uVar9);
      }
    }
    InitializeIteratorFunctions(this);
    InitializeCallSiteBuiltins(this);
    InstallABunchOfRandomThings(this);
    InstallExtrasBindings(this);
    uVar9 = ConfigureGlobalObjects(this,param_4);
    if ((uVar9 & 1) == 0) goto LAB_0103c9ec;
    lVar10 = *(long *)(param_1 + 0x9520);
    if (*(char *)(lVar10 + 0x19f8) == '\0') {
      *(char *)(lVar10 + 0x19f8) = '\x01';
      piVar6 = (int *)StatsCounterBase::FindLocationInStatsTable
                                ((StatsCounterBase *)(lVar10 + 0x19e0));
      *(int **)(lVar10 + 0x19f0) = piVar6;
    }
    else {
      piVar6 = *(int **)(lVar10 + 0x19f0);
    }
    if (piVar6 != (int *)0x0) {
      *piVar6 = *piVar6 + 1;
    }
    if (FLAG_profile_deserialization != '\0') {
      local_b0 = base::TimeTicks::HighResolutionNow();
      local_b0 = local_b0 - local_b8;
      base::TimeDelta::InMillisecondsF((TimeDelta *)&local_b0);
      PrintF("[Initializing context from scratch took %0.3f ms]\n");
    }
  }
  else {
    if (param_1[0xb6ba] == (Factory)0x0) goto LAB_0103c5d4;
LAB_0103c594:
    puVar5 = (ulong *)Snapshot::NewContextFromSnapshot
                                ((Snapshot *)param_1,param_3,param_5,param_6,param_7);
    if (puVar5 == (ulong *)0x0) goto LAB_0103c5d4;
    *(ulong **)(this + 0x10) = puVar5;
    if (puVar5 == (ulong *)0x0) goto LAB_0103c5b8;
LAB_0103c5dc:
    uVar13 = *puVar5;
    uVar9 = *(ulong *)(param_1 + 0x8e38);
    *(int *)(uVar13 + 0x41f) = (int)uVar9;
    if ((((uVar9 & 1) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) &&
       ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar13);
    }
    *(ulong *)(param_1 + 0x8e38) = uVar13;
    *(undefined8 *)(param_1 + 0x2bc8) = **(undefined8 **)(this + 0x10);
    lVar10 = *(long *)(param_1 + 0x9520);
    if (*(char *)(lVar10 + 0x1a18) == '\0') {
      *(char *)(lVar10 + 0x1a18) = '\x01';
      piVar6 = (int *)StatsCounterBase::FindLocationInStatsTable
                                ((StatsCounterBase *)(lVar10 + 0x1a00));
      *(int **)(lVar10 + 0x1a10) = piVar6;
    }
    else {
      piVar6 = *(int **)(lVar10 + 0x1a10);
    }
    if (piVar6 != (int *)0x0) {
      *piVar6 = *piVar6 + 1;
    }
    if (param_5 == 0) {
      uVar7 = CreateNewGlobals(this,param_4,param_3);
      HookUpGlobalObject(this,uVar7);
      uVar9 = ConfigureGlobalObjects(this,param_4);
      if ((uVar9 & 1) == 0) goto LAB_0103c9ec;
    }
    else {
      HookUpGlobalProxy(this,param_3);
    }
  }
  if (param_8 == 0) {
    param_8 = *(long *)(param_1 + 0xb7c0);
  }
  *(long *)(**(long **)(this + 0x10) + 0x423) = param_8;
  if (param_1[0xb6b8] == (Factory)0x0) {
    InitializeGlobal_harmony_string_replaceall(this);
    InitializeGlobal_harmony_weak_refs(this);
    InitializeGlobal_harmony_regexp_match_indices(this);
    InitializeGlobal_harmony_sharedarraybuffer(this);
    InitializeGlobal_harmony_promise_all_settled(this);
    uVar9 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
            (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0x30b);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(param_1 + 0x95a0);
      if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend((Isolate *)param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar9;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
      uVar9 = *puVar5;
    }
    uVar13 = uVar9 & 0xffffffff00000000;
    uVar11 = **(ulong **)(this + 0x10);
    uVar3 = *(uint *)((uVar13 | *(uint *)((uVar13 | *(uint *)(uVar9 + 0x1b)) + 0xf)) - 1);
    puVar2 = (uint *)(uVar11 + 0x30f);
    *puVar2 = uVar3;
    if ((uVar3 & 1) != 0) {
      uVar12 = uVar13 | uVar3;
      uVar13 = uVar13 | (ulong)uVar3 & 0xfffffffffffc0000;
      uVar9 = *(ulong *)(uVar13 + 8);
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar11,puVar2,uVar12);
        uVar9 = *(ulong *)(uVar13 | 8);
      }
      if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar11,puVar2,uVar12);
      }
    }
  }
  if (FLAG_disallow_code_generation_from_strings != '\0') {
    uVar9 = *(ulong *)(param_1 + 0xc0);
    uVar13 = **(ulong **)(this + 0x10);
    *(int *)(uVar13 + 0x1f) = (int)uVar9;
    if ((uVar9 & 1) != 0) {
      uVar11 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar11 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar13,uVar13 + 0x1f,uVar9);
        uVar11 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar13,uVar13 + 0x1f,uVar9);
      }
    }
  }
  if ((*(Debug **)(param_1 + 0xb6c8))[8] != (Debug)0x0) {
    Debug::InstallDebugBreakTrampoline(*(Debug **)(param_1 + 0xb6c8));
  }
  local_b0 = **(long **)(this + 0x10);
  NativeContext::ResetErrorsThrown((NativeContext *)&local_b0);
  *(undefined8 *)(this + 8) = *(undefined8 *)(this + 0x10);
LAB_0103c9ec:
  SaveContext::~SaveContext(aSStack_a8);
  if (local_90 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return;
}

