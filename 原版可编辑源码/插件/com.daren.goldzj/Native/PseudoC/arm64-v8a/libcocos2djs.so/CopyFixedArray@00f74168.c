
/* v8::internal::Factory::CopyFixedArray(v8::internal::Handle<v8::internal::FixedArray>) */

ulong * __thiscall v8::internal::Factory::CopyFixedArray(Factory *this,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  if (1 < *(uint *)(uVar2 + 3)) {
    uVar2 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 - 1);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(this + 0x95a0);
      if (puVar1 == *(ulong **)(this + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)(this + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar2;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar2);
    }
    param_2 = (ulong *)CopyArrayWithMap<v8::internal::FixedArray>(this,param_2,puVar1);
  }
  return param_2;
}

