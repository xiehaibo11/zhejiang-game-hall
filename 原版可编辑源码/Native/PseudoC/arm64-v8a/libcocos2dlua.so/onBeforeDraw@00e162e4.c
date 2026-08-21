
/* cocos2d::extension::ScrollView::onBeforeDraw() */

void __thiscall cocos2d::extension::ScrollView::onBeforeDraw(ScrollView *this)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  GLView *this_00;
  float fVar5;
  float fVar6;
  Rect aRStack_58 [16];
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  long local_38;
  
                    /* try { // try from 00e162f4 to 00f162fb has its CatchHandler @ 00e163d4 */
  lVar1 = tpidr_el0;
                    /* try { // try from 00e162fc to 00f163f3 has its CatchHandler @ 00e16178 */
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x35d] != (ScrollView)0x0) {
    this[0x3b0] = (ScrollView)0x0;
    getViewRect();
    lVar2 = Director::getInstance();
    this_00 = *(GLView **)(lVar2 + 0x108);
    lVar2 = GLView::getVR(this_00);
    if (lVar2 == 0) {
      uVar3 = (**(code **)(*(long *)this_00 + 0xe0))(this_00);
      if ((uVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 00e16214 with catch @ 00e163e0 */
        glEnable(0xc11);
        pcVar4 = *(code **)(*(long *)this_00 + 0xd8);
      }
      else {
        this[0x3b0] = (ScrollView)0x1;
        (**(code **)(*(long *)this_00 + 0xe8))(aRStack_58,this_00);
        Rect::operator=((Rect *)(this + 0x3a0),aRStack_58);
        uVar3 = Rect::intersectsRect((Rect *)&local_48,(Rect *)(this + 0x3a0));
        if ((uVar3 & 1) == 0) goto LAB_00e163fc;
        fVar5 = *(float *)(this + 0x3a0);
        fVar6 = *(float *)(this + 0x3a4);
        local_40 = local_48 + local_40;
        if (local_48 <= fVar5) {
          local_48 = fVar5;
        }
        fStack_3c = fStack_44 + fStack_3c;
        pcVar4 = *(code **)(*(long *)this_00 + 0xd8);
        if (fStack_44 <= fVar6) {
          fStack_44 = fVar6;
        }
        if (fVar5 + *(float *)(this + 0x3a8) <= local_40) {
          local_40 = fVar5 + *(float *)(this + 0x3a8);
        }
        if (fVar6 + *(float *)(this + 0x3ac) <= fStack_3c) {
          fStack_3c = fVar6 + *(float *)(this + 0x3ac);
        }
        local_40 = local_40 - local_48;
                    /* catch() { ... } // from try @ 00e162f4 with catch @ 00e163d4 */
        fStack_3c = fStack_3c - fStack_44;
      }
      (*pcVar4)(local_48,fStack_44,local_40,fStack_3c,this_00);
    }
  }
LAB_00e163fc:
                    /* catch() { ... } // from try @ 00e16468 with catch @ 00e163fc */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

