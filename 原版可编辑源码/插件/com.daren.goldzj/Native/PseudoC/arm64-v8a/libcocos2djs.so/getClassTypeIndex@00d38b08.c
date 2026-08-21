
/* dragonBones::ArmatureDisplayData::getClassTypeIndex() const */

char * dragonBones::ArmatureDisplayData::getClassTypeIndex(void)

{
  int iVar1;
  
  if (((getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex), iVar1 != 0)) {
    getTypeIndex()::typeIndex = "N11dragonBones19ArmatureDisplayDataE";
    __cxa_guard_release(&getTypeIndex()::typeIndex);
  }
  return getTypeIndex()::typeIndex;
}

