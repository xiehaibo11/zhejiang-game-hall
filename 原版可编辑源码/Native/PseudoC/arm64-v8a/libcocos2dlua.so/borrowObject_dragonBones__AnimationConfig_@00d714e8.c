
/* dragonBones::AnimationConfig*
   dragonBones::BaseObject::borrowObject<dragonBones::AnimationConfig>() */

AnimationConfig * dragonBones::BaseObject::borrowObject<dragonBones::AnimationConfig>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  AnimationConfig *pAVar4;
  
                    /* catch() { ... } // from try @ 00d71340 with catch @ 00d714f0 */
                    /* catch() { ... } // from try @ 00d712e4 with catch @ 00d71500
                       catch() { ... } // from try @ 00d7131c with catch @ 00d71500
                       catch() { ... } // from try @ 00d71384 with catch @ 00d71500 */
                    /* try { // try from 00d715f0 to 00e715ff has its CatchHandler @ 00d730dc */
  if (((AnimationConfig::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&AnimationConfig::getTypeIndex()::typeIndex), iVar1 != 0)) {
                    /* try { // try from 00d71600 to 00e7160f has its CatchHandler @ 00d730cc */
    AnimationConfig::getTypeIndex()::typeIndex = "N11dragonBones15AnimationConfigE";
                    /* try { // try from 00d71610 to 00e7161f has its CatchHandler @ 00d730bc */
    __cxa_guard_release(&AnimationConfig::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= AnimationConfig::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < AnimationConfig::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
                    /* try { // try from 00d71544 to 00e715b3 has its CatchHandler @ 00d71544
                       catch() { ... } // from try @ 00d71544 with catch @ 00d71544
                       catch() { ... } // from try @ 00d72008 with catch @ 00d71544
                       catch() { ... } // from try @ 00d7233c with catch @ 00d71544
                       catch() { ... } // from try @ 00d727ec with catch @ 00d71544
                       catch() { ... } // from try @ 00d729b4 with catch @ 00d71544
                       catch() { ... } // from try @ 00d73000 with catch @ 00d71544 */
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= AnimationConfig::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pAVar4 = (AnimationConfig *)*puVar3;
      puVar2[6] = puVar3;
      pAVar4[0xc] = (AnimationConfig)0x0;
      return pAVar4;
    }
  }
  pAVar4 = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (pAVar4 != (AnimationConfig *)0x0) {
    pAVar4[0xc] = (AnimationConfig)0x0;
    *(undefined8 *)(pAVar4 + 0x50) = 0;
    *(undefined8 *)(pAVar4 + 0x48) = 0;
    *(undefined ***)pAVar4 = &PTR__AnimationConfig_016d6af0;
                    /* try { // try from 00d715b4 to 00e715bf has its CatchHandler @ 00d73104 */
    *(undefined8 *)(pAVar4 + 0x60) = 0;
    *(undefined8 *)(pAVar4 + 0x58) = 0;
    *(undefined8 *)(pAVar4 + 0x70) = 0;
    *(undefined8 *)(pAVar4 + 0x68) = 0;
                    /* try { // try from 00d715c0 to 00e715c7 has its CatchHandler @ 00d730f4 */
    *(int *)(pAVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
                    /* try { // try from 00d715c8 to 00e715df has its CatchHandler @ 00d730f0 */
    *(undefined8 *)(pAVar4 + 0x80) = 0;
    *(undefined8 *)(pAVar4 + 0x78) = 0;
    *(undefined8 *)(pAVar4 + 0x90) = 0;
    *(undefined8 *)(pAVar4 + 0x88) = 0;
    *(undefined8 *)(pAVar4 + 0xa0) = 0;
    *(undefined8 *)(pAVar4 + 0x98) = 0;
    AnimationConfig::_onClear(pAVar4);
  }
                    /* try { // try from 00d715e0 to 00e715ef has its CatchHandler @ 00d730ec */
  return pAVar4;
}

