
/* dragonBones::ArmatureData::getClassTypeIndex() const */

char * dragonBones::ArmatureData::getClassTypeIndex(void)

{
  int iVar1;
  
                    /* try { // try from 00d881bc to 00e881d7 has its CatchHandler @ 00d882d0 */
  if ((getTypeIndex()::typeIndex & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
    if (iVar1 != 0) {
                    /* try { // try from 00d881fc to 00e88253 has its CatchHandler @ 00d882d0 */
      getTypeIndex()::typeIndex = "N11dragonBones12ArmatureDataE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
    }
  }
                    /* try { // try from 00d881dc to 00e881fb has its CatchHandler @ 00d882b4 */
  return getTypeIndex()::typeIndex;
}

