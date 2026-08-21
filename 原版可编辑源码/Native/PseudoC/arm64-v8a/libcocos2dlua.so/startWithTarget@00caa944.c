
/* cocostudio::timeline::ActionTimeline::startWithTarget(cocos2d::Node*) */

void __thiscall
cocostudio::timeline::ActionTimeline::startWithTarget(ActionTimeline *this,Node *param_1)

{
  long lVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined **local_70;
  ActionTimeline *pAStack_68;
  Node *local_60;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  cocos2d::Action::startWithTarget((Action *)this,param_1);
  uVar2 = (**(code **)(*(long *)param_1 + 0x2b8))(param_1);
  *(undefined4 *)(this + 0x40) = uVar2;
  local_70 = &PTR_FUN_016cc6f0;
  pAStack_68 = this;
  local_60 = param_1;
  local_50 = (long *)&local_70;
  foreachNodeDescendant(param_1,&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00caa9d0;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_00caa9d0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

