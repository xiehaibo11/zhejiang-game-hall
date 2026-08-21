
/* dragonBones::SlotData::getClassTypeIndex() const */

char * dragonBones::SlotData::getClassTypeIndex(void)

{
  int iVar1;
  
  if ((getTypeIndex()::typeIndex & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
    if (iVar1 != 0) {
      getTypeIndex()::typeIndex = "N11dragonBones8SlotDataE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
    }
  }
                    /* try { // try from 00d88528 to 00e88537 has its CatchHandler @ 00d889a4 */
  return getTypeIndex()::typeIndex;
}

