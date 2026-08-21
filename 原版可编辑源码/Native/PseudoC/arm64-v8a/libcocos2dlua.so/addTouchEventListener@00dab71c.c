
/* cocos2d::ui::Widget::addTouchEventListener(cocos2d::Ref*, void (cocos2d::Ref::*)(cocos2d::Ref*,
   cocos2d::ui::TouchEventType)) */

void cocos2d::ui::Widget::addTouchEventListener
               (Ref *param_1,_func_void_Ref_ptr_TouchEventType *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  *(_func_void_Ref_ptr_TouchEventType **)(param_1 + 0x418) = param_2;
  *(undefined8 *)(param_1 + 0x420) = in_x2;
  *(undefined8 *)(param_1 + 0x428) = in_x3;
  return;
}

