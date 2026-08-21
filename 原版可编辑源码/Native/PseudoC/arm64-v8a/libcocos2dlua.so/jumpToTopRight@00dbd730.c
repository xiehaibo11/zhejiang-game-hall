
/* cocos2d::ui::ScrollView::jumpToTopRight() */

void __thiscall cocos2d::ui::ScrollView::jumpToTopRight(ScrollView *this)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x7c0) == 3) {
    fVar6 = *(float *)(this + 0x80);
                    /* catch() { ... } // from try @ 00dbd7a4 with catch @ 00dbd76c */
    pfVar2 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0x168))();
    fVar4 = *pfVar2;
    fVar7 = *(float *)(this + 0x84);
    lVar3 = (**(code **)(**(long **)(this + 0x7b8) + 0x168))(*(long **)(this + 0x7b8));
    fVar5 = *(float *)(lVar3 + 4);
                    /* try { // try from 00dbd79c to 00ebd7a3 has its CatchHandler @ 00dbd7b8 */
    this[0x81d] = (ScrollView)0x0;
                    /* try { // try from 00dbd7a4 to 00ebd7d3 has its CatchHandler @ 00dbd76c */
    pfVar2 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))(*(long **)(this + 0x7b8));
                    /* catch() { ... } // from try @ 00dbd79c with catch @ 00dbd7b8 */
    local_40 = (fVar6 - fVar4) - *pfVar2;
    fStack_3c = (fVar7 - fVar5) - pfVar2[1];
    (**(code **)(*(long *)this + 0x7c0))(this,&local_40,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

