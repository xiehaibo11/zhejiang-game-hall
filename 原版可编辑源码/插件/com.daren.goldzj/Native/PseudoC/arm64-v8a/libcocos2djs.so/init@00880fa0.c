
/* cocos2d::Configuration::init() */

undefined8 __thiscall cocos2d::Configuration::init(Configuration *this)

{
  basic_string *pbVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  piecewise_construct_t local_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined2 uStack_57;
  undefined4 uStack_55;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined6 uStack_4f;
  undefined1 uStack_49;
  undefined1 *local_40;
  Value aVStack_38 [16];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  gatherGPUInfo(this);
  cocos2d::Value::Value(aVStack_38,false);
  pbVar1 = (basic_string *)(this + 0x48);
  local_60 = (piecewise_construct_t)0x2c;
  uStack_4f = 0x72656c69666f;
  uStack_57 = 0x775f;
  uStack_55 = 0x5f687469;
  uStack_51 = 0x70;
  uStack_50 = 0x72;
  uStack_5f = 0x656c69706d6f63;
  uStack_58 = 100;
  uStack_49 = 0;
  local_40 = &local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,&local_60,(tuple *)&DAT_0185435f,(tuple *)&local_40);
  cocos2d::Value::operator=((Value *)(lVar3 + 0x28),aVStack_38);
  if (((byte)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,CONCAT61(uStack_4f,uStack_50)));
  }
  cocos2d::Value::~Value(aVStack_38);
  cocos2d::Value::Value(aVStack_38,true);
  local_60 = (piecewise_construct_t)0x0;
  uStack_5f = 0;
  uStack_58 = 0;
  uStack_57 = 0;
  uStack_55 = 0;
  uStack_51 = 0;
  uStack_50 = 0;
  uStack_4f = 0;
  uStack_49 = 0;
  pcVar4 = operator_new(0x20);
  uStack_50 = SUB81(pcVar4,0);
  uStack_4f = (undefined6)((ulong)pcVar4 >> 8);
  uStack_49 = (undefined1)((ulong)pcVar4 >> 0x38);
  builtin_strncpy(pcVar4,"compiled_with_gl_state_cache",0x1d);
  uStack_58 = 0x1c;
  uStack_57 = 0;
  uStack_55 = 0;
  uStack_51 = 0;
  local_60 = (piecewise_construct_t)0x21;
  uStack_5f = 0;
  local_40 = &local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,&local_60,(tuple *)&DAT_0185435f,(tuple *)&local_40);
  cocos2d::Value::operator=((Value *)(lVar3 + 0x28),aVStack_38);
  if (((byte)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,CONCAT61(uStack_4f,uStack_50)));
  }
  cocos2d::Value::~Value(aVStack_38);
  cocos2d::Value::Value(aVStack_38,"RELEASE");
  uStack_51 = 0;
  uStack_50 = 0;
  uStack_4f = 0;
  uStack_49 = 0;
  local_60 = (piecewise_construct_t)0x14;
  uStack_57 = 0x6570;
  uStack_5f = 0x745f646c697562;
  uStack_58 = 0x79;
  uStack_55 = 0;
  local_40 = &local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,&local_60,(tuple *)&DAT_0185435f,(tuple *)&local_40);
  cocos2d::Value::operator=((Value *)(lVar3 + 0x28),aVStack_38);
  if (((byte)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,CONCAT61(uStack_4f,uStack_50)));
  }
  cocos2d::Value::~Value(aVStack_38);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

