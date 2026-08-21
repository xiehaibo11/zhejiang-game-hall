
void FUN_01245438(long *param_1)

{
  long lVar1;
  void *__dest;
  ulong uVar2;
  undefined8 uVar3;
  Isolate *pIVar4;
  Isolate *pIVar5;
  long lVar6;
  undefined1 auVar7 [16];
  void *local_a8;
  long lStack_a0;
  ModuleWireBytes local_98 [8];
  int local_90;
  Isolate *local_88;
  char *pcStack_80;
  int local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  HandleScope aHStack_58 [24];
  undefined4 local_28;
  char local_24 [4];
  
  pIVar5 = *(Isolate **)(*param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_58,pIVar5);
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  pcStack_80 = "WebAssembly.validate()";
  local_24[0] = '\0';
  local_88 = pIVar5;
  auVar7 = FUN_012493d4(param_1,&local_88,local_24);
  lVar6 = *param_1;
  _local_98 = auVar7;
  if (local_78 == 0) {
    local_28 = v8::internal::wasm::WasmFeatures::FromIsolate((Isolate *)pIVar5);
    if (local_24[0] == '\0') {
      uVar2 = v8::internal::wasm::WasmEngine::SyncValidate
                        (*(WasmEngine **)(pIVar5 + 0xc770),(Isolate *)pIVar5,
                         (WasmFeatures *)&local_28,local_98);
    }
    else {
      __dest = operator_new__((long)auVar7._8_4_);
      memcpy(__dest,auVar7._0_8_,(long)auVar7._8_4_);
      lStack_a0 = (long)local_90;
      local_a8 = __dest;
      uVar2 = v8::internal::wasm::WasmEngine::SyncValidate
                        (*(WasmEngine **)(pIVar5 + 0xc770),(Isolate *)pIVar5,
                         (WasmFeatures *)&local_28,(ModuleWireBytes *)&local_a8);
      operator_delete__(__dest);
    }
    lVar1 = 0xb8;
    if ((uVar2 & 1) == 0) {
      lVar1 = 0xc0;
    }
    pIVar4 = (Isolate *)(lVar6 + 0x10);
    if (pIVar5 + lVar1 != (Isolate *)0x0) {
      pIVar4 = pIVar5 + lVar1;
    }
  }
  else {
    if (2 < local_78) {
      v8::internal::wasm::ErrorThrower::Reset((ErrorThrower *)&local_88);
    }
    pIVar4 = pIVar5 + 0xc0;
    if (pIVar5 + 0xc0 == (Isolate *)0x0) {
      uVar3 = *(undefined8 *)(lVar6 + 0x10);
      goto LAB_01245568;
    }
  }
  uVar3 = *(undefined8 *)pIVar4;
LAB_01245568:
  *(undefined8 *)(lVar6 + 0x18) = uVar3;
  FUN_01249590(&local_88);
  v8::HandleScope::~HandleScope(aHStack_58);
  return;
}

