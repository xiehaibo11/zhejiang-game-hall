
/* v8::internal::wasm::CompileImportWrapper(v8::internal::wasm::WasmEngine*,
   v8::internal::wasm::NativeModule*, v8::internal::Counters*,
   v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*,
   v8::internal::wasm::WasmImportWrapperCache::ModificationScope*) */

long v8::internal::wasm::CompileImportWrapper
               (undefined8 param_1,NativeModule *param_2,long param_3,undefined4 param_4,
               undefined8 param_5,ModificationScope *param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  WasmCode *pWVar5;
  void *pvVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  WasmCode *local_188;
  void *local_180;
  undefined8 uStack_178;
  void *local_170;
  undefined8 uStack_168;
  WasmCode *local_160;
  compiler acStack_158 [80];
  void *local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  void *local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  pair local_d0 [8];
  undefined8 local_c8;
  undefined1 auStack_c0 [40];
  WasmCodeRefScope aWStack_98 [48];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_d0[0] = SUB41(param_4,0);
  cVar2 = *(char *)(*(long *)(param_2 + 200) + 0x178);
  local_c8 = param_5;
  WasmCodeRefScope::WasmCodeRefScope(aWStack_98);
  NativeModule::CreateCompilationEnv();
  compiler::CompileWasmImportCallWrapper
            (acStack_158,param_1,auStack_c0,param_4,param_5,cVar2 != '\0');
  local_170 = local_e8;
  uStack_178 = uStack_f0;
  local_180 = local_f8;
  uStack_f0 = 0;
  local_e8 = (void *)0x0;
  local_f8 = (void *)0x0;
  uStack_168 = uStack_e0;
  uVar7 = GetCodeKind((WasmCompilationResult *)acStack_158);
  NativeModule::AddCode
            (&local_160,param_2,local_d8,acStack_158,local_100,uStack_fc,&local_170,&local_180,uVar7
             ,0);
  pvVar6 = local_180;
  local_180 = (void *)0x0;
  if (pvVar6 != (void *)0x0) {
    operator_delete__(pvVar6);
  }
  pvVar6 = local_170;
  local_170 = (void *)0x0;
  if (pvVar6 != (void *)0x0) {
    operator_delete__(pvVar6);
  }
  local_188 = local_160;
  local_160 = (WasmCode *)0x0;
  lVar8 = NativeModule::PublishCode(param_2,&local_188);
  pWVar5 = local_188;
  local_188 = (WasmCode *)0x0;
  if (pWVar5 != (WasmCode *)0x0) {
    WasmCode::~WasmCode(pWVar5);
    operator_delete(pWVar5);
  }
  plVar9 = (long *)WasmImportWrapperCache::ModificationScope::operator[](param_6,local_d0);
  piVar1 = (int *)(lVar8 + 0x8c);
  *plVar9 = lVar8;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  StatsCounterThreadSafe::Increment
            ((StatsCounterThreadSafe *)(param_3 + 0x2020),*(int *)(lVar8 + 8));
  StatsCounterThreadSafe::Increment
            ((StatsCounterThreadSafe *)(param_3 + 0x2060),*(int *)(lVar8 + 0x18));
  pWVar5 = local_160;
  local_160 = (WasmCode *)0x0;
  if (pWVar5 != (WasmCode *)0x0) {
    WasmCode::~WasmCode(pWVar5);
    operator_delete(pWVar5);
  }
  pvVar6 = local_e8;
  local_e8 = (void *)0x0;
  if (pvVar6 != (void *)0x0) {
    operator_delete__(pvVar6);
  }
  pvVar6 = local_f8;
  local_f8 = (void *)0x0;
  if (pvVar6 != (void *)0x0) {
    operator_delete__(pvVar6);
  }
  pvVar6 = local_108;
  local_108 = (void *)0x0;
  if (pvVar6 != (void *)0x0) {
    operator_delete__(pvVar6);
  }
  WasmCodeRefScope::~WasmCodeRefScope(aWStack_98);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

