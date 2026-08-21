
/* cocos2d::ui::PageView::addEventListenerPageView(cocos2d::Ref*, void
   (cocos2d::Ref::*)(cocos2d::Ref*, cocos2d::ui::PageViewEventType)) */

void cocos2d::ui::PageView::addEventListenerPageView
               (Ref *param_1,_func_void_Ref_ptr_PageViewEventType *param_2)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  code *pcVar2;
  undefined **local_60;
  Ref *pRStack_58;
  long *local_40;
  long local_28;
  
  local_40 = (long *)&local_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(_func_void_Ref_ptr_PageViewEventType **)(param_1 + 0x970) = param_2;
  *(undefined8 *)(param_1 + 0x978) = in_x2;
  *(undefined8 *)(param_1 + 0x980) = in_x3;
  local_60 = &PTR_FUN_016dac38;
  pRStack_58 = param_1;
  (**(code **)(*(long *)param_1 + 0x7a0))(param_1,&local_60);
  if (&local_60 == (undefined ***)local_40) {
    pcVar2 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00db9150;
    pcVar2 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar2)();
LAB_00db9150:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

