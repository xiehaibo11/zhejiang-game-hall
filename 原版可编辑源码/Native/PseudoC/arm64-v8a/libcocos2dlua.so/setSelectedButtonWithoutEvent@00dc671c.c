
/* cocos2d::ui::RadioButtonGroup::setSelectedButtonWithoutEvent(cocos2d::ui::RadioButton*) */

void __thiscall
cocos2d::ui::RadioButtonGroup::setSelectedButtonWithoutEvent
          (RadioButtonGroup *this,RadioButton *param_1)

{
  undefined8 *puVar1;
  RadioButton *pRVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (((param_1 != (RadioButton *)0x0) || (this[0x548] != (RadioButtonGroup)0x0)) &&
     (pRVar2 = *(RadioButton **)(this + 0x540), pRVar2 != param_1)) {
    if (param_1 == (RadioButton *)0x0) {
      if (pRVar2 != (RadioButton *)0x0) {
        (**(code **)(*(long *)pRVar2 + 0x680))(pRVar2,0);
        (**(code **)(**(long **)(this + 0x540) + 0x6b8))(*(long **)(this + 0x540),0);
      }
      *(undefined8 *)(this + 0x540) = 0;
    }
    else {
      puVar4 = *(undefined8 **)(this + 0x4f0);
      puVar3 = *(undefined8 **)(this + 0x4f8);
      if ((puVar4 != puVar3) && ((RadioButton *)*puVar4 != param_1)) {
        do {
          if (puVar3 + -1 == puVar4) {
            return;
          }
          puVar1 = puVar4 + 1;
          puVar4 = puVar4 + 1;
        } while ((RadioButton *)*puVar1 != param_1);
      }
      if (puVar4 != puVar3) {
        if (pRVar2 != (RadioButton *)0x0) {
          (**(code **)(*(long *)pRVar2 + 0x680))(pRVar2,0);
          (**(code **)(**(long **)(this + 0x540) + 0x6b8))(*(long **)(this + 0x540),0);
        }
        *(RadioButton **)(this + 0x540) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00dc67d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)param_1 + 0x680))(param_1,1);
        return;
      }
    }
  }
  return;
}

