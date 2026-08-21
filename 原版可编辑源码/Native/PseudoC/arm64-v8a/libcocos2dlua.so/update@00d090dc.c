
/* cocos2d::Animate3D::update(float) */

void __thiscall cocos2d::Animate3D::update(Animate3D *this,float param_1)

{
  Bone3D *this_00;
  Node *this_01;
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  EventCustom *this_02;
  piecewise_construct_t *ppVar5;
  piecewise_construct_t *ppVar6;
  float *pfVar7;
  float *pfVar8;
  EventDispatcher *this_03;
  float *pfVar9;
  piecewise_construct_t *ppVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  AnimationCurve<3> *pAVar16;
  float fVar15;
  Animate3DDisplayedEventInfo *local_120;
  piecewise_construct_t *local_118 [2];
  void *local_108;
  piecewise_construct_t *local_f8;
  piecewise_construct_t *local_f0;
  piecewise_construct_t *ppStack_e8;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  float local_a4;
  float fStack_a0;
  float local_9c;
  float fStack_98;
  float local_94;
  long local_90;
  
  lVar2 = tpidr_el0;
  local_90 = *(long *)(lVar2 + 0x28);
  ppVar5 = (piecewise_construct_t *)(this + 0x38);
  if (*(long *)ppVar5 != 0) {
    if (*(int *)(this + 0x58) == 1) {
      if (0.0 < *(float *)(this + 0x80)) {
        fVar13 = *(float *)(this + 0x7c) +
                 (param_1 - *(float *)(this + 0x80)) * *(float *)(this + 0x4c);
        *(float *)(this + 0x7c) = fVar13;
        fVar12 = _transTime;
        fVar13 = 1.0 - fVar13 / _transTime;
        *(float *)(this + 0x6c) = fVar13;
        if (fVar13 <= 0.0) {
          *(float *)(this + 0x7c) = fVar12;
          *(undefined4 *)(this + 0x6c) = 0;
          FUN_00d08bc8(&s_fadeOutAnimates,ppVar5);
          Node::stopAction(*(Action **)(this + 0x38));
          goto LAB_00d09600;
        }
      }
    }
    else if ((*(int *)(this + 0x58) == 0) && (0.0 < *(float *)(this + 0x80))) {
      fVar13 = *(float *)(this + 0x7c) +
               (param_1 - *(float *)(this + 0x80)) * *(float *)(this + 0x4c);
      *(float *)(this + 0x7c) = fVar13;
      fVar12 = _transTime;
      fVar13 = fVar13 / _transTime;
      *(float *)(this + 0x6c) = fVar13;
      if (1.0 <= fVar13) {
        *(float *)(this + 0x7c) = fVar12;
        *(undefined4 *)(this + 0x6c) = 0x3f800000;
        *(undefined4 *)(this + 0x58) = 2;
        FUN_00d08bc8(&s_fadeInAnimates,ppVar5);
        local_f8 = ppVar5;
        lVar3 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>>>
                ::
                __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*const&>,std::__ndk1::tuple<>>
                          ((Node **)&s_runningAnimates,ppVar5,(tuple *)&DAT_0141889a,
                           (tuple *)&local_f8);
        *(Animate3D **)(lVar3 + 0x18) = this;
      }
    }
    fVar12 = *(float *)(this + 0x80);
    *(float *)(this + 0x80) = param_1;
    if ((*(int *)(this + 0x98) != 0) && (0.0 < *(float *)(this + 0x6c))) {
      fVar13 = *(float *)(this + 0x70);
      fVar15 = *(float *)(this + 0x74);
      plVar11 = *(long **)(this + 0xb0);
      if (this[0x78] != (Animate3D)0x0) {
        param_1 = 1.0 - param_1;
        fVar12 = 1.0 - fVar12;
      }
      pAVar16._0_4_ = (AnimationCurve<3> *)(fVar13 + param_1 * fVar15);
      if (plVar11 != (long *)0x0) {
        pfVar7 = (float *)0x0;
        pfVar8 = (float *)0x0;
        pfVar9 = (float *)0x0;
        do {
          this_00 = (Bone3D *)plVar11[2];
          plVar1 = (long *)plVar11[3];
          if (*plVar1 != 0) {
            pfVar7 = &local_9c;
            AnimationCurve<3>::evaluate
                      (pAVar16._0_4_,*plVar1,&local_9c,*(undefined4 *)(this + 0x8c));
          }
          if (plVar1[1] != 0) {
            pfVar8 = &local_ac;
            AnimationCurve<4>::evaluate
                      ((AnimationCurve<4> *)pAVar16._0_4_,plVar1[1],&local_ac,
                       *(undefined4 *)(this + 0x90));
          }
          if (plVar1[2] != 0) {
            pfVar9 = &local_b8;
            AnimationCurve<3>::evaluate
                      (pAVar16._0_4_,plVar1[2],&local_b8,*(undefined4 *)(this + 0x94));
          }
          Bone3D::setAnimationValue(this_00,pfVar7,pfVar8,pfVar9,this,*(float *)(this + 0x6c));
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      for (plVar11 = *(long **)(this + 0xd8); plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        this_01 = (Node *)plVar11[2];
        plVar1 = (long *)plVar11[3];
        Mat4::Mat4((Mat4 *)&local_f8);
        if (*plVar1 != 0) {
          AnimationCurve<3>::evaluate(pAVar16._0_4_,*plVar1,&local_9c,*(undefined4 *)(this + 0x8c));
          Mat4::translate((Mat4 *)&local_f8,local_9c,fStack_98,local_94);
        }
        if (plVar1[1] != 0) {
          AnimationCurve<4>::evaluate
                    ((AnimationCurve<4> *)pAVar16._0_4_,plVar1[1],&local_ac,
                     *(undefined4 *)(this + 0x90));
          Quaternion::Quaternion((Quaternion *)local_118,local_ac,fStack_a8,local_a4,fStack_a0);
          Mat4::rotate((Mat4 *)&local_f8,(Quaternion *)local_118);
          Quaternion::~Quaternion((Quaternion *)local_118);
        }
        if (plVar1[2] != 0) {
          AnimationCurve<3>::evaluate
                    (pAVar16._0_4_,plVar1[2],&local_b8,*(undefined4 *)(this + 0x94));
          Mat4::scale((Mat4 *)&local_f8,local_b8,fStack_b4,local_b0);
        }
        Node::setAdditionalTransform(this_01,(Mat4 *)&local_f8);
        Mat4::~Mat4((Mat4 *)&local_f8);
      }
      if (*(long *)(this + 0x108) != 0) {
        local_f0 = (piecewise_construct_t *)0x0;
        ppStack_e8 = (piecewise_construct_t *)0x0;
        local_f8 = (piecewise_construct_t *)0x0;
        plVar11 = *(long **)(this + 0x100);
        if (plVar11 != (long *)0x0) {
          fVar14 = (float)pAVar16._0_4_ * *(float *)(this + 0x4c) * *(float *)(this + 0x88);
          fVar12 = (fVar13 + fVar12 * fVar15) * *(float *)(this + 0x4c) * *(float *)(this + 0x88);
          do {
            ppVar6 = (piecewise_construct_t *)(plVar11 + 2);
            fVar13 = fVar14;
            fVar15 = fVar12;
            if (this[0x78] != (Animate3D)0x0) {
              fVar13 = fVar12;
              fVar15 = fVar14;
            }
            if ((fVar15 <= (float)*(int *)ppVar6) && ((float)*(int *)ppVar6 < fVar13)) {
              local_118[0] = ppVar6;
              lVar3 = std::__ndk1::
                      __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::EventCustom*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::EventCustom*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::EventCustom*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::EventCustom*>>>
                      ::
                      __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                                ((int *)(this + 0x118),ppVar6,(tuple *)&DAT_0141889a,
                                 (tuple *)local_118);
              if (*(long *)(lVar3 + 0x18) == 0) {
                this_02 = operator_new(0x58,(nothrow_t *)&std::nothrow);
                if (this_02 == (EventCustom *)0x0) {
                  *(undefined8 *)(lVar3 + 0x18) = 0;
                }
                else {
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string<decltype(nullptr)>
                            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              *)local_118,"CCAnimate3DDisplayedNotification");
                  EventCustom::EventCustom(this_02,(basic_string *)local_118);
                  *(EventCustom **)(lVar3 + 0x18) = this_02;
                  if (((ulong)local_118[0] & 1) != 0) {
                    operator_delete(local_108);
                  }
                }
              }
              local_118[0] = ppVar6;
              lVar4 = std::__ndk1::
                      __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Animate3D::Animate3DDisplayedEventInfo>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Animate3D::Animate3DDisplayedEventInfo>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Animate3D::Animate3DDisplayedEventInfo>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Animate3D::Animate3DDisplayedEventInfo>>>
                      ::
                      __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                                ((int *)(this + 0x140),ppVar6,(tuple *)&DAT_0141889a,
                                 (tuple *)local_118);
              local_120 = (Animate3DDisplayedEventInfo *)(lVar4 + 0x18);
              *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)ppVar5;
              *(undefined4 *)(lVar4 + 0x18) = *(undefined4 *)ppVar6;
              local_118[0] = ppVar6;
              lVar4 = std::__ndk1::
                      __hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,...c_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>>>>
                      ::
                      __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                                ((int *)(this + 0xf0),ppVar6,(tuple *)&DAT_0141889a,
                                 (tuple *)local_118);
              *(long *)(local_120 + 0x10) = lVar4 + 0x18;
              if (local_f0 == ppStack_e8) {
                std::__ndk1::
                vector<cocos2d::Animate3D::Animate3DDisplayedEventInfo*,std::__ndk1::allocator<cocos2d::Animate3D::Animate3DDisplayedEventInfo*>>
                ::__push_back_slow_path<cocos2d::Animate3D::Animate3DDisplayedEventInfo*const&>
                          ((vector<cocos2d::Animate3D::Animate3DDisplayedEventInfo*,std::__ndk1::allocator<cocos2d::Animate3D::Animate3DDisplayedEventInfo*>>
                            *)&local_f8,&local_120);
              }
              else {
                *(Animate3DDisplayedEventInfo **)local_f0 = local_120;
                local_f0 = local_f0 + 8;
              }
              *(Animate3DDisplayedEventInfo **)(*(long *)(lVar3 + 0x18) + 0x38) = local_120;
            }
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
        local_118[0] = (piecewise_construct_t *)cmpEventInfoAsc;
        if (this[0x78] != (Animate3D)0x0) {
          local_118[0] = (piecewise_construct_t *)cmpEventInfoDes;
        }
        std::__ndk1::
        __sort<bool(*&)(cocos2d::Animate3D::Animate3DDisplayedEventInfo*,cocos2d::Animate3D::Animate3DDisplayedEventInfo*),cocos2d::Animate3D::Animate3DDisplayedEventInfo**>
                  ((Animate3DDisplayedEventInfo **)local_f8,(Animate3DDisplayedEventInfo **)local_f0
                   ,(_func_bool_Animate3DDisplayedEventInfo_ptr_Animate3DDisplayedEventInfo_ptr *)
                    local_118);
        ppVar5 = local_f0;
        if (local_f8 != local_f0) {
          ppVar6 = local_f8;
          do {
            ppVar10 = *(piecewise_construct_t **)ppVar6;
            lVar3 = Director::getInstance();
            this_03 = *(EventDispatcher **)(lVar3 + 0xb0);
            local_118[0] = ppVar10;
            lVar3 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::EventCustom*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::EventCustom*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::EventCustom*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::EventCustom*>>>
                    ::
                    __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                              ((int *)(this + 0x118),ppVar10,(tuple *)&DAT_0141889a,
                               (tuple *)local_118);
            EventDispatcher::dispatchEvent(this_03,*(Event **)(lVar3 + 0x18));
            ppVar6 = ppVar6 + 8;
          } while (ppVar5 != ppVar6);
        }
        if (local_f8 != (piecewise_construct_t *)0x0) {
          local_f0 = local_f8;
          operator_delete(local_f8);
        }
      }
    }
  }
LAB_00d09600:
  if (*(long *)(lVar2 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

