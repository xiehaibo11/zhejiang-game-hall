
/* cocos2d::ui::TextField::addEventListenerTextField(cocos2d::Ref*, void
   (cocos2d::Ref::*)(cocos2d::Ref*, cocos2d::ui::TextFiledEventType)) */

void cocos2d::ui::TextField::addEventListenerTextField
               (Ref *param_1,_func_void_Ref_ptr_TextFiledEventType *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  *(_func_void_Ref_ptr_TextFiledEventType **)(param_1 + 0x508) = param_2;
  *(undefined8 *)(param_1 + 0x510) = in_x2;
  *(undefined8 *)(param_1 + 0x518) = in_x3;
  return;
}

