
/* v8::internal::wasm::WasmModuleSourceMap::GetSourceLine(unsigned long) const */

undefined8 __thiscall
v8::internal::wasm::WasmModuleSourceMap::GetSourceLine(WasmModuleSourceMap *this,ulong param_1)

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
      if (puVar3[uVar5] <= param_1) {
        puVar3 = puVar3 + uVar5 + 1;
        uVar4 = uVar1;
      }
    } while (uVar4 != 0);
    if ((long)puVar3 - (long)puVar2 != 0) {
      return *(undefined8 *)(((long)puVar3 - (long)puVar2) + *(long *)(this + 0x48) + -8);
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","offsets.begin() != up");
}

