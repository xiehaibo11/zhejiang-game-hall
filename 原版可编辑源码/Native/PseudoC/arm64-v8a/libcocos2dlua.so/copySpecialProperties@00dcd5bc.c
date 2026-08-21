
/* cocos2d::ui::Slider::copySpecialProperties(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::Slider::copySpecialProperties(Slider *this,Widget *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  Size *pSVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  long local_70 [4];
  long *local_50;
  long local_38;
  
                    /* try { // try from 00dcd5cc to 00ecd5d3 has its CatchHandler @ 00dcee54 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00dcd5ec to 00ecd63b has its CatchHandler @ 00dcef64 */
  if ((param_1 == (Widget *)0x0) ||
     (lVar3 = __dynamic_cast(param_1,&Widget::typeinfo,&typeinfo,0), lVar3 == 0)) goto LAB_00dcd8dc;
  this[0x55d] = *(Slider *)(lVar3 + 0x55d);
  setScale9Enabled(SUB81(this,0));
  Scale9Sprite::copyTo(*(Scale9Sprite **)(lVar3 + 0x4f0),*(Scale9Sprite **)(this + 0x4f0));
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
                    /* try { // try from 00dcd63c to 00ecd64b has its CatchHandler @ 00dcee50 */
  *(undefined2 *)(this + 0x5f4) = 0x101;
  (**(code **)(**(long **)(this + 0x4f0) + 0x168))();
  Widget::updateContentSizeWithTextureSize((Size *)this);
  pSVar4 = (Size *)(**(code **)(**(long **)(this + 0x4f0) + 0x168))();
  Size::operator=((Size *)(this + 0x500),pSVar4);
  Rect::operator=((Rect *)(this + 0x508),(Rect *)(*(long *)(this + 0x4f0) + 0x408));
  Scale9Sprite::copyTo(*(Scale9Sprite **)(lVar3 + 0x4f8),*(Scale9Sprite **)(this + 0x4f8));
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  local_70[0] = 0x3f00000000000000;
  (**(code **)(**(long **)(this + 0x4f8) + 0x148))(*(long **)(this + 0x4f8),local_70);
  pSVar4 = (Size *)(**(code **)(**(long **)(this + 0x4f8) + 0x168))();
  Size::operator=((Size *)(this + 0x518),pSVar4);
                    /* try { // try from 00dcd6d8 to 00ecd6df has its CatchHandler @ 00dcee40 */
  Rect::operator=((Rect *)(this + 0x520),(Rect *)(*(long *)(this + 0x4f8) + 0x408));
  this[0x5f5] = (Slider)0x1;
  uVar5 = (**(code **)(**(long **)(lVar3 + 0x530) + 0x5b0))();
  (**(code **)(**(long **)(this + 0x530) + 0x598))(*(long **)(this + 0x530),uVar5);
                    /* try { // try from 00dcd718 to 00ecd757 has its CatchHandler @ 00dcef54 */
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  uVar5 = (**(code **)(**(long **)(lVar3 + 0x538) + 0x5b0))();
  (**(code **)(**(long **)(this + 0x538) + 0x598))(*(long **)(this + 0x538),uVar5);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  uVar5 = (**(code **)(**(long **)(lVar3 + 0x540) + 0x5b0))();
                    /* try { // try from 00dcd764 to 00ecd76b has its CatchHandler @ 00dced70 */
                    /* try { // try from 00dcd76c to 00ecd777 has its CatchHandler @ 00dceda0 */
  (**(code **)(**(long **)(this + 0x540) + 0x598))(*(long **)(this + 0x540),uVar5);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
                    /* try { // try from 00dcd78c to 00ecd79b has its CatchHandler @ 00dcef54 */
  uVar1 = *(uint *)(this + 0x558);
  if ((int)*(uint *)(lVar3 + 0x554) <= (int)*(uint *)(this + 0x558)) {
    uVar1 = *(uint *)(lVar3 + 0x554);
  }
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  if (*(uint *)(this + 0x554) != uVar1) {
                    /* try { // try from 00dcd79c to 00ecd7ab has its CatchHandler @ 00dcee3c */
    *(uint *)(this + 0x554) = uVar1;
    updateVisualSlider(this);
    percentChangedEvent(this,0);
  }
  *(undefined4 *)(this + 0x558) = *(undefined4 *)(lVar3 + 0x558);
  this[0x56c] = *(Slider *)(lVar3 + 0x56c);
  this[0x56d] = *(Slider *)(lVar3 + 0x56d);
  uVar8 = *(undefined8 *)(lVar3 + 0x590);
  uVar5 = *(undefined8 *)(lVar3 + 0x5a0);
  *(undefined8 *)(this + 0x598) = *(undefined8 *)(lVar3 + 0x598);
  *(undefined8 *)(this + 0x590) = uVar8;
  *(undefined8 *)(this + 0x5a0) = uVar5;
  plVar6 = *(long **)(lVar3 + 0x5d0);
  if (plVar6 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)(lVar3 + 0x5b0) == plVar6) {
    local_50 = local_70;
    (**(code **)(*plVar6 + 0x18))(plVar6,local_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar6 + 0x10))();
  }
  FUN_00dcdca8(local_70,this + 0x5b0);
                    /* try { // try from 00dcd838 to 00ecd83f has its CatchHandler @ 00dcedec */
  if (local_70 == local_50) {
    pcVar7 = *(code **)(*local_50 + 0x20);
LAB_00dcd858:
    (*pcVar7)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar7 = *(code **)(*local_50 + 0x28);
    goto LAB_00dcd858;
  }
  plVar6 = *(long **)(lVar3 + 0x4b0);
  if (plVar6 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)(lVar3 + 0x490) == plVar6) {
    local_50 = local_70;
    (**(code **)(*plVar6 + 0x18))(plVar6,local_70);
  }
  else {
                    /* try { // try from 00dcd878 to 00ecd8b7 has its CatchHandler @ 00dcef44 */
    local_50 = (long *)(**(code **)(*plVar6 + 0x10))();
  }
  FUN_00dad59c(local_70,this + 0x490);
  if (local_70 == local_50) {
    pcVar7 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00dcd8dc;
                    /* try { // try from 00dcd8c4 to 00ecd8cb has its CatchHandler @ 00dced6c */
    pcVar7 = *(code **)(*local_50 + 0x28);
                    /* try { // try from 00dcd8cc to 00ecd8d7 has its CatchHandler @ 00dced9c */
  }
  (*pcVar7)();
LAB_00dcd8dc:
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00dcd8ec to 00ecd8fb has its CatchHandler @ 00dcef44 */
                    /* try { // try from 00dcd8fc to 00ecd90b has its CatchHandler @ 00dcede8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

