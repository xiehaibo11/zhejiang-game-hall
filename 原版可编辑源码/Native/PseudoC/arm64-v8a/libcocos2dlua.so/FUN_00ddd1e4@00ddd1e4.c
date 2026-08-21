
/* WARNING: Type propagation algorithm not settling */

void FUN_00ddd1e4(undefined8 *param_1,undefined8 param_2,long *param_3,basic_string *param_4)

{
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
  *this;
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_268 [16];
  void *local_258;
  ulong local_250;
  ulong uStack_248;
  void *local_240;
  ulong local_230;
  ulong uStack_228;
  void *local_220;
  ulong local_210;
  ulong uStack_208;
  void *local_200;
  ulong local_1f0;
  ulong uStack_1e8;
  void *local_1e0;
  byte local_1d8 [8];
  ulong local_1d0;
  char *local_1c8;
  byte local_1c0 [8];
  ulong local_1b8;
  char *local_1b0;
  byte local_1a8 [16];
  void *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined **ppuStack_178;
  locale alStack_170 [8];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  ulong local_138;
  undefined8 uStack_130;
  void *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_110 [17];
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
                    /* try { // try from 00ddd1ec to 00edd327 has its CatchHandler @ 00ddbfd8 */
                    /* catch() { ... } // from try @ 00ddd1d4 with catch @ 00ddd1f0 */
                    /* catch() { ... } // from try @ 00ddd1cc with catch @ 00ddd1f4 */
                    /* catch() { ... } // from try @ 00ddd1c4 with catch @ 00ddd1f8 */
                    /* catch() { ... } // from try @ 00ddd1bc with catch @ 00ddd1fc */
                    /* catch() { ... } // from try @ 00ddd1ac with catch @ 00ddd200 */
                    /* catch() { ... } // from try @ 00ddd18c with catch @ 00ddd204 */
  lVar2 = tpidr_el0;
                    /* catch() { ... } // from try @ 00ddd184 with catch @ 00ddd208 */
                    /* catch() { ... } // from try @ 00ddd17c with catch @ 00ddd20c */
  local_78 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00ddd174 with catch @ 00ddd210 */
                    /* catch() { ... } // from try @ 00ddd16c with catch @ 00ddd214 */
                    /* catch() { ... } // from try @ 00ddd164 with catch @ 00ddd218 */
                    /* catch() { ... } // from try @ 00ddd15c with catch @ 00ddd21c */
                    /* catch() { ... } // from try @ 00ddd154 with catch @ 00ddd220 */
  this = (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          *)(*param_3 + 0x548);
                    /* catch() { ... } // from try @ 00ddd14c with catch @ 00ddd224 */
                    /* catch() { ... } // from try @ 00ddd11c with catch @ 00ddd228 */
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    (this,(basic_string *)cocos2d::ui::RichText::KEY_FONT_FACE);
                    /* catch() { ... } // from try @ 00ddd114 with catch @ 00ddd22c */
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_007d44e0("unordered_map::at: key not found");
  }
                    /* catch() { ... } // from try @ 00ddd10c with catch @ 00ddd230 */
                    /* catch() { ... } // from try @ 00ddd104 with catch @ 00ddd234 */
                    /* catch() { ... } // from try @ 00ddd0fc with catch @ 00ddd238 */
                    /* catch() { ... } // from try @ 00ddd0f4 with catch @ 00ddd23c */
  cocos2d::Value::asString();
                    /* catch() { ... } // from try @ 00ddd0ec with catch @ 00ddd240 */
                    /* catch() { ... } // from try @ 00ddd0e4 with catch @ 00ddd244 */
                    /* catch() { ... } // from try @ 00ddd0dc with catch @ 00ddd248 */
                    /* catch() { ... } // from try @ 00ddd0d4 with catch @ 00ddd24c */
                    /* catch() { ... } // from try @ 00ddd0cc with catch @ 00ddd250 */
                    /* catch() { ... } // from try @ 00ddd0c4 with catch @ 00ddd254 */
                    /* catch() { ... } // from try @ 00ddd0bc with catch @ 00ddd258 */
                    /* catch() { ... } // from try @ 00ddd0ac with catch @ 00ddd25c */
  local_110[0] = 0x1698928;
                    /* catch() { ... } // from try @ 00ddd0a4 with catch @ 00ddd260 */
  local_190 = 0x1698900;
                    /* catch() { ... } // from try @ 00ddd094 with catch @ 00ddd264 */
                    /* catch() { ... } // from try @ 00ddd124 with catch @ 00ddd268 */
                    /* catch() { ... } // from try @ 00ddd08c with catch @ 00ddd26c */
                    /* catch() { ... } // from try @ 00ddd09c with catch @ 00ddd270
                       catch() { ... } // from try @ 00ddd0b4 with catch @ 00ddd270
                       catch() { ... } // from try @ 00ddd140 with catch @ 00ddd270
                       catch() { ... } // from try @ 00ddd194 with catch @ 00ddd270
                       catch() { ... } // from try @ 00ddd1b4 with catch @ 00ddd270
                       catch() { ... } // from try @ 00ddd1dc with catch @ 00ddd270 */
                    /* catch() { ... } // from try @ 00ddc740 with catch @ 00ddd274 */
  uStack_188 = 0;
  local_180 = 0x1698810;
                    /* catch() { ... } // from try @ 00ddc738 with catch @ 00ddd278 */
                    /* catch() { ... } // from try @ 00ddc730 with catch @ 00ddd27c */
                    /* catch() { ... } // from try @ 00ddc720 with catch @ 00ddd280 */
  std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
                    /* catch() { ... } // from try @ 00ddd004 with catch @ 00ddd284 */
                    /* catch() { ... } // from try @ 00ddce68 with catch @ 00ddd288
                       catch() { ... } // from try @ 00ddcf04 with catch @ 00ddd288 */
                    /* catch() { ... } // from try @ 00ddcf38 with catch @ 00ddd28c */
  local_80 = 0xffffffff;
                    /* catch() { ... } // from try @ 00ddc954 with catch @ 00ddd29c */
  ppuStack_178 = &PTR__basic_streambuf_01698a08;
                    /* catch() { ... } // from try @ 00ddcc5c with catch @ 00ddd2a0 */
  local_190 = 0x16987e8;
  local_110[0] = 0x1698838;
                    /* catch() { ... } // from try @ 00ddc97c with catch @ 00ddd2b8 */
  local_88 = 0;
  local_180 = 0x1698810;
  std::__ndk1::locale::locale(alStack_170);
  uStack_140 = 0;
  local_148 = 0;
  uStack_150 = 0;
  local_158 = 0;
  uStack_160 = 0;
  local_168 = 0;
                    /* catch() { ... } // from try @ 00ddc964 with catch @ 00ddd2d8 */
                    /* catch() { ... } // from try @ 00ddc764 with catch @ 00ddd2dc
                       catch() { ... } // from try @ 00ddce28 with catch @ 00ddd2dc
                       catch() { ... } // from try @ 00ddceb4 with catch @ 00ddd2dc
                       catch() { ... } // from try @ 00ddcf88 with catch @ 00ddd2dc */
  ppuStack_178 = &PTR__basic_stringbuf_01698960;
  uStack_130 = 0;
  local_138 = 0;
  uStack_120 = 0;
  local_128 = (void *)0x0;
  local_118 = 0x18;
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    (this,(basic_string *)cocos2d::ui::RichText::KEY_FONT_SIZE);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_007d44e0("unordered_map::at: key not found");
  }
                    /* catch() { ... } // from try @ 00ddc10c with catch @ 00ddd30c */
  fVar7 = (float)cocos2d::Value::asFloat((Value *)(lVar4 + 0x28));
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_180,fVar7);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
                    /* try { // try from 00ddd330 to 00edd383 has its CatchHandler @ 00ddd330
                       catch() { ... } // from try @ 00ddd330 with catch @ 00ddd330
                       catch() { ... } // from try @ 00ddeb2c with catch @ 00ddd330 */
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    (this,(basic_string *)cocos2d::ui::RichText::KEY_FONT_COLOR_STRING);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_007d44e0("unordered_map::at: key not found");
  }
  cocos2d::Value::asString();
  std::__ndk1::operator+((__ndk1 *)"<font face=\"",(char *)local_1a8,param_4);
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append(local_268,"\" size=\"",8);
  local_240 = (void *)puVar5[2];
  uStack_248 = puVar5[1];
  local_250 = *puVar5;
                    /* try { // try from 00ddd384 to 00edd39b has its CatchHandler @ 00ddeb98 */
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
                    /* try { // try from 00ddd39c to 00edd3ab has its CatchHandler @ 00ddeb94 */
  uVar1 = (ulong)(local_1c0[0] >> 1);
  pcVar3 = (char *)((ulong)local_1c0 | 1);
  if ((local_1c0[0] & 1) != 0) {
    uVar1 = local_1b8;
    pcVar3 = local_1b0;
  }
                    /* try { // try from 00ddd3ac to 00edd3bb has its CatchHandler @ 00ddeb84 */
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_250,pcVar3,uVar1);
  local_220 = (void *)puVar5[2];
  uStack_228 = puVar5[1];
  local_230 = *puVar5;
                    /* try { // try from 00ddd3bc to 00edd3cb has its CatchHandler @ 00ddeb74 */
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
                    /* try { // try from 00ddd3cc to 00edd3db has its CatchHandler @ 00ddeb64 */
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_230,"\" color=\"",9);
  local_200 = (void *)puVar5[2];
  uStack_208 = puVar5[1];
  local_210 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  uVar1 = (ulong)(local_1d8[0] >> 1);
  pcVar3 = (char *)((ulong)local_1d8 | 1);
  if ((local_1d8[0] & 1) != 0) {
    uVar1 = local_1d0;
    pcVar3 = local_1c8;
  }
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_210,pcVar3,uVar1);
  local_1e0 = (void *)puVar5[2];
  uStack_1e8 = puVar5[1];
  local_1f0 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar6 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_1f0,"\">",2);
  uVar9 = puVar6[1];
  uVar8 = *puVar6;
  param_1[2] = puVar6[2];
  param_1[1] = uVar9;
  *param_1 = uVar8;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  if ((local_1f0 & 1) != 0) {
    operator_delete(local_1e0);
  }
  if ((local_210 & 1) != 0) {
    operator_delete(local_200);
  }
  if ((local_230 & 1) != 0) {
    operator_delete(local_220);
  }
  if ((local_250 & 1) != 0) {
    operator_delete(local_240);
  }
  if (((byte)local_268[0] & 1) != 0) {
    operator_delete(local_258);
  }
  if ((local_1d8[0] & 1) != 0) {
    operator_delete(local_1c8);
  }
  if ((local_1c0[0] & 1) != 0) {
    operator_delete(local_1b0);
  }
  local_190 = 0x16987e8;
  local_180 = 0x1698810;
  local_110[0] = 0x1698838;
  ppuStack_178 = &PTR__basic_stringbuf_01698960;
  if ((local_138 & 1) != 0) {
    operator_delete(local_128);
  }
  ppuStack_178 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::~locale(alStack_170);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
  if ((local_1a8[0] & 1) != 0) {
    operator_delete(local_198);
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

