
/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::put(char) */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,char param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  sentry local_48 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48[0] = (sentry)0x0;
  lVar5 = *(long *)this;
  local_40 = this;
  if (*(int *)(this + *(long *)(lVar5 + -0x18) + 0x20) != 0) goto LAB_00d3aa60;
  if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
       (this + *(long *)(lVar5 + -0x18) + 0x88) !=
      (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
    flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
           (this + *(long *)(lVar5 + -0x18) + 0x88));
    lVar5 = *(long *)this;
  }
  local_48[0] = (sentry)0x1;
  plVar4 = *(long **)(this + *(long *)(lVar5 + -0x18) + 0x28);
  if (plVar4 != (long *)0x0) {
    pcVar1 = (char *)plVar4[6];
    if (pcVar1 != (char *)plVar4[7]) {
      plVar4[6] = (long)(pcVar1 + 1);
      *pcVar1 = param_1;
      goto LAB_00d3aa60;
    }
    iVar3 = (**(code **)(*plVar4 + 0x68))(plVar4,param_1);
    if (iVar3 != -1) goto LAB_00d3aa60;
    lVar5 = *(long *)this;
  }
  ios_base::clear((ios_base *)(this + *(long *)(lVar5 + -0x18)),
                  *(uint *)((ios_base *)(this + *(long *)(lVar5 + -0x18)) + 0x20) | 1);
LAB_00d3aa60:
  sentry::~sentry(local_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

