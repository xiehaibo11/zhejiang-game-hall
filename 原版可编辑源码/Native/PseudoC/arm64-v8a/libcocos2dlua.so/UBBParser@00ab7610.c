
/* fairygui::UBBParser::UBBParser() */

void __thiscall fairygui::UBBParser::UBBParser(UBBParser *this)

{
  basic_string *pbVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [16];
  void *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  UBBParser *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pbVar1 = (basic_string *)(this + 0x40);
  *(undefined ***)this = &PTR__UBBParser_016aa878;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x60) = 0x3f800000;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,"url");
  local_80 = local_a0;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>...t&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_a0,(tuple *)&DAT_013cfb0c,
                     (tuple *)&local_80);
  local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &PTR_FUN_016aa8e0;
  uStack_70 = 1;
  local_78 = 0x10;
  local_68 = this;
  local_60 = &local_80;
  FUN_00ab9b24(&local_80,lVar3 + 0x30);
  if (&local_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00ab76fc:
    (*pcVar4)();
  }
  else if (local_60 !=
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00ab76fc;
  }
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,"img");
  local_80 = local_a0;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>...t&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_a0,(tuple *)&DAT_013cfb0c,
                     (tuple *)&local_80);
  local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &PTR_FUN_016aa8e0;
  uStack_70 = 1;
  local_78 = 0x18;
  local_68 = this;
  local_60 = &local_80;
  FUN_00ab9b24(&local_80,lVar3 + 0x30);
  if (&local_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00ab7790:
    (*pcVar4)();
  }
  else if (local_60 !=
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00ab7790;
  }
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,"b");
  local_80 = local_a0;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>...t&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_a0,(tuple *)&DAT_013cfb0c,
                     (tuple *)&local_80);
  local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &PTR_FUN_016aa8e0;
  uStack_70 = 1;
  local_78 = 0x20;
  local_68 = this;
  local_60 = &local_80;
  FUN_00ab9b24(&local_80,lVar3 + 0x30);
  if (&local_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00ab7828:
    (*pcVar4)();
  }
  else if (local_60 !=
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00ab7828;
  }
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,"i");
  local_80 = local_a0;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>...t&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_a0,(tuple *)&DAT_013cfb0c,
                     (tuple *)&local_80);
  local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &PTR_FUN_016aa8e0;
  uStack_70 = 1;
  local_78 = 0x20;
  local_68 = this;
  local_60 = &local_80;
  FUN_00ab9b24(&local_80,lVar3 + 0x30);
  if (&local_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00ab78b8:
    (*pcVar4)();
  }
  else if (local_60 !=
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00ab78b8;
  }
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,"u");
  local_80 = local_a0;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>...t&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_a0,(tuple *)&DAT_013cfb0c,
                     (tuple *)&local_80);
  local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &PTR_FUN_016aa8e0;
  uStack_70 = 1;
  local_78 = 0x20;
  local_68 = this;
  local_60 = &local_80;
  FUN_00ab9b24(&local_80,lVar3 + 0x30);
  if (&local_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00ab7948:
    (*pcVar4)();
  }
  else if (local_60 !=
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00ab7948;
  }
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,"sup");
  local_80 = local_a0;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>...t&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_a0,(tuple *)&DAT_013cfb0c,
                     (tuple *)&local_80);
  local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &PTR_FUN_016aa8e0;
  uStack_70 = 1;
  local_78 = 0x20;
  local_68 = this;
  local_60 = &local_80;
  FUN_00ab9b24(&local_80,lVar3 + 0x30);
  if (&local_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00ab79d8:
    (*pcVar4)();
  }
  else if (local_60 !=
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00ab79d8;
  }
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,"sub");
  local_80 = local_a0;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>...t&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_a0,(tuple *)&DAT_013cfb0c,
                     (tuple *)&local_80);
  local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &PTR_FUN_016aa8e0;
  uStack_70 = 1;
  local_78 = 0x20;
  local_68 = this;
  local_60 = &local_80;
  FUN_00ab9b24(&local_80,lVar3 + 0x30);
  if (&local_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00ab7a68:
    (*pcVar4)();
  }
  else if (local_60 !=
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00ab7a68;
  }
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,"color");
  local_80 = local_a0;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>...t&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_a0,(tuple *)&DAT_013cfb0c,
                     (tuple *)&local_80);
  local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &PTR_FUN_016aa8e0;
  uStack_70 = 1;
  local_78 = 0x28;
  local_68 = this;
  local_60 = &local_80;
  FUN_00ab9b24(&local_80,lVar3 + 0x30);
  if (&local_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00ab7afc:
    (*pcVar4)();
  }
  else if (local_60 !=
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00ab7afc;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ab7b74 with catch @ 00ab7b04
                       catch(type#1 @ 00000000) { ... } // from try @ 00ab7ba4 with catch @ 00ab7b04
                       catch(type#1 @ 00000000) { ... } // from try @ 00ab7bd4 with catch @ 00ab7b04
                       catch(type#1 @ 00000000) { ... } // from try @ 00ab7bfc with catch @ 00ab7b04
                       catch(type#1 @ 00000000) { ... } // from try @ 00ab7c28 with catch @ 00ab7b04
                        */
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,"font");
  local_80 = local_a0;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>...t&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_a0,(tuple *)&DAT_013cfb0c,
                     (tuple *)&local_80);
  local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &PTR_FUN_016aa8e0;
  uStack_70 = 1;
  local_78 = 0x30;
  local_68 = this;
  local_60 = &local_80;
  FUN_00ab9b24(&local_80,lVar3 + 0x30);
                    /* try { // try from 00ab7b6c to 00bb7b73 has its CatchHandler @ 00ab7c68 */
                    /* try { // try from 00ab7b74 to 00bb7b97 has its CatchHandler @ 00ab7b04 */
  if (&local_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00ab7b90:
    (*pcVar4)();
  }
  else if (local_60 !=
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00ab7b90;
  }
                    /* try { // try from 00ab7b98 to 00bb7ba3 has its CatchHandler @ 00ab7c68 */
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
                    /* try { // try from 00ab7ba4 to 00bb7bcb has its CatchHandler @ 00ab7b04 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,"size");
                    /* try { // try from 00ab7bcc to 00bb7bd3 has its CatchHandler @ 00ab7c64 */
                    /* try { // try from 00ab7bd4 to 00bb7bf3 has its CatchHandler @ 00ab7b04 */
  local_80 = local_a0;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>...t&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_a0,(tuple *)&DAT_013cfb0c,
                     (tuple *)&local_80);
  local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &PTR_FUN_016aa8e0;
                    /* try { // try from 00ab7bf4 to 00bb7bfb has its CatchHandler @ 00ab7c64 */
  uStack_70 = 1;
  local_78 = 0x38;
  local_68 = this;
  local_60 = &local_80;
                    /* try { // try from 00ab7bfc to 00bb7c1b has its CatchHandler @ 00ab7b04 */
  FUN_00ab9b24(&local_80,lVar3 + 0x30);
  if (&local_80 == local_60) {
                    /* try { // try from 00ab7c1c to 00bb7c27 has its CatchHandler @ 00ab7c64 */
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00ab7c24:
    (*pcVar4)();
  }
  else if (local_60 !=
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00ab7c24;
  }
                    /* try { // try from 00ab7c28 to 00bb7c6b has its CatchHandler @ 00ab7b04 */
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,"align");
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ab7bcc with catch @ 00ab7c64
                       catch(type#1 @ 00000000) { ... } // from try @ 00ab7bf4 with catch @ 00ab7c64
                       catch(type#1 @ 00000000) { ... } // from try @ 00ab7c1c with catch @ 00ab7c64
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ab7b6c with catch @ 00ab7c68
                       catch(type#1 @ 00000000) { ... } // from try @ 00ab7b98 with catch @ 00ab7c68
                        */
  local_80 = local_a0;
                    /* try { // try from 00ab7c6c to 00bb7d23 has its CatchHandler @ 00ab7c6c
                       catch() { ... } // from try @ 00ab7c6c with catch @ 00ab7c6c
                       catch() { ... } // from try @ 00ab7d50 with catch @ 00ab7c6c */
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>...t&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)local_a0,(tuple *)&DAT_013cfb0c,
                     (tuple *)&local_80);
  local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &PTR_FUN_016aa8e0;
  uStack_70 = 1;
  local_78 = 0x40;
  local_68 = this;
  local_60 = &local_80;
  FUN_00ab9b24(&local_80,lVar3 + 0x30);
  if (&local_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 ==
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)0x0)
    goto LAB_00ab7cbc;
    pcVar4 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar4)();
LAB_00ab7cbc:
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

