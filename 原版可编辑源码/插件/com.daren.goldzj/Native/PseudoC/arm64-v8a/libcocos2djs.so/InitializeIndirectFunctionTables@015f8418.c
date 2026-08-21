
/* v8::internal::wasm::InstanceBuilder::InitializeIndirectFunctionTables(v8::internal::Handle<v8::internal::WasmInstanceObject>)
    */

void __thiscall
v8::internal::wasm::InstanceBuilder::InitializeIndirectFunctionTables
          (InstanceBuilder *this,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x10);
  if (0 < (int)((ulong)(*(long *)(lVar1 + 0xc0) - *(long *)(lVar1 + 0xb8)) >> 4)) {
    lVar3 = 0;
    uVar2 = 0;
    do {
      if (*(char *)(*(long *)(lVar1 + 0xb8) + lVar3) == '\a') {
        WasmInstanceObject::EnsureIndirectFunctionTableWithMinimumSize
                  (param_2,uVar2 & 0xffffffff,*(undefined4 *)(*(long *)(lVar1 + 0xb8) + lVar3 + 4));
        lVar1 = *(long *)(this + 0x10);
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while ((long)uVar2 <
             (long)(int)((ulong)(*(long *)(lVar1 + 0xc0) - *(long *)(lVar1 + 0xb8)) >> 4));
  }
  return;
}

