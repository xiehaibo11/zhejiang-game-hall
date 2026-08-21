
/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::~basic_filebuf() */

void __thiscall
std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
          (basic_filebuf<char,std::__ndk1::char_traits<char>> *this)

{
                    /* try { // try from 00a5aacc to 00b5aaef has its CatchHandler @ 00a5ab50 */
  ~basic_filebuf(this);
  operator_delete(this);
  return;
}

