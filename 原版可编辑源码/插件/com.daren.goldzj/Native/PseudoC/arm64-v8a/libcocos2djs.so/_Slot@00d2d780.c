
/* dragonBones::Slot::~Slot() */

void __thiscall dragonBones::Slot::~Slot(Slot *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x140);
  *(undefined ***)this = &PTR__Slot_01c90888;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x148) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x128);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x130) = pvVar1;
    operator_delete(pvVar1);
  }
  if (((byte)this[0x78] & 1) != 0) {
    operator_delete(*(void **)(this + 0x88));
  }
  BaseObject::~BaseObject((BaseObject *)this);
  return;
}

