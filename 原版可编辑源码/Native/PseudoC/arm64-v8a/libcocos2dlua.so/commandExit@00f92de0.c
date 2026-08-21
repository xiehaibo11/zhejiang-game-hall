
/* WARNING: Removing unreachable block (ram,0x00f92e9c) */
/* cocos2d::Console::commandExit(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

int cocos2d::Console::commandExit(int param_1,basic_string *param_2)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  
  uVar3 = (ulong)(uint)param_1;
  __FD_CLR_chk((ulong)param_2 & 0xffffffff,uVar3 + 0x50,0x80);
  piVar4 = *(int **)(uVar3 + 0x30);
  piVar1 = *(int **)(uVar3 + 0x38);
  iVar2 = (int)param_2;
  if ((piVar4 != piVar1) && (*piVar4 != iVar2)) {
    do {
      piVar5 = piVar1;
      if (piVar1 + -1 == piVar4) goto LAB_00f92e80;
      piVar5 = piVar4 + 1;
      piVar4 = piVar4 + 1;
    } while (*piVar5 != iVar2);
  }
  piVar5 = piVar4;
  if (piVar4 != piVar1) {
    while (piVar4 = piVar4 + 1, piVar4 != piVar1) {
      if (*piVar4 != iVar2) {
        *piVar5 = *piVar4;
        piVar5 = piVar5 + 1;
      }
    }
  }
LAB_00f92e80:
  if (piVar5 != piVar1) {
    *(int **)(uVar3 + 0x38) = piVar5;
  }
  iVar2 = close(iVar2);
  return iVar2;
}

