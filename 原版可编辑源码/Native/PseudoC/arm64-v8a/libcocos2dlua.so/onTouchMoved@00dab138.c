
/* cocos2d::ui::Widget::onTouchMoved(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::ui::Widget::onTouchMoved(Touch *param_1,Event *param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 in_s1;
  undefined4 local_44;
  Touch *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar7 = Touch::getLocation((Touch *)param_2);
  *(undefined4 *)(param_1 + 0x3d0) = uVar7;
  *(undefined4 *)(param_1 + 0x3d4) = in_s1;
  bVar2 = (**(code **)(*(long *)param_1 + 0x5d0))
                    (param_1,param_1 + 0x3d0,*(undefined8 *)(param_1 + 0x3b8),0);
  if ((Touch)(bVar2 & 1) == param_1[0x385]) goto LAB_00dab1f0;
  param_1[0x385] = (Touch)(bVar2 & 1);
  if (param_1[899] == (Touch)0x0) {
    pcVar5 = *(code **)(*(long *)param_1 + 0x648);
  }
  else if ((bVar2 & 1) == 0) {
    if (*(int *)(param_1 + 0x38c) == 0) goto LAB_00dab1f0;
    *(undefined4 *)(param_1 + 0x38c) = 0;
    pcVar5 = *(code **)(*(long *)param_1 + 0x638);
  }
  else {
    if (*(int *)(param_1 + 0x38c) == 1) goto LAB_00dab1f0;
    *(undefined4 *)(param_1 + 0x38c) = 1;
    pcVar5 = *(code **)(*(long *)param_1 + 0x640);
  }
  (*pcVar5)(param_1);
LAB_00dab1f0:
  if (((param_1[0x388] != (Touch)0x0) &&
      (lVar3 = (**(code **)(*(long *)param_1 + 0x260))(param_1), lVar3 != 0)) &&
     (plVar4 = (long *)__dynamic_cast(lVar3,&Node::typeinfo,&typeinfo,0), plVar4 != (long *)0x0)) {
                    /* try { // try from 00dab22c to 00eab33f has its CatchHandler @ 00dab22c
                       catch() { ... } // from try @ 00dab22c with catch @ 00dab22c
                       catch() { ... } // from try @ 00dab358 with catch @ 00dab22c */
    plVar4[0x77] = *(long *)(param_1 + 0x3b8);
    (**(code **)(*plVar4 + 0x620))(plVar4,1,param_1,param_2);
    plVar4[0x77] = 0;
  }
  Ref::retain((Ref *)param_1);
  plVar4 = *(long **)(param_1 + 0x450);
  if (plVar4 != (long *)0x0) {
    local_44 = 1;
    local_40 = param_1;
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_40,&local_44);
  }
  if (*(long *)(param_1 + 0x418) != 0) {
    pcVar5 = *(code **)(param_1 + 0x420);
    uVar6 = *(ulong *)(param_1 + 0x428) & 1;
    if (uVar6 != 0 || pcVar5 != (code *)0x0) {
      plVar4 = (long *)(*(long *)(param_1 + 0x418) + ((long)*(ulong *)(param_1 + 0x428) >> 1));
      if (uVar6 != 0) {
        pcVar5 = *(code **)(pcVar5 + *plVar4);
      }
      (*pcVar5)(plVar4,param_1,1);
    }
  }
  Ref::release((Ref *)param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

