
/* virtual thunk to dragonBones::Armature::render() */

void __thiscall dragonBones::Armature::render(Armature *this)

{
  if (*(long **)(this + *(long *)(*(long *)this + -0x28) + 0xb0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d28e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + *(long *)(*(long *)this + -0x28) + 0xb0) + 0x48))();
    return;
  }
  return;
}

