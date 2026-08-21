
/* dragonBones::BonePose* dragonBones::BaseObject::borrowObject<dragonBones::BonePose>() */

BonePose * dragonBones::BaseObject::borrowObject<dragonBones::BonePose>(void)

{
  int iVar1;
  BonePose *pBVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
                    /* catch() { ... } // from try @ 00d74014 with catch @ 00d75098 */
                    /* catch() { ... } // from try @ 00d73f7c with catch @ 00d7509c */
                    /* catch() { ... } // from try @ 00d73e1c with catch @ 00d750a0 */
                    /* catch() { ... } // from try @ 00d73ca0 with catch @ 00d750a4 */
                    /* catch() { ... } // from try @ 00d74c04 with catch @ 00d750a8 */
                    /* catch() { ... } // from try @ 00d74040 with catch @ 00d750ac */
                    /* catch() { ... } // from try @ 00d73f84 with catch @ 00d750b0
                       catch() { ... } // from try @ 00d74590 with catch @ 00d750b0
                       catch() { ... } // from try @ 00d747c8 with catch @ 00d750b0 */
  if ((BonePose::getTypeIndex()::typeIndex & 1) == 0) {
                    /* catch() { ... } // from try @ 00d74b44 with catch @ 00d75184 */
                    /* catch() { ... } // from try @ 00d73c78 with catch @ 00d75188
                       catch() { ... } // from try @ 00d73cd4 with catch @ 00d75188
                       catch() { ... } // from try @ 00d74744 with catch @ 00d75188 */
    iVar1 = __cxa_guard_acquire(&BonePose::getTypeIndex()::typeIndex);
                    /* catch() { ... } // from try @ 00d74170 with catch @ 00d75198 */
    if (iVar1 != 0) {
                    /* catch() { ... } // from try @ 00d74224 with catch @ 00d7519c */
                    /* catch() { ... } // from try @ 00d74080 with catch @ 00d751a0 */
      BonePose::getTypeIndex()::typeIndex = "N11dragonBones8BonePoseE";
                    /* catch() { ... } // from try @ 00d74aac with catch @ 00d751b0
                       catch() { ... } // from try @ 00d74c28 with catch @ 00d751b0 */
      __cxa_guard_release(&BonePose::getTypeIndex()::typeIndex);
    }
  }
                    /* catch() { ... } // from try @ 00d73e24 with catch @ 00d750c4
                       catch() { ... } // from try @ 00d7442c with catch @ 00d750c4
                       catch() { ... } // from try @ 00d7479c with catch @ 00d750c4 */
  if (DAT_01787788 != (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 00d73ca8 with catch @ 00d750c8
                       catch() { ... } // from try @ 00d742c8 with catch @ 00d750c8
                       catch() { ... } // from try @ 00d74770 with catch @ 00d750c8 */
                    /* catch() { ... } // from try @ 00d741ec with catch @ 00d750cc */
    puVar3 = &DAT_01787788;
    puVar4 = DAT_01787788;
    do {
                    /* catch() { ... } // from try @ 00d74150 with catch @ 00d750d0 */
      if ((char *)puVar4[4] >= BonePose::getTypeIndex()::typeIndex) {
        puVar3 = puVar4;
      }
                    /* catch() { ... } // from try @ 00d7410c with catch @ 00d750e0 */
      puVar4 = (undefined8 *)puVar4[(char *)puVar4[4] < BonePose::getTypeIndex()::typeIndex];
                    /* catch() { ... } // from try @ 00d740d0 with catch @ 00d750e4 */
    } while (puVar4 != (undefined8 *)0x0);
                    /* catch() { ... } // from try @ 00d740c8 with catch @ 00d750f4 */
                    /* catch() { ... } // from try @ 00d73fe8 with catch @ 00d750f8 */
                    /* catch() { ... } // from try @ 00d73ef0 with catch @ 00d750fc */
    if ((((undefined8 **)puVar3 != &DAT_01787788) &&
        ((char *)puVar3[4] <= BonePose::getTypeIndex()::typeIndex)) && (puVar3[5] != puVar3[6])) {
                    /* catch() { ... } // from try @ 00d73e54 with catch @ 00d7510c */
      puVar4 = (undefined8 *)(puVar3[6] + -8);
      pBVar2 = (BonePose *)*puVar4;
                    /* catch() { ... } // from try @ 00d73d90 with catch @ 00d75110 */
      puVar3[6] = puVar4;
      pBVar2[0xc] = (BonePose)0x0;
      return pBVar2;
    }
  }
  pBVar2 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (pBVar2 != (BonePose *)0x0) {
    pBVar2[0xc] = (BonePose)0x0;
                    /* catch() { ... } // from try @ 00d73cf4 with catch @ 00d7514c */
    uVar5 = NEON_fmov(0x3f800000,4);
                    /* catch() { ... } // from try @ 00d73c38 with catch @ 00d75150 */
    *(undefined8 *)(pBVar2 + 0x10) = 0;
    *(undefined8 *)(pBVar2 + 0x18) = 0;
    *(undefined ***)pBVar2 = &PTR__BonePose_016d6018;
                    /* catch() { ... } // from try @ 00d73f30 with catch @ 00d75160
                       catch() { ... } // from try @ 00d73fa4 with catch @ 00d75160 */
    *(undefined8 *)(pBVar2 + 0x28) = 0;
    *(undefined8 *)(pBVar2 + 0x30) = 0;
    *(undefined8 *)(pBVar2 + 0x40) = 0;
    *(undefined8 *)(pBVar2 + 0x48) = 0;
    *(undefined8 *)(pBVar2 + 0x20) = uVar5;
    *(undefined8 *)(pBVar2 + 0x38) = uVar5;
                    /* catch() { ... } // from try @ 00d73dd0 with catch @ 00d75170
                       catch() { ... } // from try @ 00d73e44 with catch @ 00d75170 */
    *(int *)(pBVar2 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined8 *)(pBVar2 + 0x50) = uVar5;
  }
                    /* catch() { ... } // from try @ 00d74b6c with catch @ 00d75180 */
  return pBVar2;
}

