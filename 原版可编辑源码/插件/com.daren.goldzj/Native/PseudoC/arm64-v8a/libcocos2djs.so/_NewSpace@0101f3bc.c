
/* v8::internal::NewSpace::~NewSpace() */

void __thiscall v8::internal::NewSpace::~NewSpace(NewSpace *this)

{
  long *plVar1;
  void *pvVar2;
  
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined ***)this = &PTR__NewSpace_01ca95e8;
  SemiSpace::TearDown((SemiSpace *)(this + 0xd0));
  SemiSpace::TearDown((SemiSpace *)(this + 0x170));
  VirtualMemory::~VirtualMemory((VirtualMemory *)(this + 0x210));
  *(undefined ***)(this + 0x170) = &PTR__Space_01ca9d00;
  if (*(void **)(this + 0x1a0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x1a0));
  }
  plVar1 = *(long **)(this + 0x1d0);
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pvVar2 = *(void **)(this + 0x178);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x180) = pvVar2;
    operator_delete(pvVar2);
  }
  *(undefined ***)(this + 0xd0) = &PTR__Space_01ca9d00;
  if (*(void **)(this + 0x100) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x100));
  }
  plVar1 = *(long **)(this + 0x130);
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pvVar2 = *(void **)(this + 0xd8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xe0) = pvVar2;
    operator_delete(pvVar2);
  }
  base::Mutex::~Mutex((Mutex *)(this + 0x98));
  *(undefined ***)this = &PTR__Space_01ca9d00;
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
  }
  plVar1 = *(long **)(this + 0x60);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pvVar2 = *(void **)(this + 8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar2;
    operator_delete(pvVar2);
    return;
  }
  return;
}

