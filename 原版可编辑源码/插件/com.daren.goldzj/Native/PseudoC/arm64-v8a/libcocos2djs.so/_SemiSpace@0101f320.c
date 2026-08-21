
/* v8::internal::SemiSpace::~SemiSpace() */

void __thiscall v8::internal::SemiSpace::~SemiSpace(SemiSpace *this)

{
  long *plVar1;
  void *pvVar2;
  void *in_x1;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  
  *(undefined ***)this = &PTR__Space_01ca9d00;
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
    in_x1 = extraout_x1;
  }
  plVar1 = *(long **)(this + 0x60);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
    in_x1 = extraout_x1_00;
  }
  pvVar2 = *(void **)(this + 8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar2;
    operator_delete(pvVar2);
    in_x1 = extraout_x1_01;
  }
  Malloced::operator_delete((Malloced *)this,in_x1);
  return;
}

