
/* cocos2d::ui::RadioButtonGroup::setSelectedButton(cocos2d::ui::RadioButton*) */

void cocos2d::ui::RadioButtonGroup::setSelectedButton(RadioButton *param_1)

{
                    /* catch() { ... } // from try @ 00dc6278 with catch @ 00dc66d8
                       catch() { ... } // from try @ 00dc6300 with catch @ 00dc66d8 */
  (**(code **)(*(long *)param_1 + 0x6a0))();
  onChangedRadioButtonSelect((RadioButtonGroup *)param_1,*(RadioButton **)(param_1 + 0x540));
  return;
}

