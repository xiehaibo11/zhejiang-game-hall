
void FUN_012451e4(long *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  __shared_weak_count *this;
  undefined8 uVar8;
  ulong uVar9;
  Isolate *this_00;
  __shared_weak_count *p_Var10;
  long *local_a8;
  __shared_weak_count *local_a0;
  undefined1 local_98 [16];
  Isolate *local_88;
  char *pcStack_80;
  int local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  HandleScope aHStack_58 [24];
  undefined4 local_28;
  undefined1 local_24 [4];
  
  this_00 = *(Isolate **)(*param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_58,this_00);
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  pcStack_80 = "WebAssembly.compile()";
  uVar9 = *(ulong *)(this_00 + 0x2bc8) & 0xffffffff00000000;
  uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(this_00 + 0x2bc8) - 1)) + 0x13);
  local_88 = this_00;
  if (*(CanonicalHandleScope **)(this_00 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(this_00 + 0x95a0);
    if (puVar4 == *(ulong **)(this_00 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)this_00);
    }
    *(ulong **)(this_00 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar9;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(this_00 + 0x95b8),uVar9);
  }
  uVar9 = v8::internal::wasm::IsWasmCodegenAllowed(this_00,puVar4);
  if ((uVar9 & 1) == 0) {
    v8::internal::wasm::ErrorThrower::CompileError
              ((char *)&local_88,"Wasm code generation disallowed by embedder");
  }
  v8::Isolate::GetCurrentContext(this_00);
  lVar5 = v8::Promise::Resolver::New();
  if (lVar5 == 0) goto LAB_01245410;
  puVar6 = (undefined8 *)v8::Promise::Resolver::GetPromise();
  puVar1 = (undefined8 *)(*param_1 + 0x10);
  if (puVar6 != (undefined8 *)0x0) {
    puVar1 = puVar6;
  }
  *(undefined8 *)(*param_1 + 0x18) = *puVar1;
  plVar7 = operator_new(0x18);
  *(undefined1 *)(plVar7 + 1) = 0;
  *plVar7 = (long)&PTR_FUN_01cbc5c0;
  puVar4 = (ulong *)v8::internal::GlobalHandles::Create
                              (*(GlobalHandles **)(this_00 + 0x95e0),*puVar6);
  plVar7[2] = (long)puVar4;
  v8::internal::GlobalHandles::AnnotateStrongRetainer(puVar4,"AsyncCompilationResolver::promise_");
  this = operator_new(0x20);
  *(undefined8 *)(this + 0x10) = 0;
  *(long **)(this + 0x18) = plVar7;
  p_Var10 = this + 8;
  *(undefined8 *)p_Var10 = 0;
  *(undefined ***)this = &PTR____shared_weak_count_01cbc5f0;
  local_24[0] = 0;
  local_98 = FUN_012493d4(param_1,&local_88,local_24);
  if (local_78 == 0) {
    local_28 = v8::internal::wasm::WasmFeatures::FromIsolate((Isolate *)this_00);
    local_a8 = plVar7;
    local_a0 = this;
    v8::internal::wasm::WasmEngine::AsyncCompile
              (*(WasmEngine **)(this_00 + 0xc770),this_00,&local_28,&local_a8,local_98,local_24[0],
               "WebAssembly.compile()");
    this = local_a0;
    if (local_a0 == (__shared_weak_count *)0x0) goto LAB_01245410;
    p_Var10 = local_a0 + 8;
    do {
      lVar5 = *(long *)p_Var10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var10,0x10);
      if (bVar3) {
        *(long *)p_Var10 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 != 0) goto LAB_01245410;
    (**(code **)(*(long *)local_a0 + 0x10))(local_a0);
  }
  else {
    uVar8 = v8::internal::wasm::ErrorThrower::Reify((ErrorThrower *)&local_88);
    (**(code **)(*plVar7 + 8))(plVar7,uVar8);
    do {
      lVar5 = *(long *)p_Var10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var10,0x10);
      if (bVar3) {
        *(long *)p_Var10 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 != 0) goto LAB_01245410;
    (**(code **)(*(long *)this + 0x10))(this);
  }
  std::__ndk1::__shared_weak_count::__release_weak(this);
LAB_01245410:
  FUN_01249590(&local_88);
  v8::HandleScope::~HandleScope(aHStack_58);
  return;
}

