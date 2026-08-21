
/* cocos2d::network::SocketIOPacket::SocketIOPacket() */

void __thiscall cocos2d::network::SocketIOPacket::SocketIOPacket(SocketIOPacket *this)

{
  undefined8 *puVar1;
  long lVar2;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_00;
  basic_string local_70;
  undefined4 uStack_6f;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined1 uStack_68;
  undefined2 uStack_67;
  undefined1 uStack_65;
  undefined4 uStack_64;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *(undefined ***)this = &PTR__SocketIOPacket_01c6bdd8;
                    /* try { // try from 009df688 to 00adf6a7 has its CatchHandler @ 009df6bc */
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  this[0x81] = (SocketIOPacket)0x0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined2 *)(this + 0xb0) = 0x3a02;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009df688 with catch @ 009df6bc
                        */
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  this[0xb2] = (SocketIOPacket)0x0;
  this_00 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)(this + 200);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  uStack_64 = 0;
  local_70 = (basic_string)0x14;
  local_60 = (void *)0x0;
  uStack_67 = 0x7463;
  uStack_6f = 0x63736964;
  uStack_6b = 0x6f;
  uStack_6a = 0x6e;
  uStack_69 = 0x6e;
  uStack_68 = 0x65;
  uStack_65 = 0;
                    /* try { // try from 009df6f8 to 00adf717 has its CatchHandler @ 009df730 */
  std::__ndk1::
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::
  __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (this_00,&local_70);
  if (((byte)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  uStack_67 = 0;
  uStack_65 = 0;
  uStack_64 = 0;
  local_60 = (void *)0x0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009df6f8 with catch @ 009df730
                        */
  local_70 = (basic_string)0xe;
  uStack_6f = 0x6e6e6f63;
  uStack_6b = 0x65;
  uStack_6a = 99;
  uStack_69 = 0x74;
  uStack_68 = 0;
  puVar1 = *(undefined8 **)(this + 0xd0);
  if (puVar1 < *(undefined8 **)(this + 0xd8)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009df7a0 with catch @ 009df744
                       catch(type#1 @ 00000000) { ... } // from try @ 009df958 with catch @ 009df744
                        */
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0x7463656e6e6f630e;
    *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 0x18;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              (this_00,&local_70);
    if (((byte)local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
                    /* try { // try from 009df798 to 00adf79f has its CatchHandler @ 009dfa94 */
  uStack_65 = 0;
  uStack_64 = 0;
                    /* try { // try from 009df7a0 to 00adf94f has its CatchHandler @ 009df744 */
  local_60 = (void *)0x0;
  local_70 = (basic_string)0x12;
  uStack_67 = 0x74;
  uStack_6f = 0x72616568;
  uStack_6b = 0x74;
  uStack_6a = 0x62;
  uStack_69 = 0x65;
  uStack_68 = 0x61;
  puVar1 = *(undefined8 **)(this + 0xd0);
  if (puVar1 < *(undefined8 **)(this + 0xd8)) {
    puVar1[2] = 0;
    puVar1[1] = 0x7461;
    *puVar1 = 0x6562747261656812;
    *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 0x18;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              (this_00,&local_70);
    if (((byte)local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  uStack_67 = 0;
  uStack_65 = 0;
  uStack_64 = 0;
  local_60 = (void *)0x0;
  local_70 = (basic_string)0xe;
  uStack_6f = 0x7373656d;
  uStack_6b = 0x61;
  uStack_6a = 0x67;
  uStack_69 = 0x65;
  uStack_68 = 0;
  puVar1 = *(undefined8 **)(this + 0xd0);
  if (puVar1 < *(undefined8 **)(this + 0xd8)) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0x6567617373656d0e;
    *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 0x18;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              (this_00,&local_70);
    if (((byte)local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  uStack_6a = 0;
  uStack_69 = 0;
  uStack_68 = 0;
  uStack_67 = 0;
  uStack_65 = 0;
  uStack_64 = 0;
  local_60 = (void *)0x0;
  local_70 = (basic_string)0x8;
  uStack_6f = 0x6e6f736a;
  uStack_6b = 0;
  puVar1 = *(undefined8 **)(this + 0xd0);
  if (puVar1 < *(undefined8 **)(this + 0xd8)) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0x6e6f736a08;
    *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 0x18;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              (this_00,&local_70);
    if (((byte)local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  uStack_69 = 0;
  uStack_68 = 0;
  uStack_67 = 0;
  uStack_65 = 0;
  uStack_64 = 0;
  local_60 = (void *)0x0;
  local_70 = (basic_string)0xa;
  uStack_6f = 0x6e657665;
  uStack_6b = 0x74;
  uStack_6a = 0;
  puVar1 = *(undefined8 **)(this + 0xd0);
  if (puVar1 < *(undefined8 **)(this + 0xd8)) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0x746e6576650a;
    *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 0x18;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              (this_00,&local_70);
    if (((byte)local_70 & 1) != 0) {
                    /* try { // try from 009df950 to 00adf957 has its CatchHandler @ 009dfa54 */
      operator_delete(local_60);
    }
  }
                    /* try { // try from 009df958 to 00adfa97 has its CatchHandler @ 009df744 */
  uStack_6b = 0;
  uStack_6a = 0;
  uStack_69 = 0;
  uStack_68 = 0;
  uStack_67 = 0;
  uStack_65 = 0;
  uStack_64 = 0;
  local_60 = (void *)0x0;
  local_70 = (basic_string)0x6;
  uStack_6f = 0x6b6361;
  puVar1 = *(undefined8 **)(this + 0xd0);
  if (puVar1 < *(undefined8 **)(this + 0xd8)) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0x6b636106;
    *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 0x18;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              (this_00,&local_70);
    if (((byte)local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  uStack_69 = 0;
  uStack_68 = 0;
  uStack_67 = 0;
  uStack_65 = 0;
  uStack_64 = 0;
  local_60 = (void *)0x0;
  local_70 = (basic_string)0xa;
  uStack_6f = 0x6f727265;
  uStack_6b = 0x72;
  uStack_6a = 0;
  puVar1 = *(undefined8 **)(this + 0xd0);
  if (puVar1 < *(undefined8 **)(this + 0xd8)) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0x726f7272650a;
    *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 0x18;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              (this_00,&local_70);
    if (((byte)local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  uStack_6a = 0;
  uStack_69 = 0;
  uStack_68 = 0;
  uStack_67 = 0;
  uStack_65 = 0;
  uStack_64 = 0;
  local_60 = (void *)0x0;
  local_70 = (basic_string)0x8;
  uStack_6f = 0x706f6f6e;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009df950 with catch @ 009dfa54
                        */
  uStack_6b = 0;
  puVar1 = *(undefined8 **)(this + 0xd0);
  if (puVar1 < *(undefined8 **)(this + 0xd8)) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0x706f6f6e08;
    uStack_68 = 0;
    uStack_67 = 0;
    uStack_65 = 0;
    uStack_64 = 0;
    local_60 = (void *)0x0;
    local_70 = (basic_string)0x0;
    uStack_6f = 0;
    uStack_6b = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 0x18;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009df798 with catch @ 009dfa94
                        */
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              (this_00,&local_70);
                    /* try { // try from 009dfa98 to 00adfb37 has its CatchHandler @ 009dfa98
                       catch() { ... } // from try @ 009dfa98 with catch @ 009dfa98
                       catch() { ... } // from try @ 009dfb40 with catch @ 009dfa98
                       catch() { ... } // from try @ 009dfba4 with catch @ 009dfa98 */
    if (((byte)local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

