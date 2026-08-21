
/* dragonBones::IKConstraintTimelineState*
   dragonBones::BaseObject::borrowObject<dragonBones::IKConstraintTimelineState>() */

IKConstraintTimelineState *
dragonBones::BaseObject::borrowObject<dragonBones::IKConstraintTimelineState>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  IKConstraintTimelineState *pIVar4;
  
  if (((IKConstraintTimelineState::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&IKConstraintTimelineState::getTypeIndex()::typeIndex), iVar1 != 0
     )) {
    IKConstraintTimelineState::getTypeIndex()::typeIndex =
         "N11dragonBones25IKConstraintTimelineStateE";
    __cxa_guard_release(&IKConstraintTimelineState::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= IKConstraintTimelineState::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < IKConstraintTimelineState::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
                    /* try { // try from 00d73b28 to 00e73c37 has its CatchHandler @ 00d73b28
                       catch() { ... } // from try @ 00d73b28 with catch @ 00d73b28
                       catch() { ... } // from try @ 00d749d8 with catch @ 00d73b28
                       catch() { ... } // from try @ 00d74c30 with catch @ 00d73b28
                       catch() { ... } // from try @ 00d74d58 with catch @ 00d73b28 */
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= IKConstraintTimelineState::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pIVar4 = (IKConstraintTimelineState *)*puVar3;
      puVar2[6] = puVar3;
      pIVar4[0xc] = (IKConstraintTimelineState)0x0;
      return pIVar4;
    }
  }
  pIVar4 = operator_new(200,(nothrow_t *)&std::nothrow);
  if (pIVar4 != (IKConstraintTimelineState *)0x0) {
    pIVar4[0xc] = (IKConstraintTimelineState)0x0;
    *(int *)(pIVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined ***)pIVar4 = &PTR__IKConstraintTimelineState_016d6680;
    IKConstraintTimelineState::_onClear(pIVar4);
  }
  return pIVar4;
}

