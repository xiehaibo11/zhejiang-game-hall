
/* v8::internal::wasm::WasmModuleSourceMap::HasValidEntry(unsigned long, unsigned long) const */

bool __thiscall
v8::internal::wasm::WasmModuleSourceMap::HasValidEntry
          (WasmModuleSourceMap *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar2 = *(ulong **)this;
  if (*(long *)(this + 8) - (long)puVar2 != 0) {
    uVar4 = *(long *)(this + 8) - (long)puVar2 >> 3;
    puVar3 = puVar2;
    do {
      uVar5 = uVar4 >> 1;
      uVar1 = uVar4 + ~uVar5;
      uVar4 = uVar5;
      if (puVar3[uVar5] <= param_2) {
        puVar3 = puVar3 + uVar5 + 1;
        uVar4 = uVar1;
      }
    } while (uVar4 != 0);
    if (puVar3 != puVar2) {
      return param_1 <= puVar3[-1];
    }
  }
  return false;
}

