
/* v8::Function::NewInstance(v8::Local<v8::Context>, int, v8::Local<v8::Value>*) const */

void v8::Function::NewInstance(void)

{
  NewInstanceWithSideEffectType();
  return;
}

