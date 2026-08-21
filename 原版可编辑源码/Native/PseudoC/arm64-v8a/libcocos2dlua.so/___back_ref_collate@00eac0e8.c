
/* std::__ndk1::__back_ref_collate<char, std::__ndk1::regex_traits<char> >::~__back_ref_collate() */

void __thiscall
std::__ndk1::__back_ref_collate<char,std::__ndk1::regex_traits<char>>::~__back_ref_collate
          (__back_ref_collate<char,std::__ndk1::regex_traits<char>> *this)

{
  *(undefined ***)this = &PTR____back_ref_collate_016f5110;
  locale::~locale((locale *)(this + 0x10));
  *(undefined ***)this = &PTR____owns_one_state_016f4e58;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  operator_delete(this);
  return;
}

