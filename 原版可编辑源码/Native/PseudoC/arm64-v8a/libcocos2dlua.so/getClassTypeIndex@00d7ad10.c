
/* dragonBones::ActionTimelineState::getClassTypeIndex() const */

char * dragonBones::ActionTimelineState::getClassTypeIndex(void)

{
  int iVar1;
  
  if ((getTypeIndex()::typeIndex & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
                    /* try { // try from 00d7ad48 to 00e7ad5b has its CatchHandler @ 00d7b43c */
    if (iVar1 != 0) {
                    /* try { // try from 00d7ad60 to 00e7ad87 has its CatchHandler @ 00d7b4cc */
      getTypeIndex()::typeIndex = "N11dragonBones19ActionTimelineStateE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
    }
  }
  return getTypeIndex()::typeIndex;
}

