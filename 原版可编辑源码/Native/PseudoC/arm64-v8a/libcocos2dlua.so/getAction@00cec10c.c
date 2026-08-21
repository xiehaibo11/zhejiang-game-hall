
/* cocosbuilder::CCBAnimationManager::getAction(cocosbuilder::CCBKeyframe*,
   cocosbuilder::CCBKeyframe*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::Node*) */

Action * __thiscall
cocosbuilder::CCBAnimationManager::getAction
          (CCBAnimationManager *this,CCBKeyframe *param_1,CCBKeyframe *param_2,basic_string *param_3
          ,Node *param_4)

{
  basic_string *pbVar1;
  basic_string bVar2;
  long lVar3;
  undefined8 *puVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  int iVar8;
  FiniteTimeAction *pFVar9;
  Ref *this_00;
  long lVar10;
  long *plVar11;
  vector *pvVar12;
  CCBAnimationManager *pCVar13;
  unordered_map *puVar14;
  Value *pVVar15;
  ulong uVar16;
  undefined *puVar17;
  Action *pAVar18;
  void *pvVar19;
  basic_string *pbVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 in_s1;
  undefined4 local_c8;
  undefined4 uStack_c4;
  Node *local_c0 [2];
  void *local_b0;
  undefined8 local_a8;
  Value *local_a0;
  Value *local_98;
  void *local_90;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  fVar21 = (float)CCBKeyframe::getTime(param_2);
  if (param_1 == (CCBKeyframe *)0x0) {
    fVar22 = 0.0;
  }
  else {
    fVar22 = (float)CCBKeyframe::getTime(param_1);
  }
  bVar2 = *param_3;
  uVar16 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar16 = *(ulong *)(param_3 + 8);
  }
  if (8 < uVar16 - 4) {
switchD_00cec1a8_caseD_6:
    pbVar20 = *(basic_string **)(param_3 + 0x10);
    goto LAB_00cec57c;
  }
  fVar21 = fVar21 - fVar22;
  switch(uVar16) {
  case 4:
    pbVar20 = *(basic_string **)(param_3 + 0x10);
    pbVar1 = pbVar20;
    if (((byte)bVar2 & 1) == 0) {
      pbVar1 = param_3 + 1;
    }
    if (*(int *)pbVar1 == 0x77656b73) {
      pVVar15 = (Value *)CCBKeyframe::getValue(param_2);
      plVar11 = (long *)cocos2d::Value::asValueVector(pVVar15);
      fVar22 = (float)cocos2d::Value::asFloat((Value *)*plVar11);
      fVar23 = (float)cocos2d::Value::asFloat((Value *)(*plVar11 + 0x10));
      pAVar18 = (Action *)cocos2d::SkewTo::create(fVar21,fVar22,fVar23);
LAB_00cec8a0:
      if (*(long *)(lVar3 + 0x28) == local_78) {
        return pAVar18;
      }
      goto LAB_00cec8b0;
    }
    break;
  case 5:
    pbVar20 = *(basic_string **)(param_3 + 0x10);
    pbVar1 = pbVar20;
    if (((byte)bVar2 & 1) == 0) {
      pbVar1 = param_3 + 1;
    }
    iVar8 = memcmp(pbVar1,"color",5);
    if (iVar8 == 0) {
      pVVar15 = (Value *)CCBKeyframe::getValue(param_2);
      puVar14 = (unordered_map *)cocos2d::Value::asValueMap(pVVar15);
      std::__ndk1::
      unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
      ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                       *)&local_a0,puVar14);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_c0,"r");
      local_a8 = local_c0;
      lVar10 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_a0,(piecewise_construct_t *)local_c0,
                          (tuple *)&DAT_01417b32,(tuple *)&local_a8);
      uVar5 = cocos2d::Value::asByte((Value *)(lVar10 + 0x28));
      if (((ulong)local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_c0,"g");
      local_a8 = local_c0;
      lVar10 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_a0,(piecewise_construct_t *)local_c0,
                          (tuple *)&DAT_01417b32,(tuple *)&local_a8);
      uVar6 = cocos2d::Value::asByte((Value *)(lVar10 + 0x28));
      if (((ulong)local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_c0,"b");
      local_a8 = local_c0;
      lVar10 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_a0,(piecewise_construct_t *)local_c0,
                          (tuple *)&DAT_01417b32,(tuple *)&local_a8);
      uVar7 = cocos2d::Value::asByte((Value *)(lVar10 + 0x28));
      if (((ulong)local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
      }
      pAVar18 = (Action *)cocos2d::TintTo::create(fVar21,uVar5,uVar6,uVar7);
      pVVar15 = local_a0;
      puVar4 = local_90;
      while (puVar4 != (void *)0x0) {
        pvVar19 = (void *)*puVar4;
        local_a0 = pVVar15;
        cocos2d::Value::~Value((Value *)(puVar4 + 5));
        if ((*(byte *)(puVar4 + 2) & 1) != 0) {
          operator_delete((void *)puVar4[4]);
        }
        operator_delete(puVar4);
        pVVar15 = local_a0;
        puVar4 = pvVar19;
      }
      local_a0 = (Value *)0x0;
      if (pVVar15 != (Value *)0x0) {
        operator_delete(pVVar15);
      }
    }
    else {
      iVar8 = memcmp(pbVar1,"scale",5);
      if (iVar8 != 0) break;
      local_a0 = (Value *)local_c0;
      local_c0[0] = param_4;
      lVar10 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char...c_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>>>>
               ::
               __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*const&>,std::__ndk1::tuple<>>
                         ((Node **)(this + 0x70),(piecewise_construct_t *)local_c0,
                          (tuple *)&DAT_01417b32,(tuple *)&local_a0);
      local_a0 = (Value *)param_3;
      lVar10 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                         ((basic_string *)(lVar10 + 0x18),(piecewise_construct_t *)param_3,
                          (tuple *)&DAT_01417b32,(tuple *)&local_a0);
      plVar11 = (long *)cocos2d::Value::asValueVector((Value *)(lVar10 + 0x28));
      iVar8 = cocos2d::Value::asInt((Value *)(*plVar11 + 0x20));
      pVVar15 = (Value *)CCBKeyframe::getValue(param_2);
      pvVar12 = (vector *)cocos2d::Value::asValueVector(pVVar15);
      std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::vector
                ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_a0,pvVar12)
      ;
      fVar22 = (float)cocos2d::Value::asFloat(local_a0);
      fVar23 = (float)cocos2d::Value::asFloat(local_a0 + 0x10);
      if (iVar8 == 1) {
        fVar24 = (float)CCBReader::getResolutionScale();
        fVar22 = fVar22 * fVar24;
        fVar23 = fVar23 * fVar24;
      }
      pAVar18 = (Action *)cocos2d::ScaleTo::create(fVar21,fVar22,fVar23);
      pVVar15 = local_a0;
      if (local_a0 != (Value *)0x0) {
        while (local_98 != pVVar15) {
          cocos2d::Value::~Value(local_98 + -0x10);
          local_98 = local_98 + -0x10;
        }
LAB_00cec920:
        local_98 = pVVar15;
        operator_delete(local_a0);
      }
    }
    goto LAB_00cec594;
  default:
    goto switchD_00cec1a8_caseD_6;
  case 7:
    pbVar20 = *(basic_string **)(param_3 + 0x10);
    pbVar1 = pbVar20;
    if (((byte)bVar2 & 1) == 0) {
      pbVar1 = param_3 + 1;
    }
    iVar8 = memcmp(pbVar1,"opacity",7);
    if (iVar8 == 0) {
      pVVar15 = (Value *)CCBKeyframe::getValue(param_2);
      uVar5 = cocos2d::Value::asByte(pVVar15);
      pAVar18 = (Action *)cocos2d::FadeTo::create(fVar21,uVar5);
      goto LAB_00cec8a0;
    }
    iVar8 = memcmp(pbVar1,"visible",7);
    if (iVar8 == 0) {
      pVVar15 = (Value *)CCBKeyframe::getValue(param_2);
      uVar16 = cocos2d::Value::asBool(pVVar15);
      pFVar9 = (FiniteTimeAction *)cocos2d::DelayTime::create(fVar21);
      if ((uVar16 & 1) == 0) {
        pAVar18 = (Action *)cocos2d::Hide::create();
      }
      else {
        pAVar18 = (Action *)cocos2d::Show::create();
      }
      goto LAB_00cec89c;
    }
    break;
  case 8:
    pbVar20 = *(basic_string **)(param_3 + 0x10);
    pbVar1 = pbVar20;
    if (((byte)bVar2 & 1) == 0) {
      pbVar1 = param_3 + 1;
    }
    if (*(long *)pbVar1 == 0x6e6f697461746f72) {
      pVVar15 = (Value *)CCBKeyframe::getValue(param_2);
      uVar27 = cocos2d::Value::asFloat(pVVar15);
      pAVar18 = operator_new(0x68,(nothrow_t *)&std::nothrow);
      if (pAVar18 != (Action *)0x0) {
        *(undefined8 *)(pAVar18 + 0x60) = 0;
        *(undefined8 *)(pAVar18 + 0x48) = 0;
        *(undefined8 *)(pAVar18 + 0x40) = 0;
        *(undefined8 *)(pAVar18 + 0x58) = 0;
        *(undefined8 *)(pAVar18 + 0x50) = 0;
        *(undefined8 *)(pAVar18 + 0x28) = 0;
        *(undefined8 *)(pAVar18 + 0x20) = 0;
        *(undefined8 *)(pAVar18 + 0x38) = 0;
        *(undefined8 *)(pAVar18 + 0x30) = 0;
        *(undefined8 *)(pAVar18 + 8) = 0;
        *(undefined8 *)pAVar18 = 0;
        *(undefined8 *)(pAVar18 + 0x18) = 0;
        *(undefined8 *)(pAVar18 + 0x10) = 0;
        cocos2d::Action::Action(pAVar18);
        *(undefined4 *)(pAVar18 + 0x4c) = 0;
        puVar17 = &CCBRotateTo::vtable;
        goto LAB_00cec84c;
      }
    }
    else {
      if (*(long *)pbVar1 != 0x6e6f697469736f70) break;
      local_a0 = (Value *)local_c0;
      local_c0[0] = param_4;
      lVar10 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char...c_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>>>>
               ::
               __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*const&>,std::__ndk1::tuple<>>
                         ((Node **)(this + 0x70),(piecewise_construct_t *)local_c0,
                          (tuple *)&DAT_01417b32,(tuple *)&local_a0);
      local_a0 = (Value *)param_3;
      lVar10 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                         ((basic_string *)(lVar10 + 0x18),(piecewise_construct_t *)param_3,
                          (tuple *)&DAT_01417b32,(tuple *)&local_a0);
      plVar11 = (long *)cocos2d::Value::asValueVector((Value *)(lVar10 + 0x28));
      uVar27 = cocos2d::Value::asInt((Value *)(*plVar11 + 0x20));
      pVVar15 = (Value *)CCBKeyframe::getValue(param_2);
      pvVar12 = (vector *)cocos2d::Value::asValueVector(pVVar15);
      std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::vector
                ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_a0,pvVar12)
      ;
      uVar25 = cocos2d::Value::asFloat(local_a0);
      uVar26 = cocos2d::Value::asFloat(local_a0 + 0x10);
      plVar11 = (long *)(**(code **)(*(long *)param_4 + 0x260))(param_4);
      if (plVar11 == (long *)0x0) {
        pCVar13 = this + 0xd0;
      }
      else {
        pCVar13 = (CCBAnimationManager *)(**(code **)(*plVar11 + 0x168))();
      }
      cocos2d::Size::Size((Size *)local_c0,(Size *)pCVar13);
      local_c8 = uVar25;
      uStack_c4 = uVar26;
      uVar27 = getAbsolutePosition(&local_c8,uVar27,local_c0,param_3);
      local_a8 = (Node **)CONCAT44(in_s1,uVar27);
      pAVar18 = (Action *)cocos2d::MoveTo::create(fVar21,(Vec2 *)&local_a8);
      pVVar15 = local_a0;
      if (local_a0 != (Value *)0x0) {
        while (local_98 != pVVar15) {
          cocos2d::Value::~Value(local_98 + -0x10);
          local_98 = local_98 + -0x10;
        }
        goto LAB_00cec920;
      }
    }
    goto LAB_00cec594;
  case 9:
    pbVar20 = *(basic_string **)(param_3 + 0x10);
    pbVar1 = pbVar20;
    if (((byte)bVar2 & 1) == 0) {
      pbVar1 = param_3 + 1;
    }
    iVar8 = memcmp(pbVar1,&DAT_01417985,9);
    if (iVar8 != 0) {
      iVar8 = memcmp(pbVar1,(void *)0x141798f,9);
      if (iVar8 != 0) break;
      pVVar15 = (Value *)CCBKeyframe::getValue(param_2);
      uVar27 = cocos2d::Value::asFloat(pVVar15);
      pAVar18 = operator_new(0x68,(nothrow_t *)&std::nothrow);
      if (pAVar18 != (Action *)0x0) {
        *(undefined8 *)(pAVar18 + 0x60) = 0;
        *(undefined8 *)(pAVar18 + 0x48) = 0;
        *(undefined8 *)(pAVar18 + 0x40) = 0;
        *(undefined8 *)(pAVar18 + 0x58) = 0;
        *(undefined8 *)(pAVar18 + 0x50) = 0;
        *(undefined8 *)(pAVar18 + 0x28) = 0;
        *(undefined8 *)(pAVar18 + 0x20) = 0;
        *(undefined8 *)(pAVar18 + 0x38) = 0;
        *(undefined8 *)(pAVar18 + 0x30) = 0;
        *(undefined8 *)(pAVar18 + 8) = 0;
        *(undefined8 *)pAVar18 = 0;
        *(undefined8 *)(pAVar18 + 0x18) = 0;
        *(undefined8 *)(pAVar18 + 0x10) = 0;
        cocos2d::Action::Action(pAVar18);
        *(undefined4 *)(pAVar18 + 0x4c) = 0;
        puVar17 = &CCBRotateYTo::vtable;
        goto LAB_00cec84c;
      }
      goto LAB_00cec594;
    }
    pVVar15 = (Value *)CCBKeyframe::getValue(param_2);
    uVar27 = cocos2d::Value::asFloat(pVVar15);
    pAVar18 = operator_new(0x68,(nothrow_t *)&std::nothrow);
    if (pAVar18 == (Action *)0x0) goto LAB_00cec594;
    *(undefined8 *)(pAVar18 + 0x60) = 0;
    *(undefined8 *)(pAVar18 + 0x48) = 0;
    *(undefined8 *)(pAVar18 + 0x40) = 0;
    *(undefined8 *)(pAVar18 + 0x58) = 0;
    *(undefined8 *)(pAVar18 + 0x50) = 0;
    *(undefined8 *)(pAVar18 + 0x28) = 0;
    *(undefined8 *)(pAVar18 + 0x20) = 0;
    *(undefined8 *)(pAVar18 + 0x38) = 0;
    *(undefined8 *)(pAVar18 + 0x30) = 0;
    *(undefined8 *)(pAVar18 + 8) = 0;
    *(undefined8 *)pAVar18 = 0;
    *(undefined8 *)(pAVar18 + 0x18) = 0;
    *(undefined8 *)(pAVar18 + 0x10) = 0;
    cocos2d::Action::Action(pAVar18);
    *(undefined4 *)(pAVar18 + 0x4c) = 0;
    puVar17 = &CCBRotateXTo::vtable;
LAB_00cec84c:
    *(undefined **)pAVar18 = puVar17 + 0x10;
    *(undefined **)(pAVar18 + 0x28) = puVar17 + 0x70;
    uVar16 = cocos2d::ActionInterval::initWithDuration((ActionInterval *)pAVar18,fVar21);
    if ((uVar16 & 1) != 0) {
      *(undefined4 *)(pAVar18 + 0x5c) = uVar27;
      cocos2d::Ref::autorelease((Ref *)pAVar18);
      goto LAB_00cec594;
    }
    (**(code **)(*(long *)pAVar18 + 8))(pAVar18);
    goto LAB_00cec590;
  case 0xc:
    pbVar20 = *(basic_string **)(param_3 + 0x10);
    pbVar1 = pbVar20;
    if (((byte)bVar2 & 1) == 0) {
      pbVar1 = param_3 + 1;
    }
    iVar8 = memcmp(pbVar1,"displayFrame",0xc);
    if (iVar8 == 0) {
      pFVar9 = (FiniteTimeAction *)cocos2d::DelayTime::create(fVar21);
      this_00 = (Ref *)CCBKeyframe::getObject(param_2);
      pAVar18 = operator_new(0x60,(nothrow_t *)&std::nothrow);
      if (pAVar18 != (Action *)0x0) {
        *(undefined8 *)(pAVar18 + 0x48) = 0;
        *(undefined8 *)(pAVar18 + 0x40) = 0;
        *(undefined8 *)(pAVar18 + 0x58) = 0;
        *(undefined8 *)(pAVar18 + 0x50) = 0;
        *(undefined8 *)(pAVar18 + 0x28) = 0;
        *(undefined8 *)(pAVar18 + 0x20) = 0;
        *(undefined8 *)(pAVar18 + 0x38) = 0;
        *(undefined8 *)(pAVar18 + 0x30) = 0;
        *(undefined8 *)(pAVar18 + 8) = 0;
        *(undefined8 *)pAVar18 = 0;
        *(undefined8 *)(pAVar18 + 0x18) = 0;
        *(undefined8 *)(pAVar18 + 0x10) = 0;
        cocos2d::Action::Action(pAVar18);
        *(undefined4 *)(pAVar18 + 0x4c) = 0;
        *(Ref **)(pAVar18 + 0x58) = this_00;
        *(undefined ***)pAVar18 = &PTR__CCBSetSpriteFrame_016cf118;
        *(undefined ***)(pAVar18 + 0x28) = &PTR_clone_016cf178;
        if (this_00 != (Ref *)0x0) {
          cocos2d::Ref::retain(this_00);
        }
        cocos2d::Ref::autorelease((Ref *)pAVar18);
      }
LAB_00cec89c:
      pAVar18 = (Action *)
                cocos2d::Sequence::createWithTwoActions(pFVar9,(FiniteTimeAction *)pAVar18);
      goto LAB_00cec8a0;
    }
  }
LAB_00cec57c:
  if (((byte)bVar2 & 1) == 0) {
    pbVar20 = param_3 + 1;
  }
  cocos2d::log("CCBReader: Failed to create animation for property: %s",pbVar20);
LAB_00cec590:
  pAVar18 = (Action *)0x0;
LAB_00cec594:
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return pAVar18;
  }
LAB_00cec8b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

