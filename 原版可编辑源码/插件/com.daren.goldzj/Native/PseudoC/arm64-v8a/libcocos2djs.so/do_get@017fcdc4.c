
/* std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, void*&) const */

long * __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_get(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
      undefined8 param_6)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  char *pcVar10;
  uint local_174;
  __shared_count **local_170;
  char *local_168;
  ulong local_160;
  ulong local_158;
  char *local_150;
  ulong local_148 [2];
  void *local_138;
  __shared_count *local_130 [20];
  char acStack_8c [44];
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  local_148[0] = 0;
  local_148[1] = 0;
  local_138 = (void *)0x0;
  ios_base::getloc();
  plVar4 = (long *)locale::use_facet((locale *)local_130,(id *)&ctype<char>::id);
  (**(code **)(*plVar4 + 0x40))(plVar4,&__num_get_base::__src,&DAT_01a64a58,acStack_8c);
  __shared_count::__release_shared(local_130[0]);
  local_160 = 0;
  local_158 = 0;
  local_150 = (char *)0x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_160,0x16,'\0');
  pcVar10 = (char *)((ulong)&local_160 | 1);
  local_170 = local_130;
  pcVar9 = pcVar10;
  if ((local_160 & 1) != 0) {
    pcVar9 = local_150;
  }
  local_174 = 0;
  local_168 = pcVar9;
LAB_017fce9c:
  plVar4 = param_2;
  if ((param_2 == (long *)0x0) || (param_2[3] != param_2[4])) {
    if (param_3 == (long *)0x0) goto LAB_017fcef8;
LAB_017fceb0:
    if ((param_3[3] == param_3[4]) && (iVar3 = (**(code **)(*param_3 + 0x48))(param_3), iVar3 == -1)
       ) goto LAB_017fcef8;
    if (plVar4 != (long *)0x0) goto LAB_017fcfe8;
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x48))(param_2);
    plVar4 = (long *)0x0;
    if (iVar3 != -1) {
      plVar4 = param_2;
    }
    if (param_3 != (long *)0x0) goto LAB_017fceb0;
LAB_017fcef8:
    param_3 = (long *)0x0;
    if (plVar4 == (long *)0x0) goto LAB_017fcfe8;
  }
  uVar7 = local_160 >> 1 & 0x7f;
  uVar5 = uVar7;
  if ((local_160 & 1) != 0) {
    uVar5 = local_158;
  }
  if (local_168 == pcVar9 + uVar5) {
    if ((local_160 & 1) != 0) {
      uVar7 = local_158;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_160,uVar7 << 1,'\0');
    if ((local_160 & 1) == 0) {
      uVar5 = 0x16;
    }
    else {
      uVar5 = (local_160 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_160,uVar5,'\0');
    pcVar9 = pcVar10;
    if ((local_160 & 1) != 0) {
      pcVar9 = local_150;
    }
    local_168 = pcVar9 + uVar7;
  }
  if ((char *)plVar4[3] == (char *)plVar4[4]) {
    cVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
  }
  else {
    cVar2 = *(char *)plVar4[3];
  }
  iVar3 = __num_get<char>::__stage2_int_loop
                    (cVar2,0x10,pcVar9,&local_168,&local_174,'\0',(basic_string *)local_148,
                     (uint *)local_130,(uint **)&local_170,acStack_8c);
  if (iVar3 != 0) goto LAB_017fcfe8;
  param_2 = plVar4;
  if (plVar4[3] == plVar4[4]) {
    (**(code **)(*plVar4 + 0x50))(plVar4);
  }
  else {
    plVar4[3] = plVar4[3] + 1;
  }
  goto LAB_017fce9c;
LAB_017fcfe8:
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_160,(long)local_168 - (long)pcVar9,'\0');
  if ((local_160 & 1) != 0) {
    pcVar10 = local_150;
  }
  if (((DAT_01d52dc8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_01d52dc8), iVar3 != 0)) {
    DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_01d52dc8);
  }
  iVar3 = __libcpp_sscanf_l(pcVar10,(__locale_t *)DAT_01d52dc0,"%p",param_6);
  if (iVar3 != 1) {
    *param_5 = 4;
  }
  plVar8 = plVar4;
  if ((plVar4 == (long *)0x0) || (plVar4[3] != plVar4[4])) {
    if (param_3 != (long *)0x0) goto LAB_017fd05c;
LAB_017fd104:
    if (plVar8 != (long *)0x0) goto LAB_017fd090;
  }
  else {
    iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
    plVar8 = (long *)0x0;
    if (iVar3 != -1) {
      plVar8 = plVar4;
    }
    if (param_3 == (long *)0x0) goto LAB_017fd104;
LAB_017fd05c:
    if ((param_3[3] == param_3[4]) && (iVar3 = (**(code **)(*param_3 + 0x48))(param_3), iVar3 == -1)
       ) goto LAB_017fd104;
    if (plVar8 == (long *)0x0) goto LAB_017fd090;
  }
  *param_5 = *param_5 | 2;
LAB_017fd090:
  if ((local_160 & 1) != 0) {
    operator_delete(local_150);
  }
  if ((local_148[0] & 1) != 0) {
    operator_delete(local_138);
  }
  if (*(long *)(lVar1 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar8;
}

