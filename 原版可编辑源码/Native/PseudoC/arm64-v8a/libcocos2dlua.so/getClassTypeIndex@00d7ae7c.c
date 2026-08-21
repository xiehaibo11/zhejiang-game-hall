
/* dragonBones::BoneAllTimelineState::getClassTypeIndex() const */

char * dragonBones::BoneAllTimelineState::getClassTypeIndex(void)

{
  int iVar1;
  
  if ((getTypeIndex()::typeIndex & 1) == 0) {
                    /* try { // try from 00d7aeac to 00e7aebf has its CatchHandler @ 00d7b41c */
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
    if (iVar1 != 0) {
                    /* try { // try from 00d7aec4 to 00e7aeeb has its CatchHandler @ 00d7b4b4 */
      getTypeIndex()::typeIndex = "N11dragonBones20BoneAllTimelineStateE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
    }
  }
  return getTypeIndex()::typeIndex;
}

