
undefined8 * FUN_01205894(Isolate *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  __shared_weak_count *this;
  ManagedPtrDestructor *pMVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  Isolate *pIVar8;
  undefined8 uVar9;
  __shared_weak_count *p_Var10;
  undefined8 local_70;
  undefined8 uStack_68;
  
  this = operator_new(0xa0);
  *(undefined8 *)(this + 0x10) = 0;
  p_Var10 = this + 8;
  *(long *)p_Var10 = 0;
  *(undefined ***)this = &PTR_FUN_01cbc3d0;
  pIVar8 = (Isolate *)*param_3;
  puVar4 = (ulong *)*param_4;
  *(Isolate **)(this + 0x18) = pIVar8;
  uVar6 = *puVar4 & 0xffffffff00000000;
  uVar9 = *(undefined8 *)
           (**(long **)(*(long *)((uVar6 | *(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*puVar4 +
                                                                                          3)) + 0x6f
                                                                       )) + 0xb)) + 3) + 0x18) + 200
           );
  *(undefined8 *)(this + 0x20) = uVar9;
  uVar6 = *puVar4 & 0xffffffff00000000;
  puVar7 = *(undefined8 **)
            (**(long **)(*(long *)((uVar6 | *(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*puVar4 
                                                  + 3)) + 0x6f)) + 0xb)) + 3) + 0x18) + 0xe0);
  uStack_68 = puVar7[1];
  local_70 = *puVar7;
  uVar6 = *puVar4 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar4 + 3);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar6;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar6);
  }
  v8::internal::wasm::WasmInterpreter::WasmInterpreter
            ((WasmInterpreter *)(this + 0x28),pIVar8,uVar9,&local_70,puVar4);
  this[0x70] = (__shared_weak_count)0xff;
  *(undefined8 *)(this + 0x7c) = 0;
  *(undefined8 *)(this + 0x74) = 0;
  *(undefined8 *)(this + 0x8c) = 0;
  *(undefined8 *)(this + 0x84) = 0;
  *(undefined8 *)(this + 0x94) = 0x3f80000000000000;
  lVar5 = *(long *)(param_1 + 0x20) + param_2;
  *(long *)(param_1 + 0x20) = lVar5;
  if (0x2000000 < lVar5 - *(long *)(param_1 + 0x30)) {
    v8::Isolate::CheckMemoryPressure(param_1);
  }
  if (param_2 < 0) {
    if (0x4000000 < *(long *)(param_1 + 0x28) + param_2) {
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + param_2;
    }
  }
  else if ((param_2 != 0) && (*(long *)(param_1 + 0x28) < lVar5)) {
    v8::Isolate::ReportExternalAllocationLimitReached(param_1);
  }
  pMVar3 = operator_new(0x30);
  puVar7 = operator_new(0x10);
  *puVar7 = this + 0x18;
  puVar7[1] = this;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(p_Var10,0x10);
    if (bVar2) {
      *(long *)p_Var10 = *(long *)p_Var10 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *(undefined8 *)(pMVar3 + 0x10) = 0;
  *(undefined8 **)(pMVar3 + 0x18) = puVar7;
  *(long *)pMVar3 = param_2;
  *(undefined8 *)(pMVar3 + 8) = 0;
  *(code **)(pMVar3 + 0x20) = FUN_012090f0;
  *(undefined8 *)(pMVar3 + 0x28) = 0;
  puVar7 = (undefined8 *)v8::internal::Factory::NewForeign((Factory *)param_1,(ulong)pMVar3);
  uVar9 = v8::internal::GlobalHandles::Create(*(GlobalHandles **)(param_1 + 0x95e0),*puVar7);
  *(undefined8 *)(pMVar3 + 0x28) = uVar9;
  v8::internal::GlobalHandles::MakeWeak(uVar9,pMVar3,v8::internal::ManagedObjectFinalizer,0);
  v8::internal::Isolate::RegisterManagedPtrDestructor((Isolate *)param_1,pMVar3);
  do {
    lVar5 = *(long *)p_Var10;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(p_Var10,0x10);
    if (bVar2) {
      *(long *)p_Var10 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 == 0) {
    (**(code **)(*(long *)this + 0x10))(this);
    std::__ndk1::__shared_weak_count::__release_weak(this);
  }
  return puVar7;
}

