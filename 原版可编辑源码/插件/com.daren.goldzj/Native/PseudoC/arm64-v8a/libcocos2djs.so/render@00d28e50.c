
/* dragonBones::Armature::render() */

void __thiscall dragonBones::Armature::render(Armature *this)

{
  if (*(long **)(this + 0xb0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d28e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0xb0) + 0x48))();
    return;
  }
  return;
}

