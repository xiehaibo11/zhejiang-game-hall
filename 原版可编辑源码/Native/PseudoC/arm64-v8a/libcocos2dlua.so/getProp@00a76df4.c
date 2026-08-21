
/* fairygui::GLabel::getProp(fairygui::ObjectPropID) */

void fairygui::GLabel::getProp(Value *param_1,GLabel *param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar6;
  long lVar7;
  GButton *this;
  long lVar8;
  undefined2 local_58;
  undefined1 local_56;
  undefined2 local_50;
  undefined1 local_4e;
  long local_48;
  Color3B *pCVar5;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_3 == 8) {
                    /* try { // try from 00a76eb8 to 00b76eeb has its CatchHandler @ 00a76fb8 */
    iVar3 = getTitleFontSize(param_2);
    cocos2d::Value::Value(param_1,iVar3);
  }
  else if (param_3 == 3) {
    lVar8 = *(long *)(param_2 + 0x280);
    while (lVar8 != 0) {
      plVar6 = (long *)__dynamic_cast(lVar8,&GObject::typeinfo,&GTextField::typeinfo,0);
      if (plVar6 != (long *)0x0) {
LAB_00a76efc:
        if (plVar6 != (long *)0x0) {
                    /* try { // try from 00a76f04 to 00b76f37 has its CatchHandler @ 00a76f88 */
          lVar8 = (**(code **)(*plVar6 + 0xd0))();
          local_56 = *(undefined1 *)(lVar8 + 0x3a);
          local_58 = *(undefined2 *)(lVar8 + 0x38);
          pCVar5 = (Color3B *)&local_58;
          goto LAB_00a76e48;
        }
        break;
      }
      lVar7 = __dynamic_cast(lVar8,&GObject::typeinfo,&typeinfo,0);
      if (lVar7 == 0) {
                    /* try { // try from 00a76eec to 00b76eff has its CatchHandler @ 00a76f84 */
        this = (GButton *)__dynamic_cast(lVar8,&GObject::typeinfo,&GButton::typeinfo,0);
        if (this != (GButton *)0x0) {
          plVar6 = (long *)GButton::getTextField(this);
          goto LAB_00a76efc;
        }
        break;
      }
      lVar8 = *(long *)(lVar7 + 0x280);
    }
    cocos2d::Value::Value(param_1,(Value *)&cocos2d::Value::Null);
  }
  else if (param_3 == 2) {
    uVar4 = getTitleColor(param_2);
    local_50 = (undefined2)uVar4;
    local_4e = (undefined1)((ulong)uVar4 >> 0x10);
    pCVar5 = (Color3B *)&local_50;
LAB_00a76e48:
    uVar2 = ToolSet::colorToInt(pCVar5);
    cocos2d::Value::Value(param_1,uVar2);
  }
  else {
    GObject::getProp(param_1);
  }
                    /* try { // try from 00a76f38 to 00b76fd3 has its CatchHandler @ 00a76d58 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

