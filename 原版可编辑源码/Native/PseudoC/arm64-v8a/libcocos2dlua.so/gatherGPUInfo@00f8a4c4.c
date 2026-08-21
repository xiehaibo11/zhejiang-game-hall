
/* cocos2d::Configuration::gatherGPUInfo() */

void __thiscall cocos2d::Configuration::gatherGPUInfo(Configuration *this)

{
  basic_string *pbVar1;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  Configuration CVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  char *local_70;
  undefined1 *local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pcVar5 = (char *)glGetString(0x1f00);
  cocos2d::Value::Value(aVStack_58,pcVar5);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"gl.vendor");
  pbVar1 = (basic_string *)(this + 0x58);
  local_60 = local_80;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_01448d91,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar6 + 0x28),aVStack_58);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  cocos2d::Value::~Value(aVStack_58);
  pcVar5 = (char *)glGetString(0x1f01);
  cocos2d::Value::Value(aVStack_58,pcVar5);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"gl.renderer");
  local_60 = local_80;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_01448d91,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar6 + 0x28),aVStack_58);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  cocos2d::Value::~Value(aVStack_58);
  pcVar5 = (char *)glGetString(0x1f02);
  cocos2d::Value::Value(aVStack_58,pcVar5);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"gl.version");
  local_60 = local_80;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_01448d91,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar6 + 0x28),aVStack_58);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  cocos2d::Value::~Value(aVStack_58);
  uVar7 = glGetString(0x1f03);
  *(undefined8 *)(this + 0x40) = uVar7;
  glGetIntegerv(0xd33,this + 0x24);
  cocos2d::Value::Value(aVStack_58,*(int *)(this + 0x24));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"gl.max_texture_size");
  local_60 = local_80;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_01448d91,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar6 + 0x28),aVStack_58);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  cocos2d::Value::~Value(aVStack_58);
  glGetIntegerv(0x8b4d,this + 0x3c);
  cocos2d::Value::Value(aVStack_58,*(int *)(this + 0x3c));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"gl.max_texture_units");
  local_60 = local_80;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_01448d91,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar6 + 0x28),aVStack_58);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  cocos2d::Value::~Value(aVStack_58);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"GL_OES_compressed_ETC1_RGB8_texture");
  bVar3 = local_80[0];
  if (*(char **)(this + 0x40) == (char *)0x0) {
    CVar4 = (Configuration)0x0;
    this[0x2d] = (Configuration)0x0;
  }
  else {
    pcVar5 = (char *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      pcVar5 = local_70;
    }
    pcVar5 = strstr(*(char **)(this + 0x40),pcVar5);
    CVar4 = (Configuration)(pcVar5 != (char *)0x0);
    this[0x2d] = CVar4;
  }
  if (((byte)bVar3 & 1) != 0) {
    operator_delete(local_70);
    CVar4 = this[0x2d];
  }
  cocos2d::Value::Value(aVStack_58,CVar4 != (Configuration)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"gl.supports_ETC1");
  local_60 = local_80;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_01448d91,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar6 + 0x28),aVStack_58);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  cocos2d::Value::~Value(aVStack_58);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"GL_EXT_texture_compression_s3tc");
  bVar3 = local_80[0];
  if (*(char **)(this + 0x40) == (char *)0x0) {
    CVar4 = (Configuration)0x0;
    this[0x2e] = (Configuration)0x0;
  }
  else {
    pcVar5 = (char *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      pcVar5 = local_70;
    }
    pcVar5 = strstr(*(char **)(this + 0x40),pcVar5);
    CVar4 = (Configuration)(pcVar5 != (char *)0x0);
    this[0x2e] = CVar4;
  }
  if (((byte)bVar3 & 1) != 0) {
    operator_delete(local_70);
    CVar4 = this[0x2e];
  }
  cocos2d::Value::Value(aVStack_58,CVar4 != (Configuration)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"gl.supports_S3TC");
  local_60 = local_80;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_01448d91,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar6 + 0x28),aVStack_58);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  cocos2d::Value::~Value(aVStack_58);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"GL_AMD_compressed_ATC_texture");
  bVar3 = local_80[0];
  if (*(char **)(this + 0x40) == (char *)0x0) {
    CVar4 = (Configuration)0x0;
    this[0x2f] = (Configuration)0x0;
  }
  else {
    pcVar5 = (char *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      pcVar5 = local_70;
    }
    pcVar5 = strstr(*(char **)(this + 0x40),pcVar5);
    CVar4 = (Configuration)(pcVar5 != (char *)0x0);
    this[0x2f] = CVar4;
  }
  if (((byte)bVar3 & 1) != 0) {
    operator_delete(local_70);
    CVar4 = this[0x2f];
  }
  cocos2d::Value::Value(aVStack_58,CVar4 != (Configuration)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"gl.supports_ATITC");
  local_60 = local_80;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_01448d91,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar6 + 0x28),aVStack_58);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  cocos2d::Value::~Value(aVStack_58);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"GL_IMG_texture_compression_pvrtc");
  bVar3 = local_80[0];
  if (*(char **)(this + 0x40) == (char *)0x0) {
    CVar4 = (Configuration)0x0;
    this[0x2c] = (Configuration)0x0;
  }
  else {
    pcVar5 = (char *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      pcVar5 = local_70;
    }
    pcVar5 = strstr(*(char **)(this + 0x40),pcVar5);
    CVar4 = (Configuration)(pcVar5 != (char *)0x0);
    this[0x2c] = CVar4;
  }
  if (((byte)bVar3 & 1) != 0) {
    operator_delete(local_70);
    CVar4 = this[0x2c];
  }
  cocos2d::Value::Value(aVStack_58,CVar4 != (Configuration)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"gl.supports_PVRTC");
  local_60 = local_80;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_01448d91,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar6 + 0x28),aVStack_58);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  cocos2d::Value::~Value(aVStack_58);
  this[0x30] = (Configuration)0x1;
  cocos2d::Value::Value(aVStack_58,true);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"gl.supports_NPOT");
  local_60 = local_80;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_01448d91,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar6 + 0x28),aVStack_58);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  cocos2d::Value::~Value(aVStack_58);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"GL_IMG_texture_format_BGRA8888");
  bVar3 = local_80[0];
  if (*(char **)(this + 0x40) == (char *)0x0) {
    CVar4 = (Configuration)0x0;
    this[0x31] = (Configuration)0x0;
  }
  else {
    pcVar5 = (char *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      pcVar5 = local_70;
    }
    pcVar5 = strstr(*(char **)(this + 0x40),pcVar5);
    CVar4 = (Configuration)(pcVar5 != (char *)0x0);
    this[0x31] = CVar4;
  }
  if (((byte)bVar3 & 1) != 0) {
    operator_delete(local_70);
    CVar4 = this[0x31];
  }
  cocos2d::Value::Value(aVStack_58,CVar4 != (Configuration)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"gl.supports_BGRA8888");
  local_60 = local_80;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_01448d91,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar6 + 0x28),aVStack_58);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  cocos2d::Value::~Value(aVStack_58);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"GL_EXT_discard_framebuffer");
  bVar3 = local_80[0];
  if (*(char **)(this + 0x40) == (char *)0x0) {
    CVar4 = (Configuration)0x0;
    this[0x32] = (Configuration)0x0;
  }
  else {
    pcVar5 = (char *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      pcVar5 = local_70;
    }
    pcVar5 = strstr(*(char **)(this + 0x40),pcVar5);
    CVar4 = (Configuration)(pcVar5 != (char *)0x0);
    this[0x32] = CVar4;
  }
  if (((byte)bVar3 & 1) != 0) {
    operator_delete(local_70);
    CVar4 = this[0x32];
  }
  cocos2d::Value::Value(aVStack_58,CVar4 != (Configuration)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"gl.supports_discard_framebuffer");
  local_60 = local_80;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_01448d91,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar6 + 0x28),aVStack_58);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  cocos2d::Value::~Value(aVStack_58);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"GL_OES_vertex_array_object");
  bVar3 = local_80[0];
  if (*(char **)(this + 0x40) == (char *)0x0) {
    CVar4 = (Configuration)0x0;
    this[0x33] = (Configuration)0x0;
  }
  else {
    pcVar5 = (char *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      pcVar5 = local_70;
    }
    pcVar5 = strstr(*(char **)(this + 0x40),pcVar5);
    CVar4 = (Configuration)(pcVar5 != (char *)0x0);
    this[0x33] = CVar4;
  }
  if (((byte)bVar3 & 1) != 0) {
    operator_delete(local_70);
    CVar4 = this[0x33];
  }
  cocos2d::Value::Value(aVStack_58,CVar4 != (Configuration)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"gl.supports_vertex_array_object");
  local_60 = local_80;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_01448d91,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar6 + 0x28),aVStack_58);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  cocos2d::Value::~Value(aVStack_58);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"GL_OES_mapbuffer");
  bVar3 = local_80[0];
  if (*(char **)(this + 0x40) == (char *)0x0) {
    CVar4 = (Configuration)0x0;
    this[0x34] = (Configuration)0x0;
  }
  else {
    pcVar5 = (char *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      pcVar5 = local_70;
    }
    pcVar5 = strstr(*(char **)(this + 0x40),pcVar5);
    CVar4 = (Configuration)(pcVar5 != (char *)0x0);
    this[0x34] = CVar4;
  }
  if (((byte)bVar3 & 1) != 0) {
    operator_delete(local_70);
    CVar4 = this[0x34];
  }
  cocos2d::Value::Value(aVStack_58,CVar4 != (Configuration)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"gl.supports_OES_map_buffer");
  local_60 = local_80;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_01448d91,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar6 + 0x28),aVStack_58);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  cocos2d::Value::~Value(aVStack_58);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"GL_OES_depth24");
  bVar3 = local_80[0];
  if (*(char **)(this + 0x40) == (char *)0x0) {
    CVar4 = (Configuration)0x0;
    this[0x35] = (Configuration)0x0;
  }
  else {
    pcVar5 = (char *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      pcVar5 = local_70;
    }
    pcVar5 = strstr(*(char **)(this + 0x40),pcVar5);
    CVar4 = (Configuration)(pcVar5 != (char *)0x0);
    this[0x35] = CVar4;
  }
  if (((byte)bVar3 & 1) != 0) {
    operator_delete(local_70);
    CVar4 = this[0x35];
  }
  cocos2d::Value::Value(aVStack_58,CVar4 != (Configuration)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"gl.supports_OES_depth24");
  local_60 = local_80;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_01448d91,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar6 + 0x28),aVStack_58);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  cocos2d::Value::~Value(aVStack_58);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"GL_OES_packed_depth_stencil");
  bVar3 = local_80[0];
  if (*(char **)(this + 0x40) == (char *)0x0) {
    CVar4 = (Configuration)0x0;
    this[0x36] = (Configuration)0x0;
  }
  else {
    pcVar5 = (char *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      pcVar5 = local_70;
    }
    pcVar5 = strstr(*(char **)(this + 0x40),pcVar5);
    CVar4 = (Configuration)(pcVar5 != (char *)0x0);
    this[0x36] = CVar4;
  }
  if (((byte)bVar3 & 1) != 0) {
    operator_delete(local_70);
    CVar4 = this[0x36];
  }
  cocos2d::Value::Value(aVStack_58,CVar4 != (Configuration)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"gl.supports_OES_packed_depth_stencil");
  local_60 = local_80;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_80,(tuple *)&DAT_01448d91,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar6 + 0x28),aVStack_58);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  cocos2d::Value::~Value(aVStack_58);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

