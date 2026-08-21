
void FUN_01245bdc(long *param_1)

{
  __shared_weak_count *p_Var1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  __shared_weak_count *this;
  ulong *puVar8;
  WasmStreamingImpl *pWVar9;
  undefined8 uVar10;
  long lVar11;
  Resolver *pRVar12;
  Promise *pPVar13;
  long lVar14;
  ulong uVar15;
  Isolate *this_00;
  __shared_weak_count *p_Var16;
  __shared_weak_count *p_Var17;
  Isolate *local_a8;
  char *pcStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  HandleScope aHStack_78 [24];
  __shared_weak_count *local_60;
  __shared_weak_count *local_58;
  
  this_00 = *(Isolate **)(*param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,this_00);
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  pcStack_a0 = "WebAssembly.compileStreaming()";
  local_80 = 0;
  local_a8 = this_00;
  uVar5 = v8::Isolate::GetCurrentContext(this_00);
  lVar6 = v8::Promise::Resolver::New();
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)v8::Promise::Resolver::GetPromise();
    puVar2 = (undefined8 *)(*param_1 + 0x10);
    if (puVar7 != (undefined8 *)0x0) {
      puVar2 = puVar7;
    }
    *(undefined8 *)(*param_1 + 0x18) = *puVar2;
    this = operator_new(0x30);
    *(undefined8 *)(this + 0x10) = 0;
    p_Var17 = this + 8;
    *(long *)p_Var17 = 0;
    *(undefined ***)this = &PTR_FUN_01cbc6f0;
    p_Var16 = this + 0x18;
    *(undefined ***)p_Var16 = &PTR_FUN_01cbc5c0;
    this[0x20] = (__shared_weak_count)0x0;
    puVar8 = (ulong *)v8::internal::GlobalHandles::Create
                                (*(GlobalHandles **)(this_00 + 0x95e0),*puVar7);
    *(ulong **)(this + 0x28) = puVar8;
    v8::internal::GlobalHandles::AnnotateStrongRetainer(puVar8,"AsyncCompilationResolver::promise_")
    ;
    uVar15 = *(ulong *)(this_00 + 0x2bc8) & 0xffffffff00000000;
    uVar15 = uVar15 | *(uint *)((uVar15 | *(uint *)(*(ulong *)(this_00 + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(this_00 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(this_00 + 0x95a0);
      if (puVar8 == *(ulong **)(this_00 + 0x95a8)) {
        puVar8 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)this_00);
      }
      *(ulong **)(this_00 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar15;
    }
    else {
      puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this_00 + 0x95b8),uVar15);
    }
    uVar15 = v8::internal::wasm::IsWasmCodegenAllowed(this_00,puVar8);
    if ((uVar15 & 1) == 0) {
      v8::internal::wasm::ErrorThrower::CompileError
                ((char *)&local_a8,"Wasm code generation disallowed by embedder");
      uVar5 = v8::internal::wasm::ErrorThrower::Reify((ErrorThrower *)&local_a8);
      (**(code **)(*(long *)p_Var16 + 8))(p_Var16,uVar5);
    }
    else {
      pWVar9 = operator_new(0x28);
      do {
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var17,0x10);
        if (bVar3) {
          *(long *)p_Var17 = *(long *)p_Var17 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      local_60 = p_Var16;
      local_58 = this;
      v8::WasmStreaming::WasmStreamingImpl::WasmStreamingImpl
                (pWVar9,this_00,"WebAssembly.compileStreaming()",&local_60);
      p_Var16 = local_58;
      if (local_58 != (__shared_weak_count *)0x0) {
        p_Var1 = local_58 + 8;
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
          (**(code **)(*(long *)local_58 + 0x10))(local_58);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var16);
        }
      }
      local_58 = operator_new(0x20);
      *(undefined8 *)(local_58 + 0x10) = 0;
      *(undefined ***)local_58 = &PTR____shared_ptr_emplace_01cbc728;
      *(undefined8 *)(local_58 + 8) = 0;
      local_60 = local_58 + 0x18;
      *(WasmStreamingImpl **)local_60 = pWVar9;
      uVar10 = v8::internal::Managed<v8::WasmStreaming>::FromSharedPtr
                         ((Isolate *)this_00,0,(shared_ptr *)&local_60);
      p_Var16 = local_58;
      if (local_58 != (__shared_weak_count *)0x0) {
        p_Var1 = local_58 + 8;
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
          (**(code **)(*(long *)local_58 + 0x10))(local_58);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var16);
        }
      }
      lVar6 = v8::Function::New(uVar5,*(undefined8 *)(this_00 + 0xb778),uVar10,1,1,0);
      if (((lVar6 != 0) &&
          (lVar11 = v8::Function::New(uVar5,FUN_01249d60,uVar10,1,1,0), lVar11 != 0)) &&
         (pRVar12 = (Resolver *)v8::Promise::Resolver::New(uVar5), pRVar12 != (Resolver *)0x0)) {
        if ((int)param_1[2] < 1) {
          lVar14 = *(long *)(*param_1 + 8) + 0xa0;
        }
        else {
          lVar14 = param_1[1];
        }
        cVar4 = v8::Promise::Resolver::Resolve(pRVar12,uVar5,lVar14);
        if (cVar4 != '\0') {
          pPVar13 = (Promise *)v8::Promise::Resolver::GetPromise();
          v8::Promise::Then(pPVar13,uVar5,lVar6,lVar11);
        }
      }
    }
    do {
      lVar6 = *(long *)p_Var17;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var17,0x10);
      if (bVar3) {
        *(long *)p_Var17 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
    }
  }
  FUN_01249590(&local_a8);
  v8::HandleScope::~HandleScope(aHStack_78);
  return;
}

