
/* cocos2d::FileUtils::loadFilenameLookupDictionaryFromFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::FileUtils::loadFilenameLookupDictionaryFromFile(basic_string *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  basic_string *pbVar8;
  undefined8 uVar9;
  void *pvVar10;
  piecewise_construct_t local_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined1 local_97;
  undefined1 uStack_96;
  undefined5 uStack_95;
  void *local_90;
  byte local_88 [8];
  ulong local_80;
  void *local_78;
  undefined1 *local_68;
  void *local_60 [2];
  undefined8 *local_50;
  long local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  (**(code **)(*(long *)param_1 + 0x40))(local_88);
  uVar1 = (ulong)(local_88[0] >> 1);
  if ((local_88[0] & 1) != 0) {
    uVar1 = local_80;
  }
  if (uVar1 != 0) {
    plVar6 = (long *)getInstance();
    (**(code **)(*plVar6 + 0xb0))(local_60,plVar6,local_88);
    pvVar3 = local_60[0];
    puVar4 = local_50;
    if (local_48 != 0) {
      uStack_96 = 0;
      uStack_95 = 0;
      local_90 = (void *)0x0;
      local_a0 = (piecewise_construct_t)0x10;
      uStack_9f = 0x7461646174656d;
      uStack_98 = 0x61;
      local_97 = 0;
      local_68 = &local_a0;
      lVar7 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                        ((basic_string *)local_60,&local_a0,(tuple *)&DAT_01853e11,
                         (tuple *)&local_68);
      pbVar8 = (basic_string *)cocos2d::Value::asValueMap((Value *)(lVar7 + 0x28));
      if (((byte)local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      local_97 = 0;
      uStack_96 = 0;
      uStack_95 = 0;
      local_90 = (void *)0x0;
      local_a0 = (piecewise_construct_t)0xe;
      uStack_9f = 0x6e6f6973726576;
      uStack_98 = 0;
      local_68 = &local_a0;
      lVar7 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                        (pbVar8,&local_a0,(tuple *)&DAT_01853e11,(tuple *)&local_68);
      iVar5 = cocos2d::Value::asInt((Value *)(lVar7 + 0x28));
      if (((byte)local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      pvVar3 = local_60[0];
      puVar4 = local_50;
      if (iVar5 == 1) {
        uStack_95 = 0;
        local_90 = (void *)0x0;
        local_a0 = (piecewise_construct_t)0x12;
        local_97 = 0x73;
        uStack_96 = 0;
        uStack_9f = 0x6d616e656c6966;
        uStack_98 = 0x65;
        local_68 = &local_a0;
        lVar7 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                          ((basic_string *)local_60,&local_a0,(tuple *)&DAT_01853e11,
                           (tuple *)&local_68);
        uVar9 = cocos2d::Value::asValueMap((Value *)(lVar7 + 0x28));
        (**(code **)(*(long *)param_1 + 0x50))(param_1,uVar9);
        pvVar3 = local_60[0];
        puVar4 = local_50;
        if (((byte)local_a0 & 1) != 0) {
          operator_delete(local_90);
          pvVar3 = local_60[0];
          puVar4 = local_50;
        }
      }
    }
    while (puVar4 != (void *)0x0) {
      pvVar10 = (void *)*puVar4;
      local_60[0] = pvVar3;
      cocos2d::Value::~Value((Value *)(puVar4 + 5));
      if ((*(byte *)(puVar4 + 2) & 1) != 0) {
        operator_delete((void *)puVar4[4]);
      }
      operator_delete(puVar4);
      pvVar3 = local_60[0];
      puVar4 = pvVar10;
    }
    local_60[0] = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

