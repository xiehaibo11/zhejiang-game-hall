
/* dragonBones::BoneData::getClassTypeIndex() const */

char * dragonBones::BoneData::getClassTypeIndex(void)

{
  int iVar1;
  
                    /* try { // try from 00d88358 to 00e88363 has its CatchHandler @ 00d88908 */
  if ((getTypeIndex()::typeIndex & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
    if (iVar1 != 0) {
      getTypeIndex()::typeIndex = "N11dragonBones8BoneDataE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
                    /* try { // try from 00d883b0 to 00e883bf has its CatchHandler @ 00d889a8 */
    }
  }
  return getTypeIndex()::typeIndex;
}

