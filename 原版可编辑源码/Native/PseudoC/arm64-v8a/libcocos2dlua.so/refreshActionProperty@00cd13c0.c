
/* cocostudio::ActionNode::refreshActionProperty() */

undefined8 __thiscall cocostudio::ActionNode::refreshActionProperty(ActionNode *this)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  Ref *pRVar6;
  long lVar7;
  undefined8 uVar8;
  ActionFrame *this_00;
  ActionFrame *this_01;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *local_a0;
  long *local_98;
  long *plStack_90;
  long *local_88;
  long *local_80;
  long *plStack_78;
  Ref *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x48) == 0) {
    uVar8 = 0;
    goto LAB_00cd1654;
  }
  local_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  local_88 = (long *)0x0;
  iVar4 = *(int *)(this + 0x68);
  if (0 < iVar4) {
    uVar9 = 0;
    do {
      if ((ulong)(*(long *)(this + 0x58) - *(long *)(this + 0x50) >> 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
      }
      plVar10 = *(long **)(*(long *)(this + 0x50) + uVar9 * 8);
      if (7 < plVar10[1] - *plVar10) {
        local_98 = (long *)0x0;
        plStack_90 = (long *)0x0;
        local_a0 = (long *)0x0;
        lVar7 = plVar10[1] - *plVar10;
        if (lVar7 < 9) {
          if ((lVar7 == 8) &&
             (pRVar6 = (Ref *)(**(code **)(**(long **)*plVar10 + 0x10))(0), pRVar6 != (Ref *)0x0)) {
            local_70 = pRVar6;
            if (local_98 == plStack_90) {
              std::__ndk1::
              vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>
              ::__push_back_slow_path<cocos2d::FiniteTimeAction*const&>
                        ((vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>
                          *)&local_a0,(FiniteTimeAction **)&local_70);
            }
            else {
              *local_98 = (long)pRVar6;
              local_98 = local_98 + 1;
            }
            cocos2d::Ref::retain(local_70);
          }
        }
        else {
          lVar11 = 0;
          while (lVar11 = lVar11 + 1, lVar11 < lVar7 >> 3) {
            if (lVar11 != 0) {
              this_00 = *(ActionFrame **)(*plVar10 + lVar11 * 8);
              this_01 = *(ActionFrame **)(*plVar10 + lVar11 * 8 + -8);
              iVar4 = ActionFrame::getFrameIndex(this_00);
              iVar5 = ActionFrame::getFrameIndex(this_01);
              pRVar6 = (Ref *)(**(code **)(*(long *)this_00 + 0x10))
                                        (*(float *)(this + 0x2c) * (float)(iVar4 - iVar5),this_00);
              if (pRVar6 != (Ref *)0x0) {
                local_70 = pRVar6;
                if (local_98 == plStack_90) {
                  std::__ndk1::
                  vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>
                  ::__push_back_slow_path<cocos2d::FiniteTimeAction*const&>
                            ((vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>
                              *)&local_a0,(FiniteTimeAction **)&local_70);
                }
                else {
                  *local_98 = (long)pRVar6;
                  local_98 = local_98 + 1;
                }
                cocos2d::Ref::retain(local_70);
              }
            }
          }
        }
        pRVar6 = (Ref *)cocos2d::Sequence::create((Vector *)&local_a0);
        plVar10 = local_a0;
        plVar2 = local_98;
        if (pRVar6 != (Ref *)0x0) {
          local_70 = pRVar6;
          if (local_80 == plStack_78) {
            std::__ndk1::
            vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>::
            __push_back_slow_path<cocos2d::FiniteTimeAction*const&>
                      ((vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>
                        *)&local_88,(FiniteTimeAction **)&local_70);
          }
          else {
            *local_80 = (long)pRVar6;
            local_80 = local_80 + 1;
          }
          cocos2d::Ref::retain(local_70);
          plVar10 = local_a0;
          plVar2 = local_98;
        }
        for (; plVar3 = local_98, plVar10 != local_98; plVar10 = plVar10 + 1) {
          local_98 = plVar2;
          cocos2d::Ref::release((Ref *)*plVar10);
          plVar2 = local_98;
          local_98 = plVar3;
        }
        local_98 = local_a0;
        if (local_a0 != (long *)0x0) {
          operator_delete(local_a0);
        }
        iVar4 = *(int *)(this + 0x68);
      }
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)iVar4);
  }
  if (*(Ref **)(this + 0x40) == (Ref *)0x0) {
    if (*(Ref **)(this + 0x38) != (Ref *)0x0) {
      cocos2d::Ref::release(*(Ref **)(this + 0x38));
      goto LAB_00cd15f8;
    }
  }
  else {
    cocos2d::Ref::release(*(Ref **)(this + 0x40));
    *(undefined8 *)(this + 0x40) = 0;
    if (*(Ref **)(this + 0x38) != (Ref *)0x0) {
      cocos2d::Ref::release(*(Ref **)(this + 0x38));
LAB_00cd15f8:
      *(undefined8 *)(this + 0x38) = 0;
    }
  }
  pRVar6 = (Ref *)cocos2d::Spawn::create((Vector *)&local_88);
  *(Ref **)(this + 0x38) = pRVar6;
  if (pRVar6 == (Ref *)0x0) {
    uVar8 = 0;
    plVar10 = local_88;
    plVar2 = local_80;
  }
  else {
    cocos2d::Ref::retain(pRVar6);
    uVar8 = *(undefined8 *)(this + 0x38);
    plVar10 = local_88;
    plVar2 = local_80;
  }
  for (; plVar3 = local_80, plVar10 != local_80; plVar10 = plVar10 + 1) {
    local_80 = plVar2;
    cocos2d::Ref::release((Ref *)*plVar10);
    plVar2 = local_80;
    local_80 = plVar3;
  }
  local_80 = local_88;
  if (local_88 != (long *)0x0) {
    operator_delete(local_88);
  }
LAB_00cd1654:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

