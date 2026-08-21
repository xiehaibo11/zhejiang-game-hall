
/* tinyobj::MaterialFileReader::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::vector<tinyobj::material_t, std::__ndk1::allocator<tinyobj::material_t> >&,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, int, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, int> > >&) */

void tinyobj::MaterialFileReader::operator()(basic_string *param_1,vector *param_2,map *param_3)

{
  ulong uVar1;
  char *pcVar2;
  basic_string bVar3;
  vector vVar4;
  long lVar5;
  undefined7 uVar6;
  vector *pvVar7;
  long *plVar8;
  basic_ostream *pbVar9;
  map *in_x3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  byte local_2e0 [8];
  ulong local_2d8;
  char *local_2d0;
  vector local_2c8;
  undefined1 uStack_2c7;
  undefined6 uStack_2c6;
  undefined1 local_2c0;
  undefined7 uStack_2bf;
  char *local_2b8;
  ulong local_2b0;
  ulong uStack_2a8;
  char *local_2a0;
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
  undefined7 local_190;
  undefined1 uStack_189;
  undefined7 uStack_188;
  undefined1 uStack_181;
  undefined **local_180;
  locale alStack_178 [8];
  byte local_170 [48];
  ulong local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined **local_118 [17];
  undefined8 local_90;
  undefined4 local_88;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  local_2c0 = 0;
  uStack_2bf = 0;
  local_2b8 = (char *)0x0;
  local_2c8 = (vector)0x0;
  uStack_2c7 = 0;
  uStack_2c6 = 0;
  bVar3 = param_1[8];
  if (((byte)bVar3 & 1) == 0) {
    if ((byte)bVar3 >> 1 == 0) {
LAB_00d36f90:
      if (&local_2c8 != param_2) {
        uVar1 = *(ulong *)(param_2 + 8);
        pvVar7 = *(vector **)(param_2 + 0x10);
        if (((byte)*param_2 & 1) == 0) {
          pvVar7 = param_2 + 1;
          uVar1 = (ulong)((byte)*param_2 >> 1);
        }
                    /* try { // try from 00d36fb4 to 00e36fbf has its CatchHandler @ 00d36ffc */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_2c8,(char *)pvVar7,uVar1);
      }
      goto LAB_00d3700c;
    }
  }
  else if (*(long *)(param_1 + 0x10) == 0) goto LAB_00d36f90;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_2b0,param_1 + 8);
  uVar1 = *(ulong *)(param_2 + 8);
  pvVar7 = *(vector **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pvVar7 = param_2 + 1;
    uVar1 = (ulong)((byte)*param_2 >> 1);
  }
  pvVar7 = (vector *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_2b0,(char *)pvVar7,uVar1);
  pcVar2 = *(char **)(pvVar7 + 0x10);
  vVar4 = *pvVar7;
  uStack_188 = (undefined7)((ulong)*(undefined8 *)(pvVar7 + 8) >> 8);
  local_190 = (undefined7)*(undefined8 *)(pvVar7 + 1);
  uStack_189 = (undefined1)((ulong)*(undefined8 *)(pvVar7 + 1) >> 0x38);
  *(undefined8 *)pvVar7 = 0;
  *(undefined8 *)(pvVar7 + 8) = 0;
  *(undefined8 *)(pvVar7 + 0x10) = 0;
                    /* try { // try from 00d36f7c to 00e36fb3 has its CatchHandler @ 00d36f7c
                       catch() { ... } // from try @ 00d36f7c with catch @ 00d36f7c
                       catch() { ... } // from try @ 00d36fc0 with catch @ 00d36f7c */
  if (((byte)local_2c8 & 1) != 0) {
                    /* try { // try from 00d36fc0 to 00e37017 has its CatchHandler @ 00d36f7c */
    *local_2b8 = '\0';
    local_2c0 = 0;
    uStack_2bf = 0;
    if (((byte)local_2c8 & 1) != 0) {
      operator_delete(local_2b8);
    }
  }
  uVar6 = local_190;
  local_190 = 0;
  uStack_2c7 = (undefined1)uVar6;
  uStack_2c6 = (undefined6)((uint7)uVar6 >> 8);
  local_2c0 = uStack_189;
  uStack_2bf = uStack_188;
                    /* catch() { ... } // from try @ 00d36fb4 with catch @ 00d36ffc */
  uStack_189 = 0;
  uStack_188 = 0;
  local_2c8 = vVar4;
  local_2b8 = pcVar2;
  if ((local_2b0 & 1) != 0) {
    operator_delete(local_2a0);
  }
LAB_00d3700c:
                    /* try { // try from 00d37018 to 00e37083 has its CatchHandler @ 00d37018
                       catch() { ... } // from try @ 00d37018 with catch @ 00d37018
                       catch() { ... } // from try @ 00d3708c with catch @ 00d37018
                       catch() { ... } // from try @ 00d3727c with catch @ 00d37018
                       catch() { ... } // from try @ 00d372f4 with catch @ 00d37018
                       catch() { ... } // from try @ 00d3734c with catch @ 00d37018
                       catch() { ... } // from try @ 00d37380 with catch @ 00d37018
                       catch() { ... } // from try @ 00d373d4 with catch @ 00d37018 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(in_x8,"");
  plVar8 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar8 + 0x18))(&local_2b0,plVar8,&local_2c8);
  local_118[0] = (undefined **)0x169c448;
  uStack_188 = 0;
  uStack_181 = 0;
  local_190 = 0x169c420;
  uStack_189 = 0;
  std::__ndk1::ios_base::init
            ((ios_base *)local_118,
             (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_180);
                    /* try { // try from 00d37084 to 00e3708b has its CatchHandler @ 00d37468 */
  local_88 = 0xffffffff;
                    /* try { // try from 00d3708c to 00e37273 has its CatchHandler @ 00d37018 */
  local_118[0] = &PTR__basic_istringstream_0169c3f8;
  local_180 = &PTR__basic_streambuf_01698a08;
  local_190 = 0x169c3d0;
  uStack_189 = 0;
  local_90 = 0;
  std::__ndk1::locale::locale(alStack_178);
  local_170[0x18] = 0;
  local_170[0x19] = 0;
  local_170[0x1a] = 0;
  local_170[0x1b] = 0;
  local_170[0x1c] = 0;
  local_170[0x1d] = 0;
  local_170[0x1e] = 0;
  local_170[0x1f] = 0;
  local_170[0x10] = 0;
  local_170[0x11] = 0;
  local_170[0x12] = 0;
  local_170[0x13] = 0;
  local_170[0x14] = 0;
  local_170[0x15] = 0;
  local_170[0x16] = 0;
  local_170[0x17] = 0;
  local_170[0x28] = 0;
  local_170[0x29] = 0;
  local_170[0x2a] = 0;
  local_170[0x2b] = 0;
  local_170[0x2c] = 0;
  local_170[0x2d] = 0;
  local_170[0x2e] = 0;
  local_170[0x2f] = 0;
  local_170[0x20] = 0;
  local_170[0x21] = 0;
  local_170[0x22] = 0;
  local_170[0x23] = 0;
  local_170[0x24] = 0;
  local_170[0x25] = 0;
  local_170[0x26] = 0;
  local_170[0x27] = 0;
  local_170[8] = 0;
  local_170[9] = 0;
  local_170[10] = 0;
  local_170[0xb] = 0;
  local_170[0xc] = 0;
  local_170[0xd] = 0;
  local_170[0xe] = 0;
  local_170[0xf] = 0;
  local_170[0] = 0;
  local_170[1] = 0;
  local_170[2] = 0;
  local_170[3] = 0;
  local_170[4] = 0;
  local_170[5] = 0;
  local_170[6] = 0;
  local_170[7] = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  local_120 = 8;
  local_180 = &PTR__basic_stringbuf_01698960;
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      &local_180,(basic_string *)&local_2b0);
  if ((local_2b0 & 1) != 0) {
    operator_delete(local_2a0);
  }
  if ((local_170[*(long *)(CONCAT17(uStack_189,local_190) + -0x18)] & 5) != 0) {
    local_230[0] = 0x1698928;
    local_2b0 = 0x1698900;
    uStack_2a8 = 0;
    local_2a0 = (char *)0x1698810;
    std::__ndk1::ios_base::init((ios_base *)local_230,&ppuStack_298);
    ppuStack_298 = &PTR__basic_streambuf_01698a08;
    local_2b0 = 0x16987e8;
    local_230[0] = 0x1698838;
    local_1a0 = 0xffffffff;
    local_1a8 = 0;
    local_2a0 = (char *)0x1698810;
    std::__ndk1::locale::locale(alStack_290);
    uStack_260 = 0;
    local_268 = 0;
    uStack_270 = 0;
    local_278 = 0;
    uStack_280 = 0;
    local_288 = 0;
    ppuStack_298 = &PTR__basic_stringbuf_01698960;
    uStack_250 = 0;
    local_258 = 0;
    uStack_240 = 0;
    local_248 = (void *)0x0;
    local_238 = 0x18;
    pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_2a0,"WARN: Material file [ ",0x16);
    uVar1 = (ulong)((byte)local_2c8 >> 1);
    pcVar2 = (char *)((ulong)&local_2c8 | 1);
    if (((byte)local_2c8 & 1) != 0) {
      uVar1 = CONCAT71(uStack_2bf,local_2c0);
      pcVar2 = local_2b8;
    }
    pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar9,pcVar2,uVar1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar9," ] not found. Created a default material.",0x29);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    uVar1 = (ulong)(local_2e0[0] >> 1);
    pcVar2 = (char *)((ulong)local_2e0 | 1);
    if ((local_2e0[0] & 1) != 0) {
      uVar1 = local_2d8;
      pcVar2 = local_2d0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(in_x8,pcVar2,uVar1);
    if ((local_2e0[0] & 1) != 0) {
                    /* try { // try from 00d37274 to 00e3727b has its CatchHandler @ 00d3744c */
      operator_delete(local_2d0);
    }
    local_2b0 = 0x16987e8;
                    /* try { // try from 00d3727c to 00e372eb has its CatchHandler @ 00d37018 */
    local_2a0 = std::__ndk1::
                basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                ::vtable + 0x40;
    local_230[0] = 0x1698838;
    ppuStack_298 = &PTR__basic_stringbuf_01698960;
    if ((local_258 & 1) != 0) {
      operator_delete(local_248);
    }
    ppuStack_298 = &PTR__basic_streambuf_01698a08;
    std::__ndk1::locale::~locale(alStack_290);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_230);
  }
                    /* try { // try from 00d372ec to 00e372f3 has its CatchHandler @ 00d37448 */
  LoadMtl(in_x3,(vector *)param_3,(basic_istream *)&local_190);
                    /* try { // try from 00d372f4 to 00e37337 has its CatchHandler @ 00d37018 */
  uVar1 = local_2b0 >> 1 & 0x7f;
  pcVar2 = (char *)((ulong)&local_2b0 | 1);
  if ((local_2b0 & 1) != 0) {
    uVar1 = uStack_2a8;
    pcVar2 = local_2a0;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(in_x8,pcVar2,uVar1);
  if ((local_2b0 & 1) != 0) {
    operator_delete(local_2a0);
  }
                    /* try { // try from 00d37338 to 00e3734b has its CatchHandler @ 00d37464 */
  local_190 = 0x169c3d0;
  uStack_189 = 0;
  local_118[0] = &PTR__basic_istringstream_0169c3f8;
  local_180 = &PTR__basic_stringbuf_01698960;
                    /* try { // try from 00d3734c to 00e3736b has its CatchHandler @ 00d37018 */
  if ((local_140 & 1) != 0) {
    operator_delete(local_130);
  }
  local_180 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::~locale(alStack_178);
                    /* try { // try from 00d3736c to 00e3737f has its CatchHandler @ 00d37460 */
  std::__ndk1::ios_base::~ios_base((ios_base *)local_118);
  if (((byte)local_2c8 & 1) != 0) {
    operator_delete(local_2b8);
  }
                    /* try { // try from 00d37380 to 00e373b7 has its CatchHandler @ 00d37018 */
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

