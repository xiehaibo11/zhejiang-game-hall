
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
  long lVar2;
  __shared_count *p_Var3;
  char cVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  uint local_174;
  undefined8 **local_170;
  ulong local_168;
  undefined8 ***local_160;
  __shared_count *local_158;
  ulong local_150 [2];
  void *local_140;
  undefined8 ***local_138;
  undefined8 *local_130;
  code *local_128;
  undefined8 uStack_120;
  char acStack_8c [28];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_150[1] = 0;
  local_140 = (void *)0x0;
  local_150[0] = 0;
  ios_base::getloc();
  p_Var3 = local_158;
  local_130 = &ctype<char>::id;
  uStack_120 = 0;
  local_128 = locale::id::__init;
  if (ctype<char>::id != -1) {
    local_170 = &local_130;
    local_138 = &local_170;
    __call_once((ulong *)&ctype<char>::id,&local_138,FUN_01208130);
  }
  lVar1 = *(long *)(p_Var3 + 0x10);
  if (((ulong)(*(long *)(p_Var3 + 0x18) - lVar1 >> 3) <= (long)DAT_01794330 - 1U) ||
     (plVar6 = *(long **)(lVar1 + ((long)DAT_01794330 - 1U) * 8), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00cc7c00();
  }
  (**(code **)(*plVar6 + 0x40))(plVar6,"0123456789abcdefABCDEFxX+-pPiInN","pPiInN",acStack_8c);
  __shared_count::__release_shared(local_158);
  local_168 = 0;
  local_160 = (undefined8 ***)0x0;
  local_170 = (undefined8 **)0x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_170,0x16,'\0');
  pppuVar10 = (undefined8 ***)((ulong)&local_170 | 1);
  local_158 = (__shared_count *)&local_130;
  pppuVar9 = pppuVar10;
  if (((ulong)local_170 & 1) != 0) {
    pppuVar9 = local_160;
  }
  local_174 = 0;
  plVar6 = param_2;
  local_138 = pppuVar9;
  if (param_2 != (long *)0x0) goto LAB_011df13c;
LAB_011df148:
  if (param_3 == (long *)0x0) goto LAB_011df194;
  while( true ) {
    if ((param_3[3] == param_3[4]) && (iVar5 = (**(code **)(*param_3 + 0x48))(param_3), iVar5 == -1)
       ) goto LAB_011df194;
    if (param_2 != (long *)0x0) break;
    while( true ) {
      uVar8 = (ulong)local_170 >> 1 & 0x7f;
      uVar7 = uVar8;
      if (((ulong)local_170 & 1) != 0) {
        uVar7 = local_168;
      }
      if (local_138 == (undefined8 ***)((long)pppuVar9 + uVar7)) {
        if (((ulong)local_170 & 1) != 0) {
          uVar8 = local_168;
        }
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_170,uVar8 << 1,'\0');
        if (((ulong)local_170 & 1) == 0) {
          uVar7 = 0x16;
        }
        else {
          uVar7 = ((ulong)local_170 & 0xfffffffffffffffe) - 1;
        }
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_170,uVar7,'\0');
        pppuVar9 = pppuVar10;
        if (((ulong)local_170 & 1) != 0) {
          pppuVar9 = local_160;
        }
        local_138 = (undefined8 ***)((long)pppuVar9 + uVar8);
      }
      if ((char *)param_2[3] == (char *)param_2[4]) {
        cVar4 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      else {
        cVar4 = *(char *)param_2[3];
      }
      iVar5 = __num_get<char>::__stage2_int_loop
                        (cVar4,0x10,(char *)pppuVar9,(char **)&local_138,&local_174,'\0',
                         (basic_string *)local_150,(uint *)&local_130,(uint **)&local_158,acStack_8c
                        );
      if (iVar5 != 0) goto LAB_011df284;
      if (param_2[3] == param_2[4]) {
        (**(code **)(*param_2 + 0x50))(param_2);
      }
      else {
        param_2[3] = param_2[3] + 1;
      }
      plVar6 = param_2;
      if (param_2 == (long *)0x0) goto LAB_011df148;
LAB_011df13c:
      param_2 = plVar6;
      if (plVar6[3] != plVar6[4]) goto LAB_011df148;
      iVar5 = (**(code **)(*plVar6 + 0x48))(plVar6);
      param_2 = (long *)0x0;
      if (iVar5 != -1) {
        param_2 = plVar6;
      }
      if (param_3 != (long *)0x0) break;
LAB_011df194:
      param_3 = (long *)0x0;
      if (param_2 == (long *)0x0) goto LAB_011df284;
    }
  }
LAB_011df284:
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_170,(long)local_138 - (long)pppuVar9,'\0');
  if (((ulong)local_170 & 1) != 0) {
    pppuVar10 = local_160;
  }
  if (((DAT_017942d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_017942d8), iVar5 != 0)) {
    DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_017942d8);
  }
  iVar5 = __libcpp_sscanf_l((char *)pppuVar10,(__locale_t *)DAT_017942d0,"%p",param_6);
  if (iVar5 != 1) {
    *param_5 = 4;
  }
  plVar6 = param_2;
  if ((param_2 == (long *)0x0) || (param_2[3] != param_2[4])) {
    if (param_3 != (long *)0x0) goto LAB_011df2f8;
LAB_011df39c:
    if (plVar6 != (long *)0x0) goto LAB_011df32c;
  }
  else {
    iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    plVar6 = (long *)0x0;
    if (iVar5 != -1) {
      plVar6 = param_2;
    }
    if (param_3 == (long *)0x0) goto LAB_011df39c;
LAB_011df2f8:
    if ((param_3[3] == param_3[4]) && (iVar5 = (**(code **)(*param_3 + 0x48))(param_3), iVar5 == -1)
       ) goto LAB_011df39c;
    if (plVar6 == (long *)0x0) goto LAB_011df32c;
  }
  *param_5 = *param_5 | 2;
LAB_011df32c:
  if (((ulong)local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar6;
}

