
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::Console::createCommandFps() */

void __thiscall cocos2d::Console::createCommandFps(Console *this)

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
  basic_string<decltype(nullptr)>(local_128,"fps");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            (local_140,"Turn on / off the FPS. Args: [-h | help | on | off | ]");
  local_f0 = &local_110;
  local_110 = &PTR_FUN_017223e0;
  uStack_100 = 0;
  local_108 = commandFps;
  local_f8 = this;
  Command::Command(aCStack_e0,(basic_string *)local_128,(basic_string *)local_140,
                   (function *)&local_110);
  addCommand(this,aCStack_e0);
  Command::~Command(aCStack_e0);
  if (&local_110 == local_f0) {
    pcVar3 = (code *)(*local_f0)[4];
LAB_00f8ecfc:
    (*pcVar3)();
  }
  else if (local_f0 != (undefined ***)0x0) {
    pcVar3 = (code *)(*local_f0)[5];
    goto LAB_00f8ecfc;
  }
  if (((byte)local_140[0] & 1) != 0) {
    operator_delete(local_130);
  }
  if (((byte)local_128[0] & 1) != 0) {
    operator_delete(local_118);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_128,"fps");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_140,"on");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_158,"Display the FPS on the bottom-left corner.");
  local_110 = &PTR_FUN_017223e0;
  local_f0 = &local_110;
  uStack_100 = 0;
  local_108 = commandFpsSubCommandOnOff;
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
LAB_00f8edd8:
    (*pcVar3)();
  }
  else if (local_f0 != (undefined ***)0x0) {
    pcVar3 = (code *)(*local_f0)[5];
    goto LAB_00f8edd8;
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
  basic_string<decltype(nullptr)>(local_128,"fps");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_140,"off");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_158,"Hide the FPS on the bottom-left corner.");
  local_110 = &PTR_FUN_017223e0;
  local_f0 = &local_110;
  uStack_100 = 0;
  local_108 = commandFpsSubCommandOnOff;
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
    if (local_f0 == (undefined ***)0x0) goto LAB_00f8eed0;
    pcVar3 = (code *)(*local_f0)[5];
  }
  (*pcVar3)();
LAB_00f8eed0:
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

