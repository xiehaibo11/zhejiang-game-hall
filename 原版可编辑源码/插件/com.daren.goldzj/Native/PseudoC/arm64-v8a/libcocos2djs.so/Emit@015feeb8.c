
/* v8::internal::wasm::WasmFunctionBuilder::Emit(v8::internal::wasm::WasmOpcode) */

void __thiscall
v8::internal::wasm::WasmFunctionBuilder::Emit(WasmFunctionBuilder *this,undefined1 param_2)

{
  ulong uVar1;
  Zone *this_00;
  void *__dest;
  ulong uVar2;
  undefined1 *puVar3;
  
  puVar3 = *(undefined1 **)(this + 0x50);
  if (*(undefined1 **)(this + 0x58) < puVar3 + 1) {
    this_00 = *(Zone **)(this + 0x40);
    __dest = *(void **)(this_00 + 0x10);
    uVar1 = ((long)*(undefined1 **)(this + 0x58) - *(long *)(this + 0x48)) * 2 | 1;
    uVar2 = uVar1 + 7 & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)__dest) < uVar2) {
      __dest = (void *)Zone::NewExpand(this_00,uVar2);
    }
    else {
      *(ulong *)(this_00 + 0x10) = uVar2 + (long)__dest;
    }
    memcpy(__dest,*(void **)(this + 0x48),*(long *)(this + 0x50) - (long)*(void **)(this + 0x48));
    *(ulong *)(this + 0x58) = (long)__dest + uVar1;
    puVar3 = (undefined1 *)((long)__dest + (*(long *)(this + 0x50) - *(long *)(this + 0x48)));
    *(void **)(this + 0x48) = __dest;
    *(undefined1 **)(this + 0x50) = puVar3;
  }
  *(undefined1 **)(this + 0x50) = puVar3 + 1;
  *puVar3 = param_2;
  return;
}

