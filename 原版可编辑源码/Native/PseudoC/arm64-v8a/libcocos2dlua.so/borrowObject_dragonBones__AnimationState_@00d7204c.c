
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* dragonBones::AnimationState* dragonBones::BaseObject::borrowObject<dragonBones::AnimationState>()
    */

AnimationState * dragonBones::BaseObject::borrowObject<dragonBones::AnimationState>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  AnimationState *pAVar4;
  
  if (((AnimationState::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&AnimationState::getTypeIndex()::typeIndex), iVar1 != 0)) {
    _typeIndex = "N11dragonBones14AnimationStateE";
    __cxa_guard_release(&AnimationState::getTypeIndex()::typeIndex);
                    /* try { // try from 00d72190 to 00e7219b has its CatchHandler @ 00d7305c */
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
                    /* try { // try from 00d72094 to 00e720af has its CatchHandler @ 00d732d4 */
      if ((char *)puVar3[4] >= _typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < _typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
                    /* try { // try from 00d720b4 to 00e720c3 has its CatchHandler @ 00d732d0 */
    if ((((undefined8 **)puVar2 != &DAT_01787788) && ((char *)puVar2[4] <= _typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pAVar4 = (AnimationState *)*puVar3;
      puVar2[6] = puVar3;
      pAVar4[0xc] = (AnimationState)0x0;
      return pAVar4;
    }
  }
  pAVar4 = operator_new(0x140,(nothrow_t *)&std::nothrow);
  if (pAVar4 != (AnimationState *)0x0) {
    pAVar4[0xc] = (AnimationState)0x0;
    *(undefined8 *)(pAVar4 + 0x110) = 0;
    *(AnimationState **)(pAVar4 + 0x118) = pAVar4 + 0x120;
    *(undefined ***)pAVar4 = &PTR__AnimationState_016d5fd0;
    *(undefined8 *)(pAVar4 + 0x88) = 0;
    *(int *)(pAVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined8 *)(pAVar4 + 0x120) = 0;
    *(undefined8 *)(pAVar4 + 0x128) = 0;
    *(undefined8 *)(pAVar4 + 0x38) = 0;
    *(undefined8 *)(pAVar4 + 0x30) = 0;
    *(undefined8 *)(pAVar4 + 0x48) = 0;
    *(undefined8 *)(pAVar4 + 0x40) = 0;
    *(undefined8 *)(pAVar4 + 0x58) = 0;
    *(undefined8 *)(pAVar4 + 0x50) = 0;
    *(undefined8 *)(pAVar4 + 0xa8) = 0;
    *(undefined8 *)(pAVar4 + 0xa0) = 0;
    *(undefined8 *)(pAVar4 + 0xb8) = 0;
    *(undefined8 *)(pAVar4 + 0xb0) = 0;
    *(undefined8 *)(pAVar4 + 200) = 0;
    *(undefined8 *)(pAVar4 + 0xc0) = 0;
    *(undefined8 *)(pAVar4 + 0xd8) = 0;
    *(undefined8 *)(pAVar4 + 0xd0) = 0;
    *(undefined8 *)(pAVar4 + 0xe8) = 0;
    *(undefined8 *)(pAVar4 + 0xe0) = 0;
    *(undefined8 *)(pAVar4 + 0xf8) = 0;
    *(undefined8 *)(pAVar4 + 0xf0) = 0;
    *(undefined8 *)(pAVar4 + 0x108) = 0;
    *(undefined8 *)(pAVar4 + 0x100) = 0;
    *(undefined8 *)(pAVar4 + 0x138) = 0;
    AnimationState::_onClear(pAVar4);
  }
  return pAVar4;
}

