
/* dragonBones::ZOrderTimelineState::getClassTypeIndex() const */

char * dragonBones::ZOrderTimelineState::getClassTypeIndex(void)

{
  int iVar1;
  
  if ((getTypeIndex()::typeIndex & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
    if (iVar1 != 0) {
      getTypeIndex()::typeIndex = "N11dragonBones19ZOrderTimelineStateE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
                    /* try { // try from 00d7ae24 to 00e7ae37 has its CatchHandler @ 00d7b928 */
    }
  }
  return getTypeIndex()::typeIndex;
}

