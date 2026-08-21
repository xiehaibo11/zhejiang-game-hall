
/* cocosbuilder::CCBAnimationManager::actionForCallbackChannel(cocosbuilder::CCBSequenceProperty*)
    */

undefined8 cocosbuilder::CCBAnimationManager::actionForCallbackChannel(CCBSequenceProperty *param_1)

{
  char *pcVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  Value *this;
  long *plVar9;
  long lVar10;
  Ref *pRVar11;
  __shared_weak_count *this_00;
  CCBSequenceProperty *in_x1;
  pointer_____offset_0x10___ *in_x2;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  __shared_weak_count *p_Var17;
  CCBKeyframe *this_01;
  vector<cocos2d::Ref*,std::__ndk1::allocator<cocos2d::Ref*>> *this_02;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  Ref *local_1f8;
  basic_string *local_1f0;
  char *local_1e8;
  byte local_1e0 [8];
  ulong local_1d8;
  basic_string *local_1d0;
  long *local_1c8;
  long *local_1c0;
  long *plStack_1b8;
  Ref *local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined **ppuStack_198;
  Ref **local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  byte local_158;
  undefined8 uStack_150;
  void *local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_130 [17];
  undefined8 local_a8;
  undefined4 local_a0;
  long local_90;
  
  lVar5 = tpidr_el0;
  local_90 = *(long *)(lVar5 + 0x28);
  local_1c0 = (long *)0x0;
  plStack_1b8 = (long *)0x0;
  local_1c8 = (long *)0x0;
  plVar8 = (long *)CCBSequenceProperty::getKeyframes(in_x1);
  lVar10 = *plVar8;
  lVar13 = plVar8[1] - lVar10;
  if (0 < lVar13) {
    lVar14 = 0;
    fVar20 = 0.0;
    do {
      this_01 = *(CCBKeyframe **)(lVar10 + lVar14 * 8);
      fVar18 = (float)CCBKeyframe::getTime(this_01);
      fVar19 = (float)CCBKeyframe::getTime(this_01);
      if (0.0 < fVar18 - fVar20) {
        local_1b0 = (Ref *)cocos2d::DelayTime::create(fVar18 - fVar20);
        if (local_1c0 == plStack_1b8) {
          std::__ndk1::
          vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>::
          __push_back_slow_path<cocos2d::FiniteTimeAction*const&>
                    ((vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>
                      *)&local_1c8,(FiniteTimeAction **)&local_1b0);
        }
        else {
          *local_1c0 = (long)local_1b0;
          local_1c0 = local_1c0 + 1;
        }
        cocos2d::Ref::retain(local_1b0);
      }
      this = (Value *)CCBKeyframe::getValue(this_01);
      plVar9 = (long *)cocos2d::Value::asValueVector(this);
      cocos2d::Value::asString();
      iVar7 = cocos2d::Value::asInt((Value *)(*plVar9 + 0x10));
      bVar6 = local_1e0[0];
      if (param_1[0x21] == (CCBSequenceProperty)0x0) {
        if (iVar7 == 1) {
          pRVar11 = *(Ref **)(param_1 + 200);
        }
        else {
          if (iVar7 != 2) goto joined_r0x00cede78;
          pRVar11 = *(Ref **)(param_1 + 0x28);
        }
        if (pRVar11 != (Ref *)0x0) {
          uVar2 = (ulong)(local_1e0[0] >> 1);
          if ((local_1e0[0] & 1) != 0) {
            uVar2 = local_1d8;
          }
          if (uVar2 != 0) {
            in_x2 = &CCBSelectorResolver::typeinfo;
            plVar9 = (long *)__dynamic_cast(pRVar11,&cocos2d::Ref::typeinfo,
                                            &CCBSelectorResolver::typeinfo,0xfffffffffffffffe);
            if (plVar9 == (long *)0x0) {
              auVar21 = ZEXT816(0);
            }
            else {
              in_x2 = (pointer_____offset_0x10___ *)((ulong)local_1e0 | 1);
              if ((bVar6 & 1) != 0) {
                in_x2 = (pointer_____offset_0x10___ *)local_1d0;
              }
              auVar21 = (**(code **)(*plVar9 + 0x18))(plVar9,pRVar11);
            }
            if ((auVar21._0_8_ != 0) || (auVar21._8_8_ != 0 && (auVar21._8_8_ & 1) != 0)) {
              this_00 = operator_new(0x30);
              *(undefined8 *)(this_00 + 0x10) = 0;
              p_Var17 = this_00 + 8;
              *(long *)p_Var17 = 0;
              *(undefined ***)this_00 = &PTR____shared_ptr_emplace_016cf4f8;
              this_02 = (vector<cocos2d::Ref*,std::__ndk1::allocator<cocos2d::Ref*>> *)
                        (this_00 + 0x18);
              *(undefined8 *)this_02 = 0;
              *(undefined8 *)(this_00 + 0x20) = 0;
              *(undefined8 *)(this_00 + 0x28) = 0;
              local_1b0 = pRVar11;
              std::__ndk1::vector<cocos2d::Ref*,std::__ndk1::allocator<cocos2d::Ref*>>::
              __push_back_slow_path<cocos2d::Ref*const&>(this_02,&local_1b0);
              cocos2d::Ref::retain(local_1b0);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(p_Var17,0x10);
                if (bVar4) {
                  *(long *)p_Var17 = *(long *)p_Var17 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              local_190 = (Ref **)0x0;
              local_190 = operator_new(0x28);
              *local_190 = (Ref *)&PTR_FUN_016cf548;
              local_190[1] = (Ref *)this_02;
              local_190[2] = (Ref *)this_00;
              *(undefined1 (*) [16])(local_190 + 3) = auVar21;
              pRVar11 = (Ref *)cocos2d::CallFuncN::create((function *)&local_1b0);
              if (&local_1b0 == local_190) {
                pcVar12 = *(code **)(*local_190 + 0x20);
LAB_00cede14:
                (*pcVar12)();
              }
              else if (local_190 != (Ref **)0x0) {
                pcVar12 = *(code **)(*local_190 + 0x28);
                goto LAB_00cede14;
              }
              local_1b0 = pRVar11;
              if (local_1c0 == plStack_1b8) {
                std::__ndk1::
                vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>
                ::__push_back_slow_path<cocos2d::FiniteTimeAction*const&>
                          ((vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>
                            *)&local_1c8,(FiniteTimeAction **)&local_1b0);
              }
              else {
                *local_1c0 = (long)pRVar11;
                local_1c0 = local_1c0 + 1;
              }
              cocos2d::Ref::retain(local_1b0);
              do {
                lVar10 = *(long *)p_Var17;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(p_Var17,0x10);
                if (bVar4) {
                  *(long *)p_Var17 = lVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*(long *)this_00 + 0x10))(this_00);
                std::__ndk1::__shared_weak_count::__release_weak(this_00);
              }
            }
          }
        }
      }
      else {
        local_130[0] = 0x1698928;
        local_1b0 = (Ref *)(std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>-in-std::
                            __ndk1::
                            basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::construction_vtable + 0x18);
        uStack_1a8 = 0;
        local_1a0 = 0x1698810;
        std::__ndk1::ios_base::init((ios_base *)local_130,&ppuStack_198);
        local_a0 = 0xffffffff;
        local_1b0 = (Ref *)(std::__ndk1::
                            basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::vtable + 0x18);
        local_1a0 = 0x1698810;
        local_130[0] = 0x1698838;
        local_a8 = 0;
        ppuStack_198 = &PTR__basic_streambuf_01698a08;
        std::__ndk1::locale::locale((locale *)&local_190);
        uStack_170 = 0;
        local_178 = 0;
        uStack_160 = 0;
        uStack_168 = 0;
        uStack_180 = 0;
        local_188 = 0;
        ppuStack_198 = &PTR__basic_stringbuf_01698960;
        uStack_150 = 0;
        local_158 = 0;
        uStack_140 = 0;
        local_148 = (void *)0x0;
        local_138 = 0x18;
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1a0,iVar7);
        std::__ndk1::operator+((__ndk1 *)&DAT_012f06b7,(char *)local_1e0,(basic_string *)in_x2);
        pcVar1 = (char *)((ulong)&local_1f8 | 1);
        in_x2 = (pointer_____offset_0x10___ *)((ulong)local_1f8 >> 1 & 0x7f);
        if (((ulong)local_1f8 & 1) != 0) {
          pcVar1 = local_1e8;
          in_x2 = (pointer_____offset_0x10___ *)local_1f0;
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_1a0,pcVar1,(ulong)in_x2);
        if (((ulong)local_1f8 & 1) != 0) {
          operator_delete(local_1e8);
        }
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
        lVar10 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::CallFunc*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::CallFunc*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::CallFunc*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::CallFunc*>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::CallFunc*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::CallFunc*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::CallFunc*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::CallFunc*>>>
                             *)(param_1 + 0x178),(basic_string *)&local_1f8);
        if (lVar10 == 0) {
          plVar9 = (long *)0x0;
        }
        else {
          plVar9 = *(long **)(lVar10 + 0x28);
        }
        if (((ulong)local_1f8 & 1) != 0) {
          operator_delete(local_1e8);
        }
        if ((plVar9 != (long *)0x0) &&
           (pRVar11 = (Ref *)(**(code **)(*plVar9 + 0x18))(plVar9), pRVar11 != (Ref *)0x0)) {
          local_1f8 = pRVar11;
          if (local_1c0 == plStack_1b8) {
            std::__ndk1::
            vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>::
            __push_back_slow_path<cocos2d::FiniteTimeAction*const&>
                      ((vector<cocos2d::FiniteTimeAction*,std::__ndk1::allocator<cocos2d::FiniteTimeAction*>>
                        *)&local_1c8,(FiniteTimeAction **)&local_1f8);
          }
          else {
            *local_1c0 = (long)pRVar11;
            local_1c0 = local_1c0 + 1;
          }
          cocos2d::Ref::retain(local_1f8);
        }
        local_1b0 = (Ref *)(std::__ndk1::
                            basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::vtable + 0x18);
        local_1a0 = 0x1698810;
        local_130[0] = 0x1698838;
        ppuStack_198 = &PTR__basic_stringbuf_01698960;
        if ((local_158 & 1) != 0) {
          operator_delete(local_148);
        }
        ppuStack_198 = &PTR__basic_streambuf_01698a08;
        std::__ndk1::locale::~locale((locale *)&local_190);
        std::__ndk1::ios_base::~ios_base((ios_base *)local_130);
      }
joined_r0x00cede78:
      if ((local_1e0[0] & 1) != 0) {
        operator_delete(local_1d0);
      }
      lVar14 = lVar14 + 1;
      if (lVar13 >> 3 <= lVar14) break;
      lVar10 = *plVar8;
      fVar20 = fVar19;
    } while( true );
  }
  if ((long)local_1c0 - (long)local_1c8 < 8) {
    uVar15 = 0;
    plVar9 = local_1c0;
    plVar16 = local_1c0;
    plVar8 = local_1c8;
    if (local_1c8 == local_1c0) goto LAB_00ceded4;
  }
  else {
    uVar15 = cocos2d::Sequence::create((Vector *)&local_1c8);
    plVar9 = local_1c0;
    plVar16 = local_1c0;
    plVar8 = local_1c8;
    if (local_1c8 == local_1c0) goto LAB_00ceded4;
  }
  do {
    cocos2d::Ref::release((Ref *)*plVar8);
    plVar8 = plVar8 + 1;
    plVar9 = local_1c8;
  } while (plVar16 != plVar8);
LAB_00ceded4:
  local_1c0 = local_1c8;
  if (plVar9 != (long *)0x0) {
    local_1c0 = plVar9;
    operator_delete(plVar9);
  }
  if (*(long *)(lVar5 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}

