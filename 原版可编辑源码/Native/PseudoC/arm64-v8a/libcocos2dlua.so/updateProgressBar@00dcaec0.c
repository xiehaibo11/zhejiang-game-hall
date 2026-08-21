
/* cocos2d::ui::LoadingBar::updateProgressBar() */

void __thiscall cocos2d::ui::LoadingBar::updateProgressBar(LoadingBar *this)

{
  long lVar1;
  long *plVar2;
  Size *pSVar3;
  float fVar4;
  Size aSStack_48 [8];
  float local_40 [2];
  long local_38;
  
                    /* catch() { ... } // from try @ 00dcad10 with catch @ 00dcaecc */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00dcaf24 with catch @ 00dcaee8 */
  fVar4 = *(float *)(this + 0x4f4);
  if (this[0x524] == (LoadingBar)0x0) {
    Rect::Rect((Rect *)aSStack_48,(Rect *)(*(long *)(this + 0x500) + 0x408));
    local_40[0] = (fVar4 / 100.0) * *(float *)(this + 0x50c);
                    /* catch() { ... } // from try @ 00dcaf1c with catch @ 00dcaf50 */
    plVar2 = *(long **)(this + 0x500);
    (**(code **)(*plVar2 + 0x560))(plVar2,aSStack_48,(char)plVar2[0x83],local_40);
  }
  else {
    pSVar3 = *(Size **)(this + 0x500);
    Size::Size(aSStack_48,(fVar4 / 100.0) * *(float *)(this + 0x4f8),*(float *)(this + 0x84));
                    /* try { // try from 00dcaf1c to 00ecaf23 has its CatchHandler @ 00dcaf50 */
    Scale9Sprite::setPreferredSize(pSVar3);
                    /* try { // try from 00dcaf24 to 00ecaf6b has its CatchHandler @ 00dcaee8 */
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

