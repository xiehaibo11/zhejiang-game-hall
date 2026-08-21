
/* cocos2d::ui::ScrollView::addEventListenerScrollView(cocos2d::Ref*, void
   (cocos2d::Ref::*)(cocos2d::Ref*, cocos2d::ui::ScrollviewEventType)) */

void cocos2d::ui::ScrollView::addEventListenerScrollView
               (Ref *param_1,_func_void_Ref_ptr_ScrollviewEventType *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  *(_func_void_Ref_ptr_ScrollviewEventType **)(param_1 + 0x868) = param_2;
  *(undefined8 *)(param_1 + 0x870) = in_x2;
  *(undefined8 *)(param_1 + 0x878) = in_x3;
  return;
}

