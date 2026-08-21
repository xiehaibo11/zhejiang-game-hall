
/* std::__ndk1::basic_istringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >::~basic_istringstream() */

void __thiscall
std::__ndk1::basic_istringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_istringstream
          (basic_istringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
           *this)

{
                    /* catch() { ... } // from try @ 0091530c with catch @ 00915480 */
                    /* catch() { ... } // from try @ 009152e8 with catch @ 00915484 */
                    /* catch() { ... } // from try @ 00915284 with catch @ 00915498 */
  *(undefined ***)this = &PTR__basic_istringstream_0169c3d0;
  *(undefined ***)(this + 0x78) = &PTR__basic_istringstream_0169c3f8;
  *(undefined ***)(this + 0x10) = &PTR__basic_stringbuf_01698960;
                    /* try { // try from 009154b4 to 00a15507 has its CatchHandler @ 009154b4
                       catch() { ... } // from try @ 009154b4 with catch @ 009154b4
                       catch() { ... } // from try @ 00915544 with catch @ 009154b4
                       catch() { ... } // from try @ 009155c8 with catch @ 009154b4
                       catch() { ... } // from try @ 00915600 with catch @ 009154b4 */
  if (((byte)this[0x50] & 1) != 0) {
    operator_delete(*(void **)(this + 0x60));
  }
  *(undefined ***)(this + 0x10) = &PTR__basic_streambuf_01698a08;
  locale::~locale((locale *)(this + 0x18));
  ios_base::~ios_base((ios_base *)(this + 0x78));
  operator_delete(this);
  return;
}

