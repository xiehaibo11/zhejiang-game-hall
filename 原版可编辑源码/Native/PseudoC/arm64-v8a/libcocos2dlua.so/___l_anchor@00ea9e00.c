
/* std::__ndk1::__l_anchor<char>::~__l_anchor() */

void __thiscall std::__ndk1::__l_anchor<char>::~__l_anchor(__l_anchor<char> *this)

{
                    /* try { // try from 00ea9e10 to 00fa9e1b has its CatchHandler @ 00ea9ee4 */
  *(undefined ***)this = &PTR____owns_one_state_016f4e58;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  operator_delete(this);
  return;
}

