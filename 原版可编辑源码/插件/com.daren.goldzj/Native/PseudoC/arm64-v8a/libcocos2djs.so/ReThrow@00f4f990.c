
/* v8::internal::Isolate::ReThrow(v8::internal::Object) */

undefined8 __thiscall v8::internal::Isolate::ReThrow(Isolate *this,undefined8 param_2)

{
  *(undefined8 *)(this + 0x2bd8) = param_2;
  return *(undefined8 *)(this + 0x180);
}

