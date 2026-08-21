
/* std::__ndk1::__back_ref<char>::__exec(std::__ndk1::__state<char>&) const */

void __thiscall std::__ndk1::__back_ref<char>::__exec(__back_ref<char> *this,__state *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x20);
  if ((ulong)((*(long *)(param_1 + 0x28) - lVar7 >> 3) * -0x5555555555555555) <
      (ulong)*(uint *)(this + 0x10)) {
                    /* WARNING: Subroutine does not return */
    FUN_00865b64();
  }
  uVar6 = (ulong)(*(uint *)(this + 0x10) - 1);
  if (*(char *)(lVar7 + uVar6 * 0x18 + 0x10) != '\0') {
    plVar5 = (long *)(lVar7 + uVar6 * 0x18);
    pcVar1 = (char *)*plVar5;
    pcVar3 = (char *)plVar5[1];
    pcVar2 = *(char **)(param_1 + 0x10);
    lVar7 = (long)pcVar3 - (long)pcVar1;
    pcVar4 = pcVar2;
    if (lVar7 <= *(long *)(param_1 + 0x18) - (long)pcVar2) {
      while( true ) {
        if (pcVar1 == pcVar3) {
          *(undefined4 *)param_1 = 0xfffffc1e;
          *(char **)(param_1 + 0x10) = pcVar2 + lVar7;
          *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(this + 8);
          return;
        }
        if (*pcVar1 != *pcVar4) break;
        pcVar1 = pcVar1 + 1;
        pcVar4 = pcVar4 + 1;
      }
    }
  }
  *(undefined4 *)param_1 = 0xfffffc1f;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}

