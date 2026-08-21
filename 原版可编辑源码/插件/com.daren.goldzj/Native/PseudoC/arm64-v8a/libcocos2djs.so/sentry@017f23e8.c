
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::sentry::sentry(std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >&, bool)
    */

void __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
          (sentry *this,basic_istream *param_1,bool param_2)

{
  ios_base *this_00;
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  locale alStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *this = (sentry)0x0;
  this_00 = (ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18));
  if (*(uint *)(this_00 + 0x20) != 0) {
    ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 4);
    goto LAB_017f2598;
  }
  if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88) !=
      (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
    basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
              (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88));
  }
  if ((!param_2) && (((byte)param_1[*(long *)(*(long *)param_1 + -0x18) + 9] >> 4 & 1) != 0)) {
    locale::locale(alStack_50,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
    plVar4 = (long *)locale::use_facet(alStack_50,(id *)&ctype<wchar_t>::id);
    locale::~locale(alStack_50);
    plVar6 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28);
    while (plVar6 != (long *)0x0) {
      while( true ) {
        if ((int *)plVar6[3] == (int *)plVar6[4]) {
          iVar3 = (**(code **)(*plVar6 + 0x48))(plVar6);
        }
        else {
          iVar3 = *(int *)plVar6[3];
        }
        if (iVar3 == -1) {
          plVar6 = (long *)0x0;
          goto LAB_017f2544;
        }
        if ((undefined4 *)plVar6[3] == (undefined4 *)plVar6[4]) {
          uVar2 = (**(code **)(*plVar6 + 0x48))(plVar6);
        }
        else {
          uVar2 = *(undefined4 *)plVar6[3];
        }
        uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,1,uVar2);
        plVar7 = plVar6;
        if ((uVar5 & 1) == 0) goto LAB_017f2548;
        if (plVar6[3] == plVar6[4]) break;
        plVar6[3] = plVar6[3] + 4;
        if (plVar6 == (long *)0x0) goto LAB_017f2544;
      }
      (**(code **)(*plVar6 + 0x50))(plVar6);
    }
LAB_017f2544:
    plVar7 = (long *)0x0;
LAB_017f2548:
    if (plVar6 != (long *)0x0) {
      if ((int *)plVar7[3] == (int *)plVar7[4]) {
        iVar3 = (**(code **)(*plVar6 + 0x48))(plVar7);
      }
      else {
        iVar3 = *(int *)plVar7[3];
      }
      if (iVar3 != -1) goto LAB_017f257c;
    }
    ios_base::clear((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)),
                    *(uint *)((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)) + 0x20) |
                    6);
  }
LAB_017f257c:
  *this = (sentry)(*(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x20) == 0);
LAB_017f2598:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

