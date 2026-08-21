
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (universe::Translated::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), universe::Translated*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::__bind<void
   (universe::Translated::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), universe::Translated*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >, void ()>::~__func() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(universe::Translated::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),universe::Translated*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::__bind<void(universe::Translated::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),universe::Translated*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>,void()>
::~__func(__func<std::__ndk1::__bind<void(universe::Translated::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),universe::Translated*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::__bind<void(universe::Translated::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),universe::Translated*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>,void()>
          *this)

{
  *(undefined ***)this = &PTR____func_01c6c6d0;
  if (((byte)this[0x20] & 1) != 0) {
                    /* try { // try from 009fe9ec to 00afea27 has its CatchHandler @ 009fe9ec
                       catch() { ... } // from try @ 009fe9ec with catch @ 009fe9ec
                       catch() { ... } // from try @ 009fea3c with catch @ 009fe9ec */
    operator_delete(*(void **)(this + 0x30));
  }
  operator_delete(this);
  return;
}

