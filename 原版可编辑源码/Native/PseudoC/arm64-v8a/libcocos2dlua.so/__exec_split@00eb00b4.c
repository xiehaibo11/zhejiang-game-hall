
/* std::__ndk1::__alternate<char>::__exec_split(bool, std::__ndk1::__state<char>&) const */

void __thiscall
std::__ndk1::__alternate<char>::__exec_split(__alternate<char> *this,bool param_1,__state *param_2)

{
  *(undefined4 *)param_2 = 0xfffffc1e;
  if (param_1) {
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(this + 0x10);
    return;
  }
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(this + 8);
  return;
}

