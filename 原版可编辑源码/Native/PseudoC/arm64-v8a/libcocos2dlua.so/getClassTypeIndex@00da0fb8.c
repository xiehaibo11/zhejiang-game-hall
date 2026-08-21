
/* dragonBones::IKConstraint::getClassTypeIndex() const */

char * dragonBones::IKConstraint::getClassTypeIndex(void)

{
  int iVar1;
  
  if ((getTypeIndex()::typeIndex & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
    if (iVar1 != 0) {
      getTypeIndex()::typeIndex = "N11dragonBones12IKConstraintE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
    }
  }
                    /* try { // try from 00da0fdc to 00ea0ffb has its CatchHandler @ 00da1274 */
  return getTypeIndex()::typeIndex;
}

