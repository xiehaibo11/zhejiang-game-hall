
/* cocos2d::ui::Slider::addEventListenerSlider(cocos2d::Ref*, void (cocos2d::Ref::*)(cocos2d::Ref*,
   cocos2d::ui::SliderEventType)) */

void cocos2d::ui::Slider::addEventListenerSlider
               (Ref *param_1,_func_void_Ref_ptr_SliderEventType *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  *(_func_void_Ref_ptr_SliderEventType **)(param_1 + 0x590) = param_2;
  *(undefined8 *)(param_1 + 0x598) = in_x2;
  *(undefined8 *)(param_1 + 0x5a0) = in_x3;
  return;
}

