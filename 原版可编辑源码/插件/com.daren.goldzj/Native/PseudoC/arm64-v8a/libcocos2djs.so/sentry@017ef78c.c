
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::sentry::sentry(std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&, bool) */

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_istream *param_1,bool param_2)

{
  ios_base *this_00;
  long lVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  locale alStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *this = (sentry)0x0;
  this_00 = (ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18));
  if (*(uint *)(this_00 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this_00 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this_00 + 0x88));
    }
    if ((!param_2) && (((byte)param_1[*(long *)(*(long *)param_1 + -0x18) + 9] >> 4 & 1) != 0)) {
      locale::locale(alStack_50,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
      lVar4 = locale::use_facet(alStack_50,(id *)&ctype<char>::id);
      locale::~locale(alStack_50);
      plVar5 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28);
      while (plVar5 != (long *)0x0) {
        while( true ) {
          if ((plVar5[3] == plVar5[4]) &&
             (iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5), iVar3 == -1)) {
            plVar5 = (long *)0x0;
            goto LAB_017ef8e0;
          }
          if ((byte *)plVar5[3] == (byte *)plVar5[4]) {
            bVar2 = (**(code **)(*plVar5 + 0x48))(plVar5);
          }
          else {
            bVar2 = *(byte *)plVar5[3];
          }
          if (((char)bVar2 < '\0') ||
             ((*(ulong *)(*(long *)(lVar4 + 0x10) + (ulong)bVar2 * 8) & 1) == 0)) goto LAB_017ef8e0;
          if (plVar5[3] == plVar5[4]) break;
          plVar5[3] = plVar5[3] + 1;
          if (plVar5 == (long *)0x0) goto LAB_017ef8e0;
        }
        (**(code **)(*plVar5 + 0x50))(plVar5);
      }
LAB_017ef8e0:
      if ((plVar5 == (long *)0x0) ||
         ((plVar5[3] == plVar5[4] && (iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5), iVar3 == -1))))
      {
        ios_base::clear((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)),
                        *(uint *)((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)) + 0x20
                                 ) | 6);
      }
    }
    *this = (sentry)(*(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x20) == 0);
  }
  else {
    ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 4);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

