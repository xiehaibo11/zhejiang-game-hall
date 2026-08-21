
/* cocos2d::network::SocketIOPacketV10x::SocketIOPacketV10x() */

void __thiscall cocos2d::network::SocketIOPacketV10x::SocketIOPacketV10x(SocketIOPacketV10x *this)

{
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_00;
  undefined8 *puVar1;
  long lVar2;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_01;
  basic_string local_60;
  undefined4 uStack_5f;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined2 uStack_57;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined2 uStack_52;
  void *local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 009e0e0c with catch @ 009e0ed8 */
                    /* catch() { ... } // from try @ 009e0da4 with catch @ 009e0ee8 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  SocketIOPacket::SocketIOPacket((SocketIOPacket *)this);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined ***)this = &PTR__SocketIOPacketV10x_01c6be08;
  this_01 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)(this + 0xe0);
  *(undefined8 *)this_01 = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0xb0),"",0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x80),",",1);
  uStack_52 = 0;
  local_50 = (void *)0x0;
  local_60 = (basic_string)0x18;
  uStack_57 = 0x7463;
  uStack_55 = 0x65;
  uStack_54 = 100;
  uStack_5f = 0x63736964;
  uStack_5b = 0x6f;
  uStack_5a = 0x6e;
  uStack_59 = 0x6e;
  uStack_58 = 0x65;
  uStack_53 = 0;
  puVar1 = *(undefined8 **)(this + 0xd0);
  this_00 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)(this + 200);
  if (puVar1 < *(undefined8 **)(this + 0xd8)) {
    puVar1[2] = 0;
    puVar1[1] = 0x6465746365;
    *puVar1 = 0x6e6e6f6373696418;
    *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 0x18;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              (this_00,&local_60);
    if (((byte)local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  uStack_55 = 0;
  uStack_54 = 0;
  uStack_53 = 0;
  uStack_52 = 0;
  local_50 = (void *)0x0;
  local_60 = (basic_string)0x12;
  uStack_57 = 100;
  uStack_5f = 0x6e6e6f63;
  uStack_5b = 0x65;
  uStack_5a = 99;
  uStack_59 = 0x74;
  uStack_58 = 0x65;
  puVar1 = *(undefined8 **)(this + 0xd0);
  if (puVar1 < *(undefined8 **)(this + 0xd8)) {
    puVar1[2] = 0;
    puVar1[1] = 0x6465;
    *puVar1 = 0x7463656e6e6f6312;
    *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 0x18;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              (this_00,&local_60);
    if (((byte)local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  uStack_55 = 0;
  uStack_54 = 0;
  uStack_53 = 0;
  uStack_52 = 0;
  local_50 = (void *)0x0;
  local_60 = (basic_string)0x12;
  uStack_57 = 0x74;
  uStack_5f = 0x72616568;
  uStack_5b = 0x74;
  uStack_5a = 0x62;
  uStack_59 = 0x65;
  uStack_58 = 0x61;
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
              (this_00,&local_60);
    if (((byte)local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  uStack_5a = 0;
  uStack_59 = 0;
  uStack_58 = 0;
  uStack_57 = 0;
  uStack_55 = 0;
  uStack_54 = 0;
  uStack_53 = 0;
  uStack_52 = 0;
  local_50 = (void *)0x0;
  local_60 = (basic_string)0x8;
  uStack_5f = 0x676e6f70;
  uStack_5b = 0;
  puVar1 = *(undefined8 **)(this + 0xd0);
  if (puVar1 < *(undefined8 **)(this + 0xd8)) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0x676e6f7008;
    *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 0x18;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              (this_00,&local_60);
    if (((byte)local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  uStack_57 = 0;
  uStack_55 = 0;
  uStack_54 = 0;
  uStack_53 = 0;
  uStack_52 = 0;
  local_50 = (void *)0x0;
  local_60 = (basic_string)0xe;
  uStack_5f = 0x7373656d;
  uStack_5b = 0x61;
  uStack_5a = 0x67;
  uStack_59 = 0x65;
  uStack_58 = 0;
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
              (this_00,&local_60);
    if (((byte)local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  uStack_57 = 0;
  uStack_55 = 0;
  uStack_54 = 0;
  uStack_53 = 0;
  uStack_52 = 0;
  local_50 = (void *)0x0;
  local_60 = (basic_string)0xe;
  uStack_5f = 0x72677075;
  uStack_5b = 0x61;
  uStack_5a = 100;
  uStack_59 = 0x65;
  uStack_58 = 0;
  puVar1 = *(undefined8 **)(this + 0xd0);
  if (puVar1 < *(undefined8 **)(this + 0xd8)) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0x656461726770750e;
    *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 0x18;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              (this_00,&local_60);
    if (((byte)local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  uStack_5a = 0;
  uStack_59 = 0;
  uStack_58 = 0;
  uStack_57 = 0;
  uStack_55 = 0;
  uStack_54 = 0;
  uStack_53 = 0;
  uStack_52 = 0;
  local_50 = (void *)0x0;
  local_60 = (basic_string)0x8;
  uStack_5f = 0x706f6f6e;
  uStack_5b = 0;
  puVar1 = *(undefined8 **)(this + 0xd0);
  if (puVar1 < *(undefined8 **)(this + 0xd8)) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0x706f6f6e08;
    *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 0x18;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              (this_00,&local_60);
    if (((byte)local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  uStack_57 = 0;
  uStack_55 = 0;
  uStack_54 = 0;
  uStack_53 = 0;
  uStack_52 = 0;
  local_50 = (void *)0x0;
  local_60 = (basic_string)0xe;
  uStack_5f = 0x6e6e6f63;
  uStack_5b = 0x65;
  uStack_5a = 99;
  uStack_59 = 0x74;
  uStack_58 = 0;
  puVar1 = *(undefined8 **)(this + 0xe8);
  if (puVar1 < *(undefined8 **)(this + 0xf0)) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0x7463656e6e6f630e;
    *(long *)(this + 0xe8) = *(long *)(this + 0xe8) + 0x18;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              (this_01,&local_60);
    if (((byte)local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  uStack_54 = 0;
  uStack_53 = 0;
  uStack_52 = 0;
  local_50 = (void *)0x0;
  local_60 = (basic_string)0x14;
  uStack_57 = 0x7463;
  uStack_5f = 0x63736964;
  uStack_5b = 0x6f;
  uStack_5a = 0x6e;
  uStack_59 = 0x6e;
  uStack_58 = 0x65;
  uStack_55 = 0;
  puVar1 = *(undefined8 **)(this + 0xe8);
  if (puVar1 < *(undefined8 **)(this + 0xf0)) {
    puVar1[2] = 0;
    puVar1[1] = 0x746365;
    *puVar1 = 0x6e6e6f6373696414;
    *(long *)(this + 0xe8) = *(long *)(this + 0xe8) + 0x18;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              (this_01,&local_60);
    if (((byte)local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  uStack_59 = 0;
  uStack_58 = 0;
  uStack_57 = 0;
  uStack_55 = 0;
  uStack_54 = 0;
  uStack_53 = 0;
  uStack_52 = 0;
  local_50 = (void *)0x0;
  local_60 = (basic_string)0xa;
  uStack_5f = 0x6e657665;
  uStack_5b = 0x74;
  uStack_5a = 0;
  puVar1 = *(undefined8 **)(this + 0xe8);
  if (puVar1 < *(undefined8 **)(this + 0xf0)) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0x746e6576650a;
    *(long *)(this + 0xe8) = *(long *)(this + 0xe8) + 0x18;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              (this_01,&local_60);
    if (((byte)local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  uStack_5b = 0;
  uStack_5a = 0;
  uStack_59 = 0;
  uStack_58 = 0;
  uStack_57 = 0;
  uStack_55 = 0;
  uStack_54 = 0;
  uStack_53 = 0;
  uStack_52 = 0;
  local_50 = (void *)0x0;
  local_60 = (basic_string)0x6;
  uStack_5f = 0x6b6361;
  puVar1 = *(undefined8 **)(this + 0xe8);
  if (puVar1 < *(undefined8 **)(this + 0xf0)) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0x6b636106;
    *(long *)(this + 0xe8) = *(long *)(this + 0xe8) + 0x18;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              (this_01,&local_60);
                    /* try { // try from 009e1440 to 00ae14eb has its CatchHandler @ 009e1440
                       catch() { ... } // from try @ 009e1440 with catch @ 009e1440
                       catch() { ... } // from try @ 009e1518 with catch @ 009e1440 */
    if (((byte)local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  uStack_59 = 0;
  uStack_58 = 0;
  uStack_57 = 0;
  uStack_55 = 0;
  uStack_54 = 0;
  uStack_53 = 0;
  uStack_52 = 0;
  local_50 = (void *)0x0;
  local_60 = (basic_string)0xa;
  uStack_5f = 0x6f727265;
  uStack_5b = 0x72;
  uStack_5a = 0;
  puVar1 = *(undefined8 **)(this + 0xe8);
  if (puVar1 < *(undefined8 **)(this + 0xf0)) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0x726f7272650a;
    *(long *)(this + 0xe8) = *(long *)(this + 0xe8) + 0x18;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              (this_01,&local_60);
    if (((byte)local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  uStack_54 = 0;
  uStack_53 = 0;
  uStack_52 = 0;
  local_50 = (void *)0x0;
  local_60 = (basic_string)0x14;
  uStack_57 = 0x746e;
  uStack_5f = 0x616e6962;
  uStack_5b = 0x72;
  uStack_5a = 0x65;
  uStack_59 = 0x76;
  uStack_58 = 0x65;
  uStack_55 = 0;
                    /* try { // try from 009e14ec to 00ae14f7 has its CatchHandler @ 009e15a0 */
  puVar1 = *(undefined8 **)(this + 0xe8);
  if (puVar1 < *(undefined8 **)(this + 0xf0)) {
    puVar1[2] = 0;
    puVar1[1] = 0x746e65;
    *puVar1 = 0x766572616e696214;
                    /* try { // try from 009e1510 to 00ae1517 has its CatchHandler @ 009e15b4 */
                    /* try { // try from 009e1518 to 00ae15e7 has its CatchHandler @ 009e1440 */
    *(long *)(this + 0xe8) = *(long *)(this + 0xe8) + 0x18;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              (this_01,&local_60);
    if (((byte)local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  uStack_55 = 0;
  uStack_54 = 0;
  uStack_53 = 0;
  uStack_52 = 0;
  local_50 = (void *)0x0;
  local_60 = (basic_string)0x12;
  uStack_57 = 0x6b;
  uStack_5f = 0x616e6962;
  uStack_5b = 0x72;
  uStack_5a = 0x79;
  uStack_59 = 0x61;
  uStack_58 = 99;
  puVar1 = *(undefined8 **)(this + 0xe8);
  if (puVar1 < *(undefined8 **)(this + 0xf0)) {
    puVar1[2] = 0;
    puVar1[1] = 0x6b63;
    *puVar1 = 0x617972616e696212;
    uStack_58 = 0;
    uStack_57 = 0;
    uStack_55 = 0;
    uStack_54 = 0;
    uStack_53 = 0;
    uStack_52 = 0;
    local_50 = (void *)0x0;
    local_60 = (basic_string)0x0;
    uStack_5f = 0;
    uStack_5b = 0;
    uStack_5a = 0;
    uStack_59 = 0;
    *(long *)(this + 0xe8) = *(long *)(this + 0xe8) + 0x18;
  }
  else {
                    /* catch() { ... } // from try @ 009e14ec with catch @ 009e15a0 */
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              (this_01,&local_60);
    if (((byte)local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
                    /* catch() { ... } // from try @ 009e1510 with catch @ 009e15b4 */
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

