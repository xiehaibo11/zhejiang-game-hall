
/* v8::internal::WasmInstanceObject::IndirectFunctionTableSize(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmInstanceObject>, unsigned int) */

undefined4
v8::internal::WasmInstanceObject::IndirectFunctionTableSize
          (Isolate *param_1,ulong *param_2,int param_3)

{
  ulong *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  
  uVar2 = *param_2;
  if (param_3 == 0) {
    puVar3 = (undefined4 *)(uVar2 + 0x4b);
  }
  else {
    uVar2 = uVar2 & 0xffffffff00000000 |
            (ulong)*(uint *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0x93)) +
                             (long)(param_3 << 2) + 7);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(param_1 + 0x95a0);
      if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar2;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar2);
      uVar2 = *puVar1;
    }
    puVar3 = (undefined4 *)(uVar2 + 3);
  }
  return *puVar3;
}

