
/* v8::internal::FunctionLiteral::name(v8::internal::Isolate*) const */

Isolate * __thiscall v8::internal::FunctionLiteral::name(FunctionLiteral *this,Isolate *param_1)

{
  if (*(undefined8 **)(this + 0x20) != (undefined8 *)0x0) {
    return (Isolate *)**(undefined8 **)(this + 0x20);
  }
  return param_1 + 200;
}

