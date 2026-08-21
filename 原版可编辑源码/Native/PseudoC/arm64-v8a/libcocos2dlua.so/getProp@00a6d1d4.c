
/* fairygui::GButton::getProp(fairygui::ObjectPropID) */

void fairygui::GButton::getProp(Value *param_1,GButton *param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar6;
  GLabel *this;
  long lVar7;
  undefined2 local_68;
  undefined1 local_66;
  undefined2 local_60;
  undefined1 local_5e;
  long local_58;
  Color3B *pCVar5;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  switch(param_3) {
  case 2:
    uVar4 = getTitleColor(param_2);
    local_60 = (undefined2)uVar4;
    local_5e = (undefined1)((ulong)uVar4 >> 0x10);
    pCVar5 = (Color3B *)&local_60;
LAB_00a6d238:
    uVar2 = ToolSet::colorToInt(pCVar5);
    cocos2d::Value::Value(param_1,uVar2);
    break;
  case 3:
    lVar7 = *(long *)(param_2 + 0x288);
    if (lVar7 != 0) {
      while (plVar6 = (long *)__dynamic_cast(lVar7,&GObject::typeinfo,&GTextField::typeinfo,0),
            plVar6 == (long *)0x0) {
        this = (GLabel *)__dynamic_cast(lVar7,&GObject::typeinfo,&GLabel::typeinfo,0);
        if (this != (GLabel *)0x0) {
          plVar6 = (long *)GLabel::getTextField(this);
          break;
        }
        lVar7 = __dynamic_cast(lVar7,&GObject::typeinfo,&typeinfo,0);
        if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x288), lVar7 == 0)) goto LAB_00a6d324;
      }
      if (plVar6 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0xd0))();
        local_66 = *(undefined1 *)(lVar7 + 0x3a);
        local_68 = *(undefined2 *)(lVar7 + 0x38);
        pCVar5 = (Color3B *)&local_68;
                    /* try { // try from 00a6d320 to 00b6d37b has its CatchHandler @ 00a6d420 */
        goto LAB_00a6d238;
      }
    }
LAB_00a6d324:
    cocos2d::Value::Value(param_1,(Value *)&cocos2d::Value::Null);
    break;
  default:
    GObject::getProp(param_1);
    break;
  case 8:
    iVar3 = getTitleFontSize(param_2);
    cocos2d::Value::Value(param_1,iVar3);
    break;
  case 9:
    cocos2d::Value::Value(param_1,(bool)param_2[0x33c]);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

