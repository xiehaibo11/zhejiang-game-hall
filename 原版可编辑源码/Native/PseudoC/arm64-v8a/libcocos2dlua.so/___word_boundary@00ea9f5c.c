
/* std::__ndk1::__word_boundary<char, std::__ndk1::regex_traits<char> >::~__word_boundary() */

void __thiscall
std::__ndk1::__word_boundary<char,std::__ndk1::regex_traits<char>>::~__word_boundary
          (__word_boundary<char,std::__ndk1::regex_traits<char>> *this)

{
  *(undefined ***)this = &PTR____word_boundary_016f4f18;
  locale::~locale((locale *)(this + 0x10));
  *(undefined ***)this = &PTR____owns_one_state_016f4e58;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  operator_delete(this);
  return;
}

