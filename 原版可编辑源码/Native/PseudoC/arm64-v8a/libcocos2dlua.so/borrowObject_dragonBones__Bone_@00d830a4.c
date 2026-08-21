
/* dragonBones::Bone* dragonBones::BaseObject::borrowObject<dragonBones::Bone>() */

Bone * dragonBones::BaseObject::borrowObject<dragonBones::Bone>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Bone *pBVar4;
  undefined8 uVar5;
  
  if (((Bone::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&Bone::getTypeIndex()::typeIndex), iVar1 != 0)) {
    Bone::getTypeIndex()::typeIndex = "N11dragonBones4BoneE";
                    /* try { // try from 00d831d8 to 00e831eb has its CatchHandler @ 00d8362c */
    __cxa_guard_release(&Bone::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= Bone::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < Bone::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
                    /* try { // try from 00d8310c to 00e83127 has its CatchHandler @ 00d83630 */
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= Bone::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pBVar4 = (Bone *)*puVar3;
      puVar2[6] = puVar3;
      pBVar4[0xc] = (Bone)0x0;
      return pBVar4;
    }
  }
  pBVar4 = operator_new(200,(nothrow_t *)&std::nothrow);
  if (pBVar4 != (Bone *)0x0) {
    pBVar4[0xc] = (Bone)0x0;
                    /* try { // try from 00d83158 to 00e8315f has its CatchHandler @ 00d83614 */
    *(undefined8 *)(pBVar4 + 0x28) = 0;
    *(undefined8 *)(pBVar4 + 0x30) = 0;
    *(undefined8 *)(pBVar4 + 0x20) = 0;
                    /* try { // try from 00d83160 to 00e831a3 has its CatchHandler @ 00d83634 */
    *(undefined8 *)(pBVar4 + 0x18) = 0x3f80000000000000;
    *(undefined8 *)(pBVar4 + 0x10) = 0x3f800000;
    *(undefined8 *)(pBVar4 + 0x40) = 0;
    *(undefined8 *)(pBVar4 + 0x48) = 0;
    uVar5 = NEON_fmov(0x3f800000,4);
    *(undefined ***)pBVar4 = &PTR__Bone_016d6840;
    *(undefined8 *)(pBVar4 + 0x78) = 0;
    *(undefined8 *)(pBVar4 + 0x80) = 0;
    *(undefined8 *)(pBVar4 + 0x38) = uVar5;
    *(undefined8 *)(pBVar4 + 0x50) = uVar5;
    *(int *)(pBVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined8 *)(pBVar4 + 0x88) = uVar5;
    Bone::_onClear(pBVar4);
  }
  return pBVar4;
}

