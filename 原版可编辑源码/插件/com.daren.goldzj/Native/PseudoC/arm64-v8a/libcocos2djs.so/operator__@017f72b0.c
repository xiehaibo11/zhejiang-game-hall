
/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_streambuf<wchar_t,
   std::__ndk1::char_traits<wchar_t> >*) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,basic_streambuf *param_1)

{
  ios_base *this_00;
  int *piVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  sentry local_58 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_58[0] = (sentry)0x0;
  plVar4 = (long *)(*(long *)this + -0x18);
  local_50 = this;
  if (*(int *)(this + *plVar4 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + *plVar4 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + *plVar4 + 0x88));
      plVar4 = (long *)(*(long *)this + -0x18);
    }
    local_58[0] = (sentry)0x1;
    this_00 = (ios_base *)(this + *plVar4);
    if (param_1 == (basic_streambuf *)0x0) {
      ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 1);
    }
    else {
      plVar4 = *(long **)(this_00 + 0x28);
      lVar5 = 0;
      while( true ) {
        if (*(int **)(param_1 + 0x18) == *(int **)(param_1 + 0x20)) {
          iVar3 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
        }
        else {
          iVar3 = **(int **)(param_1 + 0x18);
        }
        if (iVar3 == -1) break;
        if (*(int **)(param_1 + 0x18) == *(int **)(param_1 + 0x20)) {
          iVar3 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
        }
        else {
          iVar3 = **(int **)(param_1 + 0x18);
        }
        if (plVar4 == (long *)0x0) break;
        piVar1 = (int *)plVar4[6];
        if (piVar1 == (int *)plVar4[7]) {
          iVar3 = (**(code **)(*plVar4 + 0x68))(plVar4);
        }
        else {
          plVar4[6] = (long)(piVar1 + 1);
          *piVar1 = iVar3;
        }
        if (iVar3 == -1) break;
        if (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x20)) {
          (**(code **)(*(long *)param_1 + 0x50))(param_1);
        }
        else {
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 4;
        }
        lVar5 = lVar5 + -1;
      }
      if (lVar5 == 0) {
        ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                        *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 4)
        ;
      }
    }
  }
  sentry::~sentry(local_58);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}

