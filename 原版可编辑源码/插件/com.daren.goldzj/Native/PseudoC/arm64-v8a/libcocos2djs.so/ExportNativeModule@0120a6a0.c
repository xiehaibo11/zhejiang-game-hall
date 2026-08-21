
/* v8::internal::wasm::WasmEngine::ExportNativeModule(v8::internal::Handle<v8::internal::WasmModuleObject>)
    */

void v8::internal::wasm::WasmEngine::ExportNativeModule
               (undefined8 *param_1,undefined8 param_2,ulong *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)
            (*(long *)((*param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 0xb)) + 3) +
            0x18);
  lVar2 = puVar5[1];
  *param_1 = *puVar5;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}

