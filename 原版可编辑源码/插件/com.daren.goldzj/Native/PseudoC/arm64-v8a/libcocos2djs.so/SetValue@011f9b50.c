
/* v8::tracing::TracedValue::SetValue(char const*, v8::tracing::TracedValue*) */

void __thiscall
v8::tracing::TracedValue::SetValue(TracedValue *this,char *param_1,TracedValue *param_2)

{
  ulong local_38 [2];
  void *local_28;
  
  WriteName(this,param_1);
  local_38[1] = 0;
  local_28 = (void *)0x0;
  local_38[0] = 0;
  (**(code **)(*(long *)param_2 + 0x10))(param_2,local_38);
  FUN_011f9614(this + 8,local_38);
  if ((local_38[0] & 1) != 0) {
    operator_delete(local_28);
  }
  return;
}

