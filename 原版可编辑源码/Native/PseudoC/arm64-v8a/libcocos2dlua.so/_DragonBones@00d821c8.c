
/* dragonBones::DragonBones::~DragonBones() */

void __thiscall dragonBones::DragonBones::~DragonBones(DragonBones *this)

{
  long *plVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__DragonBones_016d6988;
  plVar1 = *(long **)(this + 0x38);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  pvVar2 = *(void **)(this + 0x20);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar2;
    operator_delete(pvVar2);
    return;
  }
                    /* try { // try from 00d82230 to 00e822bb has its CatchHandler @ 00d828dc */
  return;
}

