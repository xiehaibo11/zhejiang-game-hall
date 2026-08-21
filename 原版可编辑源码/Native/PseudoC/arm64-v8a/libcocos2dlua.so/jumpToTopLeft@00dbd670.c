
/* cocos2d::ui::ScrollView::jumpToTopLeft() */

void __thiscall cocos2d::ui::ScrollView::jumpToTopLeft(ScrollView *this)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined8 local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00dbd31c with catch @ 00dbd670 */
                    /* catch() { ... } // from try @ 00dbd2f0 with catch @ 00dbd674 */
                    /* catch() { ... } // from try @ 00dbd2e0 with catch @ 00dbd678 */
                    /* catch() { ... } // from try @ 00dbd2b4 with catch @ 00dbd67c */
                    /* catch() { ... } // from try @ 00dbd2a4 with catch @ 00dbd680 */
                    /* catch() { ... } // from try @ 00dbd278 with catch @ 00dbd684 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00dbd268 with catch @ 00dbd688 */
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00dbd23c with catch @ 00dbd68c */
                    /* catch() { ... } // from try @ 00dbd22c with catch @ 00dbd690 */
                    /* catch() { ... } // from try @ 00dbd200 with catch @ 00dbd694 */
                    /* catch() { ... } // from try @ 00dbd1f0 with catch @ 00dbd698 */
  if (*(int *)(this + 0x7c0) == 3) {
                    /* catch() { ... } // from try @ 00dbd1c4 with catch @ 00dbd69c */
    fVar5 = *(float *)(this + 0x84);
    lVar2 = (**(code **)(**(long **)(this + 0x7b8) + 0x168))();
    fVar4 = *(float *)(lVar2 + 4);
    this[0x81d] = (ScrollView)0x0;
    puVar3 = (undefined8 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))(*(long **)(this + 0x7b8))
    ;
                    /* catch() { ... } // from try @ 00dbd1b4 with catch @ 00dbd6dc */
    local_40 = CONCAT44((fVar5 - fVar4) - (float)((ulong)*puVar3 >> 0x20),0.0 - (float)*puVar3);
    (**(code **)(*(long *)this + 0x7c0))(this,&local_40,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

