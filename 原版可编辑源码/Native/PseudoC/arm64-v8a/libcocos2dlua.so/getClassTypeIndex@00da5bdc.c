
/* dragonBones::BoundingBoxDisplayData::getClassTypeIndex() const */

char * dragonBones::BoundingBoxDisplayData::getClassTypeIndex(void)

{
  int iVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00da5a78 with catch @ 00da5bf4
                        */
  if ((getTypeIndex()::typeIndex & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
    if (iVar1 != 0) {
      getTypeIndex()::typeIndex = "N11dragonBones22BoundingBoxDisplayDataE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
    }
  }
  return getTypeIndex()::typeIndex;
}

