
/* v8::internal::wasm::LoadElemSegment(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmInstanceObject>, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int) */

void v8::internal::wasm::LoadElemSegment
               (Isolate *param_1,ulong *param_2,int param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = *param_2 & 0xffffffff00000000;
  uVar2 = uVar2 | *(uint *)((uVar2 | *(uint *)(*param_2 + 0x8f)) + (long)(param_3 << 2) + 7);
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
  }
  LoadElemSegmentImpl(param_1,param_2,puVar1,param_3,param_4,param_5,param_6,param_7);
  return;
}

