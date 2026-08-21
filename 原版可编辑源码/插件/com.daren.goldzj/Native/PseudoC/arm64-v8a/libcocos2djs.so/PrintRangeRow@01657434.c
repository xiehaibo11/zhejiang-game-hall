
/* v8::internal::compiler::LinearScanAllocator::PrintRangeRow(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::TopLevelLiveRange const*) */

void __thiscall
v8::internal::compiler::LinearScanAllocator::PrintRangeRow
          (LinearScanAllocator *this,basic_ostream *param_1,TopLevelLiveRange *param_2)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  basic_ostream *pbVar5;
  size_t sVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  char local_8c [4];
  char local_88 [32];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 3;
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
                      *(int *)(param_2 + 0x5c));
  pcVar1 = ": ";
  if (*(long *)(param_2 + 0x68) != 0) {
    pcVar1 = "s:";
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,pcVar1,2);
  iVar11 = 0;
  piVar9 = *(int **)(param_2 + 0x10);
  while( true ) {
    while (piVar9 == (int *)0x0) {
      param_2 = *(TopLevelLiveRange **)(param_2 + 0x28);
      if (param_2 == (TopLevelLiveRange *)0x0) {
        local_88[0] = '\n';
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,local_88,1);
        if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      piVar9 = *(int **)(param_2 + 0x10);
    }
    iVar4 = *piVar9;
    iVar8 = iVar4 - iVar11;
    if (iVar4 < iVar11) break;
    iVar2 = piVar9[1];
    iVar10 = 0x20;
    if (iVar8 != 0 && iVar11 <= iVar4) {
      do {
        local_88[0] = ' ';
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,local_88,1);
        iVar8 = iVar8 + -1;
        iVar11 = iVar4;
      } while (iVar8 != 0);
    }
    if (iVar2 - iVar4 < 0x20) {
      iVar10 = (iVar2 - iVar4) + 1;
    }
    iVar4 = FUN_01657698(local_88);
    sVar6 = strlen(local_88);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,local_88,sVar6);
    if (iVar10 <= iVar4) {
      iVar4 = iVar10 + -1;
    }
    iVar11 = iVar4 + iVar11;
    if (iVar2 < iVar11) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","end.value() >= position");
    }
    cVar7 = '=';
    iVar4 = iVar11;
    if (((byte)param_2[4] & 1) != 0) {
      cVar7 = '-';
    }
    for (; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      local_8c[0] = cVar7;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,local_8c,1)
      ;
      iVar11 = iVar2;
    }
    piVar9 = *(int **)(piVar9 + 2);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","start.value() >= position");
}

