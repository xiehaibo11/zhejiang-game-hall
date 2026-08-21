
/* fairygui::GComboBox::getProp(fairygui::ObjectPropID) */

void fairygui::GComboBox::getProp(Value *param_1,GComboBox *param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  int iVar6;
  undefined2 *puVar7;
  undefined2 local_38;
  undefined1 local_36;
  undefined2 local_30;
  undefined1 local_2e;
  long local_28;
  Color3B *pCVar5;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_3 == 8) {
    plVar3 = (long *)getTextField(param_2);
    if (plVar3 == (long *)0x0) {
      iVar6 = 0;
    }
    else {
      lVar4 = (**(code **)(*plVar3 + 0xd0))();
      iVar6 = (int)*(float *)(lVar4 + 0x18);
                    /* try { // try from 00a6ef50 to 00b6ef83 has its CatchHandler @ 00a6f050 */
    }
    cocos2d::Value::Value(param_1,iVar6);
  }
  else {
    if (param_3 == 3) {
      plVar3 = (long *)getTextField(param_2);
      if (plVar3 == (long *)0x0) {
        cocos2d::Value::Value(param_1,(Value *)&cocos2d::Value::Null);
        goto LAB_00a6efb0;
      }
      lVar4 = (**(code **)(*plVar3 + 0xd0))();
      local_36 = *(undefined1 *)(lVar4 + 0x3a);
      local_38 = *(undefined2 *)(lVar4 + 0x38);
      pCVar5 = (Color3B *)&local_38;
    }
    else {
      if (param_3 != 2) {
        GObject::getProp(param_1);
        goto LAB_00a6efb0;
      }
      plVar3 = (long *)getTextField(param_2);
      if (plVar3 == (long *)0x0) {
                    /* try { // try from 00a6ef84 to 00b6ef97 has its CatchHandler @ 00a6f01c */
        puVar7 = &cocos2d::Color3B::BLACK;
      }
      else {
        lVar4 = (**(code **)(*plVar3 + 0xd0))();
        puVar7 = (undefined2 *)(lVar4 + 0x1c);
      }
      local_2e = *(undefined1 *)(puVar7 + 1);
      local_30 = *puVar7;
      pCVar5 = (Color3B *)&local_30;
                    /* try { // try from 00a6ef9c to 00b6efcf has its CatchHandler @ 00a6f020 */
    }
    uVar2 = ToolSet::colorToInt(pCVar5);
    cocos2d::Value::Value(param_1,uVar2);
  }
LAB_00a6efb0:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a6efd0 to 00b6f06b has its CatchHandler @ 00a6ead8 */
  __stack_chk_fail();
}

