
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::Console::createCommandProjection() */

void __thiscall cocos2d::Console::createCommandProjection(Console *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_158 [16];
  void *local_148;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_140 [16];
  void *local_130;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_128 [16];
  void *local_118;
  undefined **local_110;
  code *local_108;
  undefined8 uStack_100;
  Console *local_f8;
  undefined ***local_f0;
  Command aCStack_e0 [152];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_128,"projection");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            (local_140,"Change or print the current projection. Args: [-h | help | 2d | 3d | ]");
  local_f0 = &local_110;
  local_110 = &PTR_FUN_017223e0;
  uStack_100 = 0;
  local_108 = commandProjection;
  local_f8 = this;
  Command::Command(aCStack_e0,(basic_string *)local_128,(basic_string *)local_140,
                   (function *)&local_110);
  addCommand(this,aCStack_e0);
  Command::~Command(aCStack_e0);
  if (&local_110 == local_f0) {
    pcVar3 = (code *)(*local_f0)[4];
LAB_00f8f2b0:
    (*pcVar3)();
  }
  else if (local_f0 != (undefined ***)0x0) {
    pcVar3 = (code *)(*local_f0)[5];
    goto LAB_00f8f2b0;
  }
  if (((byte)local_140[0] & 1) != 0) {
    operator_delete(local_130);
  }
  if (((byte)local_128[0] & 1) != 0) {
    operator_delete(local_118);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_128,"projection");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_140,"2d");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_158,"sets a 2D projection (orthogonal projection).");
  local_110 = &PTR_FUN_017223e0;
  local_f0 = &local_110;
  uStack_100 = 0;
  local_108 = commandProjectionSubCommand2d;
  local_f8 = this;
  Command::Command(aCStack_e0,(basic_string *)local_140,(basic_string *)local_158,
                   (function *)&local_110);
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>>>
                      *)(this + 0xd8),(basic_string *)local_128);
  if (lVar2 != 0) {
    Command::addSubCommand(*(Command **)(lVar2 + 0x28),aCStack_e0);
  }
  Command::~Command(aCStack_e0);
  if (&local_110 == local_f0) {
    pcVar3 = (code *)(*local_f0)[4];
LAB_00f8f38c:
    (*pcVar3)();
  }
  else if (local_f0 != (undefined ***)0x0) {
    pcVar3 = (code *)(*local_f0)[5];
    goto LAB_00f8f38c;
  }
  if (((byte)local_158[0] & 1) != 0) {
    operator_delete(local_148);
  }
  if (((byte)local_140[0] & 1) != 0) {
    operator_delete(local_130);
  }
  if (((byte)local_128[0] & 1) != 0) {
    operator_delete(local_118);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_128,"projection");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_140,"3d");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            (local_158,"sets a 3D projection with a fovy=60, znear=0.5f and zfar=1500.");
  local_110 = &PTR_FUN_017223e0;
  local_f0 = &local_110;
  uStack_100 = 0;
  local_108 = commandProjectionSubCommand3d;
  local_f8 = this;
  Command::Command(aCStack_e0,(basic_string *)local_140,(basic_string *)local_158,
                   (function *)&local_110);
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>>>
                      *)(this + 0xd8),(basic_string *)local_128);
  if (lVar2 != 0) {
    Command::addSubCommand(*(Command **)(lVar2 + 0x28),aCStack_e0);
  }
  Command::~Command(aCStack_e0);
  if (&local_110 == local_f0) {
    pcVar3 = (code *)(*local_f0)[4];
  }
  else {
    if (local_f0 == (undefined ***)0x0) goto LAB_00f8f48c;
    pcVar3 = (code *)(*local_f0)[5];
  }
  (*pcVar3)();
LAB_00f8f48c:
  if (((byte)local_158[0] & 1) != 0) {
    operator_delete(local_148);
  }
  if (((byte)local_140[0] & 1) != 0) {
    operator_delete(local_130);
  }
  if (((byte)local_128[0] & 1) != 0) {
    operator_delete(local_118);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

