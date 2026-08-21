
/* v8::internal::AsmJsCompilationJob::FinalizeJobImpl(v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Isolate*) */

undefined8 __thiscall
v8::internal::AsmJsCompilationJob::FinalizeJobImpl
          (AsmJsCompilationJob *this,long *param_2,Factory *param_3)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  Factory *this_00;
  undefined8 uVar8;
  Factory *local_130;
  char *pcStack_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  MessageLocation aMStack_100 [32];
  undefined1 *local_e0;
  long lStack_d8;
  undefined1 *local_d0;
  long local_c8;
  undefined1 auStack_c0 [104];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar4 = base::TimeTicks::HighResolutionNow();
  uVar8 = *(undefined8 *)(this + 0xf8);
  plVar5 = (long *)Factory::NewHeapNumber<(v8::internal::AllocationType)0>(param_3);
  *(undefined8 *)(*plVar5 + 3) = uVar8;
  pcStack_128 = "AsmJs::Compile";
  local_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_d0 = *(undefined1 **)(*(long *)(this + 0xe8) + 8);
  local_c8 = (long)(*(int *)(*(long *)(this + 0xe8) + 0x10) - (int)local_d0);
  lVar6 = *(long *)(*(long *)(this + 0xf0) + 8);
  local_130 = param_3;
  lVar6 = wasm::WasmEngine::SyncCompileTranslatedAsmJs
                    (*(undefined8 *)(param_3 + 0xc770),param_3,&local_130,&local_d0,lVar6,
                     *(long *)(*(long *)(this + 0xf0) + 0x10) - lVar6,plVar5,
                     *(uint *)(*param_2 + 0x1b) >> 6 & 1);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  lVar7 = base::TimeTicks::HighResolutionNow();
  local_d0 = (undefined1 *)(lVar7 - lVar4);
  uVar8 = base::TimeDelta::InMillisecondsF((TimeDelta *)&local_d0);
  *(undefined8 *)(this + 0x108) = uVar8;
  *(long *)(*(long *)(this + 0x28) + 0x30) = lVar6;
  iVar3 = (int)*(undefined8 *)(param_3 + 0x9520);
  Histogram::AddSample(iVar3 + 0xba0);
  Histogram::AddSample(iVar3 + 0x5f8);
  Histogram::AddSample(iVar3 + 0x648);
  Histogram::AddSample(iVar3 + 0x670);
  if ((FLAG_suppress_asm_messages == '\0') && (FLAG_trace_asm_time != '\0')) {
    lVar6 = *(long *)(*(long *)(this + 0x20) + 0x50);
    uVar1 = **(undefined4 **)(*(long *)(this + 0x28) + 0x10);
    local_d0 = auStack_c0;
    local_c8 = 100;
    iVar3 = SNPrintF(*(undefined8 *)(this + 0x100),*(undefined8 *)(this + 0x108),local_d0,100,
                     "success, asm->wasm: %0.3f ms, compile: %0.3f ms, %zu bytes",
                     *(long *)(*(long *)(this + 0xe8) + 0x10) -
                     *(long *)(*(long *)(this + 0xe8) + 8));
    if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","-1 != length");
    }
    lStack_d8 = (long)iVar3;
    local_e0 = local_d0;
    this_00 = (Factory *)((ulong)*(uint *)(lVar6 + 4) << 0x20);
    local_c8 = lStack_d8;
    MessageLocation::MessageLocation(aMStack_100,lVar6,uVar1,uVar1);
    uVar8 = Factory::InternalizeUtf8String(this_00,(Vector *)&local_e0);
    plVar5 = (long *)MessageHandler::MakeMessageObject(this_00,0x165,aMStack_100,uVar8,0);
    *(undefined4 *)(*plVar5 + 0x2b) = 8;
    MessageHandler::ReportMessage(this_00,aMStack_100,plVar5);
  }
  wasm::ErrorThrower::~ErrorThrower((ErrorThrower *)&local_130);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

