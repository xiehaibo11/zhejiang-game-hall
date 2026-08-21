
/* dragonBones::DeformVertices::isBonesUpdate() const */

undefined8 __thiscall dragonBones::DeformVertices::isBonesUpdate(DeformVertices *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x28);
  while( true ) {
    if (plVar1 == *(long **)(this + 0x30)) {
      return 0;
    }
    if ((*plVar1 != 0) && (*(char *)(*plVar1 + 0x91) != '\0')) break;
    plVar1 = plVar1 + 1;
  }
  return 1;
}

