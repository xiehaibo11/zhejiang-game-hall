
/* fairygui::ActionMovieClip::setPlaySettings(int, int, int, int, std::__ndk1::function<void ()>) */

void __thiscall
fairygui::ActionMovieClip::setPlaySettings
          (ActionMovieClip *this,int param_1,int param_2,undefined4 param_3,int param_4,
          long *param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  long alStack_a0 [4];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar6 = *(long *)(this + 0x50);
                    /* try { // try from 00a812b4 to 00b812cf has its CatchHandler @ 00a8134c */
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  local_b8 = (undefined8 *)0x0;
                    /* try { // try from 00a812d0 to 00b81383 has its CatchHandler @ 00a81268 */
  if (&local_b8 != (undefined8 **)(lVar6 + 0x40)) {
    std::__ndk1::vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>::
    assign<cocos2d::AnimationFrame**>
              ((vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>> *)
               &local_b8,*(AnimationFrame ***)(lVar6 + 0x40),*(AnimationFrame ***)(lVar6 + 0x48));
    puVar3 = local_b0;
    for (puVar1 = local_b8; puVar1 != puVar3; puVar1 = puVar1 + 1) {
      cocos2d::Ref::retain((Ref *)*puVar1);
    }
  }
  iVar5 = (int)((ulong)((long)local_b0 - (long)local_b8) >> 3);
  if (iVar5 <= param_2 || param_2 == -1) {
    param_2 = iVar5 + -1;
  }
  *(int *)(this + 0xb4) = param_1;
  *(int *)(this + 0xb8) = param_2;
  if (param_4 != -1) {
    param_2 = param_4;
  }
  *(undefined4 *)(this + 0xbc) = param_3;
  *(int *)(this + 0xc0) = param_2;
  *(undefined4 *)(this + 0xc4) = 0;
  plVar4 = (long *)param_6[4];
  if (plVar4 == (long *)0x0) {
    local_80 = (long *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 00a812b4 with catch @ 00a8134c */
    if (param_6 == plVar4) {
      local_80 = alStack_a0;
      (**(code **)(*plVar4 + 0x18))(plVar4,alStack_a0);
    }
    else {
      local_80 = (long *)(**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_008820fc(alStack_a0,this + 0x80);
  if (alStack_a0 == local_80) {
    pcVar7 = *(code **)(*local_80 + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_00a813bc;
    pcVar7 = *(code **)(*local_80 + 0x28);
  }
  (*pcVar7)();
LAB_00a813bc:
  setFrame(this,param_1);
  puVar3 = local_b0;
  for (puVar1 = local_b8; puVar1 != puVar3; puVar1 = puVar1 + 1) {
    cocos2d::Ref::release((Ref *)*puVar1);
  }
  local_b0 = local_b8;
  if (local_b8 != (undefined8 *)0x0) {
    operator_delete(local_b8);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

