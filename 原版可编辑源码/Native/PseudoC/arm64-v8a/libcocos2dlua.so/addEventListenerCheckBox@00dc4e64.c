
/* cocos2d::ui::CheckBox::addEventListenerCheckBox(cocos2d::Ref*, void
   (cocos2d::Ref::*)(cocos2d::Ref*, cocos2d::ui::CheckBoxEventType)) */

void cocos2d::ui::CheckBox::addEventListenerCheckBox
               (Ref *param_1,_func_void_Ref_ptr_CheckBoxEventType *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  *(_func_void_Ref_ptr_CheckBoxEventType **)(param_1 + 0x5c0) = param_2;
  *(undefined8 *)(param_1 + 0x5c8) = in_x2;
  *(undefined8 *)(param_1 + 0x5d0) = in_x3;
  return;
}

