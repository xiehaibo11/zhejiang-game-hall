
/* cocos2d::ui::TabControl::initAfterInsert(int) */

void __thiscall cocos2d::ui::TabControl::initAfterInsert(TabControl *this,int param_1)

{
  Widget *this_00;
  long *plVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00df1bb0 to 00ef1bdf has its CatchHandler @ 00df1bb0
                       catch() { ... } // from try @ 00df1bb0 with catch @ 00df1bb0
                       catch() { ... } // from try @ 00df1c00 with catch @ 00df1bb0 */
  lVar5 = *(long *)(this + 0x558) - *(long *)(this + 0x550);
  if ((ulong)(lVar5 >> 3) <= (ulong)(long)param_1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00df1dd8 to 00ef1ddf has its CatchHandler @ 00df1ee8 */
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
  }
  puVar7 = *(undefined8 **)(*(long *)(this + 0x550) + (long)param_1 * 8);
  this_00 = (Widget *)*puVar7;
  plVar1 = (long *)puVar7[1];
  if (lVar5 == 8) {
                    /* try { // try from 00df1be0 to 00ef1beb has its CatchHandler @ 00df1c20 */
    dispatchSelectedTabChanged(this,0,0);
  }
  else if (puVar7 != (undefined8 *)0x0) {
                    /* try { // try from 00df1bf4 to 00ef1bff has its CatchHandler @ 00df1c10 */
                    /* try { // try from 00df1c00 to 00ef1c33 has its CatchHandler @ 00df1bb0 */
    (**(code **)(*(long *)this_00 + 0x18))(this_00,0xfffffffe);
                    /* catch() { ... } // from try @ 00df1bf4 with catch @ 00df1c10 */
    (**(code **)(*(long *)*puVar7 + 0x80))(0x3f800000);
                    /* catch() { ... } // from try @ 00df1be0 with catch @ 00df1c20 */
    (**(code **)(*(long *)*puVar7 + 0x680))((long *)*puVar7,0);
                    /* try { // try from 00df1c34 to 00ef1dd7 has its CatchHandler @ 00df1c34
                       catch() { ... } // from try @ 00df1c34 with catch @ 00df1c34
                       catch() { ... } // from try @ 00df1de0 with catch @ 00df1c34 */
    (**(code **)(*(long *)puVar7[1] + 0x170))((long *)puVar7[1],0);
    this[0x310] = (TabControl)0x1;
  }
  Size::Size((Size *)&local_50,(float)*(int *)(this + 0x52c),(float)*(int *)(this + 0x528));
  (**(code **)(*(long *)this_00 + 0x160))(this_00,&local_50);
  uVar2 = *(int *)(this + 0x530) - 1;
  if (uVar2 < 3) {
    uVar6 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
    uStack_4c = *(undefined4 *)(&DAT_01420920 + uVar6);
    local_50 = *(undefined4 *)(&DAT_0142092c + uVar6);
  }
  else {
    local_50 = 0x3f000000;
    uStack_4c = 0;
  }
  (**(code **)(*(long *)this_00 + 0x148))(this_00,&local_50);
  bVar4 = Widget::isIgnoreContentAdaptWithSize(this_00);
  if ((TabControl)(bVar4 & 1) == this[0x548]) {
    (**(code **)(*(long *)this_00 + 0x600))(this_00,this[0x548] == (TabControl)0x0);
    if (this[0x548] != (TabControl)0x0) {
      Size::Size((Size *)&local_50,(float)*(int *)(this + 0x52c),(float)*(int *)(this + 0x528));
      (**(code **)(*(long *)this_00 + 0x160))(this_00,&local_50);
    }
    AbstractCheckButton::backGroundDisabledTextureScaleChangedWithSize
              ((AbstractCheckButton *)this_00);
    AbstractCheckButton::backGroundSelectedTextureScaleChangedWithSize
              ((AbstractCheckButton *)this_00);
    AbstractCheckButton::backGroundDisabledTextureScaleChangedWithSize
              ((AbstractCheckButton *)this_00);
    AbstractCheckButton::frontCrossTextureScaleChangedWithSize((AbstractCheckButton *)this_00);
    AbstractCheckButton::frontCrossDisabledTextureScaleChangedWithSize
              ((AbstractCheckButton *)this_00);
  }
  initTabHeadersPos(this,param_1);
  uVar6 = Size::equals((Size *)(this + 0x53c),(Size *)&Size::ZERO);
  if ((uVar6 & 1) == 0) {
    (**(code **)(*plVar1 + 0x98))(plVar1,this + 0x534);
    (**(code **)(*plVar1 + 0x160))(plVar1,(Size *)(this + 0x53c));
  }
  else {
    initContainers(this);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

