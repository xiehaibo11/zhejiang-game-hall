
/* dragonBones::Armature::dispose() */

void __thiscall dragonBones::Armature::dispose(Armature *this)

{
  if (*(long *)(this + 0x20) != 0) {
    this[0x59] = (Armature)0x1;
    DragonBones::bufferObject(*(DragonBones **)(this + 0x28),(BaseObject *)this);
    return;
  }
  return;
}

