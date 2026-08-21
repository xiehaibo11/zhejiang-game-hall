
void FUN_01211c40(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  char acStack_458 [1024];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pcVar6 = acStack_458;
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  pcVar5 = strerror_r(param_3,acStack_458,0x400);
  iVar3 = (int)pcVar5;
  if (iVar3 != 0) {
    if (iVar3 == -1) {
      iVar3 = *piVar4;
    }
    if (iVar3 != 0x16) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pcVar6 = "";
  }
  if (*pcVar6 == '\0') {
    pcVar6 = acStack_458;
    FUN_012126fc(acStack_458);
  }
  *piVar4 = iVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(param_1,pcVar6);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

