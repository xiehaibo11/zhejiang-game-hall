
/* dragonBones::SlotDislayTimelineState::getClassTypeIndex() const */

char * dragonBones::SlotDislayTimelineState::getClassTypeIndex(void)

{
  int iVar1;
  
  if ((getTypeIndex()::typeIndex & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
    if (iVar1 != 0) {
      getTypeIndex()::typeIndex = "N11dragonBones23SlotDislayTimelineStateE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
    }
  }
                    /* try { // try from 00d7b164 to 00e7b16b has its CatchHandler @ 00d7b92c */
  return getTypeIndex()::typeIndex;
}

