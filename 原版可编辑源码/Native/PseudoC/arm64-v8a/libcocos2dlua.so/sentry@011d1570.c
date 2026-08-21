
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::sentry::sentry(std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&, bool) */

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_istream *param_1,bool param_2)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  locale alStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *this = (sentry)0x0;
  lVar5 = *(long *)(*(long *)param_1 + -0x18);
  if (*(uint *)(param_1 + lVar5 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(param_1 + lVar5 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(param_1 + lVar5 + 0x88));
    }
    if ((!param_2) && (((byte)param_1[*(long *)(*(long *)param_1 + -0x18) + 9] >> 4 & 1) != 0)) {
      locale::locale(alStack_50,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
      lVar5 = locale::use_facet(alStack_50,(id *)&ctype<char>::id);
      locale::~locale(alStack_50);
      plVar6 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28);
      while (plVar6 != (long *)0x0) {
        while( true ) {
          if ((plVar6[3] == plVar6[4]) &&
             (iVar4 = (**(code **)(*plVar6 + 0x48))(plVar6), iVar4 == -1)) {
            plVar6 = (long *)0x0;
            goto LAB_011d16e8;
          }
          if ((byte *)plVar6[3] == (byte *)plVar6[4]) {
            bVar3 = (**(code **)(*plVar6 + 0x48))(plVar6);
          }
          else {
            bVar3 = *(byte *)plVar6[3];
          }
          if (((char)bVar3 < '\0') ||
             ((*(ulong *)(*(long *)(lVar5 + 0x10) + (ulong)bVar3 * 8) & 1) == 0)) goto LAB_011d16e8;
          if (plVar6[3] != plVar6[4]) break;
          (**(code **)(*plVar6 + 0x50))(plVar6);
          if (plVar6 == (long *)0x0) goto LAB_011d16e8;
        }
        plVar6[3] = plVar6[3] + 1;
      }
LAB_011d16e8:
      if ((plVar6 == (long *)0x0) ||
         ((plVar6[3] == plVar6[4] && (iVar4 = (**(code **)(*plVar6 + 0x48))(plVar6), iVar4 == -1))))
      {
        lVar5 = *(long *)(*(long *)param_1 + -0x18);
        uVar1 = *(uint *)(param_1 + lVar5 + 0x20) | (uint)(*(long *)(param_1 + lVar5 + 0x28) == 0) |
                6;
        *(uint *)(param_1 + lVar5 + 0x20) = uVar1;
        if ((uVar1 & *(uint *)(param_1 + lVar5 + 0x24)) != 0) goto LAB_011d15d0;
      }
    }
    *this = (sentry)(*(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x20) == 0);
  }
  else {
    uVar1 = *(uint *)(param_1 + lVar5 + 0x20) | (uint)(*(long *)(param_1 + lVar5 + 0x28) == 0) | 4;
    *(uint *)(param_1 + lVar5 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar5 + 0x24)) != 0) {
LAB_011d15d0:
                    /* WARNING: Subroutine does not return */
      FUN_011dac54("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

