
/* v8::internal::Map::TransitionToImmutableProto(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>) */

void v8::internal::Map::TransitionToImmutableProto(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)Copy(param_1,param_2,"ImmutablePrototype");
  *(byte *)(*plVar1 + 10) = *(byte *)(*plVar1 + 10) | 2;
  return;
}

