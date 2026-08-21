
/* cocosbuilder::CCBAnimationManager::runAnimationsForSequenceIdTweenDuration(int, float) */

void __thiscall
cocosbuilder::CCBAnimationManager::runAnimationsForSequenceIdTweenDuration
          (CCBAnimationManager *this,int param_1,float param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  Node *pNVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  __tree_node **pp_Var9;
  FiniteTimeAction *pFVar10;
  FiniteTimeAction *pFVar11;
  undefined8 uVar12;
  CCBAnimationManager *this_00;
  code *pcVar13;
  CCBSequence *this_01;
  CCBSequenceProperty *pCVar14;
  long *plVar15;
  void *pvVar16;
  long *plVar17;
  float fVar18;
  __tree_node **local_120;
  __tree_node *local_118;
  undefined8 uStack_110;
  Node *local_108;
  int local_fc [3];
  Node **local_f0 [2];
  void *local_e0;
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>
  aMStack_d8 [16];
  long *local_c8;
  long local_c0;
  undefined **local_b0;
  code *local_a8;
  void *pvStack_a0;
  CCBAnimationManager *local_98;
  undefined ***local_90;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  local_fc[0] = param_1;
  cocos2d::Node::stopAllActions(*(Node **)(this + 200));
  plVar17 = *(long **)(this + 0x58);
  if (plVar17 != (long *)0x0) {
    do {
      local_108 = (Node *)plVar17[2];
      cocos2d::Node::stopAllActions(local_108);
      std::__ndk1::
      unordered_map<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<std::__ndk1::pair<int_const,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>>>
      ::unordered_map((unordered_map<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<std::__ndk1::pair<int_const,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>>>
                       *)&local_b0,(unordered_map *)(plVar17 + 3));
      local_120 = (__tree_node **)local_fc;
      lVar8 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>>>
              ::
              __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                        ((int *)&local_b0,(piecewise_construct_t *)local_fc,(tuple *)&DAT_01417b32,
                         (tuple *)&local_120);
      cocos2d::
      Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>
      ::Map(aMStack_d8,(Map *)(lVar8 + 0x18));
      local_118 = (__tree_node *)0x0;
      uStack_110 = 0;
      local_120 = &local_118;
      plVar15 = local_c8;
      if (local_c0 != 0) {
        for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)local_f0,(basic_string *)(plVar15 + 2));
          pCVar14 = (CCBSequenceProperty *)plVar15[5];
          std::__ndk1::
          __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                    ((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)&local_120,(basic_string *)local_f0,(basic_string *)local_f0);
          setFirstFrame(this,local_108,pCVar14,param_2);
          runAction(this,local_108,pCVar14,param_2);
          if (((ulong)local_f0[0] & 1) != 0) {
            operator_delete(local_e0);
          }
        }
      }
      local_f0[0] = &local_108;
      lVar8 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char...c_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>>>>
              ::
              __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*const&>,std::__ndk1::tuple<>>
                        ((Node **)(this + 0x70),(piecewise_construct_t *)&local_108,
                         (tuple *)&DAT_01417b32,(tuple *)local_f0);
      if (*(long *)(lVar8 + 0x30) != 0) {
        for (plVar15 = *(long **)(lVar8 + 0x28); plVar15 != (long *)0x0; plVar15 = (long *)*plVar15)
        {
          pp_Var9 = (__tree_node **)
                    std::__ndk1::
                    __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    ::
                    find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                              ((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                                *)&local_120,(basic_string *)(plVar15 + 2));
          if (&local_118 == pp_Var9) {
            setAnimatedProperty((basic_string *)this,(Node *)(plVar15 + 2),(Value *)local_108,
                                (Ref *)(plVar15 + 5),param_2);
          }
        }
      }
      local_f0[0] = &local_108;
      lVar8 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Ref*,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Ref*>>>>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Ref*,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,s...ic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Ref*>>>>>>
              ::
              __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*const&>,std::__ndk1::tuple<>>
                        ((Node **)(this + 0x98),(piecewise_construct_t *)&local_108,
                         (tuple *)&DAT_01417b32,(tuple *)local_f0);
      if (*(long *)(lVar8 + 0x30) != 0) {
        for (plVar15 = *(long **)(lVar8 + 0x28); plVar15 != (long *)0x0; plVar15 = (long *)*plVar15)
        {
          pp_Var9 = (__tree_node **)
                    std::__ndk1::
                    __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    ::
                    find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                              ((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                                *)&local_120,(basic_string *)(plVar15 + 2));
          pNVar5 = local_108;
          if (&local_118 == pp_Var9) {
            cocos2d::Value::Value((Value *)local_f0);
            setAnimatedProperty((basic_string *)this,(Node *)(plVar15 + 2),(Value *)pNVar5,
                                (Ref *)local_f0,param_2);
            cocos2d::Value::~Value((Value *)local_f0);
          }
        }
      }
      std::__ndk1::
      __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::destroy((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                 *)&local_120,local_118);
      cocos2d::
      Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>
      ::~Map(aMStack_d8);
      ppuVar3 = local_b0;
      puVar1 = pvStack_a0;
      while (puVar1 != (void *)0x0) {
        pvVar16 = (void *)*puVar1;
        local_b0 = ppuVar3;
        cocos2d::
        Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>
        ::~Map((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>
                *)(puVar1 + 3));
        operator_delete(puVar1);
        ppuVar3 = local_b0;
        puVar1 = pvVar16;
      }
      local_b0 = (undefined **)0x0;
      if (ppuVar3 != (undefined **)0x0) {
        operator_delete(ppuVar3);
      }
      plVar17 = (long *)*plVar17;
      param_1 = local_fc[0];
    } while (plVar17 != (long *)0x0);
  }
  puVar1 = *(undefined8 **)(this + 0x38);
  puVar4 = *(undefined8 **)(this + 0x30);
  do {
    if (puVar4 == puVar1) {
      this_01 = (CCBSequence *)0x0;
      break;
    }
    iVar6 = CCBSequence::getSequenceId((CCBSequence *)*puVar4);
    this_01 = (CCBSequence *)*puVar4;
    puVar4 = puVar4 + 1;
  } while (iVar6 != param_1);
  fVar18 = (float)CCBSequence::getDuration(this_01);
  pFVar10 = (FiniteTimeAction *)cocos2d::DelayTime::create(fVar18 + param_2);
  local_90 = &local_b0;
  local_b0 = &PTR_FUN_016cf5c8;
  pvStack_a0 = (void *)0x0;
  local_a8 = sequenceCompleted;
  local_98 = this;
  pFVar11 = (FiniteTimeAction *)cocos2d::CallFunc::create((function *)&local_b0);
  uVar12 = cocos2d::Sequence::createWithTwoActions(pFVar10,pFVar11);
  if (&local_b0 == local_90) {
    pcVar13 = (code *)(*local_90)[4];
  }
  else {
    if (local_90 == (undefined ***)0x0) goto LAB_00ceedd8;
    pcVar13 = (code *)(*local_90)[5];
  }
  (*pcVar13)();
LAB_00ceedd8:
  (**(code **)(**(long **)(this + 200) + 0x3a8))(*(long **)(this + 200),uVar12);
  lVar8 = CCBSequence::getCallbackChannel(this_01);
  if (lVar8 != 0) {
    CCBSequence::getCallbackChannel(this_01);
    lVar8 = actionForCallbackChannel((CCBSequenceProperty *)this);
    if (lVar8 != 0) {
      (**(code **)(**(long **)(this + 200) + 0x3a8))(*(long **)(this + 200),lVar8);
    }
  }
  lVar8 = CCBSequence::getSoundChannel(this_01);
  if (lVar8 != 0) {
    this_00 = (CCBAnimationManager *)CCBSequence::getSoundChannel(this_01);
    lVar8 = actionForSoundChannel(this_00,(CCBSequenceProperty *)this_00);
    if (lVar8 != 0) {
      (**(code **)(**(long **)(this + 200) + 0x3a8))(*(long **)(this + 200),lVar8);
    }
  }
  iVar6 = local_fc[0];
  puVar1 = *(undefined8 **)(this + 0x38);
  puVar4 = *(undefined8 **)(this + 0x30);
  do {
    if (puVar4 == puVar1) {
      uVar12 = 0;
      break;
    }
    iVar7 = CCBSequence::getSequenceId((CCBSequence *)*puVar4);
    uVar12 = *puVar4;
    puVar4 = puVar4 + 1;
  } while (iVar7 != iVar6);
  *(undefined8 *)(this + 0xe0) = uVar12;
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

