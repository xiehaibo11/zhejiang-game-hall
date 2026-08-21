
/* dragonBones::CCSlot::getClassTypeIndex() const */

char * dragonBones::CCSlot::getClassTypeIndex(void)

{
  int iVar1;
  
  if ((getTypeIndex()::typeIndex & 1) == 0) {
                    /* try { // try from 00da02ec to 00ea02f7 has its CatchHandler @ 00da05dc */
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
    if (iVar1 != 0) {
      getTypeIndex()::typeIndex = "N11dragonBones6CCSlotE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
    }
  }
  return getTypeIndex()::typeIndex;
}

