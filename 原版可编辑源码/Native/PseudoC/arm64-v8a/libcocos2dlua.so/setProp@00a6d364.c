
/* fairygui::GButton::setProp(fairygui::ObjectPropID, cocos2d::Value const&) */

void __thiscall fairygui::GButton::setProp(GButton *this,undefined8 param_2,Value *param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  GTextField *this_00;
  GLabel *this_01;
  undefined8 uVar5;
  long lVar6;
  undefined2 local_68;
  undefined1 local_66;
  undefined2 local_60;
  undefined1 local_5e;
  long local_58;
  
                    /* try { // try from 00a6d37c to 00b6d3af has its CatchHandler @ 00a6d284 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a6d3b0 to 00b6d3c3 has its CatchHandler @ 00a6d41c */
  switch((int)param_2) {
  case 2:
    uVar4 = cocos2d::Value::asUnsignedInt(param_3);
    uVar5 = ToolSet::intToColor(uVar4);
    local_60 = (undefined2)uVar5;
    local_5e = (undefined1)((ulong)uVar5 >> 0x10);
                    /* try { // try from 00a6d3c8 to 00b6d3db has its CatchHandler @ 00a6d420 */
    setTitleColor(this,(Color3B *)&local_60);
                    /* try { // try from 00a6d3dc to 00b6d43b has its CatchHandler @ 00a6d284 */
    break;
  case 3:
    lVar6 = *(long *)(this + 0x288);
    if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 00a6d320 with catch @ 00a6d420
                       catch() { ... } // from try @ 00a6d3c8 with catch @ 00a6d420 */
      while (this_00 = (GTextField *)
                       __dynamic_cast(lVar6,&GObject::typeinfo,&GTextField::typeinfo,0),
            this_00 == (GTextField *)0x0) {
                    /* try { // try from 00a6d43c to 00b6d48b has its CatchHandler @ 00a6d43c
                       catch() { ... } // from try @ 00a6d43c with catch @ 00a6d43c
                       catch() { ... } // from try @ 00a6d4c4 with catch @ 00a6d43c
                       catch() { ... } // from try @ 00a6d508 with catch @ 00a6d43c */
        this_01 = (GLabel *)__dynamic_cast(lVar6,&GObject::typeinfo,&GLabel::typeinfo,0);
        if (this_01 != (GLabel *)0x0) {
                    /* try { // try from 00a6d4c4 to 00b6d4f3 has its CatchHandler @ 00a6d43c */
          this_00 = (GTextField *)GLabel::getTextField(this_01);
          break;
        }
        lVar6 = __dynamic_cast(lVar6,&GObject::typeinfo,&typeinfo,0);
        if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x288), lVar6 == 0)) goto LAB_00a6d498;
      }
      if (this_00 != (GTextField *)0x0) {
        uVar4 = cocos2d::Value::asUnsignedInt(param_3);
        uVar5 = ToolSet::intToColor(uVar4);
        local_68 = (undefined2)uVar5;
        local_66 = (undefined1)((ulong)uVar5 >> 0x10);
        GTextField::setOutlineColor(this_00,(Color3B *)&local_68);
                    /* try { // try from 00a6d4f4 to 00b6d507 has its CatchHandler @ 00a6d548 */
      }
    }
    break;
  default:
                    /* try { // try from 00a6d48c to 00b6d4c3 has its CatchHandler @ 00a6d548 */
    GObject::setProp(this,param_2,param_3);
    break;
  case 8:
    iVar3 = cocos2d::Value::asInt(param_3);
    setTitleFontSize(this,iVar3);
    break;
  case 9:
    bVar2 = cocos2d::Value::asBool(param_3);
    setSelected(this,(bool)(bVar2 & 1));
  }
LAB_00a6d498:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

