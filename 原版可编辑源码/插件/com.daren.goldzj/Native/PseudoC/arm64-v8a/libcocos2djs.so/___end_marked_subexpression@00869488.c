
/* std::__ndk1::__end_marked_subexpression<char>::~__end_marked_subexpression() */

void __thiscall
std::__ndk1::__end_marked_subexpression<char>::~__end_marked_subexpression
          (__end_marked_subexpression<char> *this)

{
  *(undefined ***)this = &PTR____owns_one_state_01c66608;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  operator_delete(this);
  return;
}

