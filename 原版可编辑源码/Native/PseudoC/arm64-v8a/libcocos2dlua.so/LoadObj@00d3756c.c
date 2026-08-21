
/* tinyobj::LoadObj(std::__ndk1::vector<tinyobj::shape_t, std::__ndk1::allocator<tinyobj::shape_t>
   >&, std::__ndk1::vector<tinyobj::material_t, std::__ndk1::allocator<tinyobj::material_t> >&, char
   const*, char const*) */

void __thiscall
tinyobj::LoadObj(tinyobj *this,vector *param_1,vector *param_2,char *param_3,char *param_4)

{
  long lVar1;
  long lVar2;
  void *__n;
  void *__src;
  char cVar3;
  long *plVar4;
  basic_ostream *pbVar5;
  size_t sVar6;
  void *__dest;
  long lVar7;
  ulong uVar8;
  undefined **local_2d8;
  undefined8 local_2d0;
  void *pvStack_2c8;
  void *local_2c0;
  ulong local_2b8;
  void *pvStack_2b0;
  void *local_2a8;
  undefined **local_2a0;
  undefined8 uStack_298;
  undefined **local_290;
  locale alStack_288 [8];
  byte local_280 [48];
  ulong local_250;
  undefined8 uStack_248;
  void *local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined **local_228 [17];
  undefined8 local_1a0;
  undefined4 local_198;
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
  
                    /* try { // try from 00d3756c to 00e3757b has its CatchHandler @ 00d375fc */
  lVar2 = tpidr_el0;
                    /* try { // try from 00d37594 to 00e375bb has its CatchHandler @ 00d37630 */
  local_78 = *(long *)(lVar2 + 0x28);
  lVar1 = *(long *)this;
  lVar7 = *(long *)(this + 8);
                    /* try { // try from 00d375bc to 00e3764b has its CatchHandler @ 00d374a0 */
  if (lVar7 != lVar1) {
    do {
      lVar7 = lVar7 + -0x90;
      FUN_00d2a634(this + 0x10,lVar7);
    } while (lVar1 != lVar7);
  }
  *(long *)(this + 8) = lVar1;
                    /* catch() { ... } // from try @ 00d3756c with catch @ 00d375fc */
  local_110[0] = 0x1698928;
  local_190 = 0x1698900;
  uStack_188 = 0;
  local_180 = 0x1698810;
  std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
                    /* catch() { ... } // from try @ 00d37554 with catch @ 00d3762c */
                    /* catch() { ... } // from try @ 00d37514 with catch @ 00d37630
                       catch() { ... } // from try @ 00d37594 with catch @ 00d37630 */
  local_80 = 0xffffffff;
  ppuStack_178 = &PTR__basic_streambuf_01698a08;
  local_190 = 0x16987e8;
  local_110[0] = 0x1698838;
  local_88 = 0;
  local_180 = 0x1698810;
  std::__ndk1::locale::locale(alStack_170);
  uStack_140 = 0;
  local_148 = 0;
  uStack_150 = 0;
  local_158 = 0;
  uStack_160 = 0;
  local_168 = 0;
  ppuStack_178 = &PTR__basic_stringbuf_01698960;
  uStack_130 = 0;
  local_138 = 0;
  uStack_120 = 0;
  local_128 = (void *)0x0;
  local_118 = 0x18;
  plVar4 = (long *)cocos2d::FileUtils::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_2b8,(char *)param_2);
  (**(code **)(*plVar4 + 0x18))(&local_2d8,plVar4,&local_2b8);
  local_228[0] = (undefined **)0x169c448;
  local_2a0 = (undefined **)0x169c420;
  uStack_298 = 0;
  std::__ndk1::ios_base::init
            ((ios_base *)local_228,
             (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_290);
  local_198 = 0xffffffff;
  local_290 = &PTR__basic_streambuf_01698a08;
  local_2a0 = &PTR__basic_istringstream_0169c3d0;
  local_228[0] = &PTR__basic_istringstream_0169c3f8;
  local_1a0 = 0;
  std::__ndk1::locale::locale(alStack_288);
  local_280[0x18] = 0;
  local_280[0x19] = 0;
  local_280[0x1a] = 0;
  local_280[0x1b] = 0;
  local_280[0x1c] = 0;
  local_280[0x1d] = 0;
  local_280[0x1e] = 0;
  local_280[0x1f] = 0;
  local_280[0x10] = 0;
  local_280[0x11] = 0;
  local_280[0x12] = 0;
  local_280[0x13] = 0;
  local_280[0x14] = 0;
  local_280[0x15] = 0;
  local_280[0x16] = 0;
  local_280[0x17] = 0;
  local_280[0x28] = 0;
  local_280[0x29] = 0;
  local_280[0x2a] = 0;
  local_280[0x2b] = 0;
  local_280[0x2c] = 0;
  local_280[0x2d] = 0;
  local_280[0x2e] = 0;
  local_280[0x2f] = 0;
  local_280[0x20] = 0;
  local_280[0x21] = 0;
  local_280[0x22] = 0;
  local_280[0x23] = 0;
  local_280[0x24] = 0;
  local_280[0x25] = 0;
  local_280[0x26] = 0;
  local_280[0x27] = 0;
  local_280[8] = 0;
  local_280[9] = 0;
  local_280[10] = 0;
  local_280[0xb] = 0;
  local_280[0xc] = 0;
  local_280[0xd] = 0;
  local_280[0xe] = 0;
  local_280[0xf] = 0;
  local_280[0] = 0;
  local_280[1] = 0;
  local_280[2] = 0;
  local_280[3] = 0;
  local_280[4] = 0;
  local_280[5] = 0;
  local_280[6] = 0;
  local_280[7] = 0;
  local_290 = &PTR__basic_stringbuf_01698960;
  uStack_248 = 0;
  local_250 = 0;
  uStack_238 = 0;
  local_240 = (void *)0x0;
  local_230 = 8;
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      &local_290,(basic_string *)&local_2d8);
  if (((ulong)local_2d8 & 1) != 0) {
    operator_delete(pvStack_2c8);
  }
  if ((local_2b8 & 1) != 0) {
    operator_delete(local_2a8);
  }
  if ((local_280[(long)local_2a0[-3]] & 5) != 0) {
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_180,"Cannot open file [",0x12);
    sVar6 = strlen((char *)param_2);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,(char *)param_2,sVar6);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,"]",1);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet
                               ((locale *)&local_2d8,(id *)&std::__ndk1::ctype<char>::id);
    cVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)&local_2d8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,cVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    goto LAB_00d37964;
  }
  pvStack_2b0 = (void *)0x0;
  local_2a8 = (void *)0x0;
  local_2b8 = 0;
  if (param_3 == (char *)0x0) {
    local_2b8._0_1_ =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  }
  else {
    sVar6 = strlen(param_3);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_2b8,param_3,sVar6);
  }
  __src = local_2a8;
  __n = pvStack_2b0;
  pvStack_2c8 = (void *)0x0;
  local_2c0 = (void *)0x0;
  local_2d8 = &PTR__MaterialFileReader_016d3cd8;
  local_2d0 = 0;
  if (((byte)local_2b8._0_1_ & 1) == 0) {
    local_2c0 = local_2a8;
    pvStack_2c8 = pvStack_2b0;
    local_2d0 = local_2b8;
  }
  else {
    if ((void *)0xffffffffffffffef < pvStack_2b0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (pvStack_2b0 < (void *)0x17) {
      __dest = (void *)((long)&local_2d0 + 1);
      local_2d0 = (ulong)(byte)((int)pvStack_2b0 << 1);
      if (pvStack_2b0 != (void *)0x0) goto LAB_00d37910;
    }
    else {
      uVar8 = (long)pvStack_2b0 + 0x10U & 0xfffffffffffffff0;
      __dest = operator_new(uVar8);
      local_2d0 = uVar8 | 1;
      pvStack_2c8 = __n;
      local_2c0 = __dest;
LAB_00d37910:
      memcpy(__dest,__src,(size_t)__n);
    }
    *(undefined1 *)((long)__dest + (long)__n) = 0;
  }
  LoadObj(this,param_1,(vector *)&local_2a0,(basic_istream *)&local_2d8,(MaterialReader *)param_4);
  local_2d8 = &PTR__MaterialFileReader_016d3cd8;
  if ((local_2d0 & 1) != 0) {
    operator_delete(local_2c0);
  }
  if ((local_2b8 & 1) != 0) {
    operator_delete(local_2a8);
  }
LAB_00d37964:
  local_2a0 = &PTR__basic_istringstream_0169c3d0;
  local_228[0] = &PTR__basic_istringstream_0169c3f8;
  if ((local_250 & 1) != 0) {
    local_290 = &PTR__basic_stringbuf_01698960;
    operator_delete(local_240);
  }
  local_290 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::~locale(alStack_288);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_228);
  local_190 = 0x16987e8;
  local_180 = 0x1698810;
  local_110[0] = 0x1698838;
  if ((local_138 & 1) != 0) {
    ppuStack_178 = &PTR__basic_stringbuf_01698960;
    operator_delete(local_128);
  }
  ppuStack_178 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::~locale(alStack_170);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

