
/* v8::internal::SourceTextModule::EvaluateMaybeAsync(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SourceTextModule>) */

ulong * v8::internal::SourceTextModule::EvaluateMaybeAsync(Factory *param_1,ulong *param_2)

{
  Factory *pFVar1;
  int iVar2;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = *param_2;
  pFVar1 = param_1 + 0x95a0;
  iVar2 = *(int *)(uVar6 + 0xb) >> 1;
  if (iVar2 != 3) {
    if (iVar2 == 6) {
      uVar8 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0x33);
      if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x42d)
      goto LAB_0112daa0;
      puVar3 = (ulong *)Factory::NewJSPromise(param_1);
      goto LAB_0112dbbc;
    }
    if (iVar2 != 5) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "module->status() == kInstantiated || module->status() == kEvaluated");
    }
    param_2 = (ulong *)GetAsyncCycleRoot(param_1,param_2);
    uVar6 = *param_2;
  }
  uVar8 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0x33);
  if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x42d) {
LAB_0112daa0:
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) != (CanonicalHandleScope *)0x0) {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
      return puVar3;
    }
    puVar3 = *(ulong **)pFVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)param_1);
    }
    *(ulong **)pFVar1 = puVar3 + 1;
    *puVar3 = uVar8;
    return puVar3;
  }
  puVar3 = (ulong *)Factory::NewJSPromise(param_1);
  uVar8 = *param_2;
  uVar6 = *puVar3;
  *(int *)(uVar8 + 0x33) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 0x33,uVar6);
      uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0x33,uVar6);
    }
  }
  lVar4 = Evaluate(param_1,param_2);
  if (lVar4 != 0) {
    if ((*(uint *)(*param_2 + 0xb) & 0xfffffffe) != 10) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","module->status() == kEvaluated");
    }
    if ((*(byte *)(*param_2 + 0x43) >> 2 & 1) != 0) {
      return puVar3;
    }
    lVar4 = JSPromise::Resolve(puVar3,param_1 + 0xa0);
    if (lVar4 != 0) {
      return puVar3;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  if (*(int *)(param_1 + 0x2bd8) == *(int *)(param_1 + 0x188)) {
    return (ulong *)0x0;
  }
  *(undefined8 *)(param_1 + 0x2bd8) = *(undefined8 *)(param_1 + 0xa8);
LAB_0112dbbc:
  uVar6 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pFVar1;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend((Isolate *)param_1);
    }
    *(ulong **)pFVar1 = puVar5 + 1;
    *puVar5 = uVar6;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
  }
  JSPromise::Reject(puVar3,puVar5,1);
  return puVar3;
}

