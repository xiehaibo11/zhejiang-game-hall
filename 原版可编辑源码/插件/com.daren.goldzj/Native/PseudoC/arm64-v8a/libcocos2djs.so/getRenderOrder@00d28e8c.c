
/* dragonBones::Armature::getRenderOrder() const */

void __thiscall dragonBones::Armature::getRenderOrder(Armature *this)

{
  if (*(long **)(this + 0xb0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d28e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0xb0) + 0x68))();
    return;
  }
  return;
}

