
/* v8::internal::AsmJsScanner::AsmJsScanner(v8::internal::Utf16CharacterStream*) */

void __thiscall
v8::internal::AsmJsScanner::AsmJsScanner(AsmJsScanner *this,Utf16CharacterStream *param_1)

{
  long lVar1;
  basic_string *pbVar2;
  basic_string *pbVar3;
  piecewise_construct_t local_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 local_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined2 uStack_5a;
  void *local_58;
  piecewise_construct_t *local_48;
  
  *(Utf16CharacterStream **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  this[0x30] = (AsmJsScanner)0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  this[0x50] = (AsmJsScanner)0x0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x78) = 0x3f800000;
  pbVar2 = (basic_string *)(this + 0x80);
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)pbVar2 = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0xa0) = 0x3f800000;
  pbVar3 = (basic_string *)(this + 0xa8);
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)pbVar3 = 0;
  *(undefined4 *)(this + 200) = 0x3f800000;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  this[0xe4] = (AsmJsScanner)0x0;
  uStack_63 = 0;
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  uStack_67 = 0x6d;
  uStack_66 = 0x69;
  uStack_65 = 0x6e;
  uStack_64 = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0x6;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd8f1;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_63 = 0;
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0x6;
  uStack_67 = 0x6d;
  uStack_66 = 0x61;
  uStack_65 = 0x78;
  uStack_64 = 0;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd8f2;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_63 = 0;
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0x6;
  uStack_67 = 0x61;
  uStack_66 = 0x62;
  uStack_65 = 0x73;
  uStack_64 = 0;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd8f3;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_61 = 0;
  local_68 = (piecewise_construct_t)0xc;
  uStack_67 = 0x66;
  uStack_66 = 0x72;
  uStack_65 = 0x6f;
  uStack_64 = 0x75;
  uStack_63 = 0x6e;
  uStack_62 = 100;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd8f4;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_63 = 0;
  local_68 = (piecewise_construct_t)0x8;
  uStack_67 = 0x61;
  uStack_66 = 99;
  uStack_65 = 0x6f;
  uStack_64 = 0x73;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd8f5;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0x8;
  uStack_63 = 0;
  uStack_67 = 0x61;
  uStack_66 = 0x73;
  uStack_65 = 0x69;
  uStack_64 = 0x6e;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd8f6;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_63 = 0;
  local_68 = (piecewise_construct_t)0x8;
  uStack_67 = 0x61;
  uStack_66 = 0x74;
  uStack_65 = 0x61;
  uStack_64 = 0x6e;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd8f7;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_63 = 0;
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0x6;
  uStack_67 = 99;
  uStack_66 = 0x6f;
  uStack_65 = 0x73;
  uStack_64 = 0;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd8f8;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_63 = 0;
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0x6;
  uStack_67 = 0x73;
  uStack_66 = 0x69;
  uStack_65 = 0x6e;
  uStack_64 = 0;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd8f9;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_63 = 0;
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0x6;
  uStack_67 = 0x74;
  uStack_66 = 0x61;
  uStack_65 = 0x6e;
  uStack_64 = 0;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd8fa;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_63 = 0;
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0x6;
  uStack_67 = 0x65;
  uStack_66 = 0x78;
  uStack_65 = 0x70;
  uStack_64 = 0;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd8fb;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_63 = 0;
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0x6;
  uStack_67 = 0x6c;
  uStack_66 = 0x6f;
  uStack_65 = 0x67;
  uStack_64 = 0;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd8fc;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0xa;
  uStack_67 = 0x61;
  uStack_66 = 0x74;
  uStack_65 = 0x61;
  uStack_64 = 0x6e;
  uStack_63 = 0x32;
  uStack_62 = 0;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd8fd;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_63 = 0;
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0x6;
  uStack_67 = 0x70;
  uStack_66 = 0x6f;
  uStack_65 = 0x77;
  uStack_64 = 0;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd8fe;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_63 = 0;
  local_68 = (piecewise_construct_t)0x8;
  uStack_67 = 0x69;
  uStack_66 = 0x6d;
  uStack_65 = 0x75;
  uStack_64 = 0x6c;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd8ff;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0xa;
  uStack_67 = 99;
  uStack_66 = 0x6c;
  uStack_65 = 0x7a;
  uStack_64 = 0x33;
  uStack_63 = 0x32;
  uStack_62 = 0;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd900;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_63 = 0;
  local_68 = (piecewise_construct_t)0x8;
  uStack_67 = 99;
  uStack_66 = 0x65;
  uStack_65 = 0x69;
  uStack_64 = 0x6c;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd901;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0xa;
  uStack_67 = 0x66;
  uStack_66 = 0x6c;
  uStack_65 = 0x6f;
  uStack_64 = 0x6f;
  uStack_63 = 0x72;
  uStack_62 = 0;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd902;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_63 = 0;
  local_68 = (piecewise_construct_t)0x8;
  uStack_67 = 0x73;
  uStack_66 = 0x71;
  uStack_65 = 0x72;
  uStack_64 = 0x74;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd903;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0x12;
  uStack_5f = 0x79;
  uStack_5e = 0;
  uStack_67 = 0x49;
  uStack_66 = 0x6e;
  uStack_65 = 0x74;
  uStack_64 = 0x38;
  uStack_63 = 0x41;
  uStack_62 = 0x72;
  uStack_61 = 0x72;
  local_60 = 0x61;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd904;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_5d = 0;
  local_68 = (piecewise_construct_t)0x14;
  uStack_5f = 0x61;
  uStack_5e = 0x79;
  uStack_67 = 0x55;
  uStack_66 = 0x69;
  uStack_65 = 0x6e;
  uStack_64 = 0x74;
  uStack_63 = 0x38;
  uStack_62 = 0x41;
  uStack_61 = 0x72;
  local_60 = 0x72;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd905;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0x14;
  uStack_5f = 0x61;
  uStack_5e = 0x79;
  uStack_5d = 0;
  uStack_67 = 0x49;
  uStack_66 = 0x6e;
  uStack_65 = 0x74;
  uStack_64 = 0x31;
  uStack_63 = 0x36;
  uStack_62 = 0x41;
  uStack_61 = 0x72;
  local_60 = 0x72;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd906;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_5c = 0;
  local_68 = (piecewise_construct_t)0x16;
  uStack_5f = 0x72;
  uStack_5e = 0x61;
  uStack_5d = 0x79;
  uStack_67 = 0x55;
  uStack_66 = 0x69;
  uStack_65 = 0x6e;
  uStack_64 = 0x74;
  uStack_63 = 0x31;
  uStack_62 = 0x36;
  uStack_61 = 0x41;
  local_60 = 0x72;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd907;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_5d = 0;
  local_68 = (piecewise_construct_t)0x14;
  uStack_5f = 0x61;
  uStack_5e = 0x79;
  uStack_67 = 0x49;
  uStack_66 = 0x6e;
  uStack_65 = 0x74;
  uStack_64 = 0x33;
  uStack_63 = 0x32;
  uStack_62 = 0x41;
  uStack_61 = 0x72;
  local_60 = 0x72;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd908;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_5c = 0;
  local_68 = (piecewise_construct_t)0x16;
  uStack_5f = 0x72;
  uStack_5e = 0x61;
  uStack_5d = 0x79;
  uStack_67 = 0x55;
  uStack_66 = 0x69;
  uStack_65 = 0x6e;
  uStack_64 = 0x74;
  uStack_63 = 0x33;
  uStack_62 = 0x32;
  uStack_61 = 0x41;
  local_60 = 0x72;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd909;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_5f = 0x72;
  uStack_5e = 0x72;
  uStack_5d = 0x61;
  uStack_5c = 0x79;
  uStack_5b = 0;
  local_68 = (piecewise_construct_t)0x18;
  uStack_67 = 0x46;
  uStack_66 = 0x6c;
  uStack_65 = 0x6f;
  uStack_64 = 0x61;
  uStack_63 = 0x74;
  uStack_62 = 0x33;
  uStack_61 = 0x32;
  local_60 = 0x41;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd90a;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0x18;
  uStack_5b = 0;
  uStack_5f = 0x72;
  uStack_5e = 0x72;
  uStack_5d = 0x61;
  uStack_5c = 0x79;
  uStack_67 = 0x46;
  uStack_66 = 0x6c;
  uStack_65 = 0x6f;
  uStack_64 = 0x61;
  uStack_63 = 0x74;
  uStack_62 = 0x36;
  uStack_61 = 0x34;
  local_60 = 0x41;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd90b;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_65 = 0;
  uStack_64 = 0;
  uStack_63 = 0;
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_66 = 0;
  local_68 = (piecewise_construct_t)0x2;
  uStack_67 = 0x45;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd90c;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_63 = 0;
  local_68 = (piecewise_construct_t)0x8;
  uStack_67 = 0x4c;
  uStack_66 = 0x4e;
  uStack_65 = 0x31;
  uStack_64 = 0x30;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd90d;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_63 = 0;
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0x6;
  uStack_67 = 0x4c;
  uStack_66 = 0x4e;
  uStack_65 = 0x32;
  uStack_64 = 0;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd90e;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0xa;
  uStack_67 = 0x4c;
  uStack_66 = 0x4f;
  uStack_65 = 0x47;
  uStack_64 = 0x32;
  uStack_63 = 0x45;
  uStack_62 = 0;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd90f;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_61 = 0;
  local_68 = (piecewise_construct_t)0xc;
  uStack_67 = 0x4c;
  uStack_66 = 0x4f;
  uStack_65 = 0x47;
  uStack_64 = 0x31;
  uStack_63 = 0x30;
  uStack_62 = 0x45;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd910;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_64 = 0;
  uStack_63 = 0;
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_65 = 0;
  local_68 = (piecewise_construct_t)0x4;
  uStack_67 = 0x50;
  uStack_66 = 0x49;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd911;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0xe;
  uStack_67 = 0x53;
  uStack_66 = 0x51;
  uStack_65 = 0x52;
  uStack_64 = 0x54;
  uStack_63 = 0x31;
  uStack_62 = 0x5f;
  uStack_61 = 0x32;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd912;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_67 = 0x53;
  uStack_66 = 0x51;
  uStack_65 = 0x52;
  uStack_64 = 0x54;
  local_68 = (piecewise_construct_t)0xa;
  uStack_63 = 0x32;
  uStack_62 = 0;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd913;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_5f = 0;
  local_68 = (piecewise_construct_t)0x10;
  uStack_67 = 0x49;
  uStack_66 = 0x6e;
  uStack_65 = 0x66;
  uStack_64 = 0x69;
  uStack_63 = 0x6e;
  uStack_62 = 0x69;
  uStack_61 = 0x74;
  local_60 = 0x79;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd914;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_63 = 0;
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0x6;
  uStack_67 = 0x4e;
  uStack_66 = 0x61;
  uStack_65 = 0x4e;
  uStack_64 = 0;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd915;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_63 = 0;
  local_68 = (piecewise_construct_t)0x8;
  uStack_67 = 0x4d;
  uStack_66 = 0x61;
  uStack_65 = 0x74;
  uStack_64 = 0x68;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar3,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd916;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0x12;
  uStack_5f = 0x73;
  uStack_5e = 0;
  uStack_67 = 0x61;
  uStack_66 = 0x72;
  uStack_65 = 0x67;
  uStack_64 = 0x75;
  uStack_63 = 0x6d;
  uStack_62 = 0x65;
  uStack_61 = 0x6e;
  local_60 = 0x74;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar2,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd917;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0xa;
  uStack_67 = 0x62;
  uStack_66 = 0x72;
  uStack_65 = 0x65;
  uStack_64 = 0x61;
  uStack_63 = 0x6b;
  uStack_62 = 0;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar2,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd918;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_63 = 0;
  local_68 = (piecewise_construct_t)0x8;
  uStack_67 = 99;
  uStack_66 = 0x61;
  uStack_65 = 0x73;
  uStack_64 = 0x65;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar2,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd919;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0xa;
  uStack_67 = 99;
  uStack_66 = 0x6f;
  uStack_65 = 0x6e;
  uStack_64 = 0x73;
  uStack_63 = 0x74;
  uStack_62 = 0;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar2,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd91a;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_5f = 0;
  local_68 = (piecewise_construct_t)0x10;
  uStack_67 = 99;
  uStack_66 = 0x6f;
  uStack_65 = 0x6e;
  uStack_64 = 0x74;
  uStack_63 = 0x69;
  uStack_62 = 0x6e;
  uStack_61 = 0x75;
  local_60 = 0x65;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar2,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd91b;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0xe;
  uStack_67 = 100;
  uStack_66 = 0x65;
  uStack_65 = 0x66;
  uStack_64 = 0x61;
  uStack_63 = 0x75;
  uStack_62 = 0x6c;
  uStack_61 = 0x74;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar2,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd91c;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_64 = 0;
  uStack_63 = 0;
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_65 = 0;
  local_68 = (piecewise_construct_t)0x4;
  uStack_67 = 100;
  uStack_66 = 0x6f;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar2,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd91d;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_63 = 0;
  local_68 = (piecewise_construct_t)0x8;
  uStack_67 = 0x65;
  uStack_66 = 0x6c;
  uStack_65 = 0x73;
  uStack_64 = 0x65;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar2,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd91e;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0x8;
  uStack_63 = 0;
  uStack_67 = 0x65;
  uStack_66 = 0x76;
  uStack_65 = 0x61;
  uStack_64 = 0x6c;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar2,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd91f;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_63 = 0;
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0x6;
  uStack_67 = 0x66;
  uStack_66 = 0x6f;
  uStack_65 = 0x72;
  uStack_64 = 0;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar2,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd920;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_5f = 0;
  local_68 = (piecewise_construct_t)0x10;
  uStack_67 = 0x66;
  uStack_66 = 0x75;
  uStack_65 = 0x6e;
  uStack_64 = 99;
  uStack_63 = 0x74;
  uStack_62 = 0x69;
  uStack_61 = 0x6f;
  local_60 = 0x6e;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar2,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd921;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_64 = 0;
  uStack_63 = 0;
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_65 = 0;
  local_68 = (piecewise_construct_t)0x4;
  uStack_67 = 0x69;
  uStack_66 = 0x66;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar2,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd922;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_63 = 0;
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0x6;
  uStack_67 = 0x6e;
  uStack_66 = 0x65;
  uStack_65 = 0x77;
  uStack_64 = 0;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar2,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd923;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  uStack_61 = 0;
  local_68 = (piecewise_construct_t)0xc;
  uStack_67 = 0x72;
  uStack_66 = 0x65;
  uStack_65 = 0x74;
  uStack_64 = 0x75;
  uStack_63 = 0x72;
  uStack_62 = 0x6e;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar2,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd924;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0xc;
  uStack_61 = 0;
  uStack_67 = 0x73;
  uStack_66 = 0x77;
  uStack_65 = 0x69;
  uStack_64 = 0x74;
  uStack_63 = 99;
  uStack_62 = 0x68;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar2,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd925;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uStack_63 = 0;
  uStack_62 = 0;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0x6;
  uStack_67 = 0x76;
  uStack_66 = 0x61;
  uStack_65 = 0x72;
  uStack_64 = 0;
  local_48 = &local_68;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar2,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd926;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  local_48 = &local_68;
  uStack_61 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  local_58 = (void *)0x0;
  local_68 = (piecewise_construct_t)0xa;
  uStack_67 = 0x77;
  uStack_66 = 0x68;
  uStack_65 = 0x69;
  uStack_64 = 0x6c;
  uStack_63 = 0x65;
  uStack_62 = 0;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar2,&local_68,(tuple *)&DAT_01a3eef4,(tuple *)&local_48);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffd927;
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  Next(this);
  return;
}

