
/* dragonBones::TimelineData::getClassTypeIndex() const */

char * dragonBones::TimelineData::getClassTypeIndex(void)

{
  int iVar1;
  
  if ((getTypeIndex()::typeIndex & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
    if (iVar1 != 0) {
      getTypeIndex()::typeIndex = "N11dragonBones12TimelineDataE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
    }
  }
  return getTypeIndex()::typeIndex;
}

