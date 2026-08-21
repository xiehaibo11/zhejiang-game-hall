
/* v8::internal::DeoptimizerData::set_deopt_entry_code(v8::internal::DeoptimizeKind,
   v8::internal::Code) */

void __thiscall
v8::internal::DeoptimizerData::set_deopt_entry_code
          (DeoptimizerData *this,byte param_2,undefined8 param_3)

{
  *(undefined8 *)(this + (ulong)param_2 * 8 + 8) = param_3;
  return;
}

