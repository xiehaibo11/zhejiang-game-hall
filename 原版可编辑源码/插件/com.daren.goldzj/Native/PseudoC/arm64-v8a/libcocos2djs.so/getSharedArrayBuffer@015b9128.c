
/* v8::internal::getSharedArrayBuffer(v8::internal::Handle<v8::internal::WasmInstanceObject>,
   v8::internal::Isolate*, unsigned int) */

void v8::internal::getSharedArrayBuffer(ulong *param_1,Isolate *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = *param_1 & 0xffffffff00000000;
  uVar2 = uVar2 | *(uint *)((uVar2 | *(uint *)(*param_1 + 0x7b)) + 0xb);
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_2 + 0x95a0);
    if (puVar1 == *(ulong **)(param_2 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(param_2);
    }
    *(ulong **)(param_2 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar2;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar2);
  }
  return;
}

