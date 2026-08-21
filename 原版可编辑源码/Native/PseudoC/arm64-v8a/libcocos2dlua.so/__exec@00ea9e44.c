
/* std::__ndk1::__l_anchor<char>::__exec(std::__ndk1::__state<char>&) const */

void __thiscall std::__ndk1::__l_anchor<char>::__exec(__l_anchor<char> *this,__state *param_1)

{
                    /* try { // try from 00ea9e4c to 00fa9e53 has its CatchHandler @ 00ea9ec8 */
                    /* try { // try from 00ea9e54 to 00fa9f07 has its CatchHandler @ 00ea9ddc */
  if (((param_1[0x5c] != (__state)0x0) && (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8))) &&
     (((byte)param_1[0x58] & 1) == 0)) {
    *(undefined4 *)param_1 = 0xfffffc1e;
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(this + 8);
    return;
  }
  *(undefined4 *)param_1 = 0xfffffc1f;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}

