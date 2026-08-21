
/* v8::internal::FieldType::Class(v8::internal::Handle<v8::internal::Map>, v8::internal::Isolate*)
    */

void v8::internal::FieldType::Class(ulong *param_1,Isolate *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
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

