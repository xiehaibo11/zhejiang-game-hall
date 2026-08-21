
/* fairygui::GComponent::handleSizeChanged() */

void __thiscall fairygui::GComponent::handleSizeChanged(GComponent *this)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  FUIContainer *this_00;
  undefined4 uVar5;
  float fVar6;
  Rect aRStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  GObject::handleSizeChanged((GObject *)this);
  if (*(ScrollPane **)(this + 0x230) == (ScrollPane *)0x0) {
    plVar2 = *(long **)(this + 0x228);
    uVar5 = *(undefined4 *)(this + 0x238);
    fVar6 = *(float *)(this + 0x23c);
                    /* try { // try from 00a72e50 to 00b72e53 has its CatchHandler @ 00a72e88 */
    lVar4 = (**(code **)(*(long *)plVar2[0x32] + 0x168))();
                    /* try { // try from 00a72e54 to 00b72e9b has its CatchHandler @ 00a72e04 */
    (**(code **)(*plVar2 + 200))(uVar5,*(float *)(lVar4 + 4) - fVar6,plVar2);
    plVar2 = *(long **)(this + 0x260);
  }
  else {
    ScrollPane::onOwnerSizeChanged(*(ScrollPane **)(this + 0x230));
    plVar2 = *(long **)(this + 0x260);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x70))();
  }
  uVar3 = FUIContainer::isClippingEnabled(*(FUIContainer **)(this + 0xa8));
  if ((uVar3 & 1) != 0) {
    this_00 = *(FUIContainer **)(this + 0xa8);
    cocos2d::Rect::Rect(aRStack_58,*(float *)(this + 0x238),*(float *)(this + 0x23c),
                        (*(float *)(this + 200) - *(float *)(this + 0x238)) -
                        *(float *)(this + 0x240),
                        (*(float *)(this + 0xcc) - *(float *)(this + 0x23c)) -
                        *(float *)(this + 0x244));
    FUIContainer::setClippingRegion(this_00,aRStack_58);
  }
  if (*(long *)(this + 0x268) != 0) {
    lVar4 = __dynamic_cast(*(long *)(this + 0x268),&IHitTest::typeinfo,&PixelHitTest::typeinfo,0);
    if (*(float *)(this + 0x78) != 0.0) {
      *(float *)(lVar4 + 0x10) = *(float *)(this + 200) / *(float *)(this + 0x78);
    }
    if (*(float *)(this + 0x7c) != 0.0) {
                    /* try { // try from 00a72e04 to 00b72e4f has its CatchHandler @ 00a72e04
                       catch() { ... } // from try @ 00a72e04 with catch @ 00a72e04
                       catch() { ... } // from try @ 00a72e54 with catch @ 00a72e04 */
      *(float *)(lVar4 + 0x14) = *(float *)(this + 0xcc) / *(float *)(this + 0x7c);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

