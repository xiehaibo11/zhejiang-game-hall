
/* dragonBones::DeformTimelineState*
   dragonBones::BaseObject::borrowObject<dragonBones::DeformTimelineState>() */

DeformTimelineState * dragonBones::BaseObject::borrowObject<dragonBones::DeformTimelineState>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  DeformTimelineState *pDVar4;
  
  if (((DeformTimelineState::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&DeformTimelineState::getTypeIndex()::typeIndex), iVar1 != 0)) {
    DeformTimelineState::getTypeIndex()::typeIndex = "N11dragonBones19DeformTimelineStateE";
    __cxa_guard_release(&DeformTimelineState::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= DeformTimelineState::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < DeformTimelineState::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= DeformTimelineState::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pDVar4 = (DeformTimelineState *)*puVar3;
      puVar2[6] = puVar3;
      pDVar4[0xc] = (DeformTimelineState)0x0;
      return pDVar4;
    }
  }
  pDVar4 = operator_new(0x120,(nothrow_t *)&std::nothrow);
  if (pDVar4 != (DeformTimelineState *)0x0) {
    pDVar4[0xc] = (DeformTimelineState)0x0;
    iVar1 = _hashCode + 1;
    *(int *)(pDVar4 + 8) = _hashCode;
    _hashCode = iVar1;
    *(undefined8 *)(pDVar4 + 0xf0) = 0;
    *(undefined8 *)(pDVar4 + 0xe8) = 0;
    *(undefined8 *)(pDVar4 + 0x100) = 0;
    *(undefined8 *)(pDVar4 + 0xf8) = 0;
    *(undefined ***)pDVar4 = &PTR__DeformTimelineState_016d6610;
    *(undefined8 *)(pDVar4 + 0xe0) = 0;
    *(undefined8 *)(pDVar4 + 0xd8) = 0;
    *(undefined8 *)(pDVar4 + 0x110) = 0;
    *(undefined8 *)(pDVar4 + 0x108) = 0;
    *(undefined8 *)(pDVar4 + 0x118) = 0;
    DeformTimelineState::_onClear(pDVar4);
  }
  return pDVar4;
}

