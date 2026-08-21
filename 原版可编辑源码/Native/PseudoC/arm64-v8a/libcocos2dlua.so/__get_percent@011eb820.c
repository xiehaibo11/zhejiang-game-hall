
/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__get_percent(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, unsigned int&, std::__ndk1::ctype<wchar_t> const&) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__get_percent(undefined8 param_1_00,long *param_1,long *param_3,uint *param_4,long *param_5)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  
  plVar5 = (long *)*param_1;
  if (plVar5 == (long *)0x0) {
LAB_011eb898:
    bVar1 = true;
    if (param_3 != (long *)0x0) goto LAB_011eb8a0;
LAB_011eb874:
    if (bVar1) goto LAB_011eb8f0;
    plVar5 = (long *)0x0;
  }
  else {
    if ((int *)plVar5[3] == (int *)plVar5[4]) {
      iVar4 = (**(code **)(*plVar5 + 0x48))();
    }
    else {
      iVar4 = *(int *)plVar5[3];
    }
    if (iVar4 == -1) {
      *param_1 = 0;
      goto LAB_011eb898;
    }
    bVar1 = *param_1 == 0;
    if (param_3 == (long *)0x0) goto LAB_011eb874;
LAB_011eb8a0:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar4 = *(int *)param_3[3];
    }
    plVar5 = (long *)0x0;
    if (iVar4 != -1) {
      plVar5 = param_3;
    }
    if (bVar1 == (iVar4 == -1)) {
LAB_011eb8f0:
      uVar7 = *param_4 | 6;
      goto LAB_011eb9f4;
    }
  }
  plVar6 = (long *)*param_1;
  if ((undefined4 *)plVar6[3] == (undefined4 *)plVar6[4]) {
    uVar3 = (**(code **)(*plVar6 + 0x48))();
  }
  else {
    uVar3 = *(undefined4 *)plVar6[3];
  }
  cVar2 = (**(code **)(*param_5 + 0x68))(param_5,uVar3,0);
  if (cVar2 != '%') {
    uVar7 = *param_4 | 4;
    goto LAB_011eb9f4;
  }
  plVar6 = (long *)*param_1;
  if (plVar6[3] == plVar6[4]) {
    (**(code **)(*plVar6 + 0x50))();
    plVar6 = (long *)*param_1;
    if (plVar6 != (long *)0x0) goto LAB_011eb968;
LAB_011eb9bc:
    bVar1 = true;
    if (plVar5 == (long *)0x0) goto LAB_011eb9c4;
LAB_011eb990:
    if ((int *)plVar5[3] == (int *)plVar5[4]) {
      iVar4 = (**(code **)(*plVar5 + 0x48))(plVar5);
    }
    else {
      iVar4 = *(int *)plVar5[3];
    }
    if (bVar1 != (iVar4 == -1)) {
      return;
    }
  }
  else {
    plVar6[3] = plVar6[3] + 4;
LAB_011eb968:
    if ((int *)plVar6[3] == (int *)plVar6[4]) {
      iVar4 = (**(code **)(*plVar6 + 0x48))();
    }
    else {
      iVar4 = *(int *)plVar6[3];
    }
    if (iVar4 == -1) {
      *param_1 = 0;
      goto LAB_011eb9bc;
    }
    bVar1 = *param_1 == 0;
    if (plVar5 != (long *)0x0) goto LAB_011eb990;
LAB_011eb9c4:
    if (!bVar1) {
      return;
    }
  }
  uVar7 = *param_4 | 2;
LAB_011eb9f4:
  *param_4 = uVar7;
  return;
}

