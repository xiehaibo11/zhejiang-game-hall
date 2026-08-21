
/* dragonBones::MeshDisplayData::getClassTypeIndex() const */

char * dragonBones::MeshDisplayData::getClassTypeIndex(void)

{
  int iVar1;
  
  if ((getTypeIndex()::typeIndex & 1) == 0) {
                    /* try { // try from 00da5a80 to 00ea5bf7 has its CatchHandler @ 00da5a2c */
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
    if (iVar1 != 0) {
      getTypeIndex()::typeIndex = "N11dragonBones15MeshDisplayDataE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
    }
  }
                    /* try { // try from 00da5a78 to 00ea5a7f has its CatchHandler @ 00da5bf4 */
  return getTypeIndex()::typeIndex;
}

