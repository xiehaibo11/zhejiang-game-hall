
/* v8::internal::Bootstrapper::Initialize(bool) */

void __thiscall v8::internal::Bootstrapper::Initialize(Bootstrapper *this,bool param_1)

{
  if (param_1) {
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(*(long *)this + 0x168);
    return;
  }
  *(undefined8 *)(this + 0x18) = 0;
  return;
}

