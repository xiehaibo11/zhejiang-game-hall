
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::sentry::sentry(std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >&, bool)
    */

void __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
          (sentry *this,basic_istream *param_1,bool param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  locale alStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *this = (sentry)0x0;
  lVar7 = *(long *)(*(long *)param_1 + -0x18);
  if (*(uint *)(param_1 + lVar7 + 0x20) != 0) {
    uVar1 = *(uint *)(param_1 + lVar7 + 0x20) | (uint)(*(long *)(param_1 + lVar7 + 0x28) == 0) | 4;
    *(uint *)(param_1 + lVar7 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar7 + 0x24)) != 0) goto LAB_011d41e0;
    goto LAB_011d438c;
  }
  if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(param_1 + lVar7 + 0x88) !=
      (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
    basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
              (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
                (param_1 + lVar7 + 0x88));
  }
  if ((!param_2) && (((byte)param_1[*(long *)(*(long *)param_1 + -0x18) + 9] >> 4 & 1) != 0)) {
    locale::locale(alStack_50,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
    plVar5 = (long *)locale::use_facet(alStack_50,(id *)&ctype<wchar_t>::id);
    locale::~locale(alStack_50);
    plVar8 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28);
    while (plVar8 != (long *)0x0) {
      while( true ) {
        if ((int *)plVar8[3] == (int *)plVar8[4]) {
          iVar4 = (**(code **)(*plVar8 + 0x48))(plVar8);
        }
        else {
          iVar4 = *(int *)plVar8[3];
        }
        if (iVar4 == -1) {
          plVar8 = (long *)0x0;
          goto LAB_011d4300;
        }
        if ((undefined4 *)plVar8[3] == (undefined4 *)plVar8[4]) {
          uVar3 = (**(code **)(*plVar8 + 0x48))(plVar8);
        }
        else {
          uVar3 = *(undefined4 *)plVar8[3];
        }
        uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,1,uVar3);
        plVar9 = plVar8;
        if ((uVar6 & 1) == 0) goto LAB_011d4304;
        if (plVar8[3] != plVar8[4]) break;
        (**(code **)(*plVar8 + 0x50))(plVar8);
        if (plVar8 == (long *)0x0) goto LAB_011d4300;
      }
      plVar8[3] = plVar8[3] + 4;
    }
LAB_011d4300:
    plVar9 = (long *)0x0;
LAB_011d4304:
    if (plVar8 != (long *)0x0) {
      if ((int *)plVar9[3] == (int *)plVar9[4]) {
        iVar4 = (**(code **)(*plVar8 + 0x48))(plVar9);
      }
      else {
        iVar4 = *(int *)plVar9[3];
      }
      if (iVar4 != -1) goto LAB_011d4370;
    }
    lVar7 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar7 + 0x20) | (uint)(*(long *)(param_1 + lVar7 + 0x28) == 0) | 6;
    *(uint *)(param_1 + lVar7 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar7 + 0x24)) != 0) {
LAB_011d41e0:
                    /* WARNING: Subroutine does not return */
      FUN_011dac54("ios_base::clear");
    }
  }
LAB_011d4370:
  *this = (sentry)(*(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x20) == 0);
LAB_011d438c:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

