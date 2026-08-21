
/* cocos2d::extension::TableView::onTouchCancelled(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::extension::TableView::onTouchCancelled(Touch *param_1,Event *param_2)

{
  long *plVar1;
  
  ScrollView::onTouchCancelled(param_1,param_2);
  if (*(long *)(param_1 + 0x470) != 0) {
    plVar1 = *(long **)(param_1 + 0x4d8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,param_1);
    }
    *(undefined8 *)(param_1 + 0x470) = 0;
  }
  return;
}

