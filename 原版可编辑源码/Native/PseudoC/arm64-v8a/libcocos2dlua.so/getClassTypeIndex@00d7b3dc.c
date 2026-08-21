
/* dragonBones::DeformTimelineState::getClassTypeIndex() const */

char * dragonBones::DeformTimelineState::getClassTypeIndex(void)

{
  int iVar1;
  
  if ((getTypeIndex()::typeIndex & 1) == 0) {
                    /* catch() { ... } // from try @ 00d7afb8 with catch @ 00d7b40c */
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
                    /* catch() { ... } // from try @ 00d7aeac with catch @ 00d7b41c */
    if (iVar1 != 0) {
                    /* catch() { ... } // from try @ 00d7ae54 with catch @ 00d7b42c */
      getTypeIndex()::typeIndex = "N11dragonBones19DeformTimelineStateE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
                    /* catch() { ... } // from try @ 00d7ad48 with catch @ 00d7b43c */
    }
  }
                    /* catch() { ... } // from try @ 00d7b010 with catch @ 00d7b3fc */
  return getTypeIndex()::typeIndex;
}

