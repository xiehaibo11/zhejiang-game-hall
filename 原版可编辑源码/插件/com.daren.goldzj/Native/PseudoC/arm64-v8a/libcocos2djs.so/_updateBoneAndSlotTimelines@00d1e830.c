
/* dragonBones::AnimationState::_updateBoneAndSlotTimelines() */

void __thiscall dragonBones::AnimationState::_updateBoneAndSlotTimelines(AnimationState *this)

{
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
  *this_00;
  basic_string *pbVar1;
  vector<std::__ndk1::pair<dragonBones::TimelineState*,dragonBones::AnimationState::BaseTimelineType>,std::__ndk1::allocator<std::__ndk1::pair<dragonBones::TimelineState*,dragonBones::AnimationState::BaseTimelineType>>>
  *this_01;
  size_t sVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  void *pvVar5;
  __tree_node *p_Var6;
  int iVar7;
  byte bVar8;
  AnimationState AVar9;
  long lVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  AnimationState *pAVar14;
  long lVar15;
  piecewise_construct_t *ppVar16;
  BoneAllTimelineState *pBVar17;
  long lVar18;
  __tree_node **pp_Var19;
  SlotDislayTimelineState *pSVar20;
  int *piVar21;
  SlotColorTimelineState *pSVar22;
  DeformTimelineState *pDVar23;
  bool bVar24;
  __tree_node *p_Var25;
  long *plVar26;
  ulong uVar27;
  BaseObject *pBVar28;
  ulong uVar29;
  byte *pbVar30;
  vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>
  *this_02;
  BaseObject *pBVar31;
  byte *pbVar32;
  int *piVar33;
  long lVar34;
  long *plVar35;
  __tree_node *p_Var36;
  long *plVar37;
  long *plVar38;
  BonePose *pBVar39;
  size_t sVar40;
  vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>
  *this_03;
  int *piVar41;
  int *__src;
  int *local_b0;
  BoneTimelineState *local_a0;
  __tree_node *local_98;
  __tree_node *local_90;
  undefined8 local_88;
  piecewise_construct_t *local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  local_90 = (__tree_node *)0x0;
  local_88 = 0;
  this_02 = (vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>
             *)(this + 0xb8);
  plVar38 = *(long **)(this + 0xc0);
  local_98 = (__tree_node *)&local_90;
  for (plVar35 = *(long **)this_02; plVar35 != plVar38; plVar35 = plVar35 + 1) {
    local_a0 = (BoneTimelineState *)*plVar35;
    local_78 = (piecewise_construct_t *)(*(long *)(*(long *)(local_a0 + 0xb8) + 0xa8) + 0x18);
    lVar13 = std::__ndk1::
             __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>>>
             ::
             __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                       ((basic_string *)&local_98,local_78,(tuple *)&DAT_01948364,(tuple *)&local_78
                       );
    if (*(long **)(lVar13 + 0x40) == *(long **)(lVar13 + 0x48)) {
      std::__ndk1::
      vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>
      ::__push_back_slow_path<dragonBones::BoneTimelineState*const&>
                ((vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>
                  *)(lVar13 + 0x38),&local_a0);
    }
    else {
      **(long **)(lVar13 + 0x40) = (long)local_a0;
      *(long *)(lVar13 + 0x40) = *(long *)(lVar13 + 0x40) + 8;
    }
  }
  plVar35 = *(long **)(*(long *)(this + 0x130) + 0x60);
  plVar38 = *(long **)(*(long *)(this + 0x130) + 0x68);
  p_Var36 = local_98;
  if (plVar35 != plVar38) {
    this_00 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
               *)(this + 0x118);
    do {
      lVar34 = *plVar35;
      pbVar32 = *(byte **)(this + 0xa0);
      pbVar4 = *(byte **)(this + 0xa8);
      lVar13 = *(long *)(lVar34 + 0xa8);
      pbVar1 = (basic_string *)(lVar13 + 0x18);
      if (pbVar32 == pbVar4) {
LAB_00d1eba8:
        lVar13 = *(long *)(this + 0x80);
        lVar18 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>>>
                             *)(lVar13 + 0x68),pbVar1);
        lVar13 = lVar13 + 0x70;
        plVar26 = (long *)0x0;
        if (lVar13 != lVar18) {
          plVar26 = (long *)(lVar18 + 0x38);
        }
        pp_Var19 = (__tree_node **)
                   std::__ndk1::
                   __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>>>
                   ::
                   find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                             ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>>>
                               *)&local_98,pbVar1);
        if ((__tree_node *)&local_90 == (__tree_node *)pp_Var19) {
          pAVar14 = (AnimationState *)
                    std::__ndk1::
                    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
                    ::
                    find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                              (this_00,pbVar1);
          if (this + 0x120 == pAVar14) {
            pBVar39 = BaseObject::borrowObject<dragonBones::BonePose>();
            local_78 = (piecewise_construct_t *)pbVar1;
            lVar15 = std::__ndk1::
                     __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
                     ::
                     __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                               ((basic_string *)this_00,(piecewise_construct_t *)pbVar1,
                                (tuple *)&DAT_01948364,(tuple *)&local_78);
            *(BonePose **)(lVar15 + 0x38) = pBVar39;
          }
          else {
            local_78 = (piecewise_construct_t *)pbVar1;
            lVar15 = std::__ndk1::
                     __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
                     ::
                     __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                               ((basic_string *)this_00,(piecewise_construct_t *)pbVar1,
                                (tuple *)&DAT_01948364,(tuple *)&local_78);
            pBVar39 = *(BonePose **)(lVar15 + 0x38);
          }
          if (lVar13 == lVar18) {
            if (this[0x10] != (AnimationState)0x0) {
              pBVar17 = BaseObject::borrowObject<dragonBones::BoneAllTimelineState>();
              *(long *)(pBVar17 + 0xb8) = lVar34;
              *(BonePose **)(pBVar17 + 0xc0) = pBVar39;
              (**(code **)(*(long *)pBVar17 + 0x30))(pBVar17,*(undefined8 *)(this + 0x130),this,0);
              if (*(undefined8 **)(this + 0xc0) < *(undefined8 **)(this + 200)) {
                **(undefined8 **)(this + 0xc0) = pBVar17;
                *(long *)(this + 0xc0) = *(long *)(this + 0xc0) + 8;
              }
              else {
                local_78 = (piecewise_construct_t *)pBVar17;
                std::__ndk1::
                vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>
                ::__push_back_slow_path<dragonBones::BoneTimelineState*>
                          (this_02,(BoneTimelineState **)&local_78);
              }
              uStack_70 = 0;
              puVar3 = *(undefined8 **)(this + 0x108);
              if (puVar3 < *(undefined8 **)(this + 0x110)) {
                puVar3[1] = (ulong)uStack_6c << 0x20;
                *puVar3 = pBVar17;
                *(long *)(this + 0x108) = *(long *)(this + 0x108) + 0x10;
                local_78 = (piecewise_construct_t *)pBVar17;
              }
              else {
                local_78 = (piecewise_construct_t *)pBVar17;
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
            plVar37 = (long *)plVar26[1];
            for (plVar26 = (long *)*plVar26; plVar26 != plVar37; plVar26 = plVar26 + 1) {
              lVar13 = *plVar26;
              switch(*(undefined4 *)(lVar13 + 0x10)) {
              case 10:
                ppVar16 = (piecewise_construct_t *)
                          BaseObject::borrowObject<dragonBones::BoneAllTimelineState>();
                break;
              case 0xb:
                ppVar16 = (piecewise_construct_t *)
                          BaseObject::borrowObject<dragonBones::BoneTranslateTimelineState>();
                break;
              case 0xc:
                ppVar16 = (piecewise_construct_t *)
                          BaseObject::borrowObject<dragonBones::BoneRotateTimelineState>();
                break;
              case 0xd:
                ppVar16 = (piecewise_construct_t *)
                          BaseObject::borrowObject<dragonBones::BoneScaleTimelineState>();
                break;
              default:
                goto switchD_00d1e9a4_default;
              }
              *(long *)(ppVar16 + 0xb8) = lVar34;
              *(BonePose **)(ppVar16 + 0xc0) = pBVar39;
              (**(code **)(*(long *)ppVar16 + 0x30))
                        (ppVar16,*(undefined8 *)(this + 0x130),this,lVar13);
              local_78 = ppVar16;
              if (*(undefined8 **)(this + 0xc0) < *(undefined8 **)(this + 200)) {
                **(undefined8 **)(this + 0xc0) = ppVar16;
                *(long *)(this + 0xc0) = *(long *)(this + 0xc0) + 8;
              }
              else {
                std::__ndk1::
                vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>
                ::__push_back_slow_path<dragonBones::BoneTimelineState*>
                          (this_02,(BoneTimelineState **)&local_78);
              }
switchD_00d1e9a4_default:
            }
          }
        }
        else {
          std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>>>
          ::erase((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>>>
                   *)&local_98,pp_Var19);
        }
      }
      else {
        sVar40 = *(size_t *)(lVar13 + 0x20);
        pvVar5 = *(void **)(lVar13 + 0x28);
        if ((*(byte *)(lVar13 + 0x18) & 1) == 0) {
          pvVar5 = (void *)(lVar13 + 0x19);
          sVar40 = (ulong)(*(byte *)(lVar13 + 0x18) >> 1);
        }
        do {
          bVar8 = *pbVar32;
          sVar2 = (ulong)(bVar8 >> 1);
          if ((bVar8 & 1) != 0) {
            sVar2 = *(size_t *)(pbVar32 + 8);
          }
          if (sVar2 == sVar40) {
            pbVar30 = *(byte **)(pbVar32 + 0x10);
            if ((bVar8 & 1) == 0) {
              pbVar30 = pbVar32 + 1;
            }
            if ((bVar8 & 1) == 0) {
              if (sVar40 == 0) {
LAB_00d1eba0:
                if (pbVar4 != pbVar32) goto LAB_00d1eba8;
                break;
              }
              uVar27 = 0;
              while (pbVar32[uVar27 + 1] == *(byte *)((long)pvVar5 + uVar27)) {
                uVar27 = uVar27 + 1;
                if (bVar8 >> 1 == uVar27) goto LAB_00d1eba0;
              }
            }
            else if ((sVar40 == 0) || (iVar12 = memcmp(pbVar30,pvVar5,sVar40), iVar12 == 0))
            goto LAB_00d1eba0;
          }
          pbVar32 = pbVar32 + 0x18;
        } while (pbVar32 != pbVar4);
      }
      plVar35 = plVar35 + 1;
      p_Var36 = local_98;
    } while (plVar35 != plVar38);
  }
  while (p_Var36 != (__tree_node *)&local_90) {
    p_Var6 = *(__tree_node **)(p_Var36 + 0x40);
    for (p_Var25 = *(__tree_node **)(p_Var36 + 0x38); p_Var25 != p_Var6; p_Var25 = p_Var25 + 8) {
      plVar35 = *(long **)(this + 0xb8);
      plVar38 = *(long **)(this + 0xc0);
      pBVar31 = *(BaseObject **)p_Var25;
      plVar26 = plVar35;
      if (plVar35 != plVar38) {
        pBVar28 = (BaseObject *)*plVar35;
        while ((plVar26 = plVar35, pBVar28 != pBVar31 &&
               (plVar35 = plVar35 + 1, plVar26 = plVar38, plVar38 != plVar35))) {
          pBVar28 = (BaseObject *)*plVar35;
        }
      }
      sVar40 = (long)plVar38 - (long)(plVar26 + 1);
      if (sVar40 != 0) {
        memmove(plVar26,plVar26 + 1,sVar40);
      }
      *(long **)(this + 0xc0) = plVar26 + ((long)sVar40 >> 3);
      BaseObject::returnToPool(pBVar31);
    }
    p_Var25 = *(__tree_node **)(p_Var36 + 8);
    if (*(__tree_node **)(p_Var36 + 8) == (__tree_node *)0x0) {
      p_Var25 = p_Var36 + 0x10;
      bVar11 = *(__tree_node **)*(__tree_node **)p_Var25 != p_Var36;
      p_Var36 = *(__tree_node **)p_Var25;
      if (bVar11) {
        do {
          lVar13 = *(long *)p_Var25;
          p_Var25 = (__tree_node *)(lVar13 + 0x10);
          p_Var36 = *(__tree_node **)p_Var25;
        } while (*(long *)p_Var36 != lVar13);
      }
    }
    else {
      do {
        p_Var36 = p_Var25;
        p_Var25 = *(__tree_node **)p_Var36;
      } while (*(__tree_node **)p_Var36 != (__tree_node *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>>>
             *)&local_98,local_90);
  local_90 = (__tree_node *)0x0;
  local_88 = 0;
  this_03 = (vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>
             *)(this + 0xd0);
  plVar38 = *(long **)(this + 0xd8);
  local_98 = (__tree_node *)&local_90;
  for (plVar35 = *(long **)this_03; plVar35 != plVar38; plVar35 = plVar35 + 1) {
    local_a0 = (BoneTimelineState *)*plVar35;
    local_78 = (piecewise_construct_t *)(*(long *)(*(long *)(local_a0 + 0xb8) + 200) + 0x20);
    lVar13 = std::__ndk1::
             __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>>>
             ::
             __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                       ((basic_string *)&local_98,local_78,(tuple *)&DAT_01948364,(tuple *)&local_78
                       );
    if (*(long **)(lVar13 + 0x40) == *(long **)(lVar13 + 0x48)) {
      std::__ndk1::
      vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>
      ::__push_back_slow_path<dragonBones::SlotTimelineState*const&>
                ((vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>
                  *)(lVar13 + 0x38),(SlotTimelineState **)&local_a0);
    }
    else {
      **(long **)(lVar13 + 0x40) = (long)local_a0;
      *(long *)(lVar13 + 0x40) = *(long *)(lVar13 + 0x40) + 8;
    }
  }
  plVar35 = *(long **)(*(long *)(this + 0x130) + 0x78);
  plVar38 = *(long **)(*(long *)(this + 0x130) + 0x80);
  if (plVar35 == plVar38) {
    piVar41 = (int *)0x0;
    p_Var36 = local_98;
  }
  else {
    piVar41 = (int *)0x0;
    this_01 = (vector<std::__ndk1::pair<dragonBones::TimelineState*,dragonBones::AnimationState::BaseTimelineType>,std::__ndk1::allocator<std::__ndk1::pair<dragonBones::TimelineState*,dragonBones::AnimationState::BaseTimelineType>>>
               *)(this + 0x100);
    local_b0 = (int *)0x0;
    do {
      pbVar32 = *(byte **)(this + 0xa0);
      pbVar4 = *(byte **)(this + 0xa8);
      lVar13 = *plVar35;
      if (pbVar32 == pbVar4) {
LAB_00d1ee6c:
        lVar34 = *(long *)(this + 0x80);
        pbVar1 = (basic_string *)(*(long *)(lVar13 + 200) + 0x20);
        lVar18 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>>>
                             *)(lVar34 + 0x80),pbVar1);
        lVar34 = lVar34 + 0x88;
        plVar26 = (long *)0x0;
        if (lVar34 != lVar18) {
          plVar26 = (long *)(lVar18 + 0x38);
        }
        pp_Var19 = (__tree_node **)
                   std::__ndk1::
                   __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>>>
                   ::
                   find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                             ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>>>
                               *)&local_98,pbVar1);
        if ((__tree_node *)&local_90 == (__tree_node *)pp_Var19) {
          if (lVar34 == lVar18) {
            bVar11 = false;
            bVar24 = false;
            AVar9 = this[0x10];
            piVar33 = piVar41;
          }
          else {
            plVar37 = (long *)*plVar26;
            plVar26 = (long *)plVar26[1];
            if (plVar37 == plVar26) {
              bVar24 = false;
              bVar11 = false;
              piVar21 = piVar41;
            }
            else {
              bVar24 = false;
              bVar11 = false;
              piVar33 = piVar41;
              __src = piVar41;
              do {
                lVar34 = *plVar37;
                iVar12 = *(int *)(lVar34 + 0x10);
                piVar21 = __src;
                if (iVar12 == 0x16) {
                  pDVar23 = BaseObject::borrowObject<dragonBones::DeformTimelineState>();
                  *(long *)(pDVar23 + 0xb8) = lVar13;
                  (**(code **)(*(long *)pDVar23 + 0x30))
                            (pDVar23,*(undefined8 *)(this + 0x130),this,lVar34);
                  local_78 = (piecewise_construct_t *)pDVar23;
                  if (*(undefined8 **)(this + 0xd8) < *(undefined8 **)(this + 0xe0)) {
                    **(undefined8 **)(this + 0xd8) = pDVar23;
                    *(long *)(this + 0xd8) = *(long *)(this + 0xd8) + 8;
                  }
                  else {
                    std::__ndk1::
                    vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>
                    ::__push_back_slow_path<dragonBones::SlotTimelineState*>
                              (this_03,(SlotTimelineState **)&local_78);
                  }
                  if (piVar33 == local_b0) {
                    sVar40 = (long)piVar33 - (long)__src;
                    uVar27 = ((long)sVar40 >> 2) + 1;
                    if (uVar27 >> 0x3e != 0) {
LAB_00d1f4dc:
                    /* WARNING: Subroutine does not return */
                      abort();
                    }
                    if ((ulong)((long)local_b0 - (long)__src >> 2) < 0x1fffffffffffffff) {
                      uVar29 = (long)local_b0 - (long)__src >> 1;
                      if (uVar27 <= uVar29) {
                        uVar27 = uVar29;
                      }
                      if (uVar27 != 0) {
                        if (uVar27 >> 0x3e != 0) goto LAB_00d1f4dc;
                        goto LAB_00d1f110;
                      }
                      piVar21 = (int *)0x0;
                    }
                    else {
                      uVar27 = 0x3fffffffffffffff;
LAB_00d1f110:
                      piVar21 = operator_new(uVar27 << 2);
                    }
                    local_b0 = piVar21 + uVar27;
                    piVar41 = piVar21 + ((long)sVar40 >> 2) + 1;
                    piVar21[(long)sVar40 >> 2] = *(int *)(pDVar23 + 0xc0);
                    if (0 < (long)sVar40) {
                      memcpy(piVar21,__src,sVar40);
                    }
                    if (__src != (int *)0x0) {
                      operator_delete(__src);
                    }
                  }
                  else {
                    piVar41 = piVar33 + 1;
                    *piVar33 = *(int *)(pDVar23 + 0xc0);
                  }
                }
                else {
                  piVar41 = piVar33;
                  if (iVar12 == 0x15) {
                    pSVar22 = BaseObject::borrowObject<dragonBones::SlotColorTimelineState>();
                    *(long *)(pSVar22 + 0xb8) = lVar13;
                    (**(code **)(*(long *)pSVar22 + 0x30))
                              (pSVar22,*(undefined8 *)(this + 0x130),this,lVar34);
                    local_78 = (piecewise_construct_t *)pSVar22;
                    if (*(undefined8 **)(this + 0xd8) < *(undefined8 **)(this + 0xe0)) {
                      **(undefined8 **)(this + 0xd8) = pSVar22;
                      *(long *)(this + 0xd8) = *(long *)(this + 0xd8) + 8;
                    }
                    else {
                      std::__ndk1::
                      vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>
                      ::__push_back_slow_path<dragonBones::SlotTimelineState*>
                                (this_03,(SlotTimelineState **)&local_78);
                    }
                    bVar11 = true;
                  }
                  else if (iVar12 == 0x14) {
                    pSVar20 = BaseObject::borrowObject<dragonBones::SlotDislayTimelineState>();
                    *(long *)(pSVar20 + 0xb8) = lVar13;
                    (**(code **)(*(long *)pSVar20 + 0x30))
                              (pSVar20,*(undefined8 *)(this + 0x130),this,lVar34);
                    local_78 = (piecewise_construct_t *)pSVar20;
                    if (*(undefined8 **)(this + 0xd8) < *(undefined8 **)(this + 0xe0)) {
                      **(undefined8 **)(this + 0xd8) = pSVar20;
                      bVar24 = true;
                      *(long *)(this + 0xd8) = *(long *)(this + 0xd8) + 8;
                    }
                    else {
                      std::__ndk1::
                      vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>
                      ::__push_back_slow_path<dragonBones::SlotTimelineState*>
                                (this_03,(SlotTimelineState **)&local_78);
                      bVar24 = true;
                    }
                  }
                }
                plVar37 = plVar37 + 1;
                piVar33 = piVar41;
                __src = piVar21;
              } while (plVar26 != plVar37);
            }
            AVar9 = this[0x10];
            piVar33 = piVar41;
            piVar41 = piVar21;
          }
          if (AVar9 != (AnimationState)0x0) {
            if (!bVar24) {
              pSVar20 = BaseObject::borrowObject<dragonBones::SlotDislayTimelineState>();
              *(long *)(pSVar20 + 0xb8) = lVar13;
              (**(code **)(*(long *)pSVar20 + 0x30))(pSVar20,*(undefined8 *)(this + 0x130),this,0);
              if (*(undefined8 **)(this + 0xd8) < *(undefined8 **)(this + 0xe0)) {
                **(undefined8 **)(this + 0xd8) = pSVar20;
                *(long *)(this + 0xd8) = *(long *)(this + 0xd8) + 8;
              }
              else {
                local_78 = (piecewise_construct_t *)pSVar20;
                std::__ndk1::
                vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>
                ::__push_back_slow_path<dragonBones::SlotTimelineState*>
                          (this_03,(SlotTimelineState **)&local_78);
              }
              uStack_70 = 1;
              puVar3 = *(undefined8 **)(this + 0x108);
              if (puVar3 < *(undefined8 **)(this + 0x110)) {
                puVar3[1] = CONCAT44(uStack_6c,1);
                *puVar3 = pSVar20;
                *(long *)(this + 0x108) = *(long *)(this + 0x108) + 0x10;
                local_78 = (piecewise_construct_t *)pSVar20;
              }
              else {
                local_78 = (piecewise_construct_t *)pSVar20;
                std::__ndk1::
                vector<std::__ndk1::pair<dragonBones::TimelineState*,dragonBones::AnimationState::BaseTimelineType>,std::__ndk1::allocator<std::__ndk1::pair<dragonBones::TimelineState*,dragonBones::AnimationState::BaseTimelineType>>>
                ::
                __push_back_slow_path<std::__ndk1::pair<dragonBones::TimelineState*,dragonBones::AnimationState::BaseTimelineType>>
                          (this_01,(pair *)&local_78);
              }
            }
            if (!bVar11) {
              pSVar22 = BaseObject::borrowObject<dragonBones::SlotColorTimelineState>();
              *(long *)(pSVar22 + 0xb8) = lVar13;
              (**(code **)(*(long *)pSVar22 + 0x30))(pSVar22,*(undefined8 *)(this + 0x130),this,0);
              if (*(undefined8 **)(this + 0xd8) < *(undefined8 **)(this + 0xe0)) {
                **(undefined8 **)(this + 0xd8) = pSVar22;
                *(long *)(this + 0xd8) = *(long *)(this + 0xd8) + 8;
              }
              else {
                local_78 = (piecewise_construct_t *)pSVar22;
                std::__ndk1::
                vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>
                ::__push_back_slow_path<dragonBones::SlotTimelineState*>
                          (this_03,(SlotTimelineState **)&local_78);
              }
              uStack_70 = 1;
              puVar3 = *(undefined8 **)(this + 0x108);
              if (puVar3 < *(undefined8 **)(this + 0x110)) {
                puVar3[1] = CONCAT44(uStack_6c,1);
                *puVar3 = pSVar22;
                *(long *)(this + 0x108) = *(long *)(this + 0x108) + 0x10;
                local_78 = (piecewise_construct_t *)pSVar22;
              }
              else {
                local_78 = (piecewise_construct_t *)pSVar22;
                std::__ndk1::
                vector<std::__ndk1::pair<dragonBones::TimelineState*,dragonBones::AnimationState::BaseTimelineType>,std::__ndk1::allocator<std::__ndk1::pair<dragonBones::TimelineState*,dragonBones::AnimationState::BaseTimelineType>>>
                ::
                __push_back_slow_path<std::__ndk1::pair<dragonBones::TimelineState*,dragonBones::AnimationState::BaseTimelineType>>
                          (this_01,(pair *)&local_78);
              }
            }
            plVar26 = *(long **)(lVar13 + 0x158);
            if (plVar26 != (long *)0x0) {
              plVar37 = (long *)plVar26[1];
              for (plVar26 = (long *)*plVar26; plVar26 != plVar37; plVar26 = plVar26 + 1) {
                lVar34 = *plVar26;
                if ((lVar34 != 0) && (*(int *)(lVar34 + 0x10) == 2)) {
                  iVar12 = *(int *)(lVar34 + 0x6c);
                  piVar21 = piVar41;
                  if (piVar41 != piVar33) {
                    iVar7 = *piVar41;
                    while (iVar7 != iVar12) {
                      piVar21 = piVar21 + 1;
                      if (piVar33 == piVar21) goto LAB_00d1f2ec;
                      iVar7 = *piVar21;
                    }
                  }
                  if (piVar21 == piVar33) {
LAB_00d1f2ec:
                    pDVar23 = BaseObject::borrowObject<dragonBones::DeformTimelineState>();
                    *(int *)(pDVar23 + 0xc0) = iVar12;
                    *(long *)(pDVar23 + 0xb8) = lVar13;
                    (**(code **)(*(long *)pDVar23 + 0x30))
                              (pDVar23,*(undefined8 *)(this + 0x130),this,0);
                    if (*(undefined8 **)(this + 0xd8) < *(undefined8 **)(this + 0xe0)) {
                      **(undefined8 **)(this + 0xd8) = pDVar23;
                      *(long *)(this + 0xd8) = *(long *)(this + 0xd8) + 8;
                    }
                    else {
                      local_78 = (piecewise_construct_t *)pDVar23;
                      std::__ndk1::
                      vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>
                      ::__push_back_slow_path<dragonBones::SlotTimelineState*>
                                (this_03,(SlotTimelineState **)&local_78);
                    }
                    uStack_70 = 1;
                    puVar3 = *(undefined8 **)(this + 0x108);
                    if (puVar3 < *(undefined8 **)(this + 0x110)) {
                      puVar3[1] = CONCAT44(uStack_6c,1);
                      *puVar3 = pDVar23;
                      *(long *)(this + 0x108) = *(long *)(this + 0x108) + 0x10;
                      local_78 = (piecewise_construct_t *)pDVar23;
                    }
                    else {
                      local_78 = (piecewise_construct_t *)pDVar23;
                      std::__ndk1::
                      vector<std::__ndk1::pair<dragonBones::TimelineState*,dragonBones::AnimationState::BaseTimelineType>,std::__ndk1::allocator<std::__ndk1::pair<dragonBones::TimelineState*,dragonBones::AnimationState::BaseTimelineType>>>
                      ::
                      __push_back_slow_path<std::__ndk1::pair<dragonBones::TimelineState*,dragonBones::AnimationState::BaseTimelineType>>
                                (this_01,(pair *)&local_78);
                    }
                  }
                }
              }
            }
          }
        }
        else {
          std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>>>
          ::erase((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>>>
                   *)&local_98,pp_Var19);
        }
      }
      else {
        lVar34 = *(long *)(*(long *)(lVar13 + 0x180) + 0xa8);
        sVar40 = *(size_t *)(lVar34 + 0x20);
        pvVar5 = *(void **)(lVar34 + 0x28);
        if ((*(byte *)(lVar34 + 0x18) & 1) == 0) {
          pvVar5 = (void *)(lVar34 + 0x19);
          sVar40 = (ulong)(*(byte *)(lVar34 + 0x18) >> 1);
        }
        do {
          bVar8 = *pbVar32;
          sVar2 = (ulong)(bVar8 >> 1);
          if ((bVar8 & 1) != 0) {
            sVar2 = *(size_t *)(pbVar32 + 8);
          }
          if (sVar2 == sVar40) {
            pbVar30 = *(byte **)(pbVar32 + 0x10);
            if ((bVar8 & 1) == 0) {
              pbVar30 = pbVar32 + 1;
            }
            if ((bVar8 & 1) == 0) {
              if (sVar40 == 0) {
LAB_00d1ee60:
                if (pbVar4 != pbVar32) goto LAB_00d1ee6c;
                break;
              }
              uVar27 = 0;
              while (pbVar32[uVar27 + 1] == *(byte *)((long)pvVar5 + uVar27)) {
                uVar27 = uVar27 + 1;
                if (bVar8 >> 1 == uVar27) goto LAB_00d1ee60;
              }
            }
            else if ((sVar40 == 0) || (iVar12 = memcmp(pbVar30,pvVar5,sVar40), iVar12 == 0))
            goto LAB_00d1ee60;
          }
          pbVar32 = pbVar32 + 0x18;
        } while (pbVar32 != pbVar4);
      }
      plVar35 = plVar35 + 1;
      p_Var36 = local_98;
    } while (plVar35 != plVar38);
  }
  while (p_Var36 != (__tree_node *)&local_90) {
    p_Var6 = *(__tree_node **)(p_Var36 + 0x40);
    for (p_Var25 = *(__tree_node **)(p_Var36 + 0x38); p_Var25 != p_Var6; p_Var25 = p_Var25 + 8) {
      plVar35 = *(long **)(this + 0xd0);
      plVar38 = *(long **)(this + 0xd8);
      pBVar31 = *(BaseObject **)p_Var25;
      plVar26 = plVar35;
      if (plVar35 != plVar38) {
        pBVar28 = (BaseObject *)*plVar35;
        while ((plVar26 = plVar35, pBVar28 != pBVar31 &&
               (plVar35 = plVar35 + 1, plVar26 = plVar38, plVar38 != plVar35))) {
          pBVar28 = (BaseObject *)*plVar35;
        }
      }
      sVar40 = (long)plVar38 - (long)(plVar26 + 1);
      if (sVar40 != 0) {
        memmove(plVar26,plVar26 + 1,sVar40);
      }
      *(long **)(this + 0xd8) = plVar26 + ((long)sVar40 >> 3);
      BaseObject::returnToPool(pBVar31);
    }
    p_Var25 = *(__tree_node **)(p_Var36 + 8);
    if (*(__tree_node **)(p_Var36 + 8) == (__tree_node *)0x0) {
      p_Var25 = p_Var36 + 0x10;
      bVar11 = *(__tree_node **)*(__tree_node **)p_Var25 != p_Var36;
      p_Var36 = *(__tree_node **)p_Var25;
      if (bVar11) {
        do {
          lVar13 = *(long *)p_Var25;
          p_Var25 = (__tree_node *)(lVar13 + 0x10);
          p_Var36 = *(__tree_node **)p_Var25;
        } while (*(long *)p_Var36 != lVar13);
      }
    }
    else {
      do {
        p_Var36 = p_Var25;
        p_Var25 = *(__tree_node **)p_Var36;
      } while (*(__tree_node **)p_Var36 != (__tree_node *)0x0);
    }
  }
  if (piVar41 != (int *)0x0) {
    operator_delete(piVar41);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>>>
             *)&local_98,local_90);
  if (*(long *)(lVar10 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

