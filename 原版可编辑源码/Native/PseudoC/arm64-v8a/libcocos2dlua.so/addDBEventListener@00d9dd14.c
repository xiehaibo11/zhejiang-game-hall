
/* dragonBones::CCArmatureDisplay::addDBEventListener(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (dragonBones::EventObject*)> const&) */

void __thiscall
dragonBones::CCArmatureDisplay::addDBEventListener
          (CCArmatureDisplay *this,basic_string *param_1,function *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  EventDispatcher *this_00;
  long alStack_e0 [4];
  long *local_c0;
  long alStack_b0 [4];
  long *local_90;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_2 + 0x20);
  if (plVar4 == (long *)0x0) {
    local_60 = (long *)0x0;
    this_00 = *(EventDispatcher **)(this + 0x308);
LAB_00d9dda0:
    local_c0 = (long *)0x0;
  }
  else {
    if ((long *)param_2 == plVar4) {
      local_60 = local_80;
      (**(code **)(*plVar4 + 0x18))(plVar4,local_80);
      this_00 = *(EventDispatcher **)(this + 0x308);
    }
    else {
      local_60 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4);
      this_00 = *(EventDispatcher **)(this + 0x308);
    }
    if (local_60 == (long *)0x0) goto LAB_00d9dda0;
    if (local_80 == local_60) {
      local_c0 = alStack_e0;
      (**(code **)(*local_60 + 0x18))(local_60,alStack_e0);
    }
    else {
      local_c0 = (long *)(**(code **)(*local_60 + 0x10))();
    }
  }
  plVar4 = local_c0;
  local_90 = (long *)0x0;
  plVar2 = operator_new(0x40);
  *plVar2 = (long)&PTR_FUN_016d7d20;
  if (plVar4 == (long *)0x0) {
    plVar2[6] = 0;
  }
  else if (alStack_e0 == plVar4) {
    plVar2[6] = (long)(plVar2 + 2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  else {
    lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
    plVar2[6] = lVar3;
  }
  local_90 = plVar2;
  cocos2d::EventDispatcher::addCustomEventListener(this_00,param_1,(function *)alStack_b0);
  if (alStack_b0 == local_90) {
    pcVar5 = *(code **)(*local_90 + 0x20);
LAB_00d9de94:
    (*pcVar5)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar5 = *(code **)(*local_90 + 0x28);
    goto LAB_00d9de94;
  }
  if (alStack_e0 == local_c0) {
    pcVar5 = *(code **)(*local_c0 + 0x20);
LAB_00d9dec0:
    (*pcVar5)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar5 = *(code **)(*local_c0 + 0x28);
    goto LAB_00d9dec0;
  }
  if (local_80 == local_60) {
    pcVar5 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00d9def0;
    pcVar5 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar5)();
LAB_00d9def0:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

