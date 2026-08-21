
/* v8::internal::wasm::WasmCode::ShouldBeLogged(v8::internal::Isolate*) */

bool v8::internal::wasm::WasmCode::ShouldBeLogged(Isolate *param_1)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x9558) + 0x88))();
  if ((uVar2 & 1) == 0) {
    for (plVar3 = *(long **)(*(long *)(param_1 + 0xb6d8) + 0x10); plVar3 != (long *)0x0;
        plVar3 = (long *)*plVar3) {
      uVar2 = (**(code **)(*(long *)plVar3[2] + 0x88))();
      if ((uVar2 & 1) != 0) goto LAB_011fe574;
    }
    bVar1 = param_1[0xb7fc] != (Isolate)0x0;
  }
  else {
LAB_011fe574:
    bVar1 = true;
  }
  return bVar1;
}

