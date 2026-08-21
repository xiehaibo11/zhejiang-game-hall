
/* v8::internal::JSObject::ObjectCreate(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

void v8::internal::JSObject::ObjectCreate(Factory *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)Map::GetObjectCreateMap();
  if ((*(uint *)(*plVar1 + 0xb) >> 0x15 & 1) == 0) {
    Factory::NewJSObjectFromMap(param_1,plVar1,0,0);
    return;
  }
  Factory::NewSlowJSObjectFromMap(param_1,plVar1,2,0,0);
  return;
}

