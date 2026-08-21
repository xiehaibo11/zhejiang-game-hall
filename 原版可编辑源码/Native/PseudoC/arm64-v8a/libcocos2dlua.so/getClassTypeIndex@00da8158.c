
/* dragonBones::ActionData::getClassTypeIndex() const */

char * dragonBones::ActionData::getClassTypeIndex(void)

{
  int iVar1;
  
  if ((getTypeIndex()::typeIndex & 1) == 0) {
                    /* try { // try from 00da818c to 00ea81ef has its CatchHandler @ 00da818c
                       catch() { ... } // from try @ 00da818c with catch @ 00da818c
                       catch() { ... } // from try @ 00da81f4 with catch @ 00da818c */
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
    if (iVar1 != 0) {
      getTypeIndex()::typeIndex = "N11dragonBones10ActionDataE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
    }
  }
  return getTypeIndex()::typeIndex;
}

