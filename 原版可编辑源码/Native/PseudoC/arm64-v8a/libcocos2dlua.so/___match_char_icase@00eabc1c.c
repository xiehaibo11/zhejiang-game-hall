
/* std::__ndk1::__match_char_icase<char, std::__ndk1::regex_traits<char> >::~__match_char_icase() */

void __thiscall
std::__ndk1::__match_char_icase<char,std::__ndk1::regex_traits<char>>::~__match_char_icase
          (__match_char_icase<char,std::__ndk1::regex_traits<char>> *this)

{
  *(undefined ***)this = &PTR____match_char_icase_016f4ff0;
  locale::~locale((locale *)(this + 0x10));
  *(undefined ***)this = &PTR____owns_one_state_016f4e58;
  if (*(long **)(this + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00eabc68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 8) + 8))();
    return;
  }
  return;
}

