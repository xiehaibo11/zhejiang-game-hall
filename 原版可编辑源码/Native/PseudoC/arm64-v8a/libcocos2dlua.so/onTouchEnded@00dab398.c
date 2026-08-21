
/* cocos2d::ui::Widget::onTouchEnded(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::ui::Widget::onTouchEnded(Touch *param_1,Event *param_2)

{
  long lVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar3;
  undefined4 in_s1;
  
                    /* catch() { ... } // from try @ 00dab340 with catch @ 00dab3ac */
  uVar3 = Touch::getLocation((Touch *)param_2);
  *(undefined4 *)(param_1 + 0x3d8) = uVar3;
  *(undefined4 *)(param_1 + 0x3dc) = in_s1;
  if (((param_1[0x388] != (Touch)0x0) &&
      (lVar1 = (**(code **)(*(long *)param_1 + 0x260))(param_1), lVar1 != 0)) &&
     (plVar2 = (long *)__dynamic_cast(lVar1,&Node::typeinfo,&typeinfo,0), plVar2 != (long *)0x0)) {
    plVar2[0x77] = *(long *)(param_1 + 0x3b8);
    (**(code **)(*plVar2 + 0x620))(plVar2,2,param_1,param_2);
    plVar2[0x77] = 0;
  }
  if (param_1[0x385] == (Touch)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0x658);
    goto LAB_00dab470;
  }
  param_1[0x385] = (Touch)0x0;
  if (param_1[899] == (Touch)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0x648);
LAB_00dab460:
    (*UNRECOVERED_JUMPTABLE)(param_1);
  }
  else if (*(int *)(param_1 + 0x38c) != 0) {
    *(undefined4 *)(param_1 + 0x38c) = 0;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0x638);
    goto LAB_00dab460;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0x650);
LAB_00dab470:
                    /* WARNING: Could not recover jumptable at 0x00dab480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}

