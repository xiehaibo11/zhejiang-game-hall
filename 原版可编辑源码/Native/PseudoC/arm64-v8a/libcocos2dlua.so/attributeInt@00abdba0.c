
/* fairygui::HtmlParser::attributeInt(std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Value> > > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int) */

int __thiscall
fairygui::HtmlParser::attributeInt
          (HtmlParser *this,unordered_map *param_1,basic_string *param_2,int param_3)

{
  ulong __n;
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  char *__dest;
  ulong uVar6;
  ulong local_78;
  ulong local_70;
  char *local_68;
  byte local_60 [8];
  ulong local_58;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                      *)param_1,param_2);
  if (lVar5 == 0) goto LAB_00abdc7c;
  cocos2d::Value::asString();
  __n = (ulong)(local_60[0] >> 1);
  if ((local_60[0] & 1) != 0) {
    __n = local_58;
  }
  if (__n == 0) {
LAB_00abdc5c:
                    /* try { // try from 00abdc60 to 00bbdc63 has its CatchHandler @ 00abdc98 */
    pcVar1 = (char *)((ulong)local_60 | 1);
                    /* try { // try from 00abdc64 to 00bbdcab has its CatchHandler @ 00abdc14 */
    if ((local_60[0] & 1) != 0) {
      pcVar1 = local_50;
    }
    param_3 = atoi(pcVar1);
  }
  else {
    pcVar1 = (char *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      pcVar1 = local_50;
    }
                    /* try { // try from 00abdc14 to 00bbdc5f has its CatchHandler @ 00abdc14
                       catch() { ... } // from try @ 00abdc14 with catch @ 00abdc14
                       catch() { ... } // from try @ 00abdc64 with catch @ 00abdc14 */
    if (pcVar1[__n - 1] != '%') goto LAB_00abdc5c;
    if (__n - 1 <= __n) {
      __n = __n - 1;
    }
    local_70 = 0;
    local_68 = (char *)0x0;
    local_78 = 0;
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      __dest = (char *)((ulong)&local_78 | 1);
      local_78 = (ulong)(byte)((int)__n << 1);
      if (__n != 0) goto LAB_00abdcc8;
    }
    else {
                    /* try { // try from 00abdcac to 00bbdeb3 has its CatchHandler @ 00abdcac
                       catch() { ... } // from try @ 00abdcac with catch @ 00abdcac
                       catch() { ... } // from try @ 00abdf34 with catch @ 00abdcac */
      uVar6 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar6);
      local_78 = uVar6 | 1;
      local_70 = __n;
      local_68 = __dest;
LAB_00abdcc8:
      memcpy(__dest,pcVar1,__n);
    }
    pcVar3 = local_68;
    uVar6 = local_78;
    __dest[__n] = '\0';
    pcVar1 = (char *)((ulong)&local_78 | 1);
    if ((local_78 & 1) != 0) {
      pcVar1 = local_68;
    }
    iVar4 = atoi(pcVar1);
    param_3 = (int)(((float)iVar4 / 100.0) * (float)param_3);
    if ((uVar6 & 1) != 0) {
      operator_delete(pcVar3);
    }
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00abdc7c:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00abdc60 with catch @ 00abdc98 */
  return param_3;
}

