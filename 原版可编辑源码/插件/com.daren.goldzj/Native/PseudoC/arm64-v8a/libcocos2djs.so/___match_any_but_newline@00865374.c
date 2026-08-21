
/* std::__ndk1::__match_any_but_newline<char>::~__match_any_but_newline() */

void __thiscall
std::__ndk1::__match_any_but_newline<char>::~__match_any_but_newline
          (__match_any_but_newline<char> *this)

{
  *(undefined ***)this = &PTR____owns_one_state_01c66608;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  operator_delete(this);
  return;
}

