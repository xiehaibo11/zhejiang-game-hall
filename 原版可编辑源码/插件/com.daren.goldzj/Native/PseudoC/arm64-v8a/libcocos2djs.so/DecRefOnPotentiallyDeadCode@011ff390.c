
/* v8::internal::wasm::WasmCode::DecRefOnPotentiallyDeadCode() */

bool __thiscall v8::internal::wasm::WasmCode::DecRefOnPotentiallyDeadCode(WasmCode *this)

{
  WasmCode *pWVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  
  uVar5 = WasmEngine::AddPotentiallyDeadCode(*(WasmEngine **)(*(long *)(this + 0x30) + 0x178),this);
  if ((uVar5 & 1) == 0) {
    pWVar1 = this + 0x8c;
    do {
      bVar4 = *(int *)pWVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pWVar1,0x10);
      if (bVar3) {
        *(int *)pWVar1 = *(int *)pWVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

