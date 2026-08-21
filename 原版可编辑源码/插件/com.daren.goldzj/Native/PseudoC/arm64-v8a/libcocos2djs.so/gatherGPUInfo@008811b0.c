
/* cocos2d::Configuration::gatherGPUInfo() */

void __thiscall cocos2d::Configuration::gatherGPUInfo(Configuration *this)

{
  basic_string *pbVar1;
  long lVar2;
  Configuration CVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  char *pcVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  uint local_80 [2];
  undefined1 uStack_78;
  undefined2 uStack_77;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined2 uStack_73;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined2 uStack_6d;
  undefined1 uStack_6b;
  undefined2 uStack_6a;
  uint *local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pcVar4 = (char *)glGetString(0x1f00);
  cocos2d::Value::Value(aVStack_58,pcVar4);
  pbVar1 = (basic_string *)(this + 0x48);
  local_60 = local_80;
  uStack_75 = 0;
  uStack_74 = 0;
  uStack_73 = 0;
  uStack_71 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  uStack_6e = 0;
  uStack_6d = 0;
  uStack_6b = 0;
  uStack_6a = 0;
  uStack_77 = 0x72;
  local_80[0] = 0x2e6c6712;
  local_80[1] = 0x646e6576;
  uStack_78 = 0x6f;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_0185435f,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar5 + 0x28),aVStack_58);
  if ((local_80[0] & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_6a,
                                     CONCAT15(uStack_6b,
                                              CONCAT23(uStack_6d,
                                                       CONCAT12(uStack_6e,
                                                                CONCAT11(uStack_6f,uStack_70))))));
  }
  cocos2d::Value::~Value(aVStack_58);
  pcVar4 = (char *)glGetString(0x1f01);
  cocos2d::Value::Value(aVStack_58,pcVar4);
  local_60 = local_80;
  uStack_73 = 0;
  uStack_71 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  uStack_6e = 0;
  uStack_6d = 0;
  uStack_6b = 0;
  uStack_6a = 0;
  uStack_77 = 0x6572;
  uStack_75 = 0x72;
  uStack_74 = 0;
  local_80[0] = 0x2e6c6716;
  local_80[1] = 0x646e6572;
  uStack_78 = 0x65;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_0185435f,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar5 + 0x28),aVStack_58);
  if ((local_80[0] & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_6a,
                                     CONCAT15(uStack_6b,
                                              CONCAT23(uStack_6d,
                                                       CONCAT12(uStack_6e,
                                                                CONCAT11(uStack_6f,uStack_70))))));
  }
  cocos2d::Value::~Value(aVStack_58);
  pcVar4 = (char *)glGetString(0x1f02);
  cocos2d::Value::Value(aVStack_58,pcVar4);
  local_60 = local_80;
  uStack_74 = 0;
  uStack_73 = 0;
  uStack_71 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  uStack_6e = 0;
  uStack_6d = 0;
  uStack_6b = 0;
  uStack_6a = 0;
  uStack_77 = 0x6e6f;
  local_80[0] = 0x2e6c6714;
  local_80[1] = 0x73726576;
  uStack_78 = 0x69;
  uStack_75 = 0;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_0185435f,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar5 + 0x28),aVStack_58);
  if ((local_80[0] & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_6a,
                                     CONCAT15(uStack_6b,
                                              CONCAT23(uStack_6d,
                                                       CONCAT12(uStack_6e,
                                                                CONCAT11(uStack_6f,uStack_70))))));
  }
  cocos2d::Value::~Value(aVStack_58);
  uVar6 = glGetString(0x1f03);
  *(undefined8 *)(this + 0x30) = uVar6;
  local_80[0] = 0;
  glGetIntegerv(0x86a2,local_80);
  uVar9 = (long)(int)local_80[0] << 2;
  if ((ulong)(long)(int)local_80[0] >> 0x3e != 0) {
    uVar9 = 0xffffffffffffffff;
  }
  piVar7 = operator_new__(uVar9);
  glGetIntegerv(0x86a3,piVar7);
  lVar5 = (long)(int)local_80[0];
  if ((int)local_80[0] < 1) {
    iVar11 = 0;
  }
  else {
    iVar11 = 0;
    piVar10 = piVar7;
    do {
      if ((*piVar10 == 0x9278) || (*piVar10 == 0x9274)) {
        iVar11 = iVar11 + 1;
      }
      lVar5 = lVar5 + -1;
      piVar10 = piVar10 + 1;
    } while (lVar5 != 0);
  }
  operator_delete__(piVar7);
  this[0x16] = (Configuration)(1 < iVar11);
  cocos2d::Value::Value(aVStack_58,1 < iVar11);
  uStack_6e = 0;
  uStack_6d = 0;
  uStack_6b = 0;
  uStack_6a = 0;
  uStack_77 = 0x7472;
  uStack_75 = 0x73;
  uStack_74 = 0x5f;
  uStack_73 = 0x5445;
  uStack_71 = 0x43;
  uStack_70 = 0x32;
  local_80[0] = 0x2e6c6720;
  local_80[1] = 0x70707573;
  uStack_78 = 0x6f;
  uStack_6f = 0;
  local_60 = local_80;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_0185435f,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar5 + 0x28),aVStack_58);
  if ((local_80[0] & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_6a,
                                     CONCAT15(uStack_6b,
                                              CONCAT23(uStack_6d,
                                                       CONCAT12(uStack_6e,
                                                                CONCAT11(uStack_6f,uStack_70))))));
  }
  cocos2d::Value::~Value(aVStack_58);
  glGetIntegerv(0xd33,this + 0xc);
  cocos2d::Value::Value(aVStack_58,*(int *)(this + 0xc));
  local_60 = local_80;
  uStack_6b = 0;
  uStack_6a = 0;
  uStack_6f = 0x69;
  uStack_6e = 0x7a;
  uStack_6d = 0x65;
  uStack_77 = 0x7865;
  uStack_75 = 0x74;
  uStack_74 = 0x75;
  uStack_73 = 0x6572;
  uStack_71 = 0x5f;
  uStack_70 = 0x73;
  local_80[0] = 0x2e6c6726;
  local_80[1] = 0x5f78616d;
  uStack_78 = 0x74;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_0185435f,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar5 + 0x28),aVStack_58);
  if ((local_80[0] & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_6a,
                                     CONCAT15(uStack_6b,
                                              CONCAT23(uStack_6d,
                                                       CONCAT12(uStack_6e,
                                                                CONCAT11(uStack_6f,uStack_70))))));
  }
  cocos2d::Value::~Value(aVStack_58);
  glGetIntegerv(0x8b4d,this + 0x28);
  cocos2d::Value::Value(aVStack_58,*(int *)(this + 0x28));
  local_60 = local_80;
  uStack_6a = 0;
  uStack_6f = 0x6e;
  uStack_6e = 0x69;
  uStack_6d = 0x7374;
  uStack_77 = 0x7865;
  uStack_75 = 0x74;
  uStack_74 = 0x75;
  uStack_73 = 0x6572;
  uStack_71 = 0x5f;
  uStack_70 = 0x75;
  local_80[0] = 0x2e6c6728;
  local_80[1] = 0x5f78616d;
  uStack_78 = 0x74;
  uStack_6b = 0;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_0185435f,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar5 + 0x28),aVStack_58);
  if ((local_80[0] & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_6a,
                                     CONCAT15(uStack_6b,
                                              CONCAT23(uStack_6d,
                                                       CONCAT12(uStack_6e,
                                                                CONCAT11(uStack_6f,uStack_70))))));
  }
  cocos2d::Value::~Value(aVStack_58);
  pcVar4 = operator_new(0x30);
  builtin_strncpy(pcVar4,"GL_OES_compressed_ETC1_RGB8_texture",0x24);
  if (*(char **)(this + 0x30) == (char *)0x0) {
    CVar3 = (Configuration)0x0;
  }
  else {
    pcVar8 = strstr(*(char **)(this + 0x30),pcVar4);
    CVar3 = (Configuration)(pcVar8 != (char *)0x0);
  }
  this[0x15] = CVar3;
  operator_delete(pcVar4);
  cocos2d::Value::Value(aVStack_58,(bool)this[0x15]);
  local_60 = local_80;
  uStack_6e = 0;
  uStack_6d = 0;
  uStack_6b = 0;
  uStack_6a = 0;
  uStack_77 = 0x7472;
  uStack_75 = 0x73;
  uStack_74 = 0x5f;
  uStack_73 = 0x5445;
  uStack_71 = 0x43;
  uStack_70 = 0x31;
  local_80[0] = 0x2e6c6720;
  local_80[1] = 0x70707573;
  uStack_78 = 0x6f;
  uStack_6f = 0;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_0185435f,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar5 + 0x28),aVStack_58);
  if ((local_80[0] & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_6a,
                                     CONCAT15(uStack_6b,
                                              CONCAT23(uStack_6d,
                                                       CONCAT12(uStack_6e,
                                                                CONCAT11(uStack_6f,uStack_70))))));
  }
  cocos2d::Value::~Value(aVStack_58);
  pcVar4 = operator_new(0x20);
  builtin_strncpy(pcVar4,"GL_EXT_texture_compression_s3tc",0x20);
  if (*(char **)(this + 0x30) == (char *)0x0) {
    CVar3 = (Configuration)0x0;
  }
  else {
    pcVar8 = strstr(*(char **)(this + 0x30),pcVar4);
    CVar3 = (Configuration)(pcVar8 != (char *)0x0);
  }
  this[0x18] = CVar3;
  operator_delete(pcVar4);
  cocos2d::Value::Value(aVStack_58,(bool)this[0x18]);
  local_60 = local_80;
  uStack_6e = 0;
  uStack_6d = 0;
  uStack_6b = 0;
  uStack_6a = 0;
  uStack_77 = 0x7472;
  uStack_75 = 0x73;
  uStack_74 = 0x5f;
  uStack_73 = 0x3353;
  uStack_71 = 0x54;
  uStack_70 = 0x43;
  local_80[0] = 0x2e6c6720;
  local_80[1] = 0x70707573;
  uStack_78 = 0x6f;
  uStack_6f = 0;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_0185435f,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar5 + 0x28),aVStack_58);
  if ((local_80[0] & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_6a,
                                     CONCAT15(uStack_6b,
                                              CONCAT23(uStack_6d,
                                                       CONCAT12(uStack_6e,
                                                                CONCAT11(uStack_6f,uStack_70))))));
  }
  cocos2d::Value::~Value(aVStack_58);
  pcVar4 = operator_new(0x20);
  builtin_strncpy(pcVar4,"GL_AMD_compressed_ATC_texture",0x1e);
  if (*(char **)(this + 0x30) == (char *)0x0) {
    CVar3 = (Configuration)0x0;
  }
  else {
    pcVar8 = strstr(*(char **)(this + 0x30),pcVar4);
    CVar3 = (Configuration)(pcVar8 != (char *)0x0);
  }
  this[0x19] = CVar3;
  operator_delete(pcVar4);
  cocos2d::Value::Value(aVStack_58,(bool)this[0x19]);
  local_60 = local_80;
  uStack_6d = 0;
  uStack_6b = 0;
  uStack_6a = 0;
  uStack_6f = 0x43;
  uStack_6e = 0;
  uStack_77 = 0x7472;
  uStack_75 = 0x73;
  uStack_74 = 0x5f;
  uStack_73 = 0x5441;
  uStack_71 = 0x49;
  uStack_70 = 0x54;
  local_80[0] = 0x2e6c6722;
  local_80[1] = 0x70707573;
  uStack_78 = 0x6f;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_0185435f,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar5 + 0x28),aVStack_58);
  if ((local_80[0] & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_6a,
                                     CONCAT15(uStack_6b,
                                              CONCAT23(uStack_6d,
                                                       CONCAT12(uStack_6e,
                                                                CONCAT11(uStack_6f,uStack_70))))));
  }
  cocos2d::Value::~Value(aVStack_58);
  pcVar4 = operator_new(0x30);
  builtin_strncpy(pcVar4,"GL_IMG_texture_compression_pvrtc",0x21);
  if (*(char **)(this + 0x30) == (char *)0x0) {
    CVar3 = (Configuration)0x0;
  }
  else {
    pcVar8 = strstr(*(char **)(this + 0x30),pcVar4);
    CVar3 = (Configuration)(pcVar8 != (char *)0x0);
  }
  this[0x14] = CVar3;
  operator_delete(pcVar4);
  cocos2d::Value::Value(aVStack_58,(bool)this[0x14]);
  local_60 = local_80;
  uStack_6d = 0;
  uStack_6b = 0;
  uStack_6a = 0;
  uStack_6f = 0x43;
  uStack_6e = 0;
  uStack_77 = 0x7472;
  uStack_75 = 0x73;
  uStack_74 = 0x5f;
  uStack_73 = 0x5650;
  uStack_71 = 0x52;
  uStack_70 = 0x54;
  local_80[0] = 0x2e6c6722;
  local_80[1] = 0x70707573;
  uStack_78 = 0x6f;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_0185435f,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar5 + 0x28),aVStack_58);
  if ((local_80[0] & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_6a,
                                     CONCAT15(uStack_6b,
                                              CONCAT23(uStack_6d,
                                                       CONCAT12(uStack_6e,
                                                                CONCAT11(uStack_6f,uStack_70))))));
  }
  cocos2d::Value::~Value(aVStack_58);
  pcVar4 = operator_new(0x20);
  builtin_strncpy(pcVar4,"texture_compression_astc",0x19);
  if (*(char **)(this + 0x30) == (char *)0x0) {
    CVar3 = (Configuration)0x0;
  }
  else {
    pcVar8 = strstr(*(char **)(this + 0x30),pcVar4);
    CVar3 = (Configuration)(pcVar8 != (char *)0x0);
  }
  this[0x17] = CVar3;
  operator_delete(pcVar4);
  cocos2d::Value::Value(aVStack_58,(bool)this[0x17]);
  local_60 = local_80;
  uStack_6e = 0;
  uStack_6d = 0;
  uStack_6b = 0;
  uStack_6a = 0;
  uStack_77 = 0x7472;
  uStack_75 = 0x73;
  uStack_74 = 0x5f;
  uStack_73 = 0x5341;
  uStack_71 = 0x54;
  uStack_70 = 0x43;
  local_80[0] = 0x2e6c6720;
  local_80[1] = 0x70707573;
  uStack_78 = 0x6f;
  uStack_6f = 0;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_0185435f,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar5 + 0x28),aVStack_58);
  if ((local_80[0] & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_6a,
                                     CONCAT15(uStack_6b,
                                              CONCAT23(uStack_6d,
                                                       CONCAT12(uStack_6e,
                                                                CONCAT11(uStack_6f,uStack_70))))));
  }
  cocos2d::Value::~Value(aVStack_58);
  this[0x1a] = (Configuration)0x1;
  cocos2d::Value::Value(aVStack_58,true);
  local_60 = local_80;
  uStack_6e = 0;
  uStack_6d = 0;
  uStack_6b = 0;
  uStack_6a = 0;
  uStack_77 = 0x7472;
  uStack_75 = 0x73;
  uStack_74 = 0x5f;
  uStack_73 = 0x504e;
  uStack_71 = 0x4f;
  uStack_70 = 0x54;
  local_80[0] = 0x2e6c6720;
  local_80[1] = 0x70707573;
  uStack_78 = 0x6f;
  uStack_6f = 0;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_0185435f,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar5 + 0x28),aVStack_58);
  if ((local_80[0] & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_6a,
                                     CONCAT15(uStack_6b,
                                              CONCAT23(uStack_6d,
                                                       CONCAT12(uStack_6e,
                                                                CONCAT11(uStack_6f,uStack_70))))));
  }
  cocos2d::Value::~Value(aVStack_58);
  pcVar4 = operator_new(0x20);
  builtin_strncpy(pcVar4,"GL_IMG_texture_format_BGRA888",0x1e);
  if (*(char **)(this + 0x30) == (char *)0x0) {
    CVar3 = (Configuration)0x0;
  }
  else {
    pcVar8 = strstr(*(char **)(this + 0x30),pcVar4);
    CVar3 = (Configuration)(pcVar8 != (char *)0x0);
  }
  this[0x1b] = CVar3;
  operator_delete(pcVar4);
  cocos2d::Value::Value(aVStack_58,(bool)this[0x1b]);
  local_60 = local_80;
  uStack_6a = 0;
  uStack_6f = 0x38;
  uStack_6e = 0x38;
  uStack_6d = 0x3838;
  uStack_77 = 0x7472;
  uStack_75 = 0x73;
  uStack_74 = 0x5f;
  uStack_73 = 0x4742;
  uStack_71 = 0x52;
  uStack_70 = 0x41;
  local_80[0] = 0x2e6c6728;
  local_80[1] = 0x70707573;
  uStack_78 = 0x6f;
  uStack_6b = 0;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_0185435f,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar5 + 0x28),aVStack_58);
  if ((local_80[0] & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_6a,
                                     CONCAT15(uStack_6b,
                                              CONCAT23(uStack_6d,
                                                       CONCAT12(uStack_6e,
                                                                CONCAT11(uStack_6f,uStack_70))))));
  }
  cocos2d::Value::~Value(aVStack_58);
  pcVar4 = operator_new(0x20);
  builtin_strncpy(pcVar4,"GL_EXT_discard_framebuffer",0x1b);
  if (*(char **)(this + 0x30) == (char *)0x0) {
    CVar3 = (Configuration)0x0;
  }
  else {
    pcVar8 = strstr(*(char **)(this + 0x30),pcVar4);
    CVar3 = (Configuration)(pcVar8 != (char *)0x0);
  }
  this[0x1c] = CVar3;
  operator_delete(pcVar4);
  cocos2d::Value::Value(aVStack_58,(bool)this[0x1c]);
  local_80[0] = 0;
  local_80[1] = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_75 = 0;
  uStack_74 = 0;
  uStack_73 = 0;
  uStack_71 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  uStack_6e = 0;
  uStack_6d = 0;
  uStack_6b = 0;
  uStack_6a = 0;
  pcVar4 = operator_new(0x20);
  local_60 = local_80;
  uStack_70 = SUB81(pcVar4,0);
  uStack_6f = (undefined1)((ulong)pcVar4 >> 8);
  uStack_6e = (undefined1)((ulong)pcVar4 >> 0x10);
  uStack_6d = (undefined2)((ulong)pcVar4 >> 0x18);
  uStack_6b = (undefined1)((ulong)pcVar4 >> 0x28);
  uStack_6a = (undefined2)((ulong)pcVar4 >> 0x30);
  builtin_strncpy(pcVar4,"gl.supports_discard_framebuffer",0x20);
  uStack_78 = 0x1f;
  uStack_77 = 0;
  uStack_75 = 0;
  uStack_74 = 0;
  uStack_73 = 0;
  uStack_71 = 0;
  local_80[0] = 0x21;
  local_80[1] = 0;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_0185435f,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar5 + 0x28),aVStack_58);
  if ((local_80[0] & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_6a,
                                     CONCAT15(uStack_6b,
                                              CONCAT23(uStack_6d,
                                                       CONCAT12(uStack_6e,
                                                                CONCAT11(uStack_6f,uStack_70))))));
  }
  cocos2d::Value::~Value(aVStack_58);
  uStack_6e = 0;
  uStack_6d = 0;
  uStack_6b = 0;
  uStack_6a = 0;
  uStack_77 = 0x7061;
  uStack_75 = 0x62;
  uStack_74 = 0x75;
  uStack_73 = 0x6666;
  uStack_71 = 0x65;
  uStack_70 = 0x72;
  local_80[0] = 0x5f4c4720;
  local_80[1] = 0x5f53454f;
  uStack_78 = 0x6d;
  uStack_6f = 0;
  if (*(char **)(this + 0x30) == (char *)0x0) {
    CVar3 = (Configuration)0x0;
  }
  else {
    pcVar4 = strstr(*(char **)(this + 0x30),(char *)((ulong)local_80 | 1));
    CVar3 = (Configuration)(pcVar4 != (char *)0x0);
  }
  this[0x1e] = CVar3;
  cocos2d::Value::Value(aVStack_58,(bool)CVar3);
  local_80[0] = 0;
  local_80[1] = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_75 = 0;
  uStack_74 = 0;
  uStack_73 = 0;
  uStack_71 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  uStack_6e = 0;
  uStack_6d = 0;
  uStack_6b = 0;
  uStack_6a = 0;
  pcVar4 = operator_new(0x20);
  local_60 = local_80;
  uStack_70 = SUB81(pcVar4,0);
  uStack_6f = (undefined1)((ulong)pcVar4 >> 8);
  uStack_6e = (undefined1)((ulong)pcVar4 >> 0x10);
  uStack_6d = (undefined2)((ulong)pcVar4 >> 0x18);
  uStack_6b = (undefined1)((ulong)pcVar4 >> 0x28);
  uStack_6a = (undefined2)((ulong)pcVar4 >> 0x30);
  builtin_strncpy(pcVar4,"gl.supports_OES_map_buffer",0x1b);
  uStack_78 = 0x1a;
  uStack_77 = 0;
  uStack_75 = 0;
  uStack_74 = 0;
  uStack_73 = 0;
  uStack_71 = 0;
  local_80[0] = 0x21;
  local_80[1] = 0;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_0185435f,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar5 + 0x28),aVStack_58);
  if ((local_80[0] & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_6a,
                                     CONCAT15(uStack_6b,
                                              CONCAT23(uStack_6d,
                                                       CONCAT12(uStack_6e,
                                                                CONCAT11(uStack_6f,uStack_70))))));
  }
  cocos2d::Value::~Value(aVStack_58);
  uStack_70 = 0;
  uStack_6f = 0;
  uStack_6e = 0;
  uStack_6d = 0;
  uStack_6b = 0;
  uStack_6a = 0;
  uStack_77 = 0x7065;
  uStack_75 = 0x74;
  uStack_74 = 0x68;
  uStack_73 = 0x3432;
  local_80[0] = 0x5f4c471c;
  local_80[1] = 0x5f53454f;
  uStack_78 = 100;
  uStack_71 = 0;
  if (*(char **)(this + 0x30) == (char *)0x0) {
    CVar3 = (Configuration)0x0;
  }
  else {
    pcVar4 = strstr(*(char **)(this + 0x30),(char *)((ulong)local_80 | 1));
    CVar3 = (Configuration)(pcVar4 != (char *)0x0);
  }
  this[0x1f] = CVar3;
  cocos2d::Value::Value(aVStack_58,(bool)CVar3);
  local_80[0] = 0;
  local_80[1] = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_75 = 0;
  uStack_74 = 0;
  uStack_73 = 0;
  uStack_71 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  uStack_6e = 0;
  uStack_6d = 0;
  uStack_6b = 0;
  uStack_6a = 0;
  pcVar4 = operator_new(0x20);
  local_60 = local_80;
  uStack_70 = SUB81(pcVar4,0);
  uStack_6f = (undefined1)((ulong)pcVar4 >> 8);
  uStack_6e = (undefined1)((ulong)pcVar4 >> 0x10);
  uStack_6d = (undefined2)((ulong)pcVar4 >> 0x18);
  uStack_6b = (undefined1)((ulong)pcVar4 >> 0x28);
  uStack_6a = (undefined2)((ulong)pcVar4 >> 0x30);
  builtin_strncpy(pcVar4,"gl.supports_OES_depth24",0x18);
  uStack_78 = 0x17;
  uStack_77 = 0;
  uStack_75 = 0;
  uStack_74 = 0;
  uStack_73 = 0;
  uStack_71 = 0;
  local_80[0] = 0x21;
  local_80[1] = 0;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_0185435f,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar5 + 0x28),aVStack_58);
  if ((local_80[0] & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_6a,
                                     CONCAT15(uStack_6b,
                                              CONCAT23(uStack_6d,
                                                       CONCAT12(uStack_6e,
                                                                CONCAT11(uStack_6f,uStack_70))))));
  }
  cocos2d::Value::~Value(aVStack_58);
  pcVar4 = operator_new(0x20);
  builtin_strncpy(pcVar4,"GL_OES_packed_depth_stencil",0x1c);
  if (*(char **)(this + 0x30) == (char *)0x0) {
    CVar3 = (Configuration)0x0;
  }
  else {
    pcVar8 = strstr(*(char **)(this + 0x30),pcVar4);
    CVar3 = (Configuration)(pcVar8 != (char *)0x0);
  }
  this[0x20] = CVar3;
  operator_delete(pcVar4);
  cocos2d::Value::Value(aVStack_58,(bool)this[0x20]);
  local_80[0] = 0;
  local_80[1] = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_75 = 0;
  uStack_74 = 0;
  uStack_73 = 0;
  uStack_71 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  uStack_6e = 0;
  uStack_6d = 0;
  uStack_6b = 0;
  uStack_6a = 0;
  pcVar4 = operator_new(0x30);
  local_60 = local_80;
  uStack_70 = SUB81(pcVar4,0);
  uStack_6f = (undefined1)((ulong)pcVar4 >> 8);
  uStack_6e = (undefined1)((ulong)pcVar4 >> 0x10);
  uStack_6d = (undefined2)((ulong)pcVar4 >> 0x18);
  uStack_6b = (undefined1)((ulong)pcVar4 >> 0x28);
  uStack_6a = (undefined2)((ulong)pcVar4 >> 0x30);
  builtin_strncpy(pcVar4,"gl.supports_OES_packed_depth_stencil",0x25);
  uStack_78 = 0x24;
  uStack_77 = 0;
  uStack_75 = 0;
  uStack_74 = 0;
  uStack_73 = 0;
  uStack_71 = 0;
  local_80[0] = 0x31;
  local_80[1] = 0;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_0185435f,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar5 + 0x28),aVStack_58);
  if ((local_80[0] & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_6a,
                                     CONCAT15(uStack_6b,
                                              CONCAT23(uStack_6d,
                                                       CONCAT12(uStack_6e,
                                                                CONCAT11(uStack_6f,uStack_70))))));
  }
  cocos2d::Value::~Value(aVStack_58);
  if (this[0x23] == (Configuration)0x0) {
    pcVar4 = operator_new(0x20);
    builtin_strncpy(pcVar4,"OES_standard_derivatives",0x19);
    if (*(char **)(this + 0x30) == (char *)0x0) {
      CVar3 = (Configuration)0x0;
    }
    else {
      pcVar8 = strstr(*(char **)(this + 0x30),pcVar4);
      CVar3 = (Configuration)(pcVar8 != (char *)0x0);
    }
    this[0x22] = CVar3;
    operator_delete(pcVar4);
    cocos2d::Value::Value(aVStack_58,(bool)this[0x22]);
    local_80[0] = 0;
    local_80[1] = 0;
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6b = 0;
    uStack_6a = 0;
    pcVar4 = operator_new(0x30);
    local_60 = local_80;
    uStack_70 = SUB81(pcVar4,0);
    uStack_6f = (undefined1)((ulong)pcVar4 >> 8);
    uStack_6e = (undefined1)((ulong)pcVar4 >> 0x10);
    uStack_6d = (undefined2)((ulong)pcVar4 >> 0x18);
    uStack_6b = (undefined1)((ulong)pcVar4 >> 0x28);
    uStack_6a = (undefined2)((ulong)pcVar4 >> 0x30);
    builtin_strncpy(pcVar4,"gl.supports_standard_derivatives",0x21);
    uStack_78 = 0x20;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    local_80[0] = 0x31;
    local_80[1] = 0;
    lVar5 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                      (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_0185435f,
                       (tuple *)&local_60);
    cocos2d::Value::operator=((Value *)(lVar5 + 0x28),aVStack_58);
    if ((local_80[0] & 1) != 0) {
      operator_delete((void *)CONCAT26(uStack_6a,
                                       CONCAT15(uStack_6b,
                                                CONCAT23(uStack_6d,
                                                         CONCAT12(uStack_6e,
                                                                  CONCAT11(uStack_6f,uStack_70))))))
      ;
    }
    cocos2d::Value::~Value(aVStack_58);
    if (this[0x23] == (Configuration)0x0) {
      uStack_6a = 0;
      uStack_6f = 0x6c;
      uStack_6e = 0x6f;
      uStack_6d = 0x7461;
      uStack_77 = 0x7865;
      uStack_75 = 0x74;
      uStack_74 = 0x75;
      uStack_73 = 0x6572;
      uStack_71 = 0x5f;
      uStack_70 = 0x66;
      local_80[0] = 0x5f4c4728;
      local_80[1] = 0x5f425241;
      uStack_78 = 0x74;
      uStack_6b = 0;
      if (*(char **)(this + 0x30) == (char *)0x0) {
        CVar3 = (Configuration)0x0;
      }
      else {
        pcVar4 = strstr(*(char **)(this + 0x30),(char *)((ulong)local_80 | 1));
        CVar3 = (Configuration)(pcVar4 != (char *)0x0);
      }
      this[0x21] = CVar3;
      cocos2d::Value::Value(aVStack_58,(bool)CVar3);
      local_80[0] = 0;
      local_80[1] = 0;
      uStack_78 = 0;
      uStack_77 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_71 = 0;
      uStack_70 = 0;
      uStack_6f = 0;
      uStack_6e = 0;
      uStack_6d = 0;
      uStack_6b = 0;
      uStack_6a = 0;
      pcVar4 = operator_new(0x20);
      local_60 = local_80;
      uStack_70 = SUB81(pcVar4,0);
      uStack_6f = (undefined1)((ulong)pcVar4 >> 8);
      uStack_6e = (undefined1)((ulong)pcVar4 >> 0x10);
      uStack_6d = (undefined2)((ulong)pcVar4 >> 0x18);
      uStack_6b = (undefined1)((ulong)pcVar4 >> 0x28);
      uStack_6a = (undefined2)((ulong)pcVar4 >> 0x30);
      builtin_strncpy(pcVar4,"gl.supports_float_texture",0x1a);
      uStack_78 = 0x19;
      uStack_77 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_71 = 0;
      local_80[0] = 0x21;
      local_80[1] = 0;
      lVar5 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                        (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_0185435f,
                         (tuple *)&local_60);
      cocos2d::Value::operator=((Value *)(lVar5 + 0x28),aVStack_58);
      if ((local_80[0] & 1) != 0) {
        operator_delete((void *)CONCAT26(uStack_6a,
                                         CONCAT15(uStack_6b,
                                                  CONCAT23(uStack_6d,
                                                           CONCAT12(uStack_6e,
                                                                    CONCAT11(uStack_6f,uStack_70))))
                                        ));
      }
      cocos2d::Value::~Value(aVStack_58);
      uStack_6b = 0;
      uStack_6a = 0;
      uStack_77 = 0x7272;
      uStack_75 = 0x61;
      uStack_74 = 0x79;
      uStack_73 = 0x6f5f;
      uStack_71 = 0x62;
      uStack_70 = 0x6a;
      local_80[0] = 0x72657626;
      local_80[1] = 0x5f786574;
      uStack_78 = 0x61;
      uStack_6f = 0x65;
      uStack_6e = 99;
      uStack_6d = 0x74;
      if (*(char **)(this + 0x30) == (char *)0x0) {
        CVar3 = (Configuration)0x0;
      }
      else {
        pcVar4 = strstr(*(char **)(this + 0x30),(char *)((ulong)local_80 | 1));
        CVar3 = (Configuration)(pcVar4 != (char *)0x0);
      }
      this[0x1d] = CVar3;
      cocos2d::Value::Value(aVStack_58,(bool)CVar3);
      local_80[0] = 0;
      local_80[1] = 0;
      uStack_78 = 0;
      uStack_77 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_71 = 0;
      uStack_70 = 0;
      uStack_6f = 0;
      uStack_6e = 0;
      uStack_6d = 0;
      uStack_6b = 0;
      uStack_6a = 0;
      pcVar4 = operator_new(0x20);
      uStack_78 = 0x1f;
      uStack_77 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_71 = 0;
      local_80[0] = 0x21;
      local_80[1] = 0;
      local_60 = local_80;
      uStack_70 = SUB81(pcVar4,0);
      uStack_6f = (undefined1)((ulong)pcVar4 >> 8);
      uStack_6e = (undefined1)((ulong)pcVar4 >> 0x10);
      uStack_6d = (undefined2)((ulong)pcVar4 >> 0x18);
      uStack_6b = (undefined1)((ulong)pcVar4 >> 0x28);
      uStack_6a = (undefined2)((ulong)pcVar4 >> 0x30);
      builtin_strncpy(pcVar4,"gl.supports_vertex_array_object",0x20);
      lVar5 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                        (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_0185435f,
                         (tuple *)&local_60);
      cocos2d::Value::operator=((Value *)(lVar5 + 0x28),aVStack_58);
      if ((local_80[0] & 1) != 0) {
        operator_delete((void *)CONCAT26(uStack_6a,
                                         CONCAT15(uStack_6b,
                                                  CONCAT23(uStack_6d,
                                                           CONCAT12(uStack_6e,
                                                                    CONCAT11(uStack_6f,uStack_70))))
                                        ));
      }
      cocos2d::Value::~Value(aVStack_58);
      goto LAB_00881f78;
    }
  }
  else {
    this[0x22] = (Configuration)0x1;
  }
  this[0x21] = (Configuration)0x1;
  this[0x1d] = (Configuration)0x1;
LAB_00881f78:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

