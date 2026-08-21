
/* dragonBones::AnimationState::_updateTimelines() */

void __thiscall dragonBones::AnimationState::_updateTimelines(AnimationState *this)

{
  basic_string *pbVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  IKConstraintTimelineState *pIVar7;
  long lVar8;
  __tree_node **pp_Var9;
  vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>
  *this_00;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ConstraintTimelineState *local_a0;
  __tree_node **local_98;
  __tree_node *local_90;
  undefined8 uStack_88;
  piecewise_construct_t *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_90 = (__tree_node *)0x0;
  uStack_88 = 0;
  this_00 = (vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>
             *)(this + 0xe8);
  plVar11 = *(long **)(this + 0xf0);
  local_98 = &local_90;
  for (plVar10 = *(long **)this_00; plVar10 != plVar11; plVar10 = plVar10 + 1) {
    local_a0 = (ConstraintTimelineState *)*plVar10;
    local_78 = (piecewise_construct_t *)(*(long *)(*(long *)(local_a0 + 0xb8) + 0x10) + 0x18);
    lVar6 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)&local_98,local_78,(tuple *)&DAT_01948364,(tuple *)&local_78)
    ;
    if (*(long **)(lVar6 + 0x40) == *(long **)(lVar6 + 0x48)) {
      std::__ndk1::
      vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>
      ::__push_back_slow_path<dragonBones::ConstraintTimelineState*const&>
                ((vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>
                  *)(lVar6 + 0x38),&local_a0);
    }
    else {
      **(long **)(lVar6 + 0x40) = (long)local_a0;
      *(long *)(lVar6 + 0x40) = *(long *)(lVar6 + 0x40) + 8;
    }
  }
  plVar10 = *(long **)(*(long *)(this + 0x130) + 0x40);
  plVar11 = *(long **)(*(long *)(this + 0x130) + 0x48);
  if (plVar10 != plVar11) {
    do {
      lVar12 = *plVar10;
      lVar6 = *(long *)(this + 0x80);
      pbVar1 = (basic_string *)(*(long *)(lVar12 + 0x10) + 0x18);
      lVar8 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>>>
                          *)(lVar6 + 0x98),pbVar1);
      lVar6 = lVar6 + 0xa0;
      plVar2 = (long *)0x0;
      if (lVar6 != lVar8) {
        plVar2 = (long *)(lVar8 + 0x38);
      }
      pp_Var9 = (__tree_node **)
                std::__ndk1::
                __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>>>
                ::
                find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>>>
                            *)&local_98,pbVar1);
      if (&local_90 == pp_Var9) {
        if (lVar6 == lVar8) {
          if (this[0x10] != (AnimationState)0x0) {
            pIVar7 = BaseObject::borrowObject<dragonBones::IKConstraintTimelineState>();
            *(long *)(pIVar7 + 0xb8) = lVar12;
            (**(code **)(*(long *)pIVar7 + 0x30))(pIVar7,*(undefined8 *)(this + 0x130),this,0);
            if (*(undefined8 **)(this + 0xf0) < *(undefined8 **)(this + 0xf8)) {
              **(undefined8 **)(this + 0xf0) = pIVar7;
              *(long *)(this + 0xf0) = *(long *)(this + 0xf0) + 8;
            }
            else {
              local_78 = (piecewise_construct_t *)pIVar7;
              std::__ndk1::
              vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>
              ::__push_back_slow_path<dragonBones::ConstraintTimelineState*>
                        (this_00,(ConstraintTimelineState **)&local_78);
            }
            uStack_70 = 2;
            puVar3 = *(undefined8 **)(this + 0x108);
            if (puVar3 < *(undefined8 **)(this + 0x110)) {
              puVar3[1] = CONCAT44(uStack_6c,2);
              *puVar3 = pIVar7;
              *(long *)(this + 0x108) = *(long *)(this + 0x108) + 0x10;
              local_78 = (piecewise_construct_t *)pIVar7;
            }
            else {
              local_78 = (piecewise_construct_t *)pIVar7;
              std::__ndk1::
              vector<std::__ndk1::pair<dragonBones::TimelineState*,dragonBones::AnimationState::BaseTimelineType>,std::__ndk1::allocator<std::__ndk1::pair<dragonBones::TimelineState*,dragonBones::AnimationState::BaseTimelineType>>>
              ::
              __push_back_slow_path<std::__ndk1::pair<dragonBones::TimelineState*,dragonBones::AnimationState::BaseTimelineType>>
                        ((vector<std::__ndk1::pair<dragonBones::TimelineState*,dragonBones::AnimationState::BaseTimelineType>,std::__ndk1::allocator<std::__ndk1::pair<dragonBones::TimelineState*,dragonBones::AnimationState::BaseTimelineType>>>
                          *)(this + 0x100),(pair *)&local_78);
            }
          }
        }
        else {
          plVar4 = (long *)plVar2[1];
          for (plVar2 = (long *)*plVar2; plVar2 != plVar4; plVar2 = plVar2 + 1) {
            lVar6 = *plVar2;
            if (*(int *)(lVar6 + 0x10) == 0x1e) {
              pIVar7 = BaseObject::borrowObject<dragonBones::IKConstraintTimelineState>();
              *(long *)(pIVar7 + 0xb8) = lVar12;
              (**(code **)(*(long *)pIVar7 + 0x30))(pIVar7,*(undefined8 *)(this + 0x130),this,lVar6)
              ;
              local_78 = (piecewise_construct_t *)pIVar7;
              if (*(undefined8 **)(this + 0xf0) < *(undefined8 **)(this + 0xf8)) {
                **(undefined8 **)(this + 0xf0) = pIVar7;
                *(long *)(this + 0xf0) = *(long *)(this + 0xf0) + 8;
              }
              else {
                std::__ndk1::
                vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>
                ::__push_back_slow_path<dragonBones::ConstraintTimelineState*>
                          (this_00,(ConstraintTimelineState **)&local_78);
              }
            }
          }
        }
      }
      else {
        std::__ndk1::
        __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>>>
        ::erase((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>>>
                 *)&local_98,pp_Var9);
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar11);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>>>
             *)&local_98,local_90);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

