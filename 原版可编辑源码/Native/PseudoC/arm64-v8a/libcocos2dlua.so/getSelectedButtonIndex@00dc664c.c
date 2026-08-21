
/* cocos2d::ui::RadioButtonGroup::getSelectedButtonIndex() const */

undefined4 __thiscall cocos2d::ui::RadioButtonGroup::getSelectedButtonIndex(RadioButtonGroup *this)

{
  long *plVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = *(long **)(this + 0x4f0);
  plVar1 = *(long **)(this + 0x4f8);
  plVar4 = plVar1;
  plVar7 = plVar3;
                    /* catch() { ... } // from try @ 00dc61b8 with catch @ 00dc6658 */
  if (plVar3 != plVar1) {
    lVar5 = *plVar3;
    plVar6 = plVar3;
                    /* catch() { ... } // from try @ 00dc6150 with catch @ 00dc666c */
    while ((plVar4 = plVar6, plVar7 = plVar6, lVar5 != *(long *)(this + 0x540) &&
           (plVar6 = plVar6 + 1, plVar4 = plVar1, plVar7 = plVar1, plVar1 != plVar6))) {
      lVar5 = *plVar6;
    }
  }
                    /* catch() { ... } // from try @ 00dc6238 with catch @ 00dc66b8 */
  uVar2 = (undefined4)((ulong)((long)plVar7 - (long)plVar3) >> 3);
                    /* catch() { ... } // from try @ 00dc6258 with catch @ 00dc66bc */
  if (plVar4 == plVar1) {
    uVar2 = 0xffffffff;
  }
                    /* catch() { ... } // from try @ 00dc620c with catch @ 00dc66c0 */
  return uVar2;
}

