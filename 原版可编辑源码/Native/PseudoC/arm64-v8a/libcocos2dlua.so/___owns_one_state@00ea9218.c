
/* std::__ndk1::__owns_one_state<char>::~__owns_one_state() */

void __thiscall std::__ndk1::__owns_one_state<char>::~__owns_one_state(__owns_one_state<char> *this)

{
  *(undefined ***)this = &PTR____owns_one_state_016f4e58;
  if (*(long **)(this + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ea923c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 8) + 8))();
    return;
  }
  return;
}

