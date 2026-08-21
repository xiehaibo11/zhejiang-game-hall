
/* dragonBones::Armature::_onSortSlots(dragonBones::Slot*, dragonBones::Slot*) */

bool dragonBones::Armature::_onSortSlots(Slot *param_1,Slot *param_2)

{
  return *(int *)(param_1 + 0x98) < *(int *)(param_2 + 0x98);
}

