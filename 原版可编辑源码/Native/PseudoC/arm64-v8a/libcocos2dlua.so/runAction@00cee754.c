
/* cocosbuilder::CCBAnimationManager::runAction(cocos2d::Node*, cocosbuilder::CCBSequenceProperty*,
   float) */

void __thiscall
cocosbuilder::CCBAnimationManager::runAction
          (CCBAnimationManager *this,Node *param_1,CCBSequenceProperty *param_2,float param_3)

{
  undefined8 *puVar1;
  CCBKeyframe *this_00;
  CCBKeyframe *pCVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  CCBAnimationManager *pCVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  Ref *local_a8 [2];
  void *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *puStack_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  plVar6 = (long *)CCBSequenceProperty::getKeyframes(param_2);
  lVar11 = *plVar6;
  lVar12 = plVar6[1];
  if (8 < lVar12 - lVar11) {
    local_88 = (undefined8 *)0x0;
    puStack_80 = (undefined8 *)0x0;
    local_90 = (undefined8 *)0x0;
    fVar13 = (float)CCBKeyframe::getTime(*(CCBKeyframe **)*plVar6);
    if (0.0 < fVar13 + param_3) {
      local_a8[0] = (Ref *)cocos2d::DelayTime::create(fVar13 + param_3);
      if (local_88 == puStack_80) {
        std::__ndk1::
        vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>::
        __push_back_slow_path<cocos2d::FiniteTimeAction*const&>
                  ((vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>
                    *)&local_90,(FiniteTimeAction **)local_a8);
      }
      else {
        *local_88 = local_a8[0];
        local_88 = local_88 + 1;
      }
      cocos2d::Ref::retain(local_a8[0]);
    }
    lVar11 = (lVar12 - lVar11 >> 3) + -1;
    if (0 < lVar11) {
      lVar12 = 0;
      do {
        puVar1 = (undefined8 *)(*plVar6 + lVar12 * 8);
        this_00 = (CCBKeyframe *)*puVar1;
        pCVar2 = (CCBKeyframe *)puVar1[1];
        pcVar7 = (char *)CCBSequenceProperty::getName(param_2);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )local_a8,pcVar7);
        lVar8 = getAction(this,this_00,pCVar2,(basic_string *)local_a8,param_1);
        if (((ulong)local_a8[0] & 1) != 0) {
          operator_delete(local_98);
        }
        if (lVar8 != 0) {
          uVar5 = CCBKeyframe::getEasingType(this_00);
          pCVar9 = (CCBAnimationManager *)CCBKeyframe::getEasingOpt(this_00);
          local_a8[0] = (Ref *)getEaseAction(pCVar9,lVar8,uVar5);
          if (local_88 == puStack_80) {
            std::__ndk1::
            vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>::
            __push_back_slow_path<cocos2d::FiniteTimeAction*const&>
                      ((vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>
                        *)&local_90,(FiniteTimeAction **)local_a8);
          }
          else {
            *local_88 = local_a8[0];
            local_88 = local_88 + 1;
          }
          cocos2d::Ref::retain(local_a8[0]);
        }
        lVar12 = lVar12 + 1;
      } while (lVar11 != lVar12);
    }
    uVar10 = cocos2d::Sequence::create((Vector *)&local_90);
    (**(code **)(*(long *)param_1 + 0x3a8))(param_1,uVar10);
    puVar4 = local_88;
    for (puVar1 = local_90; puVar1 != puVar4; puVar1 = puVar1 + 1) {
      cocos2d::Ref::release((Ref *)*puVar1);
    }
    local_88 = local_90;
    if (local_90 != (undefined8 *)0x0) {
      operator_delete(local_90);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

