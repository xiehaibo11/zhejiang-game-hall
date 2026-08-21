
/* dragonBones::Armature::getBoneByDisplay(void*) const */

undefined8 __thiscall dragonBones::Armature::getBoneByDisplay(Armature *this,void *param_1)

{
  long *plVar1;
  long lVar3;
  long *plVar2;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  plVar1 = *(long **)(this + 0x78);
  if (*(long **)(this + 0x78) != *(long **)(this + 0x80)) {
    do {
      plVar2 = plVar1 + 1;
      lVar3 = *plVar1;
      if (*(void **)(lVar3 + 0x170) == param_1) {
        if (lVar3 != 0) {
          return *(undefined8 *)(lVar3 + 0x180);
        }
        return 0;
      }
      plVar1 = plVar2;
    } while (*(long **)(this + 0x80) != plVar2);
    return 0;
  }
  return 0;
}

