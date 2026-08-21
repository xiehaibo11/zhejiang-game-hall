
/* cocos2d::ComponentLua::ComponentLua(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::ComponentLua::ComponentLua(ComponentLua *this,basic_string *param_1)

{
  byte bVar1;
  
  Component::Component((Component *)this);
  *(undefined ***)this = &PTR__ComponentLua_0169be28;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x50),param_1);
  *(undefined8 *)(this + 0x70) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x78),"");
                    /* try { // try from 008fbcac to 009fbd2b has its CatchHandler @ 008fbcac
                       catch() { ... } // from try @ 008fbcac with catch @ 008fbcac
                       catch() { ... } // from try @ 008fbd60 with catch @ 008fbcac */
  bVar1 = loadAndExecuteScript(this);
  this[0x68] = (ComponentLua)(bVar1 & 1);
  return;
}

