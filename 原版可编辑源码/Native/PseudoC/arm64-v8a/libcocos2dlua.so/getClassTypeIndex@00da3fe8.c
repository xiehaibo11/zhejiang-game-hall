
/* dragonBones::IKConstraintData::getClassTypeIndex() const */

char * dragonBones::IKConstraintData::getClassTypeIndex(void)

{
  int iVar1;
  
                    /* try { // try from 00da3ff4 to 00ea4033 has its CatchHandler @ 00da3ff4
                       catch() { ... } // from try @ 00da3ff4 with catch @ 00da3ff4
                       catch() { ... } // from try @ 00da423c with catch @ 00da3ff4
                       catch() { ... } // from try @ 00da43d4 with catch @ 00da3ff4
                       catch() { ... } // from try @ 00da43e4 with catch @ 00da3ff4 */
  if ((getTypeIndex()::typeIndex & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
    if (iVar1 != 0) {
                    /* try { // try from 00da4034 to 00ea403f has its CatchHandler @ 00da4448 */
      getTypeIndex()::typeIndex = "N11dragonBones16IKConstraintDataE";
                    /* try { // try from 00da4040 to 00ea4043 has its CatchHandler @ 00da4444 */
      __cxa_guard_release(&getTypeIndex()::typeIndex);
    }
  }
  return getTypeIndex()::typeIndex;
}

