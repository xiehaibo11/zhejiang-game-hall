
/* v8::internal::Protectors::InvalidateRegExpSpeciesLookupChainProtector(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::NativeContext>) */

void v8::internal::Protectors::InvalidateRegExpSpeciesLookupChainProtector
               (Isolate *param_1,ulong *param_2)

{
  Isolate *pIVar1;
  ulong *puVar2;
  CanonicalHandleScope *this;
  undefined8 *puVar3;
  ulong uVar4;
  
  pIVar1 = param_1 + 0x95a0;
  if (FLAG_trace_protector_invalidation != '\0') {
    FUN_00f60ca4("RegExpSpeciesLookupChainProtector");
  }
  uVar4 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x2a7);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)pIVar1;
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar2 + 1;
    *puVar2 = uVar4;
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
  }
  if (this == (CanonicalHandleScope *)0x0) {
    puVar3 = *(undefined8 **)pIVar1;
    if (puVar3 == *(undefined8 **)(param_1 + 0x95a8)) {
      puVar3 = (undefined8 *)HandleScope::Extend(param_1);
    }
    *(undefined8 **)pIVar1 = puVar3 + 1;
    *puVar3 = 0;
  }
  else {
    puVar3 = (undefined8 *)CanonicalHandleScope::Lookup(this,0);
  }
  PropertyCell::SetValueWithInvalidation(param_1,"regexp_species_protector",puVar2,puVar3);
  return;
}

