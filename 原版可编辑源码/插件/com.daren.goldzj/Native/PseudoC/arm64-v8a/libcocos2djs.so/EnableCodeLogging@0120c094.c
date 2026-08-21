
/* v8::internal::wasm::WasmEngine::EnableCodeLogging(v8::internal::Isolate*) */

void __thiscall v8::internal::wasm::WasmEngine::EnableCodeLogging(WasmEngine *this,Isolate *param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  
  base::Mutex::Lock((Mutex *)(this + 0x100));
  uVar1 = *(ulong *)(this + 0x168);
  uVar4 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
  uVar4 = (uVar4 ^ (ulong)param_1 >> 0x20 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
  uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
  if ((uVar1 & uVar1 - 1) == 0) {
    uVar3 = uVar1 - 1 & uVar4;
  }
  else {
    uVar3 = uVar4;
    if (uVar1 <= uVar4) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar4 / uVar1;
      }
      uVar3 = uVar4 - uVar3 * uVar1;
    }
  }
  plVar2 = *(long **)(*(long *)(this + 0x160) + uVar3 * 8);
  do {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2[1] != uVar4);
  } while ((Isolate *)plVar2[2] != param_1);
  *(undefined1 *)(plVar2[3] + 0x18) = 1;
  base::Mutex::Unlock((Mutex *)(this + 0x100));
  return;
}

