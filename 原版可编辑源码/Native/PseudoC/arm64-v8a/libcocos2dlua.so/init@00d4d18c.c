
/* cocos2d::Skybox::init(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

bool __thiscall
cocos2d::Skybox::init
          (Skybox *this,basic_string *param_1,basic_string *param_2,basic_string *param_3,
          basic_string *param_4,basic_string *param_5,basic_string *param_6)

{
  TextureCube *pTVar1;
  
                    /* catch() { ... } // from try @ 00d4cdac with catch @ 00d4d194 */
                    /* catch() { ... } // from try @ 00d4cd9c with catch @ 00d4d198 */
  pTVar1 = (TextureCube *)TextureCube::create(param_1,param_2,param_3,param_4,param_5,param_6);
  if (pTVar1 != (TextureCube *)0x0) {
    (**(code **)(*(long *)this + 0x500))(this);
    setTexture(this,pTVar1);
  }
  return pTVar1 != (TextureCube *)0x0;
}

