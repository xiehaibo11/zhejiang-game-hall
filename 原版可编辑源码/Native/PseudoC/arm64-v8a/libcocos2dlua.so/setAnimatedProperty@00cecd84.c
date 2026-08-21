
/* cocosbuilder::CCBAnimationManager::setAnimatedProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Node*,
   cocos2d::Value const&, cocos2d::Ref*, float) */

void cocosbuilder::CCBAnimationManager::setAnimatedProperty
               (basic_string *param_1,Node *param_2,Value *param_3,Ref *param_4,float param_5)

{
  ulong uVar1;
  Node *pNVar2;
  Node NVar3;
  long lVar4;
  undefined8 *puVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  CCBKeyframe *this;
  undefined8 uVar12;
  unordered_map *puVar13;
  long lVar14;
  long *plVar15;
  basic_string *pbVar16;
  Ref *in_x4;
  code *pcVar17;
  void *pvVar18;
  Node *pNVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined4 in_s1;
  undefined8 local_b8;
  void *local_a8;
  undefined8 *local_98;
  undefined8 local_90;
  void *local_80;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (0.0 < param_5) {
    this = operator_new(0x50,(nothrow_t *)&std::nothrow);
    if (this != (CCBKeyframe *)0x0) {
      CCBKeyframe::CCBKeyframe(this);
    }
    cocos2d::Ref::autorelease((Ref *)this);
    CCBKeyframe::setObject(this,in_x4);
    CCBKeyframe::setValue(this,(Value *)param_4);
    CCBKeyframe::setTime(this,param_5);
    CCBKeyframe::setEasingType(this,1);
    uVar12 = getAction((CCBAnimationManager *)param_1,(CCBKeyframe *)0x0,this,
                       (basic_string *)param_2,(Node *)param_3);
    (**(code **)(*(long *)param_3 + 0x3a8))(param_3,uVar12);
    goto LAB_00ced1e4;
  }
  NVar3 = *param_2;
  uVar1 = (ulong)((byte)NVar3 >> 1);
  if (((byte)NVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  switch(uVar1) {
  case 4:
    pNVar19 = *(Node **)(param_2 + 0x10);
    pNVar2 = pNVar19;
    if (((byte)NVar3 & 1) == 0) {
      pNVar2 = param_2 + 1;
    }
    if (*(int *)pNVar2 == 0x77656b73) {
      plVar15 = (long *)cocos2d::Value::asValueVector((Value *)param_4);
      uVar12 = cocos2d::Value::asFloat((Value *)*plVar15);
      uVar22 = cocos2d::Value::asFloat((Value *)(*plVar15 + 0x10));
      (**(code **)(*(long *)param_3 + 0x128))(uVar12,param_3);
      (**(code **)(*(long *)param_3 + 0x138))(uVar22,param_3);
      goto LAB_00ced1e4;
    }
    break;
  case 5:
    pNVar19 = *(Node **)(param_2 + 0x10);
    pNVar2 = pNVar19;
    if (((byte)NVar3 & 1) == 0) {
      pNVar2 = param_2 + 1;
    }
    iVar10 = memcmp(pNVar2,"scale",5);
    if (iVar10 == 0) {
      local_90 = (Node *)&local_b8;
      local_b8 = param_3;
      lVar14 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char...c_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>>>>
               ::
               __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*const&>,std::__ndk1::tuple<>>
                         ((Node **)(param_1 + 0x70),(piecewise_construct_t *)&local_b8,
                          (tuple *)&DAT_01417b32,(tuple *)&local_90);
      local_90 = param_2;
      lVar14 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                         ((basic_string *)(lVar14 + 0x18),(piecewise_construct_t *)param_2,
                          (tuple *)&DAT_01417b32,(tuple *)&local_90);
      plVar15 = (long *)cocos2d::Value::asValueVector((Value *)(lVar14 + 0x28));
      uVar11 = cocos2d::Value::asInt((Value *)(*plVar15 + 0x20));
      plVar15 = (long *)cocos2d::Value::asValueVector((Value *)param_4);
      uVar12 = cocos2d::Value::asFloat((Value *)*plVar15);
      uVar22 = cocos2d::Value::asFloat((Value *)(*plVar15 + 0x10));
      setRelativeScale(uVar12,uVar22,param_3,uVar11,param_2);
      goto LAB_00ced1e4;
    }
    iVar10 = memcmp(pNVar2,"color",5);
    if (iVar10 == 0) {
      puVar13 = (unordered_map *)cocos2d::Value::asValueMap((Value *)param_4);
      std::__ndk1::
      unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
      ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                       *)&local_90,puVar13);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"r");
      local_98 = &local_b8;
      lVar14 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_90,(piecewise_construct_t *)&local_b8,
                          (tuple *)&DAT_01417b32,(tuple *)&local_98);
      uVar6 = cocos2d::Value::asByte((Value *)(lVar14 + 0x28));
      if (((ulong)local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"g");
      local_98 = &local_b8;
      lVar14 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_90,(piecewise_construct_t *)&local_b8,
                          (tuple *)&DAT_01417b32,(tuple *)&local_98);
      uVar7 = cocos2d::Value::asByte((Value *)(lVar14 + 0x28));
      if (((ulong)local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"b");
      local_98 = &local_b8;
      lVar14 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_90,(piecewise_construct_t *)&local_b8,
                          (tuple *)&DAT_01417b32,(tuple *)&local_98);
      uVar8 = cocos2d::Value::asByte((Value *)(lVar14 + 0x28));
      if (((ulong)local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      cocos2d::Color3B::Color3B((Color3B *)&local_b8,uVar6,uVar7,uVar8);
      (**(code **)(*(long *)param_3 + 0x4c0))(param_3,&local_b8);
      pNVar2 = local_90;
      puVar5 = local_80;
      while (puVar5 != (void *)0x0) {
        pvVar18 = (void *)*puVar5;
        local_90 = pNVar2;
        cocos2d::Value::~Value((Value *)(puVar5 + 5));
        if ((*(byte *)(puVar5 + 2) & 1) != 0) {
          operator_delete((void *)puVar5[4]);
        }
        operator_delete(puVar5);
        pNVar2 = local_90;
        puVar5 = pvVar18;
      }
      local_90 = (Node *)0x0;
      if (pNVar2 != (Node *)0x0) {
        operator_delete(pNVar2);
      }
      goto LAB_00ced1e4;
    }
    break;
  default:
    pNVar19 = *(Node **)(param_2 + 0x10);
    break;
  case 7:
    pNVar19 = *(Node **)(param_2 + 0x10);
    pNVar2 = pNVar19;
    if (((byte)NVar3 & 1) == 0) {
      pNVar2 = param_2 + 1;
    }
    iVar10 = memcmp(pNVar2,"opacity",7);
    if (iVar10 == 0) {
      uVar9 = cocos2d::Value::asByte((Value *)param_4);
      pcVar17 = *(code **)(*(long *)param_3 + 0x490);
    }
    else {
      iVar10 = memcmp(pNVar2,"visible",7);
      if (iVar10 != 0) break;
      uVar9 = cocos2d::Value::asBool((Value *)param_4);
      uVar9 = uVar9 & 1;
      pcVar17 = *(code **)(*(long *)param_3 + 0x170);
    }
    (*pcVar17)(param_3,uVar9);
    goto LAB_00ced1e4;
  case 8:
    pNVar19 = *(Node **)(param_2 + 0x10);
    pNVar2 = pNVar19;
    if (((byte)NVar3 & 1) == 0) {
      pNVar2 = param_2 + 1;
    }
    if (*(long *)pNVar2 == 0x6e6f697469736f70) {
      local_90 = (Node *)&local_b8;
      local_b8 = param_3;
      lVar14 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char...c_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>>>>
               ::
               __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*const&>,std::__ndk1::tuple<>>
                         ((Node **)(param_1 + 0x70),(piecewise_construct_t *)&local_b8,
                          (tuple *)&DAT_01417b32,(tuple *)&local_90);
      local_90 = param_2;
      lVar14 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                         ((basic_string *)(lVar14 + 0x18),(piecewise_construct_t *)param_2,
                          (tuple *)&DAT_01417b32,(tuple *)&local_90);
      plVar15 = (long *)cocos2d::Value::asValueVector((Value *)(lVar14 + 0x28));
      uVar11 = cocos2d::Value::asInt((Value *)(*plVar15 + 0x20));
      plVar15 = (long *)cocos2d::Value::asValueVector((Value *)param_4);
      uVar20 = cocos2d::Value::asFloat((Value *)*plVar15);
      uVar21 = cocos2d::Value::asFloat((Value *)(*plVar15 + 0x10));
      local_b8 = (Value *)CONCAT44(uVar21,uVar20);
      plVar15 = (long *)(**(code **)(*(long *)param_3 + 0x260))(param_3);
      if (plVar15 == (long *)0x0) {
        pbVar16 = param_1 + 0xd0;
      }
      else {
        pbVar16 = (basic_string *)(**(code **)(*plVar15 + 0x168))();
      }
      uVar11 = getAbsolutePosition(&local_b8,uVar11,pbVar16,param_2);
      local_90 = (Node *)CONCAT44(in_s1,uVar11);
      (**(code **)(*(long *)param_3 + 0x98))(param_3,&local_90);
      goto LAB_00ced1e4;
    }
    if (*(long *)pNVar2 == 0x6e6f697461746f72) {
      cocos2d::Value::asFloat((Value *)param_4);
      pcVar17 = *(code **)(*(long *)param_3 + 0x180);
      goto LAB_00ced3a8;
    }
    break;
  case 9:
    pNVar19 = *(Node **)(param_2 + 0x10);
    pNVar2 = pNVar19;
    if (((byte)NVar3 & 1) == 0) {
      pNVar2 = param_2 + 1;
    }
    iVar10 = memcmp(pNVar2,&DAT_01417985,9);
    if (iVar10 == 0) {
      cocos2d::Value::asFloat((Value *)param_4);
      pcVar17 = *(code **)(*(long *)param_3 + 0x1b0);
    }
    else {
      iVar10 = memcmp(pNVar2,(void *)0x141798f,9);
      if (iVar10 != 0) break;
      cocos2d::Value::asFloat((Value *)param_4);
      pcVar17 = *(code **)(*(long *)param_3 + 0x1d0);
    }
LAB_00ced3a8:
    (*pcVar17)(param_3);
    goto LAB_00ced1e4;
  case 0xc:
    pNVar19 = *(Node **)(param_2 + 0x10);
    pNVar2 = pNVar19;
    if (((byte)NVar3 & 1) == 0) {
      pNVar2 = param_2 + 1;
    }
    iVar10 = memcmp(pNVar2,"displayFrame",0xc);
    if (iVar10 == 0) {
      (**(code **)(*(long *)param_3 + 0x598))(param_3);
      goto LAB_00ced1e4;
    }
  }
  if (((byte)NVar3 & 1) == 0) {
    pNVar19 = param_2 + 1;
  }
  cocos2d::log("unsupported property name is %s",pNVar19);
LAB_00ced1e4:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

