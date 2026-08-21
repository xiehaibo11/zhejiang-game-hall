
/* dragonBones::BoneRotateTimelineState::getClassTypeIndex() const */

char * dragonBones::BoneRotateTimelineState::getClassTypeIndex(void)

{
  int iVar1;
  
  if ((getTypeIndex()::typeIndex & 1) == 0) {
                    /* try { // try from 00d7b010 to 00e7b023 has its CatchHandler @ 00d7b3fc */
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
    if (iVar1 != 0) {
                    /* try { // try from 00d7b028 to 00e7b04f has its CatchHandler @ 00d7b49c */
      getTypeIndex()::typeIndex = "N11dragonBones23BoneRotateTimelineStateE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
    }
  }
  return getTypeIndex()::typeIndex;
}

