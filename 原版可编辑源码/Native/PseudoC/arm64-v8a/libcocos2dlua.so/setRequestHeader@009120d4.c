
/* LuaMinXmlHttpRequest::setRequestHeader(char const*, char const*) */

void __thiscall
LuaMinXmlHttpRequest::setRequestHeader(LuaMinXmlHttpRequest *this,char *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  basic_ostream *pbVar8;
  size_t sVar9;
  ulong *puVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_2f0 [16];
  void *local_2e0;
  ulong local_2d8;
  undefined8 uStack_2d0;
  void *local_2c8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined **ppuStack_298;
  locale alStack_290 [8];
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  ulong local_258;
  undefined8 uStack_250;
  void *local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined8 local_230 [17];
  undefined8 local_1a8;
  undefined4 local_1a0;
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
  
                    /* try { // try from 009120d4 to 00a120e3 has its CatchHandler @ 00912230 */
                    /* try { // try from 009120e4 to 00a120ef has its CatchHandler @ 009121cc */
                    /* try { // try from 009120f0 to 00a12153 has its CatchHandler @ 00912060 */
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  uVar1 = 0x1698810;
  uStack_188 = 0;
  local_190 = 0x1698900;
  local_180 = uVar1;
  local_110[0] = 0x1698928;
  std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
                    /* try { // try from 00912154 to 00a12167 has its CatchHandler @ 00912234 */
                    /* try { // try from 00912168 to 00a1224f has its CatchHandler @ 00912060 */
  local_80 = 0xffffffff;
  local_88 = 0;
  local_190 = 0x16987e8;
  local_180 = uVar1;
  ppuStack_178 = &PTR__basic_streambuf_01698a08;
  local_110[0] = 0x1698838;
  std::__ndk1::locale::locale(alStack_170);
  uStack_140 = 0;
  local_148 = 0;
  uStack_150 = 0;
  local_158 = 0;
  uStack_160 = 0;
  local_168 = 0;
  uStack_130 = 0;
  local_138 = 0;
  uStack_120 = 0;
  local_128 = (void *)0x0;
                    /* catch() { ... } // from try @ 009120e4 with catch @ 009121cc */
  local_118 = 0x18;
  uStack_2a8 = 0;
  local_2b0 = 0x1698900;
  local_2a0 = uVar1;
  local_230[0] = 0x1698928;
  ppuStack_178 = &PTR__basic_stringbuf_01698960;
  std::__ndk1::ios_base::init((ios_base *)local_230,&ppuStack_298);
  local_2a0 = 0x1698810;
  local_1a0 = 0xffffffff;
  local_1a8 = 0;
  local_2b0 = 0x16987e8;
  ppuStack_298 = &PTR__basic_streambuf_01698a08;
  local_230[0] = 0x1698838;
  std::__ndk1::locale::locale(alStack_290);
  uStack_260 = 0;
  local_268 = 0;
  uStack_270 = 0;
  local_278 = 0;
  uStack_280 = 0;
  local_288 = 0;
                    /* catch() { ... } // from try @ 009120d4 with catch @ 00912230 */
  uStack_250 = 0;
  local_258 = 0;
                    /* catch() { ... } // from try @ 009120b0 with catch @ 00912234
                       catch() { ... } // from try @ 00912154 with catch @ 00912234 */
  uStack_240 = 0;
  local_248 = (void *)0x0;
  local_238 = 0x18;
  ppuStack_298 = &PTR__basic_stringbuf_01698960;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_2d8,param_1);
                    /* try { // try from 00912250 to 00a1229f has its CatchHandler @ 00912250
                       catch() { ... } // from try @ 00912250 with catch @ 00912250
                       catch() { ... } // from try @ 009122e0 with catch @ 00912250
                       catch() { ... } // from try @ 00912354 with catch @ 00912250 */
  lVar7 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                      *)(this + 0xf8),(basic_string *)&local_2d8);
  if ((local_2d8 & 1) != 0) {
    operator_delete(local_2c8);
  }
  if (lVar7 == 0) {
                    /* try { // try from 009122e0 to 00a1233f has its CatchHandler @ 00912250 */
    sVar9 = strlen(param_2);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_2a0,param_2,sVar9);
  }
  else {
    uVar4 = (ulong)(*(byte *)(lVar7 + 0x28) >> 1);
    pcVar6 = (char *)(lVar7 + 0x29);
    if ((*(byte *)(lVar7 + 0x28) & 1) != 0) {
      uVar4 = *(ulong *)(lVar7 + 0x30);
      pcVar6 = *(char **)(lVar7 + 0x38);
    }
                    /* try { // try from 009122a0 to 00a122b7 has its CatchHandler @ 00912424 */
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_2a0,pcVar6,uVar4);
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar8,",",1);
                    /* try { // try from 009122c4 to 00a122d3 has its CatchHandler @ 00912420 */
    sVar9 = strlen(param_2);
                    /* try { // try from 009122d4 to 00a122df has its CatchHandler @ 009123b4 */
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,param_2,sVar9)
    ;
  }
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_2f0,param_1);
  local_2b8 = local_2f0;
  lVar7 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0xf8),(piecewise_construct_t *)local_2f0,
                     (tuple *)&DAT_012b54b2,(tuple *)&local_2b8);
  puVar10 = (ulong *)(lVar7 + 0x28);
                    /* try { // try from 00912340 to 00a12353 has its CatchHandler @ 00912424 */
  if ((*(byte *)puVar10 & 1) == 0) {
    *(undefined2 *)puVar10 = 0;
  }
  else {
                    /* try { // try from 00912354 to 00a1243f has its CatchHandler @ 00912250 */
    **(undefined1 **)(lVar7 + 0x38) = 0;
    *(undefined8 *)(lVar7 + 0x30) = 0;
    if ((*(byte *)(lVar7 + 0x28) & 1) != 0) {
      operator_delete(*(void **)(lVar7 + 0x38));
      *(undefined8 *)(lVar7 + 0x28) = 0;
    }
  }
  *(void **)(lVar7 + 0x38) = local_2c8;
  *(undefined8 *)(lVar7 + 0x30) = uStack_2d0;
  *puVar10 = local_2d8;
  uStack_2d0 = 0;
  local_2c8 = (void *)0x0;
  local_2d8 = 0;
  if ((((byte)local_2f0[0] & 1) != 0) && (operator_delete(local_2e0), (local_2d8 & 1) != 0)) {
    operator_delete(local_2c8);
  }
  uVar1 = 0x16987e8;
  uVar2 = 0x1698810;
                    /* catch() { ... } // from try @ 009122d4 with catch @ 009123b4 */
  uVar3 = 0x1698838;
  local_2b0 = uVar1;
  local_2a0 = uVar2;
  local_230[0] = uVar3;
  if ((local_258 & 1) != 0) {
    ppuStack_298 = &PTR__basic_stringbuf_01698960;
    operator_delete(local_248);
  }
  ppuStack_298 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::~locale(alStack_290);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_230);
  local_190 = uVar1;
  local_180 = uVar2;
  local_110[0] = uVar3;
  if ((local_138 & 1) != 0) {
    ppuStack_178 = &PTR__basic_stringbuf_01698960;
    operator_delete(local_128);
  }
  ppuStack_178 = &PTR__basic_streambuf_01698a08;
                    /* catch() { ... } // from try @ 009122c4 with catch @ 00912420 */
                    /* catch() { ... } // from try @ 009122a0 with catch @ 00912424
                       catch() { ... } // from try @ 00912340 with catch @ 00912424 */
  std::__ndk1::locale::~locale(alStack_170);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
                    /* try { // try from 00912440 to 00a1249b has its CatchHandler @ 00912440
                       catch() { ... } // from try @ 00912440 with catch @ 00912440
                       catch() { ... } // from try @ 0091253c with catch @ 00912440
                       catch() { ... } // from try @ 009125e8 with catch @ 00912440 */
  if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

