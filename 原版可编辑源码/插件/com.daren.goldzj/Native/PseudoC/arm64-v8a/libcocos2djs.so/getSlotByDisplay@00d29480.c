
/* dragonBones::Armature::getSlotByDisplay(void*) const */

long __thiscall dragonBones::Armature::getSlotByDisplay(Armature *this,void *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  plVar1 = *(long **)(this + 0x78);
  if (*(long **)(this + 0x78) != *(long **)(this + 0x80)) {
    do {
      plVar2 = plVar1 + 1;
      if (*(void **)(*plVar1 + 0x170) == param_1) {
        return *plVar1;
      }
      plVar1 = plVar2;
    } while (*(long **)(this + 0x80) != plVar2);
    return 0;
  }
  return 0;
}

