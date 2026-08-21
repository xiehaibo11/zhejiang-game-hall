
/* fairygui::GComboBox::setProp(fairygui::ObjectPropID, cocos2d::Value const&) */

void __thiscall fairygui::GComboBox::setProp(GComboBox *this,undefined8 param_2,Value *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  GTextField *pGVar5;
  undefined2 local_48;
  undefined1 local_46;
  undefined2 local_40;
  undefined1 local_3e;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar3 = (int)param_2;
  if (iVar3 == 8) {
    iVar3 = cocos2d::Value::asInt(param_3);
    pGVar5 = (GTextField *)getTextField(this);
    if (pGVar5 != (GTextField *)0x0) {
      GTextField::setFontSize(pGVar5,(float)iVar3);
    }
  }
  else if (iVar3 == 3) {
    pGVar5 = (GTextField *)getTextField(this);
    if (pGVar5 != (GTextField *)0x0) {
                    /* catch() { ... } // from try @ 00a6ef50 with catch @ 00a6f050 */
      uVar2 = cocos2d::Value::asUnsignedInt(param_3);
      uVar4 = ToolSet::intToColor(uVar2);
      local_48 = (undefined2)uVar4;
      local_46 = (undefined1)((ulong)uVar4 >> 0x10);
      GTextField::setOutlineColor(pGVar5,(Color3B *)&local_48);
    }
  }
  else if (iVar3 == 2) {
    uVar2 = cocos2d::Value::asUnsignedInt(param_3);
                    /* catch() { ... } // from try @ 00a6ef84 with catch @ 00a6f01c */
    uVar4 = ToolSet::intToColor(uVar2);
                    /* catch() { ... } // from try @ 00a6ef9c with catch @ 00a6f020 */
    local_40 = (undefined2)uVar4;
    local_3e = (undefined1)((ulong)uVar4 >> 0x10);
    pGVar5 = (GTextField *)getTextField(this);
    if (pGVar5 != (GTextField *)0x0) {
      GTextField::setColor(pGVar5,(Color3B *)&local_40);
    }
  }
  else {
    GObject::setProp(this,param_2,param_3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

