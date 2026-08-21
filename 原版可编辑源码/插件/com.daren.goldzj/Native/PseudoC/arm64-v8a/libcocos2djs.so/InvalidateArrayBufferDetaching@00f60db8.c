
/* v8::internal::Protectors::InvalidateArrayBufferDetaching(v8::internal::Isolate*) */

void v8::internal::Protectors::InvalidateArrayBufferDetaching(Isolate *param_1)

{
  undefined8 *puVar1;
  
  if (FLAG_trace_protector_invalidation != '\0') {
    FUN_00f60ca4("ArrayBufferDetaching");
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
  PropertyCell::SetValueWithInvalidation
            (param_1,"array_buffer_detaching_protector",param_1 + 0xee0,puVar1);
  return;
}

