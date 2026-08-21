
/* std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, void*&) const */

long * __thiscall
std::__ndk1::
num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get
          (undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
          undefined8 param_6)

{
  long lVar1;
  bool bVar2;
  wchar_t wVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  uint local_1bc;
  __shared_count **local_1b8;
  char *local_1b0;
  ulong local_1a8;
  ulong local_1a0;
  char *local_198;
  ulong local_190;
  undefined8 uStack_188;
  void *local_180;
  __shared_count *local_178 [20];
  wchar_t awStack_d8 [30];
  
  lVar1 = tpidr_el0;
  lVar7 = *(long *)(lVar1 + 0x28);
  local_190 = 0;
  uStack_188 = 0;
  local_180 = (void *)0x0;
  ios_base::getloc();
  plVar5 = (long *)locale::use_facet((locale *)local_178,(id *)&ctype<wchar_t>::id);
  (**(code **)(*plVar5 + 0x60))(plVar5,&__num_get_base::__src,&DAT_01a64a58,awStack_d8);
  __shared_count::__release_shared(local_178[0]);
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = (char *)0x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1a8,0x16,'\0');
  pcVar10 = (char *)((ulong)&local_1a8 | 1);
  local_1b8 = local_178;
  pcVar9 = pcVar10;
  if ((local_1a8 & 1) != 0) {
    pcVar9 = local_198;
  }
  local_1bc = 0;
  local_1b0 = pcVar9;
LAB_01800a10:
  if (param_2 == (long *)0x0) {
    bVar2 = true;
    if (param_3 != (long *)0x0) goto LAB_01800a54;
LAB_01800a90:
    param_3 = (long *)0x0;
    if (bVar2) goto LAB_01800b80;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar4 = *(int *)param_2[3];
    }
    bVar2 = iVar4 == -1;
    plVar5 = (long *)0x0;
    if (!bVar2) {
      plVar5 = param_2;
    }
    param_2 = plVar5;
    if (param_3 == (long *)0x0) goto LAB_01800a90;
LAB_01800a54:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar4 = *(int *)param_3[3];
    }
    if (iVar4 == -1) goto LAB_01800a90;
    if (!bVar2) goto LAB_01800b80;
  }
  uVar8 = local_1a8 >> 1 & 0x7f;
  uVar6 = uVar8;
  if ((local_1a8 & 1) != 0) {
    uVar6 = local_1a0;
  }
  if (local_1b0 == pcVar9 + uVar6) {
    if ((local_1a8 & 1) != 0) {
      uVar8 = local_1a0;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1a8,uVar8 << 1,'\0');
    if ((local_1a8 & 1) == 0) {
      uVar6 = 0x16;
    }
    else {
      uVar6 = (local_1a8 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1a8,uVar6,'\0');
    pcVar9 = pcVar10;
    if ((local_1a8 & 1) != 0) {
      pcVar9 = local_198;
    }
    local_1b0 = pcVar9 + uVar8;
  }
  if ((wchar_t *)param_2[3] == (wchar_t *)param_2[4]) {
    wVar3 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    wVar3 = *(wchar_t *)param_2[3];
  }
  iVar4 = __num_get<wchar_t>::__stage2_int_loop
                    (wVar3,0x10,pcVar9,&local_1b0,&local_1bc,L'\0',(basic_string *)&local_190,
                     (uint *)local_178,(uint **)&local_1b8,awStack_d8);
  if (iVar4 != 0) goto LAB_01800b80;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_01800a10;
LAB_01800b80:
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1a8,(long)local_1b0 - (long)pcVar9,'\0');
  if ((local_1a8 & 1) != 0) {
    pcVar10 = local_198;
  }
  if (((DAT_01d52dc8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_01d52dc8), iVar4 != 0)) {
    DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_01d52dc8);
  }
  iVar4 = __libcpp_sscanf_l(pcVar10,(__locale_t *)DAT_01d52dc0,"%p",param_6);
  if (iVar4 != 1) {
    *param_5 = 4;
  }
  if (param_2 == (long *)0x0) {
    bVar2 = true;
    if (param_3 == (long *)0x0) goto LAB_01800c00;
LAB_01800c2c:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar4 = *(int *)param_3[3];
    }
    if (bVar2 != (iVar4 == -1)) goto LAB_01800c70;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar4 = *(int *)param_2[3];
    }
    bVar2 = iVar4 == -1;
    plVar5 = (long *)0x0;
    if (!bVar2) {
      plVar5 = param_2;
    }
    param_2 = plVar5;
    if (param_3 != (long *)0x0) goto LAB_01800c2c;
LAB_01800c00:
    if (!bVar2) goto LAB_01800c70;
  }
  *param_5 = *param_5 | 2;
LAB_01800c70:
  if ((local_1a8 & 1) != 0) {
    operator_delete(local_198);
  }
  if ((local_190 & 1) != 0) {
    operator_delete(local_180);
  }
  if (*(long *)(lVar1 + 0x28) == lVar7) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

