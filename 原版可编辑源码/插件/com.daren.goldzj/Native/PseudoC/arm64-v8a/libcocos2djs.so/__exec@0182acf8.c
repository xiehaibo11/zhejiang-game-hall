
/* std::__ndk1::__match_any_but_newline<char>::__exec(std::__ndk1::__state<char>&) const */

void __thiscall
std::__ndk1::__match_any_but_newline<char>::__exec
          (__match_any_but_newline<char> *this,__state *param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x10);
  if (((pcVar1 != *(char **)(param_1 + 0x18)) && (*pcVar1 != '\r')) && (*pcVar1 != '\n')) {
    *(undefined4 *)param_1 = 0xfffffc1d;
    *(char **)(param_1 + 0x10) = pcVar1 + 1;
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(this + 8);
    return;
  }
  *(undefined4 *)param_1 = 0xfffffc1f;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}

