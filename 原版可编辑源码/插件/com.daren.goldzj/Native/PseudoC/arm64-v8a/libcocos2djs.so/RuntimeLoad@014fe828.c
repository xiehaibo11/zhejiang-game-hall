
/* v8::internal::KeyedLoadIC::RuntimeLoad(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>) */

void v8::internal::KeyedLoadIC::RuntimeLoad(long param_1)

{
  if (*(int *)(param_1 + 0x1c) == 8) {
    Runtime::GetObjectProperty();
    return;
  }
  Runtime::HasProperty(*(undefined8 *)(param_1 + 8));
  return;
}

