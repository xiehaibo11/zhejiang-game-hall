
/* v8::internal::compiler::NativeContextRef::GetInitialJSArrayMap(v8::internal::ElementsKind) const
    */

void __thiscall
v8::internal::compiler::NativeContextRef::GetInitialJSArrayMap
          (NativeContextRef *this,undefined1 param_2)

{
  switch(param_2) {
  case 0:
    js_array_packed_smi_elements_map(this);
    return;
  case 1:
    js_array_holey_smi_elements_map(this);
    return;
  case 2:
    js_array_packed_elements_map(this);
    return;
  case 3:
    js_array_holey_elements_map(this);
    return;
  case 4:
    js_array_packed_double_elements_map(this);
    return;
  case 5:
    js_array_holey_double_elements_map(this);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
}

