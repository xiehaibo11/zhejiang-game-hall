
void FUN_01248fa0(long *param_1)

{
  long lVar1;
  ulong uVar2;
  Signature *pSVar3;
  undefined8 uVar4;
  Isolate *pIVar5;
  undefined8 *puVar6;
  undefined8 local_c8;
  Isolate *local_c0;
  char *pcStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  Zone aZStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pIVar5 = *(Isolate **)(*param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,(Isolate *)pIVar5);
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  pcStack_b8 = "WebAssembly.Function.type()";
  local_c0 = pIVar5;
  v8::internal::Zone::Zone
            (aZStack_78,*(AccountingAllocator **)(pIVar5 + 0x95d0),"../../src/wasm/wasm-js.cc:1502")
  ;
  if ((int)param_1[2] < 1) {
    puVar6 = (undefined8 *)(*(long *)(*param_1 + 8) + 0xa0);
  }
  else {
    puVar6 = (undefined8 *)param_1[1];
  }
  uVar2 = v8::internal::WasmExportedFunction::IsWasmExportedFunction(*puVar6);
  if ((uVar2 & 1) == 0) {
    uVar2 = v8::internal::WasmJSFunction::IsWasmJSFunction(*puVar6);
    if ((uVar2 & 1) == 0) {
      v8::internal::wasm::ErrorThrower::TypeError
                ((char *)&local_c0,"Argument 0 must be a WebAssembly.Function");
      goto LAB_01249098;
    }
    local_c8 = *puVar6;
    pSVar3 = (Signature *)
             v8::internal::WasmJSFunction::GetSignature((WasmJSFunction *)&local_c8,aZStack_78);
  }
  else {
    local_c8 = *puVar6;
    pSVar3 = (Signature *)v8::internal::WasmExportedFunction::sig((WasmExportedFunction *)&local_c8)
    ;
  }
  puVar6 = (undefined8 *)v8::internal::wasm::GetTypeForFunction(pIVar5,pSVar3);
  if (puVar6 == (undefined8 *)0x0) {
    uVar4 = *(undefined8 *)(*param_1 + 0x10);
  }
  else {
    uVar4 = *puVar6;
  }
  *(undefined8 *)(*param_1 + 0x18) = uVar4;
LAB_01249098:
  v8::internal::Zone::~Zone(aZStack_78);
  FUN_01249590(&local_c0);
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

