
/* v8::internal::StringTableInsertionKey::AsHandle(v8::internal::Isolate*) */

void __thiscall
v8::internal::StringTableInsertionKey::AsHandle(StringTableInsertionKey *this,Isolate *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 0x10);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_1 + 0x95a0);
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar2;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar2);
  }
  return;
}

