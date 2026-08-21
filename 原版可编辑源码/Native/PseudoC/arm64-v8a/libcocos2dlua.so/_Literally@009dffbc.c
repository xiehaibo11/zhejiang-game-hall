
/* universe::Literally::~Literally() */

void __thiscall universe::Literally::~Literally(Literally *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 8);
  *(undefined ***)this = &PTR__Literally_016a0200;
  *(undefined8 *)(this + 8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  operator_delete(this);
  return;
}

