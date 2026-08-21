
/* std::__ndk1::__empty_state<char>::~__empty_state() */

void __thiscall std::__ndk1::__empty_state<char>::~__empty_state(__empty_state<char> *this)

{
  *(undefined ***)this = &PTR____owns_one_state_016f4e58;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  operator_delete(this);
  return;
}

