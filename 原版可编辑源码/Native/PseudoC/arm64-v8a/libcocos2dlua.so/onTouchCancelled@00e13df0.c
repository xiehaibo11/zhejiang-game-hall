
/* cocos2d::extension::ControlSwitch::onTouchCancelled(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::extension::ControlSwitch::onTouchCancelled(Touch *param_1,Event *param_2)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  float *pfVar4;
  float fVar5;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40[0] = Touch::getLocation((Touch *)param_2);
  fVar5 = (float)Node::convertToNodeSpace((Node *)param_1,(Vec2 *)local_40);
  plVar3 = (long *)(**(code **)(**(long **)(param_1 + 0x358) + 0x6e8))();
  (**(code **)(*plVar3 + 0x4c0))(plVar3,&Color3B::WHITE);
                    /* try { // try from 00e13e58 to 00f13efb has its CatchHandler @ 00e13e58
                       catch() { ... } // from try @ 00e13e58 with catch @ 00e13e58
                       catch() { ... } // from try @ 00e13f48 with catch @ 00e13e58
                       catch() { ... } // from try @ 00e13fb4 with catch @ 00e13e58
                       catch() { ... } // from try @ 00e14114 with catch @ 00e13e58 */
  if (param_1[0x364] == (Touch)0x0) {
    bVar2 = param_1[0x365] == (Touch)0x0;
  }
  else {
    pfVar4 = (float *)(**(code **)(**(long **)(param_1 + 0x358) + 0x168))();
    bVar2 = *pfVar4 * 0.5 <= fVar5;
  }
  setOn((ControlSwitch *)param_1,bVar2,true);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

