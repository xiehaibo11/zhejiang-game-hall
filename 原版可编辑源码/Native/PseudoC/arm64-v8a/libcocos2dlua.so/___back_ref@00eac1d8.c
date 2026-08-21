
/* std::__ndk1::__back_ref<char>::~__back_ref() */

void __thiscall std::__ndk1::__back_ref<char>::~__back_ref(__back_ref<char> *this)

{
  *(undefined ***)this = &PTR____owns_one_state_016f4e58;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  operator_delete(this);
  return;
}

