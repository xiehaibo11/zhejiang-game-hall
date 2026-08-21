
/* dragonBones::SlotColorTimelineState::getClassTypeIndex() const */

char * dragonBones::SlotColorTimelineState::getClassTypeIndex(void)

{
  int iVar1;
  
  if ((getTypeIndex()::typeIndex & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
                    /* try { // try from 00d7b29c to 00e7b2a3 has its CatchHandler @ 00d7b908 */
    if (iVar1 != 0) {
                    /* try { // try from 00d7b2a4 to 00e7baa3 has its CatchHandler @ 00d7a104 */
      getTypeIndex()::typeIndex = "N11dragonBones22SlotColorTimelineStateE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
    }
  }
  return getTypeIndex()::typeIndex;
}

