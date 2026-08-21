
void FUN_01245f34(long *param_1)

{
  __shared_weak_count *p_Var1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong *puVar9;
  __shared_weak_count *p_Var10;
  __shared_weak_count *this;
  WasmStreamingImpl *pWVar11;
  undefined8 uVar12;
  long lVar13;
  Resolver *pRVar14;
  Promise *pPVar15;
  char *pcVar16;
  long lVar17;
  ulong uVar18;
  Isolate *this_00;
  Value *this_01;
  __shared_weak_count *p_Var19;
  Isolate *local_b8;
  char *pcStack_b0;
  int local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  HandleScope aHStack_88 [24];
  __shared_weak_count *local_70;
  __shared_weak_count *local_68;
  
  this_00 = *(Isolate **)(*param_1 + 8);
  v8::internal::Isolate::CountUsage(this_00,0x2e);
  v8::HandleScope::HandleScope(aHStack_88,this_00);
  uVar5 = v8::Isolate::GetCurrentContext(this_00);
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  pcStack_b0 = "WebAssembly.instantiateStreaming()";
  local_90 = 0;
  local_b8 = this_00;
  lVar6 = v8::Promise::Resolver::New();
  if (lVar6 == 0) goto LAB_01246124;
  puVar7 = (undefined8 *)v8::Promise::Resolver::GetPromise();
  puVar2 = (undefined8 *)(*param_1 + 0x10);
  if (puVar7 != (undefined8 *)0x0) {
    puVar2 = puVar7;
  }
  *(undefined8 *)(*param_1 + 0x18) = *puVar2;
  plVar8 = operator_new(0x10);
  *plVar8 = (long)&PTR_FUN_01cbc628;
  puVar9 = (ulong *)v8::internal::GlobalHandles::Create
                              (*(GlobalHandles **)(this_00 + 0x95e0),*puVar7);
  plVar8[1] = (long)puVar9;
  v8::internal::GlobalHandles::AnnotateStrongRetainer
            (puVar9,"InstantiateModuleResultResolver::promise_");
  uVar18 = *(ulong *)(this_00 + 0x2bc8) & 0xffffffff00000000;
  uVar18 = uVar18 | *(uint *)((uVar18 | *(uint *)(*(ulong *)(this_00 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(this_00 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)(this_00 + 0x95a0);
    if (puVar9 == *(ulong **)(this_00 + 0x95a8)) {
      puVar9 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)this_00);
    }
    *(ulong **)(this_00 + 0x95a0) = puVar9 + 1;
    *puVar9 = uVar18;
  }
  else {
    puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(this_00 + 0x95b8),uVar18);
  }
  uVar18 = v8::internal::wasm::IsWasmCodegenAllowed(this_00,puVar9);
  if ((uVar18 & 1) == 0) {
    v8::internal::wasm::ErrorThrower::CompileError
              ((char *)&local_b8,"Wasm code generation disallowed by embedder");
  }
  else {
    if ((int)param_1[2] < 2) {
      this_01 = (Value *)(*(long *)(*param_1 + 8) + 0xa0);
    }
    else {
      this_01 = (Value *)(param_1[1] + -8);
    }
    uVar18 = *(ulong *)this_01;
    if ((((uVar18 & 3) == 1) &&
        (*(short *)((uVar18 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar18 - 1)) == 0x43)) &&
       ((*(uint *)(uVar18 + 0x17) & 0xfffffffe) == 10)) {
LAB_012460ec:
      this_01 = (Value *)0x0;
    }
    else {
      uVar18 = v8::Value::IsObject(this_01);
      if ((uVar18 & 1) == 0) {
        v8::internal::wasm::ErrorThrower::TypeError
                  ((char *)&local_b8,"Argument 1 must be an object");
        goto LAB_012460ec;
      }
    }
    if (local_a8 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
      p_Var10 = operator_new(0x28);
      p_Var10[8] = (__shared_weak_count)0x0;
      *(Isolate **)(p_Var10 + 0x10) = this_00;
      *(undefined ***)p_Var10 = &PTR_FUN_01cbc658;
      puVar9 = (ulong *)v8::internal::GlobalHandles::Create
                                  (*(GlobalHandles **)(this_00 + 0x95e0),*puVar7);
      *(ulong **)(p_Var10 + 0x18) = puVar9;
      if (this_01 == (Value *)0x0) {
        *(undefined8 *)(p_Var10 + 0x20) = 0;
        pcVar16 = "AsyncInstantiateCompileResultResolver::promise_";
LAB_012461e8:
        v8::internal::GlobalHandles::AnnotateStrongRetainer(puVar9,pcVar16);
      }
      else {
        puVar9 = (ulong *)v8::internal::GlobalHandles::Create
                                    (*(GlobalHandles **)(this_00 + 0x95e0),*(undefined8 *)this_01);
        *(ulong **)(p_Var10 + 0x20) = puVar9;
        v8::internal::GlobalHandles::AnnotateStrongRetainer
                  (*(ulong **)(p_Var10 + 0x18),"AsyncInstantiateCompileResultResolver::promise_");
        if (puVar9 != (ulong *)0x0) {
          pcVar16 = "AsyncInstantiateCompileResultResolver::module_";
          goto LAB_012461e8;
        }
      }
      this = operator_new(0x20);
      *(undefined8 *)(this + 0x10) = 0;
      *(__shared_weak_count **)(this + 0x18) = p_Var10;
      p_Var19 = this + 8;
      *(long *)p_Var19 = 0;
      *(undefined ***)this = &PTR____shared_weak_count_01cbc6b8;
      pWVar11 = operator_new(0x28);
      do {
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var19,0x10);
        if (bVar3) {
          *(long *)p_Var19 = *(long *)p_Var19 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      local_70 = p_Var10;
      local_68 = this;
      v8::WasmStreaming::WasmStreamingImpl::WasmStreamingImpl
                (pWVar11,this_00,"WebAssembly.instantiateStreaming()",&local_70);
      p_Var10 = local_68;
      if (local_68 != (__shared_weak_count *)0x0) {
        p_Var1 = local_68 + 8;
        do {
          lVar6 = *(long *)p_Var1;
          cVar4 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar3) {
            *(long *)p_Var1 = lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*(long *)local_68 + 0x10))(local_68);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var10);
        }
      }
      local_68 = operator_new(0x20);
      *(undefined8 *)(local_68 + 0x10) = 0;
      *(undefined ***)local_68 = &PTR____shared_ptr_emplace_01cbc728;
      *(undefined8 *)(local_68 + 8) = 0;
      local_70 = local_68 + 0x18;
      *(WasmStreamingImpl **)local_70 = pWVar11;
      uVar12 = v8::internal::Managed<v8::WasmStreaming>::FromSharedPtr
                         ((Isolate *)this_00,0,(shared_ptr *)&local_70);
      p_Var10 = local_68;
      if (local_68 != (__shared_weak_count *)0x0) {
        p_Var1 = local_68 + 8;
        do {
          lVar6 = *(long *)p_Var1;
          cVar4 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar3) {
            *(long *)p_Var1 = lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*(long *)local_68 + 0x10))(local_68);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var10);
        }
      }
      lVar6 = v8::Function::New(uVar5,*(undefined8 *)(this_00 + 0xb778),uVar12,1,1,0);
      if (((lVar6 != 0) &&
          (lVar13 = v8::Function::New(uVar5,FUN_01249d60,uVar12,1,1,0), lVar13 != 0)) &&
         (pRVar14 = (Resolver *)v8::Promise::Resolver::New(uVar5), pRVar14 != (Resolver *)0x0)) {
        if ((int)param_1[2] < 1) {
          lVar17 = *(long *)(*param_1 + 8) + 0xa0;
        }
        else {
          lVar17 = param_1[1];
        }
        cVar4 = v8::Promise::Resolver::Resolve(pRVar14,uVar5,lVar17);
        if (cVar4 != '\0') {
          pPVar15 = (Promise *)v8::Promise::Resolver::GetPromise();
          v8::Promise::Then(pPVar15,uVar5,lVar6,lVar13);
        }
      }
      do {
        lVar6 = *(long *)p_Var19;
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var19,0x10);
        if (bVar3) {
          *(long *)p_Var19 = lVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*(long *)this + 0x10))(this);
        std::__ndk1::__shared_weak_count::__release_weak(this);
      }
      goto LAB_01246124;
    }
  }
  uVar5 = v8::internal::wasm::ErrorThrower::Reify((ErrorThrower *)&local_b8);
  (**(code **)(*plVar8 + 8))(plVar8,uVar5);
  (**(code **)(*plVar8 + 0x18))(plVar8);
LAB_01246124:
  FUN_01249590(&local_b8);
  v8::HandleScope::~HandleScope(aHStack_88);
  return;
}

