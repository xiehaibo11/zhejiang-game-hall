
/* dragonBones::Armature::getSlotByDisplay(void*) const */

long __thiscall dragonBones::Armature::getSlotByDisplay(Armature *this,void *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 == (void *)0x0) {
LAB_00d7d2ac:
    lVar2 = 0;
  }
  else {
    plVar1 = *(long **)(this + 0x78);
    do {
      if (plVar1 == *(long **)(this + 0x80)) goto LAB_00d7d2ac;
      lVar2 = *plVar1;
      plVar1 = plVar1 + 1;
    } while (*(void **)(lVar2 + 0x170) != param_1);
  }
  return lVar2;
}

