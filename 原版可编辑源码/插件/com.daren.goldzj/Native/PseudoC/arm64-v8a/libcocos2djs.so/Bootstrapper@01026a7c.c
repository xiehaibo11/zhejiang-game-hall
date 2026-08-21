
/* v8::internal::Bootstrapper::Bootstrapper(v8::internal::Isolate*) */

void __thiscall v8::internal::Bootstrapper::Bootstrapper(Bootstrapper *this,Isolate *param_1)

{
  *(Isolate **)this = param_1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 1;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}

