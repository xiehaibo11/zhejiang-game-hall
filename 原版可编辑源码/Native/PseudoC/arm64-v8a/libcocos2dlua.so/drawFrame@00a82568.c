
/* fairygui::ActionMovieClip::drawFrame() */

void __thiscall fairygui::ActionMovieClip::drawFrame(ActionMovieClip *this)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((*(long *)(this + 0x38) != 0) && (lVar4 = *(long *)(this + 0x50), lVar4 != 0)) {
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    local_60 = (undefined8 *)0x0;
    if (&local_60 == (undefined8 **)(lVar4 + 0x40)) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      std::__ndk1::vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>
      ::assign<cocos2d::AnimationFrame**>
                ((vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>
                  *)&local_60,*(AnimationFrame ***)(lVar4 + 0x40),
                 *(AnimationFrame ***)(lVar4 + 0x48));
      puVar6 = local_58;
      puVar5 = local_60;
      for (puVar1 = local_60; puVar1 != puVar6; puVar1 = puVar1 + 1) {
        cocos2d::Ref::retain((Ref *)*puVar1);
        puVar5 = local_58;
      }
    }
    iVar2 = *(int *)(this + 0x58);
    puVar1 = local_60;
    puVar6 = puVar5;
    if ((iVar2 != *(int *)(this + 0xb0)) && (((long)local_58 - (long)local_60 & 0x7fffffff8U) != 0))
    {
      *(int *)(this + 0xb0) = iVar2;
      (**(code **)(**(long **)(this + 0x38) + 0x598))
                (*(long **)(this + 0x38),*(undefined8 *)(local_60[iVar2] + 0x30));
      puVar5 = local_58;
      puVar1 = local_60;
      puVar6 = local_58;
    }
    for (; puVar1 != puVar6; puVar1 = puVar1 + 1) {
      cocos2d::Ref::release((Ref *)*puVar1);
      puVar5 = local_60;
    }
    local_58 = local_60;
    if (puVar5 != (undefined8 *)0x0) {
      local_58 = puVar5;
      operator_delete(puVar5);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

