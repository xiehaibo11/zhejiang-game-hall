
/* MyXMLVisitor::MyXMLVisitor(cocos2d::ui::RichText*) */

void __thiscall MyXMLVisitor::MyXMLVisitor(MyXMLVisitor *this,RichText *param_1)

{
  long lVar1;
  Attributes *this_00;
  code *pcVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_2e8 [16];
  void *local_2d8;
  undefined **local_2d0 [4];
  undefined ***local_2b0;
  undefined **local_2a0 [4];
  undefined ***local_280;
  undefined **local_270 [4];
  undefined ***local_250;
  undefined **local_240 [4];
  undefined ***local_220;
  undefined **local_210 [4];
  undefined ***local_1f0;
  undefined **local_1e0 [4];
  undefined ***local_1c0;
  undefined **local_1b0 [4];
  undefined ***local_190;
  undefined **local_180 [4];
  undefined ***local_160;
  undefined **local_150 [4];
  undefined ***local_130;
  undefined **local_120 [4];
  undefined ***local_100;
  undefined **local_f0 [4];
  undefined ***local_d0;
  undefined **local_c0 [4];
  undefined ***local_a0;
  undefined **local_90 [4];
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__MyXMLVisitor_016e1d58;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  this_00 = operator_new(0x780);
  *(Attributes **)(this + 8) = this_00;
  *(Attributes **)(this + 0x10) = this_00;
  *(Attributes **)(this + 0x18) = this_00 + 0x780;
  Attributes::Attributes(this_00);
  Attributes::Attributes(this_00 + 0x60);
  Attributes::Attributes(this_00 + 0xc0);
  Attributes::Attributes(this_00 + 0x120);
                    /* try { // try from 00dd0a90 to 00ed0a93 has its CatchHandler @ 00dd0f48 */
  Attributes::Attributes(this_00 + 0x180);
  Attributes::Attributes(this_00 + 0x1e0);
  Attributes::Attributes(this_00 + 0x240);
                    /* try { // try from 00dd0ab0 to 00ed0ab7 has its CatchHandler @ 00dd0edc */
                    /* try { // try from 00dd0ab8 to 00ed0afb has its CatchHandler @ 00dd0f40 */
  Attributes::Attributes(this_00 + 0x2a0);
  Attributes::Attributes(this_00 + 0x300);
  Attributes::Attributes(this_00 + 0x360);
  Attributes::Attributes(this_00 + 0x3c0);
  Attributes::Attributes(this_00 + 0x420);
  Attributes::Attributes(this_00 + 0x480);
  Attributes::Attributes(this_00 + 0x4e0);
  Attributes::Attributes(this_00 + 0x540);
  Attributes::Attributes(this_00 + 0x5a0);
  Attributes::Attributes(this_00 + 0x600);
  Attributes::Attributes(this_00 + 0x660);
  Attributes::Attributes(this_00 + 0x6c0);
  Attributes::Attributes(this_00 + 0x720);
                    /* try { // try from 00dd0b4c to 00ed0b53 has its CatchHandler @ 00dd0f24 */
  *(Attributes **)(this + 0x10) = this_00 + 0x780;
  *(RichText **)(this + 0x20) = param_1;
                    /* try { // try from 00dd0b58 to 00ed0b63 has its CatchHandler @ 00dd0f20 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_2e8,"font");
  local_90[0] = &PTR_FUN_016e2598;
                    /* try { // try from 00dd0b7c to 00ed0b93 has its CatchHandler @ 00dd0fb8 */
  local_70 = local_90;
  setTagDescription(local_2e8,1,local_90);
  if (local_90 == local_70) {
    pcVar2 = (code *)(*local_70)[4];
LAB_00dd0bac:
    (*pcVar2)();
  }
  else {
                    /* try { // try from 00dd0b94 to 00ed0bab has its CatchHandler @ 00dd0ff4 */
    if (local_70 != (undefined ***)0x0) {
      pcVar2 = (code *)(*local_70)[5];
      goto LAB_00dd0bac;
    }
  }
  if (((byte)local_2e8[0] & 1) != 0) {
                    /* try { // try from 00dd0bbc to 00ed0bf3 has its CatchHandler @ 00dd0f54 */
    operator_delete(local_2d8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_2e8,"b");
  local_c0[0] = &PTR_FUN_016e2628;
  local_a0 = local_c0;
  setTagDescription(local_2e8,1,local_c0);
  if (local_c0 == local_a0) {
    pcVar2 = (code *)(*local_a0)[4];
LAB_00dd0c18:
    (*pcVar2)();
  }
  else if (local_a0 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_a0)[5];
    goto LAB_00dd0c18;
  }
  if (((byte)local_2e8[0] & 1) != 0) {
                    /* try { // try from 00dd0c28 to 00ed0c97 has its CatchHandler @ 00dd0f48 */
    operator_delete(local_2d8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_2e8,"i");
  local_f0[0] = &PTR_FUN_016e26a8;
  local_d0 = local_f0;
  setTagDescription(local_2e8,1,local_f0);
  if (local_f0 == local_d0) {
    pcVar2 = (code *)(*local_d0)[4];
LAB_00dd0c84:
    (*pcVar2)();
  }
  else if (local_d0 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_d0)[5];
    goto LAB_00dd0c84;
  }
  if (((byte)local_2e8[0] & 1) != 0) {
    operator_delete(local_2d8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_2e8,"del");
                    /* try { // try from 00dd0cb4 to 00ed0cbb has its CatchHandler @ 00dd0ee4 */
  local_120[0] = &PTR_FUN_016e2728;
                    /* try { // try from 00dd0cbc to 00ed0d07 has its CatchHandler @ 00dd0f4c */
  local_100 = local_120;
  setTagDescription(local_2e8,1,local_120);
  if (local_120 == local_100) {
    pcVar2 = (code *)(*local_100)[4];
LAB_00dd0cf0:
    (*pcVar2)();
  }
  else if (local_100 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_100)[5];
    goto LAB_00dd0cf0;
  }
  if (((byte)local_2e8[0] & 1) != 0) {
    operator_delete(local_2d8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_2e8,"u");
  local_150[0] = &PTR_FUN_016e27a8;
  local_130 = local_150;
  setTagDescription(local_2e8,1,local_150);
  if (local_150 == local_130) {
    pcVar2 = (code *)(*local_130)[4];
LAB_00dd0d5c:
    (*pcVar2)();
  }
  else if (local_130 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_130)[5];
                    /* try { // try from 00dd0d50 to 00ed0d53 has its CatchHandler @ 00dd0f48 */
    goto LAB_00dd0d5c;
  }
  if (((byte)local_2e8[0] & 1) != 0) {
    operator_delete(local_2d8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_2e8,"small");
                    /* try { // try from 00dd0d88 to 00ed0d97 has its CatchHandler @ 00dd0f28 */
  local_180[0] = &PTR_FUN_016e2828;
  local_160 = local_180;
  setTagDescription(local_2e8,1,local_180);
  if (local_180 == local_160) {
                    /* try { // try from 00dd0dc0 to 00ed0dcf has its CatchHandler @ 00dd0f14 */
    pcVar2 = (code *)(*local_160)[4];
LAB_00dd0dc8:
    (*pcVar2)();
  }
  else if (local_160 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_160)[5];
    goto LAB_00dd0dc8;
  }
  if (((byte)local_2e8[0] & 1) != 0) {
                    /* try { // try from 00dd0dd4 to 00ed0de3 has its CatchHandler @ 00dd0f18 */
    operator_delete(local_2d8);
  }
                    /* try { // try from 00dd0de8 to 00ed0df7 has its CatchHandler @ 00dd0ee8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_2e8,"big");
                    /* try { // try from 00dd0dfc to 00ed0e0b has its CatchHandler @ 00dd0ed8 */
  local_1b0[0] = &PTR_FUN_016e28a8;
  local_190 = local_1b0;
                    /* try { // try from 00dd0e0c to 00ed0e93 has its CatchHandler @ 00dd044c */
  setTagDescription(local_2e8,1,local_1b0);
  if (local_1b0 == local_190) {
    pcVar2 = (code *)(*local_190)[4];
LAB_00dd0e34:
    (*pcVar2)();
  }
  else if (local_190 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_190)[5];
    goto LAB_00dd0e34;
  }
  if (((byte)local_2e8[0] & 1) != 0) {
    operator_delete(local_2d8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_2e8,"img");
  local_1e0[0] = &PTR_FUN_016e2928;
  local_1c0 = local_1e0;
  setTagDescription(local_2e8,0,local_1e0);
  if (local_1e0 == local_1c0) {
                    /* try { // try from 00dd0e9c to 00ed0ea3 has its CatchHandler @ 00dd0ecc */
    pcVar2 = (code *)(*local_1c0)[4];
LAB_00dd0ea0:
    (*pcVar2)();
  }
  else if (local_1c0 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_1c0)[5];
                    /* try { // try from 00dd0e94 to 00ed0e9b has its CatchHandler @ 00dd0ed0 */
    goto LAB_00dd0ea0;
  }
                    /* try { // try from 00dd0ea4 to 00ed0eab has its CatchHandler @ 00dd0ec8 */
  if (((byte)local_2e8[0] & 1) != 0) {
                    /* try { // try from 00dd0eac to 00ed0eb3 has its CatchHandler @ 00dd0ec4 */
    operator_delete(local_2d8);
  }
                    /* try { // try from 00dd0eb4 to 00ed0ebb has its CatchHandler @ 00dd0ec0 */
                    /* try { // try from 00dd0ebc to 00ed1013 has its CatchHandler @ 00dd044c */
                    /* catch() { ... } // from try @ 00dd0eb4 with catch @ 00dd0ec0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_2e8,"a");
                    /* catch() { ... } // from try @ 00dd0eac with catch @ 00dd0ec4 */
                    /* catch() { ... } // from try @ 00dd0ea4 with catch @ 00dd0ec8 */
                    /* catch() { ... } // from try @ 00dd0e9c with catch @ 00dd0ecc */
                    /* catch() { ... } // from try @ 00dd0e94 with catch @ 00dd0ed0 */
                    /* catch() { ... } // from try @ 00dd07c0 with catch @ 00dd0ed4 */
  local_210[0] = &PTR_FUN_016e29a8;
                    /* catch() { ... } // from try @ 00dd0dfc with catch @ 00dd0ed8 */
                    /* catch() { ... } // from try @ 00dd0ab0 with catch @ 00dd0edc */
  local_1f0 = local_210;
                    /* catch() { ... } // from try @ 00dd09ac with catch @ 00dd0ee0 */
                    /* catch() { ... } // from try @ 00dd0cb4 with catch @ 00dd0ee4 */
  setTagDescription(local_2e8,1,local_210);
                    /* catch() { ... } // from try @ 00dd0de8 with catch @ 00dd0ee8 */
                    /* catch() { ... } // from try @ 00dd08c0 with catch @ 00dd0eec */
  if (local_210 == local_1f0) {
    pcVar2 = (code *)(*local_1f0)[4];
LAB_00dd0f0c:
                    /* catch() { ... } // from try @ 00dd0658 with catch @ 00dd0f0c */
    (*pcVar2)();
  }
  else if (local_1f0 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_1f0)[5];
    goto LAB_00dd0f0c;
  }
                    /* catch() { ... } // from try @ 00dd0664 with catch @ 00dd0f10 */
                    /* catch() { ... } // from try @ 00dd0dc0 with catch @ 00dd0f14 */
  if (((byte)local_2e8[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 00dd0dd4 with catch @ 00dd0f18 */
                    /* catch() { ... } // from try @ 00dd07c8 with catch @ 00dd0f1c */
    operator_delete(local_2d8);
  }
                    /* catch() { ... } // from try @ 00dd0b58 with catch @ 00dd0f20 */
                    /* catch() { ... } // from try @ 00dd0b4c with catch @ 00dd0f24 */
                    /* catch() { ... } // from try @ 00dd0d88 with catch @ 00dd0f28 */
                    /* catch() { ... } // from try @ 00dd0504 with catch @ 00dd0f2c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_2e8,"br");
                    /* catch() { ... } // from try @ 00dd0ab8 with catch @ 00dd0f40 */
  local_240[0] = &PTR_FUN_016e2a28;
                    /* catch() { ... } // from try @ 00dd09b4 with catch @ 00dd0f44 */
                    /* catch() { ... } // from try @ 00dd08a0 with catch @ 00dd0f48
                       catch() { ... } // from try @ 00dd0a90 with catch @ 00dd0f48
                       catch() { ... } // from try @ 00dd0c28 with catch @ 00dd0f48
                       catch() { ... } // from try @ 00dd0d50 with catch @ 00dd0f48 */
  local_220 = local_240;
                    /* catch() { ... } // from try @ 00dd0cbc with catch @ 00dd0f4c */
                    /* catch() { ... } // from try @ 00dd08c8 with catch @ 00dd0f50 */
  setTagDescription(local_2e8,0,local_240);
                    /* catch() { ... } // from try @ 00dd0bbc with catch @ 00dd0f54 */
  if (local_240 == local_220) {
    pcVar2 = (code *)(*local_220)[4];
LAB_00dd0f78:
    (*pcVar2)();
  }
  else if (local_220 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_220)[5];
    goto LAB_00dd0f78;
  }
  if (((byte)local_2e8[0] & 1) != 0) {
    operator_delete(local_2d8);
  }
                    /* catch() { ... } // from try @ 00dd06c4 with catch @ 00dd0f98 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_2e8,"outline");
                    /* catch() { ... } // from try @ 00dd06ac with catch @ 00dd0fa8 */
  local_270[0] = &PTR_FUN_016e2aa8;
  local_250 = local_270;
                    /* catch() { ... } // from try @ 00dd0b7c with catch @ 00dd0fb8 */
  setTagDescription(local_2e8,1,local_270);
  if (local_270 == local_250) {
    pcVar2 = (code *)(*local_250)[4];
LAB_00dd0fe4:
    (*pcVar2)();
  }
  else if (local_250 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_250)[5];
    goto LAB_00dd0fe4;
  }
  if (((byte)local_2e8[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 00dd0b94 with catch @ 00dd0ff4 */
    operator_delete(local_2d8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_2e8,"shadow");
  local_2a0[0] = &PTR_FUN_016e2b28;
  local_280 = local_2a0;
  setTagDescription(local_2e8,1,local_2a0);
  if (local_2a0 == local_280) {
    pcVar2 = (code *)(*local_280)[4];
LAB_00dd1050:
    (*pcVar2)();
  }
  else if (local_280 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_280)[5];
    goto LAB_00dd1050;
  }
  if (((byte)local_2e8[0] & 1) != 0) {
    operator_delete(local_2d8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_2e8,"glow");
  local_2d0[0] = &PTR_FUN_016e2ba8;
  local_2b0 = local_2d0;
  setTagDescription(local_2e8,1,local_2d0);
  if (local_2d0 == local_2b0) {
    pcVar2 = (code *)(*local_2b0)[4];
  }
  else {
    if (local_2b0 == (undefined ***)0x0) goto LAB_00dd10c0;
    pcVar2 = (code *)(*local_2b0)[5];
  }
  (*pcVar2)();
LAB_00dd10c0:
  if (((byte)local_2e8[0] & 1) != 0) {
    operator_delete(local_2d8);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

