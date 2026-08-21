
/* cocos2d::experimental::AudioEngineImpl::preload(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (bool)> const&) */

void __thiscall
cocos2d::experimental::AudioEngineImpl::preload
          (AudioEngineImpl *this,basic_string *param_1,function *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  AudioPlayerProvider *this_00;
  basic_string local_b8 [16];
  void *local_a8;
  long alStack_a0 [4];
  long *local_80;
  undefined1 local_70 [32];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0xb8) == 0) {
    plVar2 = *(long **)(param_2 + 0x20);
    if (plVar2 != (long *)0x0) {
      local_70[0] = 0;
      (**(code **)(*plVar2 + 0x30))(plVar2,local_70);
    }
    goto LAB_00e663b8;
  }
  plVar2 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar2 + 0x50))(local_b8,plVar2,param_1);
  plVar2 = *(long **)(param_2 + 0x20);
  this_00 = *(AudioPlayerProvider **)(this + 0xb8);
  if (plVar2 == (long *)0x0) {
    local_80 = (long *)0x0;
  }
  else if ((long *)param_2 == plVar2) {
    local_80 = alStack_a0;
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_a0);
  }
  else {
    local_80 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  plVar2 = local_80;
  local_50 = (long *)0x0;
  plVar3 = operator_new(0x40);
  *plVar3 = (long)&PTR_FUN_016f39f8;
  if (plVar2 == (long *)0x0) {
    plVar3[6] = 0;
  }
  else if (alStack_a0 == plVar2) {
    plVar3[6] = (long)(plVar3 + 2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  else {
    lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
    plVar3[6] = lVar4;
  }
  local_50 = plVar3;
  AudioPlayerProvider::preloadEffect(this_00,local_b8,local_70);
  if ((long *)local_70 == local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
LAB_00e66378:
    (*pcVar5)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar5 = *(code **)(*local_50 + 0x28);
    goto LAB_00e66378;
  }
  if (alStack_a0 == local_80) {
    pcVar5 = *(code **)(*local_80 + 0x20);
LAB_00e663a4:
    (*pcVar5)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar5 = *(code **)(*local_80 + 0x28);
    goto LAB_00e663a4;
  }
  if (((byte)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
LAB_00e663b8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

