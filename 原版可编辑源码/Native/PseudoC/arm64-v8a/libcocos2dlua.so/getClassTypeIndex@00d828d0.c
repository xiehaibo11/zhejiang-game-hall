
/* dragonBones::EventObject::getClassTypeIndex() const */

char * dragonBones::EventObject::getClassTypeIndex(void)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 00d8274c with catch @ 00d828d8 */
                    /* catch() { ... } // from try @ 00d82230 with catch @ 00d828dc */
  if ((getTypeIndex()::typeIndex & 1) == 0) {
                    /* catch() { ... } // from try @ 00d82620 with catch @ 00d828fc */
                    /* catch() { ... } // from try @ 00d8216c with catch @ 00d82900 */
                    /* catch() { ... } // from try @ 00d8214c with catch @ 00d82904 */
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
    if (iVar1 != 0) {
      getTypeIndex()::typeIndex = "N11dragonBones11EventObjectE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
                    /* catch() { ... } // from try @ 00d82384 with catch @ 00d82934 */
    }
  }
  return getTypeIndex()::typeIndex;
}

