
/* v8::internal::Relocatable::~Relocatable() */

void __thiscall v8::internal::Relocatable::~Relocatable(Relocatable *this)

{
  *(undefined ***)this = &PTR__Relocatable_01cacc40;
  *(undefined8 *)(*(long *)(this + 8) + 0xb790) = *(undefined8 *)(this + 0x10);
  operator_delete(this);
  return;
}

