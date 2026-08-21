
/* v8::internal::WasmInstanceObject::GetWasmExternalFunction(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmInstanceObject>, int) */

ulong * v8::internal::WasmInstanceObject::GetWasmExternalFunction
                  (Isolate *param_1,ulong *param_2,int param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar3 = *param_2 & 0xffffffff00000000;
  uVar1 = *(uint *)(*param_2 + 0x9f);
  if (uVar1 != *(uint *)(uVar3 + 0xa0)) {
    uVar1 = *(uint *)((uVar3 | uVar1) + (long)(param_3 << 2) + 7);
    if (((uVar1 & 1) == 0) || (uVar1 != *(uint *)(param_1 + 0xa0))) {
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) != (CanonicalHandleScope *)0x0) {
        puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3 | uVar1);
        return puVar2;
      }
      puVar2 = *(ulong **)(param_1 + 0x95a0);
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar3 | uVar1;
      return puVar2;
    }
  }
  return (ulong *)0x0;
}

