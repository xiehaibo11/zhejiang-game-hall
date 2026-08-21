
/* std::__ndk1::__end_marked_subexpression<char>::__exec(std::__ndk1::__state<char>&) const */

void __thiscall
std::__ndk1::__end_marked_subexpression<char>::__exec
          (__end_marked_subexpression<char> *this,__state *param_1)

{
  long lVar1;
  
  *(undefined4 *)param_1 = 0xfffffc1e;
  lVar1 = *(long *)(param_1 + 0x20) + (ulong)(*(int *)(this + 0x10) - 1) * 0x18;
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(this + 8);
  return;
}

