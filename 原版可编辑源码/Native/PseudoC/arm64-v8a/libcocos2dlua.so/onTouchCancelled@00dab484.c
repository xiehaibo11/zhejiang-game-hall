
/* cocos2d::ui::Widget::onTouchCancelled(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::ui::Widget::onTouchCancelled(Touch *param_1,Event *param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  
  if (((param_1[0x388] != (Touch)0x0) &&
      (lVar1 = (**(code **)(*(long *)param_1 + 0x260))(param_1), lVar1 != 0)) &&
     (plVar2 = (long *)__dynamic_cast(lVar1,&Node::typeinfo,&typeinfo,0), plVar2 != (long *)0x0)) {
    plVar2[0x77] = *(long *)(param_1 + 0x3b8);
    (**(code **)(*plVar2 + 0x620))(plVar2,3,param_1,param_2);
    plVar2[0x77] = 0;
  }
  if (param_1[0x385] != (Touch)0x0) {
    param_1[0x385] = (Touch)0x0;
    if (param_1[899] == (Touch)0x0) {
      pcVar3 = *(code **)(*(long *)param_1 + 0x648);
    }
    else {
      if (*(int *)(param_1 + 0x38c) == 0) goto LAB_00dab538;
      *(undefined4 *)(param_1 + 0x38c) = 0;
      pcVar3 = *(code **)(*(long *)param_1 + 0x638);
    }
    (*pcVar3)(param_1);
  }
LAB_00dab538:
                    /* WARNING: Could not recover jumptable at 0x00dab550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x658))(param_1);
  return;
}

