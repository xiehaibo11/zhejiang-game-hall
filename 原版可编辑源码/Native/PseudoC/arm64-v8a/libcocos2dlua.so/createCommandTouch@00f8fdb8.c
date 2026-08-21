
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::Console::createCommandTouch() */

void __thiscall cocos2d::Console::createCommandTouch(Console *this)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_168 [16];
  void *local_158;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_150 [16];
  void *local_140;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_138;
  undefined7 uStack_137;
  ulong uStack_130;
  void *local_128;
  undefined **local_120;
  code *pcStack_118;
  void *local_110;
  Console *local_108;
  undefined ***local_100;
  undefined **local_f0;
  ulong uStack_e8;
  void *local_e0;
  undefined8 local_d8;
  ulong uStack_d0;
  void *local_c8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_120,"touch");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            (&local_138,
             "simulate touch event via console, type -h or [touch help] to list supported directives"
            );
  pvVar2 = local_110;
  uStack_e8 = 0;
  local_e0 = (void *)0x0;
  local_f0 = (undefined **)0x0;
  if (((ulong)local_120 & 1) == 0) {
    uStack_e8 = (ulong)pcStack_118;
    local_f0 = local_120;
    local_e0 = local_110;
  }
  else {
    if (0xffffffffffffffef < pcStack_118) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (pcStack_118 < 0x17) {
      pvVar3 = (void *)((ulong)&local_f0 | 1);
      local_f0 = (undefined **)(ulong)(byte)((int)pcStack_118 << 1);
      if (pcStack_118 != (code *)0x0) goto LAB_00f8fe78;
    }
    else {
      uVar6 = (long)pcStack_118 + 0x10U & 0xfffffffffffffff0;
      pvVar3 = operator_new(uVar6);
      local_f0 = (undefined **)(uVar6 | 1);
      uStack_e8 = (ulong)pcStack_118;
      local_e0 = pvVar3;
LAB_00f8fe78:
      memcpy(pvVar3,pvVar2,(size_t)pcStack_118);
    }
    *(undefined1 *)((long)pvVar3 + (long)pcStack_118) = 0;
  }
  pvVar2 = local_128;
  uStack_d0 = 0;
  local_c8 = (void *)0x0;
  local_d8 = 0;
  if (((byte)local_138 & 1) == 0) {
    local_d8 = CONCAT71(uStack_137,local_138);
    local_c8 = local_128;
    uStack_d0 = uStack_130;
  }
  else {
    if (0xffffffffffffffef < uStack_130) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_130 < 0x17) {
      pvVar3 = (void *)((long)&local_d8 + 1);
      local_d8 = (ulong)(byte)((int)uStack_130 << 1);
      if (uStack_130 != 0) goto LAB_00f8ff04;
    }
    else {
      uVar6 = uStack_130 + 0x10 & 0xfffffffffffffff0;
      pvVar3 = operator_new(uVar6);
      local_d8 = uVar6 | 1;
      uStack_d0 = uStack_130;
      local_c8 = pvVar3;
LAB_00f8ff04:
      memcpy(pvVar3,pvVar2,uStack_130);
    }
    *(undefined1 *)((long)pvVar3 + uStack_130) = 0;
  }
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_70 = 0x3f800000;
  addCommand(this,(Command *)&local_f0);
  Command::~Command((Command *)&local_f0);
  if (((byte)local_138 & 1) != 0) {
    operator_delete(local_128);
  }
  if (((byte)local_120._0_1_ & 1) != 0) {
    operator_delete(local_110);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_138,"touch");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_150,"tap");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_168,"touch tap x y: simulate touch tap at (x,y).");
  local_100 = &local_120;
  local_120 = &PTR_FUN_017223e0;
  local_110 = (void *)0x0;
  pcStack_118 = commandTouchSubCommandTap;
  local_108 = this;
  Command::Command((Command *)&local_f0,(basic_string *)local_150,(basic_string *)local_168,
                   (function *)&local_120);
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>>>
                      *)(this + 0xd8),(basic_string *)&local_138);
  if (lVar4 != 0) {
    Command::addSubCommand(*(Command **)(lVar4 + 0x28),(Command *)&local_f0);
  }
  Command::~Command((Command *)&local_f0);
  if (&local_120 == local_100) {
    pcVar5 = (code *)(*local_100)[4];
LAB_00f90024:
    (*pcVar5)();
  }
  else if (local_100 != (undefined ***)0x0) {
    pcVar5 = (code *)(*local_100)[5];
    goto LAB_00f90024;
  }
  if (((byte)local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
  if (((byte)local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (((byte)local_138 & 1) != 0) {
    operator_delete(local_128);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_138,"touch");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_150,"swipe");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            (local_168,"touch swipe x1 y1 x2 y2: simulate touch swipe from (x1,y1) to (x2,y2).");
  local_120 = &PTR_FUN_017223e0;
  local_100 = &local_120;
  local_110 = (void *)0x0;
  pcStack_118 = commandTouchSubCommandSwipe;
  local_108 = this;
  Command::Command((Command *)&local_f0,(basic_string *)local_150,(basic_string *)local_168,
                   (function *)&local_120);
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>>>
                      *)(this + 0xd8),(basic_string *)&local_138);
  if (lVar4 != 0) {
    Command::addSubCommand(*(Command **)(lVar4 + 0x28),(Command *)&local_f0);
  }
  Command::~Command((Command *)&local_f0);
  if (&local_120 == local_100) {
    pcVar5 = (code *)(*local_100)[4];
  }
  else {
    if (local_100 == (undefined ***)0x0) goto LAB_00f90124;
    pcVar5 = (code *)(*local_100)[5];
  }
  (*pcVar5)();
LAB_00f90124:
  if (((byte)local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
  if (((byte)local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (((byte)local_138 & 1) != 0) {
    operator_delete(local_128);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

