
/* dragonBones::IKConstraintTimelineState::getClassTypeIndex() const */

char * dragonBones::IKConstraintTimelineState::getClassTypeIndex(void)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 00d7afa0 with catch @ 00d7b4b0 */
                    /* catch() { ... } // from try @ 00d7aec4 with catch @ 00d7b4b4 */
                    /* catch() { ... } // from try @ 00d7ae3c with catch @ 00d7b4c8 */
  if ((getTypeIndex()::typeIndex & 1) == 0) {
                    /* catch() { ... } // from try @ 00d7acd8 with catch @ 00d7b4e0 */
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
                    /* catch() { ... } // from try @ 00d7abfc with catch @ 00d7b4e4 */
    if (iVar1 != 0) {
                    /* catch() { ... } // from try @ 00d7ab74 with catch @ 00d7b4f8 */
                    /* catch() { ... } // from try @ 00d7aa98 with catch @ 00d7b4fc */
      getTypeIndex()::typeIndex = "N11dragonBones25IKConstraintTimelineStateE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
                    /* catch() { ... } // from try @ 00d7aa10 with catch @ 00d7b510 */
    }
  }
                    /* catch() { ... } // from try @ 00d7ad60 with catch @ 00d7b4cc */
  return getTypeIndex()::typeIndex;
}

