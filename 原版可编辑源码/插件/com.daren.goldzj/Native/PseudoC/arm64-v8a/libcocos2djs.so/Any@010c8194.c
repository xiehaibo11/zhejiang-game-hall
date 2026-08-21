
/* v8::internal::FieldType::Any(v8::internal::Isolate*) */

void v8::internal::FieldType::Any(Isolate *param_1)

{
  undefined8 *puVar1;
  
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x95a0);
    if (puVar1 == *(undefined8 **)(param_1 + 0x95a8)) {
      puVar1 = (undefined8 *)HandleScope::Extend(param_1);
    }
    *(undefined8 **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = 2;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),2);
  }
  return;
}

