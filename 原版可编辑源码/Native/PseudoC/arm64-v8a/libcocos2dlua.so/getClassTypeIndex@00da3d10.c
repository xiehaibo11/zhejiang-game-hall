
/* dragonBones::PolygonBoundingBoxData::getClassTypeIndex() const */

char * dragonBones::PolygonBoundingBoxData::getClassTypeIndex(void)

{
  int iVar1;
  
  if ((getTypeIndex()::typeIndex & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
    if (iVar1 != 0) {
                    /* try { // try from 00da3d5c to 00ea3e37 has its CatchHandler @ 00da3d5c
                       catch() { ... } // from try @ 00da3d5c with catch @ 00da3d5c
                       catch() { ... } // from try @ 00da3e40 with catch @ 00da3d5c
                       catch() { ... } // from try @ 00da3f50 with catch @ 00da3d5c
                       catch() { ... } // from try @ 00da3f9c with catch @ 00da3d5c */
      getTypeIndex()::typeIndex = "N11dragonBones22PolygonBoundingBoxDataE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
    }
  }
  return getTypeIndex()::typeIndex;
}

