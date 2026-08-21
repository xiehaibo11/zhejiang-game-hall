
/* virtual thunk to std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::~basic_ostream() */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this)

{
                    /* try { // try from 009ebde4 to 00aebdf3 has its CatchHandler @ 009ebea4 */
  ios_base::~ios_base((ios_base *)(this + *(long *)(*(long *)this + -0x18) + 8));
  return;
}

