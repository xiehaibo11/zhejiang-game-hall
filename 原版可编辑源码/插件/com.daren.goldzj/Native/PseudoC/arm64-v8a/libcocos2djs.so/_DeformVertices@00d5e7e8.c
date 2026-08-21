
/* dragonBones::DeformVertices::~DeformVertices() */

void __thiscall dragonBones::DeformVertices::~DeformVertices(DeformVertices *this)

{
  void *pvVar1;
  void *pvVar2;
  
  this[0xd] = (DeformVertices)0x0;
  pvVar1 = *(void **)(this + 0x10);
  pvVar2 = *(void **)(this + 0x28);
  *(undefined ***)this = &PTR__DeformVertices_01c91f80;
  *(void **)(this + 0x18) = pvVar1;
  *(void **)(this + 0x30) = pvVar2;
  *(undefined8 *)(this + 0x40) = 0;
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar2;
    operator_delete(pvVar2);
    pvVar1 = *(void **)(this + 0x10);
  }
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar1;
    operator_delete(pvVar1);
  }
  BaseObject::~BaseObject((BaseObject *)this);
  operator_delete(this);
  return;
}

