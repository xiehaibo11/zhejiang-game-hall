
/* dragonBones::Armature::~Armature() */

void __thiscall dragonBones::Armature::~Armature(Armature *this)

{
  void *pvVar1;
  long *in_x1;
  long lVar2;
  
  lVar2 = *in_x1;
  *(long *)this = lVar2;
  *(long *)(this + *(long *)(lVar2 + -0x18)) = in_x1[1];
  (**(code **)(*(long *)this + 0x10))();
  pvVar1 = *(void **)(this + 0x90);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x98) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x78);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x80) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x60);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x68) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x40);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar1;
    operator_delete(pvVar1);
  }
  BaseObject::~BaseObject((BaseObject *)this);
  return;
}

