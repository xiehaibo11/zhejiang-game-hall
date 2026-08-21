
/* spine::HasRendererObject::~HasRendererObject() */

void __thiscall spine::HasRendererObject::~HasRendererObject(HasRendererObject *this)

{
  *(undefined ***)this = &PTR__HasRendererObject_01c8e4f0;
  if ((*(code **)(this + 0x10) != (code *)0x0) && (*(long *)(this + 8) != 0)) {
    (**(code **)(this + 0x10))();
  }
  operator_delete(this);
  return;
}

