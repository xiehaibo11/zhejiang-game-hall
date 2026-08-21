
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* dragonBones::RectangleBoundingBoxData::getClassTypeIndex() const */

char * dragonBones::RectangleBoundingBoxData::getClassTypeIndex(void)

{
  int iVar1;
  
  if (((getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex), iVar1 != 0)) {
    _typeIndex = "N11dragonBones24RectangleBoundingBoxDataE";
    __cxa_guard_release(&getTypeIndex()::typeIndex);
  }
  return _typeIndex;
}

