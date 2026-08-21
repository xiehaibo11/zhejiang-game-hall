
/* v8::internal::Execution::CallWasm(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Code>, unsigned long,
   v8::internal::Handle<v8::internal::Object>, unsigned long) */

void v8::internal::Execution::CallWasm
               (Isolate *param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
               undefined8 param_5)

{
  RuntimeCallStats *pRVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  RuntimeCallStats *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  SaveContext aSStack_78 [24];
  
  local_b0 = (RuntimeCallStats *)*param_2;
  if (*(int *)(local_b0 + 0x17) < 0) {
    pRVar1 = (RuntimeCallStats *)Code::OffHeapInstructionStart((Code *)&local_b0);
  }
  else {
    pRVar1 = local_b0 + 0x3f;
  }
  SaveContext::SaveContext(aSStack_78,param_1);
  lVar5 = *(long *)(param_1 + 0x2c50);
  uVar4 = *(undefined8 *)(param_1 + 0x2c28);
  if (lVar5 == 0) {
    uVar2 = GetCurrentStackPosition();
    *(undefined8 *)(param_1 + 0x2c50) = uVar2;
  }
  local_88 = *(undefined8 *)(param_1 + 0x2c30);
  uStack_80 = 0;
  *(undefined8 **)(param_1 + 0x2c30) = &local_88;
  if (trap_handler::g_is_trap_handler_enabled != '\0') {
    trap_handler::g_thread_in_wasm_code = 1;
  }
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = (RuntimeCallStats *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_b0 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_b0,(ulong)&local_b0 | 8,0x97);
  }
  lVar3 = (*(code *)pRVar1)(param_3,*param_4,param_5,uVar4);
  if (lVar3 != 0) {
    *(long *)(param_1 + 0x2bd8) = lVar3;
  }
  if (local_b0 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_b0,(RuntimeCallTimer *)((ulong)&local_b0 | 8));
  }
  if ((trap_handler::g_thread_in_wasm_code != 0) &&
     (trap_handler::g_is_trap_handler_enabled != '\0')) {
    trap_handler::g_thread_in_wasm_code = 0;
  }
  *(undefined8 *)(param_1 + 0x2c30) = local_88;
  if (lVar5 == 0) {
    *(undefined8 *)(param_1 + 0x2c50) = 0;
  }
  *(undefined8 *)(param_1 + 0x2c28) = uVar4;
  SaveContext::~SaveContext(aSStack_78);
  return;
}

