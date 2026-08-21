
/* v8::internal::Protectors::InvalidateSetIteratorLookupChain(v8::internal::Isolate*) */

void v8::internal::Protectors::InvalidateSetIteratorLookupChain(Isolate *param_1)

{
  undefined8 *puVar1;
  
  if (FLAG_trace_protector_invalidation != '\0') {
    FUN_00f60ca4("SetIteratorLookupChain");
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x95a0);
    if (puVar1 == *(undefined8 **)(param_1 + 0x95a8)) {
      puVar1 = (undefined8 *)HandleScope::Extend(param_1);
    }
    *(undefined8 **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = 0;
  }
  else {
    puVar1 = (undefined8 *)
             CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),0);
  }
  PropertyCell::SetValueWithInvalidation(param_1,"set_iterator_protector",param_1 + 0xf08,puVar1);
  return;
}

