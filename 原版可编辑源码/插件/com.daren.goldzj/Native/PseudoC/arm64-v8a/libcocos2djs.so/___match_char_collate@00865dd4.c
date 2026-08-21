
/* std::__ndk1::__match_char_collate<char, std::__ndk1::regex_traits<char>
   >::~__match_char_collate() */

void __thiscall
std::__ndk1::__match_char_collate<char,std::__ndk1::regex_traits<char>>::~__match_char_collate
          (__match_char_collate<char,std::__ndk1::regex_traits<char>> *this)

{
  *(undefined ***)this = &PTR____match_char_collate_01c667e8;
  locale::~locale((locale *)(this + 0x10));
  *(undefined ***)this = &PTR____owns_one_state_01c66608;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  operator_delete(this);
  return;
}

