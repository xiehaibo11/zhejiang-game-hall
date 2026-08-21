
/* fairygui::TweenManager::reset(cocos2d::EventCustom*) */

void fairygui::TweenManager::reset(EventCustom *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  GTweener *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = (ulong)_totalActiveTweens;
  if (0 < (int)_totalActiveTweens) {
    uVar3 = 0;
    do {
      local_50 = *(GTweener **)(_activeTweens + uVar3 * 8);
      if (local_50 != (GTweener *)0x0) {
        GTweener::_reset(local_50);
        if (DAT_01782c00 == DAT_01782c08) {
          std::__ndk1::vector<fairygui::GTweener*,std::__ndk1::allocator<fairygui::GTweener*>>::
          __push_back_slow_path<fairygui::GTweener*const&>
                    ((vector<fairygui::GTweener*,std::__ndk1::allocator<fairygui::GTweener*>> *)
                     &_tweenerPool,&local_50);
        }
        else {
          *DAT_01782c00 = local_50;
          DAT_01782c00 = DAT_01782c00 + 1;
        }
        *(undefined8 *)(_activeTweens + uVar3 * 8) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  _totalActiveTweens = 0;
  _inited = 0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

