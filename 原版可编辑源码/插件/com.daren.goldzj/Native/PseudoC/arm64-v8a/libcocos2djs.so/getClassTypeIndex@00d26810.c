
/* dragonBones::DeformTimelineState::getClassTypeIndex() const */

char * dragonBones::DeformTimelineState::getClassTypeIndex(void)

{
  int iVar1;
  
  if (((getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex), iVar1 != 0)) {
    getTypeIndex()::typeIndex = "N11dragonBones19DeformTimelineStateE";
    __cxa_guard_release(&getTypeIndex()::typeIndex);
  }
  return getTypeIndex()::typeIndex;
}

