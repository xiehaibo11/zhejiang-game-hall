
/* dragonBones::IKConstraint* dragonBones::BaseObject::borrowObject<dragonBones::IKConstraint>() */

IKConstraint * dragonBones::BaseObject::borrowObject<dragonBones::IKConstraint>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  IKConstraint *pIVar4;
  
                    /* try { // try from 00d832d8 to 00e832ef has its CatchHandler @ 00d834f8 */
  if (((IKConstraint::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&IKConstraint::getTypeIndex()::typeIndex), iVar1 != 0)) {
    IKConstraint::getTypeIndex()::typeIndex = "N11dragonBones12IKConstraintE";
                    /* try { // try from 00d832f0 to 00e83303 has its CatchHandler @ 00d834d4 */
    __cxa_guard_release(&IKConstraint::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
                    /* try { // try from 00d83218 to 00e83233 has its CatchHandler @ 00d83628 */
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= IKConstraint::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < IKConstraint::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
                    /* try { // try from 00d83238 to 00e8323f has its CatchHandler @ 00d83634 */
                    /* try { // try from 00d83258 to 00e83273 has its CatchHandler @ 00d835ec */
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= IKConstraint::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6]))
    {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pIVar4 = (IKConstraint *)*puVar3;
      puVar2[6] = puVar3;
      pIVar4[0xc] = (IKConstraint)0x0;
      return pIVar4;
    }
  }
  pIVar4 = operator_new(0x48,(nothrow_t *)&std::nothrow);
  if (pIVar4 != (IKConstraint *)0x0) {
    pIVar4[0xc] = (IKConstraint)0x0;
    *(int *)(pIVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined ***)pIVar4 = &PTR__IKConstraint_016d8078;
    IKConstraint::_onClear(pIVar4);
  }
                    /* try { // try from 00d832c0 to 00e832d3 has its CatchHandler @ 00d835f0 */
  return pIVar4;
}

