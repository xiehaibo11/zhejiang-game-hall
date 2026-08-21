
/* cocos2d::FontFNT::reloadBMFontResource(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::FontFNT::reloadBMFontResource(basic_string *param_1)

{
  long lVar1;
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>
  *this;
  long lVar2;
  Ref *this_00;
  Director *this_01;
  TextureCache *this_02;
  Ref *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00f035ec with catch @ 00f03604 */
                    /* catch() { ... } // from try @ 00f035d4 with catch @ 00f03608 */
                    /* catch() { ... } // from try @ 00f0352c with catch @ 00f0360c */
                    /* catch() { ... } // from try @ 00f03510 with catch @ 00f03610 */
                    /* catch() { ... } // from try @ 00f0348c with catch @ 00f03614 */
                    /* catch() { ... } // from try @ 00f03438 with catch @ 00f03618 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00f03408 with catch @ 00f0361c */
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00f033f4 with catch @ 00f03620 */
                    /* catch() { ... } // from try @ 00f03330 with catch @ 00f03624 */
                    /* catch() { ... } // from try @ 00f0334c with catch @ 00f03644 */
                    /* catch() { ... } // from try @ 00f033c4 with catch @ 00f03648 */
  if ((DAT_0178f7c8 ==
       (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>>>
        *)0x0) &&
     (DAT_0178f7c8 = operator_new(0x28,(nothrow_t *)&std::nothrow),
     DAT_0178f7c8 !=
     (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>>>
      *)0x0)) {
    *(undefined8 *)(DAT_0178f7c8 + 8) = 0;
    *(undefined8 *)DAT_0178f7c8 = 0;
                    /* catch() { ... } // from try @ 00f0339c with catch @ 00f0364c */
                    /* catch() { ... } // from try @ 00f03300 with catch @ 00f03650 */
    *(undefined8 *)(DAT_0178f7c8 + 0x18) = 0;
    *(undefined8 *)(DAT_0178f7c8 + 0x10) = 0;
    *(undefined4 *)(DAT_0178f7c8 + 0x20) = 0x3f800000;
  }
                    /* catch() { ... } // from try @ 00f034d4 with catch @ 00f03660 */
                    /* catch() { ... } // from try @ 00f03450 with catch @ 00f03664
                       catch() { ... } // from try @ 00f03504 with catch @ 00f03664 */
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    (DAT_0178f7c8,param_1);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x28) != 0)) {
    Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>
    ::erase((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>
             *)DAT_0178f7c8,param_1);
  }
                    /* catch() { ... } // from try @ 00f033d4 with catch @ 00f03684
                       catch() { ... } // from try @ 00f0342c with catch @ 00f03684
                       catch() { ... } // from try @ 00f03554 with catch @ 00f03684 */
  this_00 = (Ref *)BMFontConfiguration::create(param_1);
  this = (Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>
          *)DAT_0178f7c8;
  if (this_00 != (Ref *)0x0) {
    local_40 = this_00;
    Ref::retain(this_00);
    Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>
    ::erase(this,param_1);
                    /* try { // try from 00f036b0 to 0100375f has its CatchHandler @ 00f036b0
                       catch(type#1 @ 00000000) { ... } // from try @ 00f036b0 with catch @ 00f036b0
                       catch(type#1 @ 00000000) { ... } // from try @ 00f037d8 with catch @ 00f036b0
                        */
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>>>
    ::
    __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::BMFontConfiguration*&>
              ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>>>
                *)this,param_1,param_1,(BMFontConfiguration **)&local_40);
    this_01 = (Director *)Director::getInstance();
    this_02 = (TextureCache *)Director::getTextureCache(this_01);
    TextureCache::reloadTexture(this_02,(basic_string *)(this_00 + 0x68));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

