
void FUN_01245594(long *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong *puVar7;
  undefined8 uVar8;
  __shared_weak_count *this;
  char *pcVar9;
  ulong uVar10;
  Isolate *this_00;
  Value *this_01;
  __shared_weak_count *p_Var11;
  long *local_d0;
  __shared_weak_count *local_c8;
  undefined4 local_c0 [2];
  undefined1 local_b8 [16];
  undefined1 local_a4 [4];
  long *local_a0;
  HandleScope aHStack_98 [24];
  Isolate *local_80;
  char *pcStack_78;
  int local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  this_00 = *(Isolate **)(*param_1 + 8);
  v8::internal::Isolate::CountUsage(this_00,0x2e);
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  pcStack_78 = "WebAssembly.instantiate()";
  local_58 = 0;
  local_80 = this_00;
  v8::HandleScope::HandleScope(aHStack_98,this_00);
  v8::Isolate::GetCurrentContext(this_00);
  lVar4 = v8::Promise::Resolver::New();
  if (lVar4 == 0) goto LAB_012456f0;
  puVar5 = (undefined8 *)v8::Promise::Resolver::GetPromise();
  puVar1 = (undefined8 *)(*param_1 + 0x10);
  if (puVar5 != (undefined8 *)0x0) {
    puVar1 = puVar5;
  }
  *(undefined8 *)(*param_1 + 0x18) = *puVar1;
  plVar6 = operator_new(0x10);
  *plVar6 = (long)&PTR_FUN_01cbc628;
  puVar7 = (ulong *)v8::internal::GlobalHandles::Create
                              (*(GlobalHandles **)(this_00 + 0x95e0),*puVar5);
  plVar6[1] = (long)puVar7;
  v8::internal::GlobalHandles::AnnotateStrongRetainer
            (puVar7,"InstantiateModuleResultResolver::promise_");
  if ((int)param_1[2] < 1) {
    puVar7 = (ulong *)(*(long *)(*param_1 + 8) + 0xa0);
    uVar10 = *puVar7;
    if ((uVar10 & 1) != 0) goto LAB_01245688;
LAB_012456b4:
    v8::internal::wasm::ErrorThrower::TypeError
              ((char *)&local_80,"Argument 0 must be a buffer source or a WebAssembly.Module object"
              );
LAB_012456c4:
    uVar8 = v8::internal::wasm::ErrorThrower::Reify((ErrorThrower *)&local_80);
    (**(code **)(*plVar6 + 8))(plVar6,uVar8);
    lVar4 = *plVar6;
  }
  else {
    puVar7 = (ulong *)param_1[1];
    uVar10 = *puVar7;
    if ((uVar10 & 1) == 0) goto LAB_012456b4;
LAB_01245688:
    if (*(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) < 0xaa)
    goto LAB_012456b4;
    if ((int)param_1[2] < 2) {
      this_01 = (Value *)(*(long *)(*param_1 + 8) + 0xa0);
    }
    else {
      this_01 = (Value *)(param_1[1] + -8);
    }
    uVar10 = *(ulong *)this_01;
    if ((((uVar10 & 3) == 1) &&
        (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar10 - 1)) == 0x43)) &&
       ((*(uint *)(uVar10 + 0x17) & 0xfffffffe) == 10)) {
LAB_0124577c:
      this_01 = (Value *)0x0;
    }
    else {
      uVar10 = v8::Value::IsObject(this_01);
      if ((uVar10 & 1) == 0) {
        v8::internal::wasm::ErrorThrower::TypeError
                  ((char *)&local_80,"Argument 1 must be an object");
        goto LAB_0124577c;
      }
    }
    if (local_70 != 0) goto LAB_012456c4;
    uVar10 = *puVar7;
    if (((uVar10 & 1) == 0) ||
       (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x436)) {
      local_a4[0] = 0;
      local_b8 = FUN_012493d4(param_1,&local_80,local_a4);
      if (local_70 != 0) goto LAB_012456c4;
      (**(code **)(*plVar6 + 0x18))(plVar6);
      plVar6 = operator_new(0x28);
      *(undefined1 *)(plVar6 + 1) = 0;
      plVar6[2] = (long)this_00;
      *plVar6 = (long)&PTR_FUN_01cbc658;
      puVar7 = (ulong *)v8::internal::GlobalHandles::Create
                                  (*(GlobalHandles **)(this_00 + 0x95e0),*puVar5);
      plVar6[3] = (long)puVar7;
      if (this_01 == (Value *)0x0) {
        plVar6[4] = 0;
        pcVar9 = "AsyncInstantiateCompileResultResolver::promise_";
LAB_0124588c:
        v8::internal::GlobalHandles::AnnotateStrongRetainer(puVar7,pcVar9);
      }
      else {
        puVar7 = (ulong *)v8::internal::GlobalHandles::Create
                                    (*(GlobalHandles **)(this_00 + 0x95e0),*(undefined8 *)this_01);
        plVar6[4] = (long)puVar7;
        v8::internal::GlobalHandles::AnnotateStrongRetainer
                  ((ulong *)plVar6[3],"AsyncInstantiateCompileResultResolver::promise_");
        if (puVar7 != (ulong *)0x0) {
          pcVar9 = "AsyncInstantiateCompileResultResolver::module_";
          goto LAB_0124588c;
        }
      }
      this = operator_new(0x20);
      *(undefined8 *)(this + 0x10) = 0;
      *(long **)(this + 0x18) = plVar6;
      p_Var11 = this + 8;
      *(undefined8 *)p_Var11 = 0;
      *(undefined ***)this = &PTR____shared_weak_count_01cbc6b8;
      uVar10 = *(ulong *)(this_00 + 0x2bc8) & 0xffffffff00000000;
      uVar10 = uVar10 | *(uint *)((uVar10 | *(uint *)(*(ulong *)(this_00 + 0x2bc8) - 1)) + 0x13);
      if (*(CanonicalHandleScope **)(this_00 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(this_00 + 0x95a0);
        if (puVar7 == *(ulong **)(this_00 + 0x95a8)) {
          puVar7 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)this_00);
        }
        *(ulong **)(this_00 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar10;
      }
      else {
        puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this_00 + 0x95b8),uVar10);
      }
      uVar10 = v8::internal::wasm::IsWasmCodegenAllowed(this_00,puVar7);
      if ((uVar10 & 1) == 0) {
        v8::internal::wasm::ErrorThrower::CompileError
                  ((char *)&local_80,"Wasm code generation disallowed by embedder");
        uVar8 = v8::internal::wasm::ErrorThrower::Reify((ErrorThrower *)&local_80);
        (**(code **)(*plVar6 + 8))(plVar6,uVar8);
        do {
          lVar4 = *(long *)p_Var11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(p_Var11,0x10);
          if (bVar3) {
            *(long *)p_Var11 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 != 0) goto LAB_012456f0;
        (**(code **)(*(long *)this + 0x10))(this);
      }
      else {
        local_c0[0] = v8::internal::wasm::WasmFeatures::FromIsolate((Isolate *)this_00);
        local_d0 = plVar6;
        local_c8 = this;
        v8::internal::wasm::WasmEngine::AsyncCompile
                  (*(WasmEngine **)(this_00 + 0xc770),this_00,local_c0,&local_d0,local_b8,
                   local_a4[0],"WebAssembly.instantiate()");
        this = local_c8;
        if (local_c8 == (__shared_weak_count *)0x0) goto LAB_012456f0;
        p_Var11 = local_c8 + 8;
        do {
          lVar4 = *(long *)p_Var11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(p_Var11,0x10);
          if (bVar3) {
            *(long *)p_Var11 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 != 0) goto LAB_012456f0;
        (**(code **)(*(long *)local_c8 + 0x10))(local_c8);
      }
      std::__ndk1::__shared_weak_count::__release_weak(this);
      goto LAB_012456f0;
    }
    local_a0 = plVar6;
    v8::internal::wasm::WasmEngine::AsyncInstantiate
              (*(WasmEngine **)(this_00 + 0xc770),this_00,&local_a0,puVar7,this_01);
    plVar6 = local_a0;
    local_a0 = (long *)0x0;
    if (plVar6 == (long *)0x0) goto LAB_012456f0;
    lVar4 = *plVar6;
  }
  (**(code **)(lVar4 + 0x18))(plVar6);
LAB_012456f0:
  v8::HandleScope::~HandleScope(aHStack_98);
  FUN_01249590(&local_80);
  return;
}

