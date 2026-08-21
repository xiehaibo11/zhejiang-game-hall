
/* std::__ndk1::__back_ref_collate<char, std::__ndk1::regex_traits<char> >::~__back_ref_collate() */

void __thiscall
std::__ndk1::__back_ref_collate<char,std::__ndk1::regex_traits<char>>::~__back_ref_collate
          (__back_ref_collate<char,std::__ndk1::regex_traits<char>> *this)

{
  *(undefined ***)this = &PTR____back_ref_collate_016f5110;
  locale::~locale((locale *)(this + 0x10));
  *(undefined ***)this = &PTR____owns_one_state_016f4e58;
  if (*(long **)(this + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00eac0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 8) + 8))();
    return;
  }
  return;
}

