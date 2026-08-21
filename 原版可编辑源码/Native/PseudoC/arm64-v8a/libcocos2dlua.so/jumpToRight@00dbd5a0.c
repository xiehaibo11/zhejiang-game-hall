
/* cocos2d::ui::ScrollView::jumpToRight() */

void __thiscall cocos2d::ui::ScrollView::jumpToRight(ScrollView *this)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_40;
  long local_38;
  
                    /* try { // try from 00dbd5b0 to 00ebd5bf has its CatchHandler @ 00dbd618 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00dbd5c0 to 00ebd5d3 has its CatchHandler @ 00dbd614 */
  fVar7 = *(float *)(this + 0x80);
                    /* try { // try from 00dbd5d4 to 00ebd717 has its CatchHandler @ 00dbd174 */
  pfVar2 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0x168))();
  fVar5 = *pfVar2;
  lVar3 = (**(code **)(**(long **)(this + 0x7b8) + 0xb0))(*(long **)(this + 0x7b8));
  fVar6 = *(float *)(lVar3 + 4);
  this[0x81d] = (ScrollView)0x0;
                    /* catch() { ... } // from try @ 00dbd5c0 with catch @ 00dbd614 */
                    /* catch() { ... } // from try @ 00dbd5b0 with catch @ 00dbd618 */
                    /* catch() { ... } // from try @ 00dbd584 with catch @ 00dbd61c */
  puVar4 = (undefined8 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))(*(long **)(this + 0x7b8));
                    /* catch() { ... } // from try @ 00dbd574 with catch @ 00dbd620 */
                    /* catch() { ... } // from try @ 00dbd548 with catch @ 00dbd624 */
                    /* catch() { ... } // from try @ 00dbd538 with catch @ 00dbd628 */
                    /* catch() { ... } // from try @ 00dbd50c with catch @ 00dbd62c */
                    /* catch() { ... } // from try @ 00dbd4fc with catch @ 00dbd630 */
                    /* catch() { ... } // from try @ 00dbd4d0 with catch @ 00dbd634 */
  local_40 = CONCAT44(fVar6 - (float)((ulong)*puVar4 >> 0x20),(fVar7 - fVar5) - (float)*puVar4);
                    /* catch() { ... } // from try @ 00dbd4c0 with catch @ 00dbd638 */
                    /* catch() { ... } // from try @ 00dbd494 with catch @ 00dbd63c */
                    /* catch() { ... } // from try @ 00dbd484 with catch @ 00dbd640 */
                    /* catch() { ... } // from try @ 00dbd458 with catch @ 00dbd644 */
  (**(code **)(*(long *)this + 0x7c0))(this,&local_40,1);
                    /* catch() { ... } // from try @ 00dbd448 with catch @ 00dbd648 */
                    /* catch() { ... } // from try @ 00dbd41c with catch @ 00dbd64c */
                    /* catch() { ... } // from try @ 00dbd40c with catch @ 00dbd650 */
                    /* catch() { ... } // from try @ 00dbd3e0 with catch @ 00dbd654 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00dbd3d0 with catch @ 00dbd658 */
                    /* catch() { ... } // from try @ 00dbd3a4 with catch @ 00dbd65c */
                    /* catch() { ... } // from try @ 00dbd394 with catch @ 00dbd660 */
                    /* catch() { ... } // from try @ 00dbd368 with catch @ 00dbd664 */
                    /* catch() { ... } // from try @ 00dbd358 with catch @ 00dbd668 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00dbd32c with catch @ 00dbd66c */
  __stack_chk_fail();
}

