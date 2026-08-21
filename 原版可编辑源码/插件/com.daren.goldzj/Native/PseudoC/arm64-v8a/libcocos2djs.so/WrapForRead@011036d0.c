
/* v8::internal::Object::WrapForRead(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Representation) */

long * v8::internal::Object::WrapForRead(Factory *param_1,long *param_2,char param_3)

{
  undefined8 uVar1;
  
  if (param_3 == '\x02') {
    uVar1 = *(undefined8 *)(*param_2 + 3);
    param_2 = (long *)Factory::NewHeapNumber<(v8::internal::AllocationType)0>(param_1);
    *(undefined8 *)(*param_2 + 3) = uVar1;
  }
  return param_2;
}

