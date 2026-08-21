
/* cocos2d::ui::LoadingBar::setupTexture() */

void __thiscall cocos2d::ui::LoadingBar::setupTexture(LoadingBar *this)

{
  LoadingBar LVar1;
  long lVar2;
  Size *pSVar3;
  Sprite *this_00;
  long *plVar4;
  bool bVar5;
  float fVar6;
  undefined8 local_48;
  float local_40 [2];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pSVar3 = (Size *)(**(code **)(**(long **)(this + 0x500) + 0x168))();
  Size::operator=((Size *)(this + 0x50c),pSVar3);
                    /* try { // try from 00dcab94 to 00ecad0f has its CatchHandler @ 00dcab94
                       catch() { ... } // from try @ 00dcab94 with catch @ 00dcab94
                       catch() { ... } // from try @ 00dcad18 with catch @ 00dcab94 */
  Rect::operator=((Rect *)(this + 0x514),(Rect *)(*(long *)(this + 0x500) + 0x408));
  if (*(int *)(this + 0x4f0) == 0) {
    local_48 = 0x3f00000000000000;
LAB_00dcabbc:
    (**(code **)(**(long **)(this + 0x500) + 0x148))(*(long **)(this + 0x500),&local_48);
    LVar1 = this[0x524];
    if (*(int *)(this + 0x4f0) != 0) goto joined_r0x00dcabe0;
    if (LVar1 != (LoadingBar)0x0) goto LAB_00dcac0c;
    this_00 = *(Sprite **)(this + 0x500);
    bVar5 = false;
  }
  else {
    if (*(int *)(this + 0x4f0) == 1) {
      local_48 = 0x3f0000003f800000;
      goto LAB_00dcabbc;
    }
    LVar1 = this[0x524];
joined_r0x00dcabe0:
    if (LVar1 != (LoadingBar)0x0) goto LAB_00dcac0c;
    this_00 = *(Sprite **)(this + 0x500);
    bVar5 = true;
  }
  Sprite::setFlippedX(this_00,bVar5);
LAB_00dcac0c:
  Scale9Sprite::setCapInsets(*(Scale9Sprite **)(this + 0x500),this + 0x528);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  barRendererScaleChangedWithSize(this);
  Widget::updateContentSizeWithTextureSize((Size *)this);
  fVar6 = *(float *)(this + 0x4f4);
  if (this[0x524] == (LoadingBar)0x0) {
    Rect::Rect((Rect *)&local_48,(Rect *)(*(long *)(this + 0x500) + 0x408));
    local_40[0] = (fVar6 / 100.0) * *(float *)(this + 0x50c);
    plVar4 = *(long **)(this + 0x500);
    (**(code **)(*plVar4 + 0x560))(plVar4,&local_48,(char)plVar4[0x83],local_40);
  }
  else {
    pSVar3 = *(Size **)(this + 0x500);
    Size::Size((Size *)&local_48,(fVar6 / 100.0) * *(float *)(this + 0x4f8),*(float *)(this + 0x84))
    ;
    Scale9Sprite::setPreferredSize(pSVar3);
  }
  this[0x538] = (LoadingBar)0x1;
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

