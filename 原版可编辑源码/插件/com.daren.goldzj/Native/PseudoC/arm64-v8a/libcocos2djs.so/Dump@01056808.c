
/* v8::internal::RuntimeCallCounter::Dump(v8::tracing::TracedValue*) */

void __thiscall
v8::internal::RuntimeCallCounter::Dump(RuntimeCallCounter *this,TracedValue *param_1)

{
  v8::tracing::TracedValue::BeginArray(param_1,*(char **)this);
  v8::tracing::TracedValue::AppendDouble(param_1,(double)*(long *)(this + 8));
  v8::tracing::TracedValue::AppendDouble(param_1,(double)*(long *)(this + 0x10));
  v8::tracing::TracedValue::EndArray(param_1);
  return;
}

