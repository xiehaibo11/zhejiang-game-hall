
/* XMLHttpRequest::setRequestHeader(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
XMLHttpRequest::setRequestHeader(XMLHttpRequest *this,basic_string *param_1,basic_string *param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  basic_ostream *pbVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  tuple atStack_2c0 [8];
  basic_string *local_2b8;
  undefined **local_2b0;
  undefined8 uStack_2a8;
  undefined **local_2a0;
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
  undefined **local_230 [17];
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined **local_190;
  undefined8 uStack_188;
  undefined **local_180;
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
  undefined **local_110 [17];
  undefined8 local_88;
  undefined4 local_80;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  uStack_188 = 0;
  local_190 = (undefined **)0x1c670a0;
  local_180 = &PTR__basic_stringstream_01c66fb0;
  local_110[0] = (undefined **)0x1c670c8;
  std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
  local_88 = 0;
  local_80 = 0xffffffff;
  local_190 = &PTR__basic_stringstream_01c66f88;
  local_180 = &PTR__basic_stringstream_01c66fb0;
  ppuStack_178 = &PTR__basic_streambuf_01c671a8;
  local_110[0] = &PTR__basic_stringstream_01c66fd8;
  std::__ndk1::locale::locale(alStack_170);
  uStack_140 = 0;
  local_148 = 0;
  uStack_150 = 0;
  local_158 = 0;
  uStack_160 = 0;
  local_168 = 0;
  uStack_120 = 0;
  local_128 = (void *)0x0;
  uStack_130 = 0;
  local_138 = 0;
  local_118 = 0x18;
  uStack_2a8 = 0;
  local_2b0 = (undefined **)0x1c670a0;
  local_2a0 = &PTR__basic_stringstream_01c66fb0;
  local_230[0] = (undefined **)0x1c670c8;
  ppuStack_178 = &PTR__basic_stringbuf_01c67100;
  std::__ndk1::ios_base::init((ios_base *)local_230,&ppuStack_298);
  local_1a0 = 0xffffffff;
  local_2a0 = &PTR__basic_stringstream_01c66fb0;
  local_1a8 = 0;
  local_2b0 = &PTR__basic_stringstream_01c66f88;
  ppuStack_298 = &PTR__basic_streambuf_01c671a8;
  local_230[0] = &PTR__basic_stringstream_01c66fd8;
  std::__ndk1::locale::locale(alStack_290);
  uStack_260 = 0;
  local_268 = 0;
  uStack_270 = 0;
  local_278 = 0;
  uStack_280 = 0;
  local_288 = 0;
  uStack_240 = 0;
  local_248 = (void *)0x0;
  uStack_250 = 0;
  local_258 = 0;
  local_238 = 0x18;
  ppuStack_298 = &PTR__basic_stringbuf_01c67100;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                      *)(this + 0x188),param_1);
  if (lVar5 == 0) {
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar2 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (ulong)((byte)*param_2 >> 1);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_2a0,(char *)pbVar2,uVar1);
  }
  else {
    uVar1 = (ulong)(*(byte *)(lVar5 + 0x28) >> 1);
    pcVar4 = (char *)(lVar5 + 0x29);
    if ((*(byte *)(lVar5 + 0x28) & 1) != 0) {
      uVar1 = *(ulong *)(lVar5 + 0x30);
      pcVar4 = *(char **)(lVar5 + 0x38);
    }
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_2a0,pcVar4,uVar1);
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar6,",",1);
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar2 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (ulong)((byte)*param_2 >> 1);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar6,(char *)pbVar2,uVar1);
  }
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_2b8 = param_1;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                      *)(this + 0x188),param_1,(piecewise_construct_t *)&DAT_01867545,
                     (tuple *)&local_2b8,atStack_2c0);
  pbVar8 = (byte *)(lVar5 + 0x28);
  if ((*pbVar8 & 1) == 0) {
    pbVar8[0] = 0;
    pbVar8[1] = 0;
  }
  else {
    **(undefined1 **)(lVar5 + 0x38) = 0;
    *(undefined8 *)(lVar5 + 0x30) = 0;
    if ((*(byte *)(lVar5 + 0x28) & 1) != 0) {
      operator_delete(*(void **)(lVar5 + 0x38));
      *(undefined8 *)(lVar5 + 0x28) = 0;
    }
  }
  *(undefined8 *)(lVar5 + 0x38) = local_2c8;
  *(undefined8 *)(lVar5 + 0x30) = uStack_2d0;
  *(undefined8 *)pbVar8 = local_2d8;
  local_2b0 = &PTR__basic_stringstream_01c66f88;
  local_2a0 = &PTR__basic_stringstream_01c66fb0;
  local_230[0] = &PTR__basic_stringstream_01c66fd8;
  if ((local_258 & 1) != 0) {
    ppuStack_298 = &PTR__basic_stringbuf_01c67100;
    operator_delete(local_248);
  }
  ppuStack_298 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_290);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_230);
  local_190 = &PTR__basic_stringstream_01c66f88;
  local_180 = &PTR__basic_stringstream_01c66fb0;
  local_110[0] = &PTR__basic_stringstream_01c66fd8;
  if ((local_138 & 1) != 0) {
    ppuStack_178 = &PTR__basic_stringbuf_01c67100;
    operator_delete(local_128);
  }
  ppuStack_178 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_170);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
  if (*(long *)(lVar3 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

