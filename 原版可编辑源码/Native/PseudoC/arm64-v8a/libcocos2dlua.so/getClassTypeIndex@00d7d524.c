
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* dragonBones::Armature::getClassTypeIndex() const */

char * dragonBones::Armature::getClassTypeIndex(void)

{
  int iVar1;
  
                    /* try { // try from 00d7d52c to 00e7d543 has its CatchHandler @ 00d7d894 */
  if ((getTypeIndex()::typeIndex & 1) == 0) {
                    /* try { // try from 00d7d554 to 00e7d5fb has its CatchHandler @ 00d7be30 */
    iVar1 = __cxa_guard_acquire(&getTypeIndex()::typeIndex);
    if (iVar1 != 0) {
      _typeIndex = "N11dragonBones8ArmatureE";
      __cxa_guard_release(&getTypeIndex()::typeIndex);
    }
  }
                    /* try { // try from 00d7d544 to 00e7d553 has its CatchHandler @ 00d7d890 */
  return _typeIndex;
}

