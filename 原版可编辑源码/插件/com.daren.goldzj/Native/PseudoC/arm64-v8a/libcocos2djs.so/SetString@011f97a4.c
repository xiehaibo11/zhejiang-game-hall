
/* v8::tracing::TracedValue::SetString(char const*, char const*) */

void __thiscall v8::tracing::TracedValue::SetString(TracedValue *this,char *param_1,char *param_2)

{
  WriteName(this,param_1);
  FUN_011f97d0(param_2,this + 8);
  return;
}

