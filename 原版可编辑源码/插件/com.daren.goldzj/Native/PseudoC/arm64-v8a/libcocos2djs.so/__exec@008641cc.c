
/* std::__ndk1::__r_anchor<char>::__exec(std::__ndk1::__state<char>&) const */

void __thiscall std::__ndk1::__r_anchor<char>::__exec(__r_anchor<char> *this,__state *param_1)

{
  if ((*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) &&
     (((byte)param_1[0x58] >> 1 & 1) == 0)) {
    *(undefined4 *)param_1 = 0xfffffc1e;
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(this + 8);
    return;
  }
  *(undefined4 *)param_1 = 0xfffffc1f;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}

