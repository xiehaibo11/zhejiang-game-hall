
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (cocos2d::RenderTexture::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool), cocos2d::RenderTexture*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   bool&>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::RenderTexture::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool), cocos2d::RenderTexture*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   bool&> >, void ()>::__clone() const */

undefined8 * __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::RenderTexture::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool),cocos2d::RenderTexture*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,bool&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::RenderTexture::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool),cocos2d::RenderTexture*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,bool&>>,void()>
::__clone(__func<std::__ndk1::__bind<void(cocos2d::RenderTexture::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool),cocos2d::RenderTexture*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,bool&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::RenderTexture::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool),cocos2d::RenderTexture*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,bool&>>,void()>
          *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(0x40);
  *puVar1 = &PTR____func_0170fd78;
  uVar2 = *(undefined8 *)(this + 8);
  puVar1[2] = *(undefined8 *)(this + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(this + 0x18);
                    /* try { // try from 00f3c5d0 to 0103c5d7 has its CatchHandler @ 00f3c84c */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (puVar1 + 4),(basic_string *)(this + 0x20));
                    /* try { // try from 00f3c5d8 to 0103c7d7 has its CatchHandler @ 00f3c44c */
  *(__func<std::__ndk1::__bind<void(cocos2d::RenderTexture::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool),cocos2d::RenderTexture*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,bool&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::RenderTexture::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool),cocos2d::RenderTexture*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,bool&>>,void()>
    *)(puVar1 + 7) = this[0x38];
  return puVar1;
}

