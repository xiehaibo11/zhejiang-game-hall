
/* dragonBones::UserData::getClassTypeIndex() const */

char * dragonBones::UserData::getClassTypeIndex(void)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 00da6f80 with catch @ 00da6fe8 */
                    /* catch() { ... } // from try @ 00da7030 with catch @ 00da7004 */
  if ((getTypeIndex()::typeIndex & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
                    /* try { // try from 00da7028 to 00ea702f has its CatchHandler @ 00da707c */
    if (iVar1 != 0) {
                    /* try { // try from 00da7030 to 00ea7097 has its CatchHandler @ 00da7004 */
      getTypeIndex()::typeIndex = "N11dragonBones8UserDataE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
    }
  }
  return getTypeIndex()::typeIndex;
}

