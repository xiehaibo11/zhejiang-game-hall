
/* fairygui::GLabel::setProp(fairygui::ObjectPropID, cocos2d::Value const&) */

void __thiscall fairygui::GLabel::setProp(GLabel *this,undefined8 param_2,Value *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  GTextField *this_00;
  long lVar5;
  GButton *this_01;
  long lVar6;
  undefined2 local_68;
  undefined1 local_66;
  undefined2 local_60;
  undefined1 local_5e;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar3 = (int)param_2;
                    /* catch() { ... } // from try @ 00a76eec with catch @ 00a76f84 */
                    /* catch() { ... } // from try @ 00a76f04 with catch @ 00a76f88 */
  if (iVar3 == 8) {
    iVar3 = cocos2d::Value::asInt(param_3);
    setTitleFontSize(this,iVar3);
  }
  else if (iVar3 == 3) {
    lVar6 = *(long *)(this + 0x280);
    while (lVar6 != 0) {
      this_00 = (GTextField *)__dynamic_cast(lVar6,&GObject::typeinfo,&GTextField::typeinfo,0);
      if (this_00 != (GTextField *)0x0) {
LAB_00a770a0:
        if (this_00 != (GTextField *)0x0) {
          uVar2 = cocos2d::Value::asUnsignedInt(param_3);
          uVar4 = ToolSet::intToColor(uVar2);
          local_68 = (undefined2)uVar4;
                    /* try { // try from 00a770c0 to 00b77113 has its CatchHandler @ 00a770c0
                       catch() { ... } // from try @ 00a770c0 with catch @ 00a770c0
                       catch() { ... } // from try @ 00a771b8 with catch @ 00a770c0
                       catch() { ... } // from try @ 00a77218 with catch @ 00a770c0 */
          local_66 = (undefined1)((ulong)uVar4 >> 0x10);
          GTextField::setOutlineColor(this_00,(Color3B *)&local_68);
        }
        break;
      }
      lVar5 = __dynamic_cast(lVar6,&GObject::typeinfo,&typeinfo,0);
      if (lVar5 == 0) {
        this_01 = (GButton *)__dynamic_cast(lVar6,&GObject::typeinfo,&GButton::typeinfo,0);
        if (this_01 != (GButton *)0x0) {
          this_00 = (GTextField *)GButton::getTextField(this_01);
          goto LAB_00a770a0;
        }
        break;
      }
      lVar6 = *(long *)(lVar5 + 0x280);
    }
  }
  else if (iVar3 == 2) {
    uVar2 = cocos2d::Value::asUnsignedInt(param_3);
    uVar4 = ToolSet::intToColor(uVar2);
    local_60 = (undefined2)uVar4;
    local_5e = (undefined1)((ulong)uVar4 >> 0x10);
                    /* catch() { ... } // from try @ 00a76eb8 with catch @ 00a76fb8 */
    setTitleColor(this,(Color3B *)&local_60);
  }
  else {
    GObject::setProp(this,param_2,param_3);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

