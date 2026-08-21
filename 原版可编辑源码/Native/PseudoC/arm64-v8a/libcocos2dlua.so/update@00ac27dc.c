
/* fairygui::TweenManager::update(float) */

void fairygui::TweenManager::update(float param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  GTweener *local_70;
  long local_68;
  
  uVar4 = _totalActiveTweens;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar9 = (ulong)_totalActiveTweens;
  if (0 < (int)_totalActiveTweens) {
    uVar10 = 0;
    lVar8 = (long)(int)_totalActiveTweens;
    uVar7 = 0xffffffff;
    do {
      local_70 = *(GTweener **)(_activeTweens + uVar10 * 8);
      uVar6 = (uint)uVar7;
      if (local_70 == (GTweener *)0x0) {
        uVar2 = (uint)uVar10;
        if (uVar6 != 0xffffffff) {
          uVar2 = uVar6;
        }
        uVar7 = (ulong)uVar2;
      }
      else if (local_70[0x9c] == (GTweener)0x0) {
        if ((*(Ref **)(local_70 + 0x90) == (Ref *)0x0) ||
           (iVar5 = cocos2d::Ref::getReferenceCount(*(Ref **)(local_70 + 0x90)), iVar5 != 1)) {
          if (local_70[0x9d] == (GTweener)0x0) {
            GTweener::_update(local_70,param_1);
          }
        }
        else {
          local_70[0x9c] = (GTweener)0x1;
        }
        if (uVar6 == 0xffffffff) {
          uVar7 = 0xffffffff;
        }
        else {
          *(GTweener **)(_activeTweens + (long)(int)uVar6 * 8) = local_70;
          uVar7 = (ulong)(uVar6 + 1);
          *(undefined8 *)(_activeTweens + uVar10 * 8) = 0;
        }
      }
      else {
        GTweener::_reset(local_70);
        if (DAT_01782c00 == DAT_01782c08) {
          std::__ndk1::vector<fairygui::GTweener*,std::__ndk1::allocator<fairygui::GTweener*>>::
          __push_back_slow_path<fairygui::GTweener*const&>
                    ((vector<fairygui::GTweener*,std::__ndk1::allocator<fairygui::GTweener*>> *)
                     &_tweenerPool,&local_70);
        }
        else {
          *DAT_01782c00 = local_70;
          DAT_01782c00 = DAT_01782c00 + 1;
        }
        uVar2 = (uint)uVar10;
        if (uVar6 != 0xffffffff) {
          uVar2 = uVar6;
        }
        uVar7 = (ulong)uVar2;
        *(undefined8 *)(_activeTweens + uVar10 * 8) = 0;
      }
      uVar10 = uVar10 + 1;
    } while (uVar9 != uVar10);
    if (-1 < (int)uVar7) {
      if ((_totalActiveTweens != uVar4) && (iVar5 = _totalActiveTweens - uVar4, 0 < iVar5)) {
        uVar9 = -(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3;
        lVar8 = lVar8 << 3;
        do {
          uVar7 = (ulong)((int)uVar7 + 1);
          iVar5 = iVar5 + -1;
          puVar1 = (undefined8 *)(_activeTweens + lVar8);
          lVar8 = lVar8 + 8;
          *(undefined8 *)(_activeTweens + uVar9) = *puVar1;
          uVar9 = uVar9 + 8;
        } while (iVar5 != 0);
      }
      _totalActiveTweens = (uint)uVar7;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

