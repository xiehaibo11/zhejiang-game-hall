
/* dragonBones::BoneData* dragonBones::BaseObject::borrowObject<dragonBones::BoneData>() */

BoneData * dragonBones::BaseObject::borrowObject<dragonBones::BoneData>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  BoneData *pBVar4;
  undefined8 uVar5;
  
                    /* try { // try from 00d8f964 to 00e8f967 has its CatchHandler @ 00d8fa30 */
                    /* try { // try from 00d8f968 to 00e8f96f has its CatchHandler @ 00d8f980 */
                    /* try { // try from 00d8f970 to 00e8f973 has its CatchHandler @ 00d8fa30 */
                    /* try { // try from 00d8f974 to 00e8f977 has its CatchHandler @ 00d8f97c */
                    /* try { // try from 00d8f978 to 00e8fb4f has its CatchHandler @ 00d8df58 */
                    /* catch() { ... } // from try @ 00d8f974 with catch @ 00d8f97c */
                    /* catch() { ... } // from try @ 00d8f968 with catch @ 00d8f980 */
                    /* catch() { ... } // from try @ 00d8f95c with catch @ 00d8f984 */
                    /* catch() { ... } // from try @ 00d8f5e8 with catch @ 00d8fa68 */
                    /* catch() { ... } // from try @ 00d8f5dc with catch @ 00d8fa6c */
                    /* catch() { ... } // from try @ 00d8f420 with catch @ 00d8fa70 */
                    /* catch() { ... } // from try @ 00d8f410 with catch @ 00d8fa74 */
  if (((BoneData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&BoneData::getTypeIndex()::typeIndex), iVar1 != 0)) {
                    /* catch() { ... } // from try @ 00d8f614 with catch @ 00d8fa78 */
                    /* catch() { ... } // from try @ 00d8f5b8 with catch @ 00d8fa7c */
                    /* catch() { ... } // from try @ 00d8f5a8 with catch @ 00d8fa80 */
                    /* catch() { ... } // from try @ 00d8f53c with catch @ 00d8fa84 */
                    /* catch() { ... } // from try @ 00d8f6d8 with catch @ 00d8fa88 */
    BoneData::getTypeIndex()::typeIndex = "N11dragonBones8BoneDataE";
                    /* catch() { ... } // from try @ 00d8f524 with catch @ 00d8fa8c */
                    /* catch() { ... } // from try @ 00d8f6c0 with catch @ 00d8fa90 */
    __cxa_guard_release(&BoneData::getTypeIndex()::typeIndex);
                    /* catch() { ... } // from try @ 00d8f518 with catch @ 00d8fa94 */
  }
                    /* catch() { ... } // from try @ 00d8f950 with catch @ 00d8f988 */
                    /* catch() { ... } // from try @ 00d8f948 with catch @ 00d8f98c */
                    /* catch() { ... } // from try @ 00d8f940 with catch @ 00d8f990 */
                    /* catch() { ... } // from try @ 00d8f928 with catch @ 00d8f994 */
  if (DAT_01787788 != (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 00d8f920 with catch @ 00d8f998 */
                    /* catch() { ... } // from try @ 00d8f910 with catch @ 00d8f99c */
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
                    /* catch() { ... } // from try @ 00d8f908 with catch @ 00d8f9a0 */
                    /* catch() { ... } // from try @ 00d8f900 with catch @ 00d8f9a4 */
                    /* catch() { ... } // from try @ 00d8f8fc with catch @ 00d8f9a8 */
                    /* catch() { ... } // from try @ 00d8f8f8 with catch @ 00d8f9ac */
      if ((char *)puVar3[4] >= BoneData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
                    /* catch() { ... } // from try @ 00d8f8e0 with catch @ 00d8f9b0 */
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < BoneData::getTypeIndex()::typeIndex];
                    /* catch() { ... } // from try @ 00d8f8d8 with catch @ 00d8f9b4 */
    } while (puVar3 != (undefined8 *)0x0);
                    /* catch() { ... } // from try @ 00d8f8b4 with catch @ 00d8f9b8 */
                    /* catch() { ... } // from try @ 00d8f8ac with catch @ 00d8f9bc */
                    /* catch() { ... } // from try @ 00d8f8a4 with catch @ 00d8f9c0 */
                    /* catch() { ... } // from try @ 00d8f89c with catch @ 00d8f9c4 */
                    /* catch() { ... } // from try @ 00d8f894 with catch @ 00d8f9c8 */
                    /* catch() { ... } // from try @ 00d8f88c with catch @ 00d8f9cc */
                    /* catch() { ... } // from try @ 00d8f884 with catch @ 00d8f9d0 */
                    /* catch() { ... } // from try @ 00d8f87c with catch @ 00d8f9d4 */
                    /* catch() { ... } // from try @ 00d8f874 with catch @ 00d8f9d8 */
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= BoneData::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])) {
                    /* catch() { ... } // from try @ 00d8f870 with catch @ 00d8f9dc */
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pBVar4 = (BoneData *)*puVar3;
                    /* catch() { ... } // from try @ 00d8f85c with catch @ 00d8f9e0 */
      puVar2[6] = puVar3;
                    /* catch() { ... } // from try @ 00d8f854 with catch @ 00d8f9e4 */
      pBVar4[0xc] = (BoneData)0x0;
      return pBVar4;
                    /* catch() { ... } // from try @ 00d8f84c with catch @ 00d8f9e8 */
    }
  }
                    /* catch() { ... } // from try @ 00d8f844 with catch @ 00d8f9ec */
                    /* catch() { ... } // from try @ 00d8f83c with catch @ 00d8f9f0 */
                    /* catch() { ... } // from try @ 00d8f830 with catch @ 00d8f9f4 */
                    /* catch() { ... } // from try @ 00d8f820 with catch @ 00d8f9f8 */
  pBVar4 = operator_new(0x58,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00d8f818 with catch @ 00d8f9fc */
                    /* catch() { ... } // from try @ 00d8f810 with catch @ 00d8fa00 */
  if (pBVar4 != (BoneData *)0x0) {
                    /* catch() { ... } // from try @ 00d8f80c with catch @ 00d8fa04 */
                    /* catch() { ... } // from try @ 00d8f7f4 with catch @ 00d8fa08 */
                    /* catch() { ... } // from try @ 00d8f7e4 with catch @ 00d8fa0c */
    pBVar4[0xc] = (BoneData)0x0;
                    /* catch() { ... } // from try @ 00d8f7d8 with catch @ 00d8fa10 */
                    /* catch() { ... } // from try @ 00d8f7d0 with catch @ 00d8fa14 */
                    /* catch() { ... } // from try @ 00d8f7c8 with catch @ 00d8fa18 */
                    /* catch() { ... } // from try @ 00d8f7bc with catch @ 00d8fa1c */
    *(undefined8 *)(pBVar4 + 0x20) = 0;
    *(undefined8 *)(pBVar4 + 0x18) = 0;
                    /* catch() { ... } // from try @ 00d8f7b0 with catch @ 00d8fa20 */
    *(undefined8 *)(pBVar4 + 0x30) = 0;
    *(undefined8 *)(pBVar4 + 0x28) = 0;
                    /* catch() { ... } // from try @ 00d8f7a4 with catch @ 00d8fa24 */
                    /* catch() { ... } // from try @ 00d8f7ec with catch @ 00d8fa28
                       catch() { ... } // from try @ 00d8f804 with catch @ 00d8fa28
                       catch() { ... } // from try @ 00d8f838 with catch @ 00d8fa28
                       catch() { ... } // from try @ 00d8f864 with catch @ 00d8fa28
                       catch() { ... } // from try @ 00d8f8e8 with catch @ 00d8fa28
                       catch() { ... } // from try @ 00d8f930 with catch @ 00d8fa28 */
    *(undefined ***)pBVar4 = &PTR__BoneData_016d6b80;
                    /* catch() { ... } // from try @ 00d8f798 with catch @ 00d8fa2c */
                    /* catch() { ... } // from try @ 00d8f7a0 with catch @ 00d8fa30
                       catch() { ... } // from try @ 00d8f7ac with catch @ 00d8fa30
                       catch() { ... } // from try @ 00d8f7b8 with catch @ 00d8fa30
                       catch() { ... } // from try @ 00d8f7c4 with catch @ 00d8fa30
                       catch() { ... } // from try @ 00d8f7e0 with catch @ 00d8fa30
                       catch() { ... } // from try @ 00d8f7f0 with catch @ 00d8fa30
                       catch() { ... } // from try @ 00d8f7fc with catch @ 00d8fa30
                       catch() { ... } // from try @ 00d8f808 with catch @ 00d8fa30
                       catch() { ... } // from try @ 00d8f828 with catch @ 00d8fa30
                       catch() { ... } // from try @ 00d8f868 with catch @ 00d8fa30
                       catch() { ... } // from try @ 00d8f8bc with catch @ 00d8fa30
                       catch() { ... } // from try @ 00d8f8ec with catch @ 00d8fa30
                       catch() { ... } // from try @ 00d8f918 with catch @ 00d8fa30
                       catch() { ... } // from try @ 00d8f938 with catch @ 00d8fa30
                       catch() { ... } // from try @ 00d8f958 with catch @ 00d8fa30
                       catch() { ... } // from try @ 00d8f964 with catch @ 00d8fa30
                       catch() { ... } // from try @ 00d8f970 with catch @ 00d8fa30 */
                    /* catch() { ... } // from try @ 00d8f6b4 with catch @ 00d8fa34 */
    uVar5 = NEON_fmov(0x3f800000,4);
                    /* catch() { ... } // from try @ 00d8f4f4 with catch @ 00d8fa38 */
                    /* catch() { ... } // from try @ 00d8f468 with catch @ 00d8fa3c */
    *(int *)(pBVar4 + 8) = _hashCode;
                    /* catch() { ... } // from try @ 00d8f690 with catch @ 00d8fa40 */
    _hashCode = _hashCode + 1;
                    /* catch() { ... } // from try @ 00d8f680 with catch @ 00d8fa44 */
    *(undefined8 *)(pBVar4 + 0x38) = 0;
                    /* catch() { ... } // from try @ 00d8f4e4 with catch @ 00d8fa48 */
    *(undefined8 *)(pBVar4 + 0x40) = uVar5;
                    /* catch() { ... } // from try @ 00d8f450 with catch @ 00d8fa4c */
                    /* catch() { ... } // from try @ 00d8f444 with catch @ 00d8fa50 */
    *(undefined8 *)(pBVar4 + 0x48) = 0;
                    /* catch() { ... } // from try @ 00d8f66c with catch @ 00d8fa54 */
    BoneData::_onClear(pBVar4);
  }
                    /* catch() { ... } // from try @ 00d8f654 with catch @ 00d8fa58 */
                    /* catch() { ... } // from try @ 00d8f648 with catch @ 00d8fa5c */
                    /* catch() { ... } // from try @ 00d8f624 with catch @ 00d8fa60 */
                    /* catch() { ... } // from try @ 00d8f600 with catch @ 00d8fa64 */
  return pBVar4;
}

