
/* dragonBones::CCTextureAtlasData::getClassTypeIndex() const */

char * dragonBones::CCTextureAtlasData::getClassTypeIndex(void)

{
  int iVar1;
  
  if ((getTypeIndex()::typeIndex & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
    if (iVar1 != 0) {
      getTypeIndex()::typeIndex = "N11dragonBones18CCTextureAtlasDataE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
    }
  }
  return getTypeIndex()::typeIndex;
}

