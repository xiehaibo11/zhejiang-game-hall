
/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*)
    */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,basic_streambuf *param_1)

{
  ios_base *this_00;
  undefined1 *puVar1;
  long lVar2;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  basic_streambuf *pbVar6;
  long lVar7;
  sentry local_58 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_58[0] = (sentry)0x0;
  plVar5 = (long *)(*(long *)this + -0x18);
  local_50 = this;
  if (*(int *)(this + *plVar5 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + *plVar5 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + *plVar5 + 0x88));
      plVar5 = (long *)(*(long *)this + -0x18);
    }
    local_58[0] = (sentry)0x1;
    this_00 = (ios_base *)(this + *plVar5);
    if (param_1 != (basic_streambuf *)0x0) {
      plVar5 = *(long **)(this_00 + 0x28);
      lVar7 = 0;
      do {
        pbVar6 = param_1;
        if (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x20)) {
          iVar4 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
          pbVar6 = (basic_streambuf *)0x0;
          if (iVar4 != -1) {
            pbVar6 = param_1;
          }
          if (pbVar6 == (basic_streambuf *)0x0) goto LAB_017f53b8;
        }
        if (*(undefined1 **)(pbVar6 + 0x18) == *(undefined1 **)(pbVar6 + 0x20)) {
          uVar3 = (**(code **)(*(long *)pbVar6 + 0x48))(pbVar6);
        }
        else {
          uVar3 = **(undefined1 **)(pbVar6 + 0x18);
        }
        if (plVar5 == (long *)0x0) goto LAB_017f53b8;
        puVar1 = (undefined1 *)plVar5[6];
        if (puVar1 == (undefined1 *)plVar5[7]) {
          iVar4 = (**(code **)(*plVar5 + 0x68))(plVar5,uVar3);
          if (iVar4 == -1) goto LAB_017f53b8;
        }
        else {
          plVar5[6] = (long)(puVar1 + 1);
          *puVar1 = uVar3;
        }
        if (*(long *)(pbVar6 + 0x18) == *(long *)(pbVar6 + 0x20)) {
          (**(code **)(*(long *)pbVar6 + 0x50))(pbVar6);
        }
        else {
          *(long *)(pbVar6 + 0x18) = *(long *)(pbVar6 + 0x18) + 1;
        }
        lVar7 = lVar7 + -1;
        param_1 = pbVar6;
      } while( true );
    }
    ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 1);
  }
LAB_017f5290:
  sentry::~sentry(local_58);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_017f53b8:
  if (lVar7 == 0) {
    ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                    *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 4);
  }
  goto LAB_017f5290;
}

