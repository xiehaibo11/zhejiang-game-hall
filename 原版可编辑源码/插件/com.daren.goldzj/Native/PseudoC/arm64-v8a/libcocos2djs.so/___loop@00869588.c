
/* std::__ndk1::__loop<char>::~__loop() */

void __thiscall std::__ndk1::__loop<char>::~__loop(__loop<char> *this)

{
  *(undefined ***)this = &PTR____owns_two_states_01c66a88;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  *(undefined ***)this = &PTR____owns_one_state_01c66608;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  operator_delete(this);
  return;
}

