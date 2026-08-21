
/* cocos2d::TextureCache::reloadTexture(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

byte __thiscall cocos2d::TextureCache::reloadTexture(TextureCache *this,basic_string *param_1)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  Image *this_00;
  ulong uVar5;
  Texture2D *this_01;
  basic_string local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00ff0728 with catch @ 00ff07f8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00ff070c with catch @ 00ff0808 */
  plVar3 = (long *)FileUtils::getInstance();
                    /* catch() { ... } // from try @ 00ff0858 with catch @ 00ff0824 */
  (**(code **)(*plVar3 + 0x50))(local_50,plVar3,param_1);
  uVar5 = (ulong)((byte)local_50[0] >> 1);
  if (((byte)local_50[0] & 1) != 0) {
    uVar5 = local_48;
  }
  if (uVar5 != 0) {
    lVar4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Texture2D*>>>
                        *)(this + 0x148),local_50);
                    /* try { // try from 00ff0850 to 010f0857 has its CatchHandler @ 00ff08a4 */
                    /* try { // try from 00ff0858 to 010f08bf has its CatchHandler @ 00ff0824 */
    if ((lVar4 == 0) || (this_01 = *(Texture2D **)(lVar4 + 0x28), this_01 == (Texture2D *)0x0)) {
      lVar4 = addImage(this,local_50);
      bVar2 = lVar4 != 0;
                    /* catch() { ... } // from try @ 00ff08f4 with catch @ 00ff08c0 */
      goto joined_r0x00ff08a4;
    }
    this_00 = operator_new(0x170,(nothrow_t *)&std::nothrow);
    if (this_00 != (Image *)0x0) {
      Image::Image(this_00);
      uVar5 = Image::initWithImageFile(this_00,local_50);
      if ((uVar5 & 1) == 0) {
        bVar2 = 0;
      }
      else {
        bVar2 = Texture2D::initWithImage(this_01,this_00);
      }
      Ref::release((Ref *)this_00);
      goto joined_r0x00ff08a4;
    }
  }
  bVar2 = 0;
joined_r0x00ff08a4:
                    /* catch() { ... } // from try @ 00ff0850 with catch @ 00ff08a4 */
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
                    /* try { // try from 00ff08ec to 010f08f3 has its CatchHandler @ 00ff0940 */
                    /* try { // try from 00ff08f4 to 010f095b has its CatchHandler @ 00ff08c0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

