
/* std::__ndk1::__back_ref_icase<char, std::__ndk1::regex_traits<char> >::~__back_ref_icase() */

void __thiscall
std::__ndk1::__back_ref_icase<char,std::__ndk1::regex_traits<char>>::~__back_ref_icase
          (__back_ref_icase<char,std::__ndk1::regex_traits<char>> *this)

{
  *(undefined ***)this = &PTR____back_ref_icase_016f50c8;
  locale::~locale((locale *)(this + 0x10));
  *(undefined ***)this = &PTR____owns_one_state_016f4e58;
  if (*(long **)(this + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00eabf1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 8) + 8))();
    return;
  }
  return;
}

