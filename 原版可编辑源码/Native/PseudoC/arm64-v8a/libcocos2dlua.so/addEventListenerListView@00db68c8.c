
/* cocos2d::ui::ListView::addEventListenerListView(cocos2d::Ref*, void
   (cocos2d::Ref::*)(cocos2d::Ref*, cocos2d::ui::ListViewEventType)) */

void cocos2d::ui::ListView::addEventListenerListView
               (Ref *param_1,_func_void_Ref_ptr_ListViewEventType *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  *(_func_void_Ref_ptr_ListViewEventType **)(param_1 + 0x908) = param_2;
  *(undefined8 *)(param_1 + 0x910) = in_x2;
  *(undefined8 *)(param_1 + 0x918) = in_x3;
  return;
}

