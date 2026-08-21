
/* cocos2d::ui::RadioButtonGroup::removeAllRadioButtons() */

void __thiscall cocos2d::ui::RadioButtonGroup::removeAllRadioButtons(RadioButtonGroup *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 0x4f0);
  if (puVar1 != *(undefined8 **)(this + 0x4f8)) {
    do {
      (**(code **)(*(long *)this + 0x6b0))(this,*puVar1);
      puVar1 = *(undefined8 **)(this + 0x4f0);
    } while (puVar1 != *(undefined8 **)(this + 0x4f8));
  }
  return;
}

