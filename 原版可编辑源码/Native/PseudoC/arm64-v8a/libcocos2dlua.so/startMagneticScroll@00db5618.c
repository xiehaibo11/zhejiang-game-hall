
/* cocos2d::ui::ListView::startMagneticScroll() */

void __thiscall cocos2d::ui::ListView::startMagneticScroll(ListView *this)

{
  float fVar1;
  float fVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float local_58;
  float local_54;
  float local_50;
  float fStack_4c;
  long local_48;
  
                    /* try { // try from 00db561c to 00eb5667 has its CatchHandler @ 00db5548 */
  lVar3 = tpidr_el0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db5584 with catch @ 00db5634
                        */
  local_48 = *(long *)(lVar3 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db5600 with catch @ 00db5648
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db55e0 with catch @ 00db564c
                        */
  if ((*(long *)(this + 0x8b8) != *(long *)(this + 0x8c0)) && (*(int *)(this + 0x8d4) != 0)) {
                    /* try { // try from 00db5668 to 00eb566b has its CatchHandler @ 00db56d8 */
    switch(*(int *)(this + 0x8d4)) {
    case 1:
      pfVar5 = (float *)&Vec2::ANCHOR_MIDDLE;
      break;
    case 2:
      pfVar5 = (float *)&Vec2::ANCHOR_TOP_LEFT;
      break;
    case 3:
                    /* try { // try from 00db56a4 to 00eb56a7 has its CatchHandler @ 00db56ec */
      pfVar5 = (float *)&Vec2::ANCHOR_MIDDLE_LEFT;
      break;
    case 4:
      pfVar5 = (float *)&Vec2::ANCHOR_MIDDLE_RIGHT;
      break;
    case 5:
      pfVar5 = (float *)&Vec2::ANCHOR_MIDDLE_TOP;
      break;
    case 6:
      pfVar5 = (float *)&Vec2::ANCHOR_MIDDLE_BOTTOM;
      break;
    default:
      pfVar5 = (float *)&Vec2::ZERO;
    }
    fVar1 = pfVar5[1];
    fVar2 = *pfVar5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db5668 with catch @ 00db56d8
                        */
    local_50 = fVar2;
    fStack_4c = fVar1;
    pfVar5 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db56a4 with catch @ 00db56ec
                        */
    fVar12 = *pfVar5;
    fVar13 = pfVar5[1];
    pfVar5 = (float *)(**(code **)(*(long *)this + 0x168))(this);
                    /* catch() { ... } // from try @ 00db572c with catch @ 00db5700 */
    local_58 = *pfVar5 * fVar2 - fVar12;
    lVar4 = (**(code **)(*(long *)this + 0x168))(this);
                    /* try { // try from 00db5724 to 00eb572b has its CatchHandler @ 00db5770 */
                    /* try { // try from 00db572c to 00eb578b has its CatchHandler @ 00db5700 */
    local_54 = *(float *)(lVar4 + 4) * fVar1 - fVar13;
    lVar4 = getClosestItemToPosition(this,(Vec2 *)&local_58,(Vec2 *)&local_50);
    if (lVar4 == 0) {
                    /* catch() { ... } // from try @ 00db57bc with catch @ 00db578c */
      lVar4 = -1;
    }
    else {
      plVar6 = *(long **)(this + 0x8b8);
      plVar7 = *(long **)(this + 0x8c0);
      plVar10 = plVar7;
      plVar11 = plVar6;
      if (plVar6 != plVar7) {
        lVar8 = *plVar6;
        plVar9 = plVar6;
                    /* catch() { ... } // from try @ 00db5724 with catch @ 00db5770 */
        while ((plVar10 = plVar9, plVar11 = plVar9, lVar8 != lVar4 &&
               (plVar9 = plVar9 + 1, plVar10 = plVar7, plVar11 = plVar7, plVar7 != plVar9))) {
          lVar8 = *plVar9;
        }
      }
                    /* try { // try from 00db57b4 to 00eb57bb has its CatchHandler @ 00db5814 */
      lVar4 = (long)plVar11 - (long)plVar6 >> 3;
                    /* try { // try from 00db57bc to 00eb582f has its CatchHandler @ 00db578c */
      if (plVar10 == plVar7) {
        lVar4 = -1;
      }
    }
    scrollToItem(this,lVar4,(Vec2 *)&local_50,(Vec2 *)&local_50,*(float *)(this + 0x8f0));
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

