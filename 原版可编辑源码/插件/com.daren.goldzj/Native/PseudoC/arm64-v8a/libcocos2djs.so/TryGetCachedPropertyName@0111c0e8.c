
/* v8::internal::FunctionTemplateInfo::TryGetCachedPropertyName(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

ulong * v8::internal::FunctionTemplateInfo::TryGetCachedPropertyName
                  (Isolate *param_1,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar3 = *param_2;
  if (((uVar3 & 1) != 0) &&
     (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x4e)) {
    uVar1 = *(uint *)(uVar3 + 0x33);
    if (((uVar1 & 1) == 0) || (uVar1 != *(uint *)(param_1 + 0xa8))) {
      uVar3 = uVar3 & 0xffffffff00000000 | (ulong)uVar1;
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) != (CanonicalHandleScope *)0x0) {
        puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
        return puVar2;
      }
      puVar2 = *(ulong **)(param_1 + 0x95a0);
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar3;
      return puVar2;
    }
  }
  return (ulong *)0x0;
}

