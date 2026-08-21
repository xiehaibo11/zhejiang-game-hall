
/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_streambuf<wchar_t,
   std::__ndk1::char_traits<wchar_t> >*) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,basic_streambuf *param_1)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  sentry local_58 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_58[0] = (sentry)0x0;
  lVar5 = *(long *)this;
  local_50 = this;
  if (*(int *)(this + *(long *)(lVar5 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
         (this + *(long *)(lVar5 + -0x18) + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
             (this + *(long *)(lVar5 + -0x18) + 0x88));
      lVar5 = *(long *)this;
    }
    local_58[0] = (sentry)0x1;
    lVar5 = *(long *)(lVar5 + -0x18);
    if (param_1 == (basic_streambuf *)0x0) {
      uVar2 = *(uint *)(this + lVar5 + 0x20);
      *(uint *)(this + lVar5 + 0x20) = uVar2 | 1;
      if ((*(uint *)(this + lVar5 + 0x24) & (uVar2 | 1)) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_011dac54("ios_base::clear");
      }
    }
    else {
      plVar6 = *(long **)(this + lVar5 + 0x28);
      lVar5 = 0;
      while( true ) {
        if (*(int **)(param_1 + 0x18) == *(int **)(param_1 + 0x20)) {
          iVar4 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
        }
        else {
          iVar4 = **(int **)(param_1 + 0x18);
        }
        if (iVar4 == -1) break;
        if (*(int **)(param_1 + 0x18) == *(int **)(param_1 + 0x20)) {
          iVar4 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
        }
        else {
          iVar4 = **(int **)(param_1 + 0x18);
        }
        if (plVar6 == (long *)0x0) goto LAB_011d9e54;
        piVar1 = (int *)plVar6[6];
        if (piVar1 == (int *)plVar6[7]) {
          iVar4 = (**(code **)(*plVar6 + 0x68))(plVar6);
        }
        else {
          plVar6[6] = (long)(piVar1 + 1);
          *piVar1 = iVar4;
        }
        if (iVar4 == -1) break;
        if (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x20)) {
          (**(code **)(*(long *)param_1 + 0x50))(param_1);
        }
        else {
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 4;
        }
        lVar5 = lVar5 + -1;
      }
      if (lVar5 == 0) {
LAB_011d9e54:
        lVar5 = *(long *)(*(long *)this + -0x18);
        uVar2 = *(uint *)(this + lVar5 + 0x20) | (uint)(*(long *)(this + lVar5 + 0x28) == 0) | 4;
        *(uint *)(this + lVar5 + 0x20) = uVar2;
        if ((uVar2 & *(uint *)(this + lVar5 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_011dac54("ios_base::clear");
        }
      }
    }
  }
  sentry::~sentry(local_58);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}

