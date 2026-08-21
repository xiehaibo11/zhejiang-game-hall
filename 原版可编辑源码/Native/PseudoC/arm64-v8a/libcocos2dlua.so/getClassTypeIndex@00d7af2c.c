
/* dragonBones::BoneTranslateTimelineState::getClassTypeIndex() const */

char * dragonBones::BoneTranslateTimelineState::getClassTypeIndex(void)

{
  int iVar1;
  
  if ((getTypeIndex()::typeIndex & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
    if (iVar1 != 0) {
      getTypeIndex()::typeIndex = "N11dragonBones26BoneTranslateTimelineStateE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
                    /* try { // try from 00d7af88 to 00e7af9b has its CatchHandler @ 00d7b908 */
    }
  }
  return getTypeIndex()::typeIndex;
}

