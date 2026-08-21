
/* v8::internal::OldSpace::~OldSpace() */

void __thiscall v8::internal::OldSpace::~OldSpace(OldSpace *this)

{
  long *plVar1;
  void *pvVar2;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__PagedSpace_01ca9518;
  PagedSpace::TearDown((PagedSpace *)this);
  base::Mutex::~Mutex((Mutex *)(this + 0xc0));
  *(undefined ***)this = &PTR__Space_01ca9d00;
  pvVar3 = extraout_x1;
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
    pvVar3 = extraout_x1_00;
  }
  plVar1 = *(long **)(this + 0x60);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
    pvVar3 = extraout_x1_01;
  }
  pvVar2 = *(void **)(this + 8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar2;
    operator_delete(pvVar2);
    pvVar3 = extraout_x1_02;
  }
  Malloced::operator_delete((Malloced *)this,pvVar3);
  return;
}

