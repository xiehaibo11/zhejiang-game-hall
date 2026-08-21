
/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >
   >::__get_white_space(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t>
   >&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&,
   std::__ndk1::ctype<wchar_t> const&) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__get_white_space(undefined8 param_1_00,long *param_1,long *param_3,uint *param_4,long *param_5)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) goto LAB_011eb4a0;
LAB_011eb4e4:
  bVar1 = true;
  if (param_3 == (long *)0x0) goto LAB_011eb524;
  while( true ) {
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar3 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar3 = *(int *)param_3[3];
    }
    if (iVar3 == -1) goto LAB_011eb524;
    if (!bVar1) break;
    while( true ) {
      plVar4 = (long *)*param_1;
      if ((undefined4 *)plVar4[3] == (undefined4 *)plVar4[4]) {
        uVar2 = (**(code **)(*plVar4 + 0x48))();
      }
      else {
        uVar2 = *(undefined4 *)plVar4[3];
      }
      uVar5 = (**(code **)(*param_5 + 0x18))(param_5,1,uVar2);
      if ((uVar5 & 1) == 0) goto LAB_011eb594;
      plVar4 = (long *)*param_1;
      if (plVar4[3] == plVar4[4]) {
        (**(code **)(*plVar4 + 0x50))();
        plVar4 = (long *)*param_1;
      }
      else {
        plVar4[3] = plVar4[3] + 4;
        plVar4 = (long *)*param_1;
      }
      if (plVar4 == (long *)0x0) goto LAB_011eb4e4;
LAB_011eb4a0:
      if ((int *)plVar4[3] == (int *)plVar4[4]) {
        iVar3 = (**(code **)(*plVar4 + 0x48))();
      }
      else {
        iVar3 = *(int *)plVar4[3];
      }
      if (iVar3 == -1) {
        *param_1 = 0;
        goto LAB_011eb4e4;
      }
      bVar1 = *param_1 == 0;
      if (param_3 != (long *)0x0) break;
LAB_011eb524:
      param_3 = (long *)0x0;
      if (bVar1) goto LAB_011eb594;
    }
  }
LAB_011eb594:
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    if ((int *)plVar4[3] == (int *)plVar4[4]) {
      iVar3 = (**(code **)(*plVar4 + 0x48))();
    }
    else {
      iVar3 = *(int *)plVar4[3];
    }
    if (iVar3 != -1) {
      bVar1 = *param_1 == 0;
      goto joined_r0x011eb5e8;
    }
    *param_1 = 0;
  }
  bVar1 = true;
joined_r0x011eb5e8:
  if (param_3 == (long *)0x0) {
    if (!bVar1) {
      return;
    }
  }
  else {
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar3 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar3 = *(int *)param_3[3];
    }
    if (bVar1 != (iVar3 == -1)) {
      return;
    }
  }
  *param_4 = *param_4 | 2;
  return;
}

