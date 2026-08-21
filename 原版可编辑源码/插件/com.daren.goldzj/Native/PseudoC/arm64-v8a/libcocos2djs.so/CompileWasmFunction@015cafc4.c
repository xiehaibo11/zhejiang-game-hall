
/* v8::internal::wasm::WasmCompilationUnit::CompileWasmFunction(v8::internal::Isolate*,
   v8::internal::wasm::NativeModule*, v8::internal::wasm::WasmFeatures*,
   v8::internal::wasm::WasmFunction const*, v8::internal::wasm::ExecutionTier) */

void v8::internal::wasm::WasmCompilationUnit::CompileWasmFunction
               (long param_1,NativeModule *param_2,WasmFeatures *param_3,long param_4,
               undefined1 param_5)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  WasmEngine *pWVar7;
  long local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  void *local_170;
  undefined8 uStack_168;
  void *local_160;
  undefined8 uStack_158;
  void *local_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  long local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  void *local_e0;
  undefined8 uStack_d8;
  void *local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  shared_ptr asStack_a0 [8];
  __shared_weak_count *local_98;
  CompilationEnv aCStack_70 [40];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_a8 = *(undefined4 *)(param_4 + 8);
  local_a4 = param_5;
  NativeModule::CreateCompilationEnv();
  pWVar7 = *(WasmEngine **)(param_1 + 0xc770);
  CompilationState::GetWireBytesStorage();
  ExecuteCompilation((WasmCompilationUnit *)&local_a8,pWVar7,aCStack_70,asStack_a0,
                     *(Counters **)(param_1 + 0x9520),param_3);
  if (local_98 != (__shared_weak_count *)0x0) {
    p_Var1 = local_98 + 8;
    do {
      lVar6 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*(long *)local_98 + 0x10))(local_98);
      std::__ndk1::__shared_weak_count::__release_weak(local_98);
    }
  }
  if (local_130 == 0) {
    CompilationState::SetError(*(CompilationState **)(param_2 + 0x100));
  }
  else {
    WasmCodeRefScope::WasmCodeRefScope((WasmCodeRefScope *)asStack_a0);
    local_150 = local_c0;
    local_160 = local_d0;
    local_170 = local_e0;
    local_e0 = (void *)0x0;
    local_d0 = (void *)0x0;
    uStack_1b8 = uStack_128;
    local_1c0 = local_130;
    uStack_1a8 = uStack_118;
    uStack_1b0 = uStack_120;
    uStack_188 = uStack_f8;
    local_190 = local_100;
    uStack_178 = uStack_e8;
    uStack_180 = uStack_f0;
    uStack_168 = uStack_d8;
    uStack_158 = uStack_c8;
    uStack_198 = uStack_108;
    local_1a0 = local_110;
    local_c0 = (void *)0x0;
    uStack_148 = uStack_b8;
    uStack_140 = uStack_b0;
    NativeModule::AddCompiledCode(param_2,&local_1c0);
    pvVar5 = local_150;
    local_150 = (void *)0x0;
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
    }
    pvVar5 = local_160;
    local_160 = (void *)0x0;
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
    }
    pvVar5 = local_170;
    local_170 = (void *)0x0;
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
    }
    WasmCodeRefScope::~WasmCodeRefScope((WasmCodeRefScope *)asStack_a0);
  }
  pvVar5 = local_c0;
  local_c0 = (void *)0x0;
  if (pvVar5 != (void *)0x0) {
    operator_delete__(pvVar5);
  }
  pvVar5 = local_d0;
  local_d0 = (void *)0x0;
  if (pvVar5 != (void *)0x0) {
    operator_delete__(pvVar5);
  }
  pvVar5 = local_e0;
  local_e0 = (void *)0x0;
  if (pvVar5 != (void *)0x0) {
    operator_delete__(pvVar5);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

