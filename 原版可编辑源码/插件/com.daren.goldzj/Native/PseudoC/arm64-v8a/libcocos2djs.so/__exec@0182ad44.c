
/* std::__ndk1::__match_any_but_newline<wchar_t>::__exec(std::__ndk1::__state<wchar_t>&) const */

void __thiscall
std::__ndk1::__match_any_but_newline<wchar_t>::__exec
          (__match_any_but_newline<wchar_t> *this,__state *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if ((((piVar1 != *(int **)(param_1 + 0x18)) && (iVar2 = *piVar1, 1 < iVar2 - 0x2028U)) &&
      (iVar2 != 0xd)) && (iVar2 != 10)) {
    *(undefined4 *)param_1 = 0xfffffc1d;
    *(int **)(param_1 + 0x10) = piVar1 + 1;
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(this + 8);
    return;
  }
  *(undefined4 *)param_1 = 0xfffffc1f;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}

