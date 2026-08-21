
/* dragonBones::SkinData::getClassTypeIndex() const */

char * dragonBones::SkinData::getClassTypeIndex(void)

{
  int iVar1;
  
                    /* try { // try from 00d893c0 to 00e893c7 has its CatchHandler @ 00d89400 */
                    /* try { // try from 00d893c8 to 00e8941b has its CatchHandler @ 00d89390 */
  if ((getTypeIndex()::typeIndex & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
    if (iVar1 != 0) {
                    /* catch() { ... } // from try @ 00d893c0 with catch @ 00d89400 */
      getTypeIndex()::typeIndex = "N11dragonBones8SkinDataE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
    }
  }
  return getTypeIndex()::typeIndex;
}

