
/* virtual thunk to dragonBones::Armature::getRenderOrder() const */

void __thiscall dragonBones::Armature::getRenderOrder(Armature *this)

{
  if (*(long **)(this + *(long *)(*(long *)this + -0x40) + 0xb0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d28ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + *(long *)(*(long *)this + -0x40) + 0xb0) + 0x68))();
    return;
  }
  return;
}

