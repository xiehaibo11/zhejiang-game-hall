
/* fairygui::ActionMovieClip::setFrame(int) */

void __thiscall fairygui::ActionMovieClip::setFrame(ActionMovieClip *this,int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)(this + 0x50);
  if (lVar5 != 0) {
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    local_60 = (undefined8 *)0x0;
    if (&local_60 != (undefined8 **)(lVar5 + 0x40)) {
      std::__ndk1::vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>
      ::assign<cocos2d::AnimationFrame**>
                ((vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>
                  *)&local_60,*(AnimationFrame ***)(lVar5 + 0x40),
                 *(AnimationFrame ***)(lVar5 + 0x48));
      puVar3 = local_58;
      for (puVar1 = local_60; puVar1 != puVar3; puVar1 = puVar1 + 1) {
        cocos2d::Ref::retain((Ref *)*puVar1);
      }
    }
    iVar4 = (int)((ulong)((long)local_58 - (long)local_60) >> 3);
    if (iVar4 <= param_1) {
      param_1 = iVar4 + -1;
    }
    *(int *)(this + 0x58) = param_1;
    *(undefined4 *)(this + 0x5c) = 0;
    *(undefined4 *)(this + 0xb0) = 0xffffffff;
    drawFrame(this);
    puVar3 = local_58;
    for (puVar1 = local_60; puVar1 != puVar3; puVar1 = puVar1 + 1) {
      cocos2d::Ref::release((Ref *)*puVar1);
    }
    local_58 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

