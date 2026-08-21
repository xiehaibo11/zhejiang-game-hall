
/* v8::internal::compiler::Typer::Visitor::UpdateType(v8::internal::compiler::Node*,
   v8::internal::compiler::Type) */

Node * __thiscall
v8::internal::compiler::Typer::Visitor::UpdateType(Visitor *this,Node *param_1,long param_3)

{
  pair *ppVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_198;
  long local_190 [2];
  Node **local_180;
  Node *local_178;
  undefined4 local_170;
  ulong local_168;
  Node *local_160;
  undefined **local_158;
  locale alStack_150 [8];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined **local_f0 [17];
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar4 = *(long *)(param_1 + 8);
  local_190[0] = param_3;
  if (lVar4 == 0) {
    if (*(short *)(*(long *)param_1 + 0x10) == 0x7c) {
      ppVar1 = (pair *)(this + 0x38);
      lVar4 = NodeProperties::GetValueInput(param_1,0);
      uVar5 = *(undefined8 *)(lVar4 + 8);
      local_158 = (undefined **)((ulong)local_158 & 0xffffffff00000000);
      local_178 = (Node *)&local_160;
      local_160 = param_1;
      lVar4 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>>>
              ::
              __emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::Node*,int>&&>,std::__ndk1::tuple<>>
                        (ppVar1,(piecewise_construct_t *)&local_160,(tuple *)&DAT_01a02188,
                         (tuple *)&local_178);
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
      lVar4 = NodeProperties::GetValueInput(param_1,1);
      uVar5 = *(undefined8 *)(lVar4 + 8);
      local_158._0_4_ = 1;
      local_178 = (Node *)&local_160;
      local_160 = param_1;
      lVar4 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>>>
              ::
              __emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::Node*,int>&&>,std::__ndk1::tuple<>>
                        (ppVar1,(piecewise_construct_t *)&local_160,(tuple *)&DAT_01a02188,
                         (tuple *)&local_178);
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
      local_158 = (undefined **)CONCAT44(local_158._4_4_,2);
      local_178 = (Node *)&local_160;
      local_160 = param_1;
      lVar4 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>>>
              ::
              __emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::Node*,int>&&>,std::__ndk1::tuple<>>
                        (ppVar1,(piecewise_construct_t *)&local_160,(tuple *)&DAT_01a02188,
                         (tuple *)&local_178);
      *(long *)(lVar4 + 0x20) = local_190[0];
    }
    *(long *)(param_1 + 8) = local_190[0];
  }
  else {
    local_198 = lVar4;
    if ((*(short *)(*(long *)param_1 + 0x10) == 0x25) ||
       (*(short *)(*(long *)param_1 + 0x10) == 0x23)) {
      param_3 = Weaken(this,param_1,param_3,lVar4);
    }
    local_190[0] = param_3;
    if ((lVar4 != param_3) && (uVar2 = Type::SlowIs((Type *)&local_198,param_3), (uVar2 & 1) == 0))
    {
      local_160 = (Node *)0x1c6c8a8;
      local_f0[0] = (undefined **)0x1c6c8d0;
      std::__ndk1::ios_base::init((ios_base *)local_f0,&local_158);
      local_60 = 0xffffffff;
      local_160 = (Node *)&PTR__basic_ostringstream_01c6c858;
      local_f0[0] = &PTR__basic_ostringstream_01c6c880;
      local_158 = &PTR__basic_streambuf_01c671a8;
      local_68 = 0;
      std::__ndk1::locale::locale(alStack_150);
      local_158 = &PTR__basic_stringbuf_01c67100;
      uStack_120 = 0;
      local_128 = 0;
      uStack_130 = 0;
      local_138 = 0;
      uStack_140 = 0;
      local_148 = 0;
      uStack_110 = 0;
      local_118 = 0;
      uStack_100 = 0;
      local_108 = 0;
      local_f8 = 0x10;
      Node::Print(param_1,(basic_ostream *)&local_160);
      if (*(short *)(*(long *)param_1 + 0x10) == 0x7c) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_160,"Previous UpdateType run (inputs first):",0x27);
        ppVar1 = (pair *)(this + 0x38);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_160,"  ",2);
        local_170 = 0;
        local_180 = &local_178;
        local_178 = param_1;
        lVar3 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>>>
                ::
                __emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::Node*,int>&&>,std::__ndk1::tuple<>>
                          (ppVar1,(piecewise_construct_t *)&local_178,(tuple *)&DAT_01a02188,
                           (tuple *)&local_180);
        if (*(long *)(lVar3 + 0x20) == 0) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_160,"untyped",7);
        }
        else {
          local_170 = 0;
          local_180 = &local_178;
          local_178 = param_1;
          lVar3 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>>>
                  ::
                  __emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::Node*,int>&&>,std::__ndk1::tuple<>>
                            (ppVar1,(piecewise_construct_t *)&local_178,(tuple *)&DAT_01a02188,
                             (tuple *)&local_180);
          Type::PrintTo((Type *)(lVar3 + 0x20),(basic_ostream *)&local_160);
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_160,"  ",2);
        local_170 = 1;
        local_180 = &local_178;
        local_178 = param_1;
        lVar3 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>>>
                ::
                __emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::Node*,int>&&>,std::__ndk1::tuple<>>
                          (ppVar1,(piecewise_construct_t *)&local_178,(tuple *)&DAT_01a02188,
                           (tuple *)&local_180);
        if (*(long *)(lVar3 + 0x20) == 0) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_160,"untyped",7);
        }
        else {
          local_170 = 1;
          local_180 = &local_178;
          local_178 = param_1;
          lVar3 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>>>
                  ::
                  __emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::Node*,int>&&>,std::__ndk1::tuple<>>
                            (ppVar1,(piecewise_construct_t *)&local_178,(tuple *)&DAT_01a02188,
                             (tuple *)&local_180);
          Type::PrintTo((Type *)(lVar3 + 0x20),(basic_ostream *)&local_160);
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_160,"  ",2);
        local_170 = 2;
        local_180 = &local_178;
        local_178 = param_1;
        lVar3 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>>>
                ::
                __emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::Node*,int>&&>,std::__ndk1::tuple<>>
                          (ppVar1,(piecewise_construct_t *)&local_178,(tuple *)&DAT_01a02188,
                           (tuple *)&local_180);
        if (*(long *)(lVar3 + 0x20) == 0) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_160,"untyped",7);
        }
        else {
          local_170 = 2;
          local_180 = &local_178;
          local_178 = param_1;
          lVar3 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>>>
                  ::
                  __emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::Node*,int>&&>,std::__ndk1::tuple<>>
                            (ppVar1,(piecewise_construct_t *)&local_178,(tuple *)&DAT_01a02188,
                             (tuple *)&local_180);
          Type::PrintTo((Type *)(lVar3 + 0x20),(basic_ostream *)&local_160);
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_160,"\nCurrent (output) type:  ",0x19);
        Type::PrintTo((Type *)&local_198,(basic_ostream *)&local_160);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_160,"\nThis UpdateType run (inputs first):",0x24);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_160,"  ",2);
        lVar3 = NodeProperties::GetValueInput(param_1,0);
        if (*(Node **)(lVar3 + 8) == (Node *)0x0) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_160,"untyped",7);
        }
        else {
          local_178 = *(Node **)(lVar3 + 8);
          Type::PrintTo((Type *)&local_178,(basic_ostream *)&local_160);
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_160,"  ",2);
        lVar3 = NodeProperties::GetValueInput(param_1,1);
        if (*(Node **)(lVar3 + 8) == (Node *)0x0) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_160,"untyped",7);
        }
        else {
          local_178 = *(Node **)(lVar3 + 8);
          Type::PrintTo((Type *)&local_178,(basic_ostream *)&local_160);
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_160,"  ",2);
        Type::PrintTo((Type *)local_190,(basic_ostream *)&local_160);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_160,"\n",1);
      }
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      uVar2 = (ulong)&local_178 | 1;
      if (((ulong)local_178 & 1) != 0) {
        uVar2 = local_168;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("UpdateType error for node %s",uVar2);
    }
    if (*(short *)(*(long *)param_1 + 0x10) == 0x7c) {
      ppVar1 = (pair *)(this + 0x38);
      lVar4 = NodeProperties::GetValueInput(param_1,0);
      uVar5 = *(undefined8 *)(lVar4 + 8);
      local_158 = (undefined **)((ulong)local_158 & 0xffffffff00000000);
      local_178 = (Node *)&local_160;
      local_160 = param_1;
      lVar4 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>>>
              ::
              __emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::Node*,int>&&>,std::__ndk1::tuple<>>
                        (ppVar1,(piecewise_construct_t *)&local_160,(tuple *)&DAT_01a02188,
                         (tuple *)&local_178);
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
      lVar4 = NodeProperties::GetValueInput(param_1,1);
      uVar5 = *(undefined8 *)(lVar4 + 8);
      local_158._0_4_ = 1;
      local_178 = (Node *)&local_160;
      local_160 = param_1;
      lVar4 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>>>
              ::
              __emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::Node*,int>&&>,std::__ndk1::tuple<>>
                        (ppVar1,(piecewise_construct_t *)&local_160,(tuple *)&DAT_01a02188,
                         (tuple *)&local_178);
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
      local_158 = (undefined **)CONCAT44(local_158._4_4_,2);
      local_178 = (Node *)&local_160;
      local_160 = param_1;
      lVar4 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::Node*,int>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::Node*,int>,v8::internal::compiler::Type>>>
              ::
              __emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::Node*,int>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::Node*,int>&&>,std::__ndk1::tuple<>>
                        (ppVar1,(piecewise_construct_t *)&local_160,(tuple *)&DAT_01a02188,
                         (tuple *)&local_178);
      *(long *)(lVar4 + 0x20) = local_190[0];
    }
    *(long *)(param_1 + 8) = local_190[0];
    if ((local_190[0] == local_198) || (uVar2 = Type::SlowIs((Type *)local_190), (uVar2 & 1) != 0))
    {
      param_1 = (Node *)0x0;
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}

