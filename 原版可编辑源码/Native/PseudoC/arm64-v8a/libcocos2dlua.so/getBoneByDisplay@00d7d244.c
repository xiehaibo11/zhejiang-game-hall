
/* dragonBones::Armature::getBoneByDisplay(void*) const */

undefined8 __thiscall dragonBones::Armature::getBoneByDisplay(Armature *this,void *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 != (void *)0x0) {
    plVar1 = *(long **)(this + 0x78);
    do {
      if (plVar1 == *(long **)(this + 0x80)) {
        return 0;
      }
      lVar2 = *plVar1;
      plVar1 = plVar1 + 1;
    } while (*(void **)(lVar2 + 0x170) != param_1);
    if (lVar2 != 0) {
      return *(undefined8 *)(lVar2 + 0x180);
    }
  }
  return 0;
}

