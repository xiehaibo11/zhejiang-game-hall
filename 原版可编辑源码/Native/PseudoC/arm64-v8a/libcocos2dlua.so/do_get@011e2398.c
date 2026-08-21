
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
  long lVar2;
  __shared_count *p_Var3;
  bool bVar4;
  wchar_t wVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  uint local_1bc;
  undefined8 **local_1b8;
  ulong local_1b0;
  undefined8 ***local_1a8;
  __shared_count *local_1a0;
  ulong local_198;
  undefined8 local_190;
  void *local_188;
  undefined8 ***local_180;
  undefined8 *local_178;
  code *local_170;
  undefined8 uStack_168;
  wchar_t awStack_d8 [26];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_190 = 0;
  local_188 = (void *)0x0;
  local_198 = 0;
  ios_base::getloc();
  p_Var3 = local_1a0;
  local_178 = &ctype<wchar_t>::id;
  uStack_168 = 0;
  local_170 = locale::id::__init;
  if (ctype<wchar_t>::id != -1) {
    local_1b8 = &local_178;
    local_180 = &local_1b8;
    __call_once((ulong *)&ctype<wchar_t>::id,&local_180,FUN_01208130);
  }
  lVar1 = *(long *)(p_Var3 + 0x10);
  if (((ulong)(*(long *)(p_Var3 + 0x18) - lVar1 >> 3) <= (long)DAT_01794320 - 1U) ||
     (plVar7 = *(long **)(lVar1 + ((long)DAT_01794320 - 1U) * 8), plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00cc7c00();
  }
  (**(code **)(*plVar7 + 0x60))(plVar7,"0123456789abcdefABCDEFxX+-pPiInN","pPiInN",awStack_d8);
  __shared_count::__release_shared(local_1a0);
  local_1b0 = 0;
  local_1a8 = (undefined8 ***)0x0;
  local_1b8 = (undefined8 **)0x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1b8,0x16,'\0');
  pppuVar11 = (undefined8 ***)((ulong)&local_1b8 | 1);
  local_1a0 = (__shared_count *)&local_178;
  pppuVar10 = pppuVar11;
  if (((ulong)local_1b8 & 1) != 0) {
    pppuVar10 = local_1a8;
  }
  local_1bc = 0;
  plVar7 = param_2;
  local_180 = pppuVar10;
  if (param_2 != (long *)0x0) goto LAB_011e24e0;
LAB_011e24f4:
  bVar4 = true;
  if (param_3 != (long *)0x0) goto LAB_011e2520;
  do {
    param_3 = (long *)0x0;
    if (bVar4) {
LAB_011e264c:
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1b8,(long)local_180 - (long)pppuVar10,'\0');
      if (((ulong)local_1b8 & 1) != 0) {
        pppuVar11 = local_1a8;
      }
      if (((DAT_017942d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_017942d8), iVar6 != 0)) {
        DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_017942d8);
      }
      iVar6 = __libcpp_sscanf_l((char *)pppuVar11,(__locale_t *)DAT_017942d0,"%p",param_6);
      if (iVar6 != 1) {
        *param_5 = 4;
      }
      if (param_2 == (long *)0x0) {
        bVar4 = true;
        if (param_3 == (long *)0x0) goto LAB_011e26cc;
LAB_011e26f4:
        if ((int *)param_3[3] == (int *)param_3[4]) {
          iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
        }
        else {
          iVar6 = *(int *)param_3[3];
        }
        if (bVar4 != (iVar6 == -1)) goto LAB_011e2734;
      }
      else {
        if ((int *)param_2[3] == (int *)param_2[4]) {
          iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        else {
          iVar6 = *(int *)param_2[3];
        }
        bVar4 = iVar6 == -1;
        plVar7 = (long *)0x0;
        if (!bVar4) {
          plVar7 = param_2;
        }
        param_2 = plVar7;
        if (param_3 != (long *)0x0) goto LAB_011e26f4;
LAB_011e26cc:
        if (!bVar4) goto LAB_011e2734;
      }
      *param_5 = *param_5 | 2;
LAB_011e2734:
      if (((ulong)local_1b8 & 1) != 0) {
        operator_delete(local_1a8);
      }
      if ((local_198 & 1) != 0) {
        operator_delete(local_188);
      }
      if (*(long *)(lVar2 + 0x28) == local_70) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    while( true ) {
      uVar9 = (ulong)local_1b8 >> 1 & 0x7f;
      uVar8 = uVar9;
      if (((ulong)local_1b8 & 1) != 0) {
        uVar8 = local_1b0;
      }
      if (local_180 == (undefined8 ***)((long)pppuVar10 + uVar8)) {
        if (((ulong)local_1b8 & 1) != 0) {
          uVar9 = local_1b0;
        }
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1b8,uVar9 << 1,'\0');
        if (((ulong)local_1b8 & 1) == 0) {
          uVar8 = 0x16;
        }
        else {
          uVar8 = ((ulong)local_1b8 & 0xfffffffffffffffe) - 1;
        }
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1b8,uVar8,'\0');
        pppuVar10 = pppuVar11;
        if (((ulong)local_1b8 & 1) != 0) {
          pppuVar10 = local_1a8;
        }
        local_180 = (undefined8 ***)((long)pppuVar10 + uVar9);
      }
      if ((wchar_t *)param_2[3] == (wchar_t *)param_2[4]) {
        wVar5 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      else {
        wVar5 = *(wchar_t *)param_2[3];
      }
      iVar6 = __num_get<wchar_t>::__stage2_int_loop
                        (wVar5,0x10,(char *)pppuVar10,(char **)&local_180,&local_1bc,L'\0',
                         (basic_string *)&local_198,(uint *)&local_178,(uint **)&local_1a0,
                         awStack_d8);
      if (iVar6 != 0) goto LAB_011e264c;
      if (param_2[3] == param_2[4]) {
        (**(code **)(*param_2 + 0x50))(param_2);
      }
      else {
        param_2[3] = param_2[3] + 4;
      }
      plVar7 = param_2;
      if (param_2 == (long *)0x0) goto LAB_011e24f4;
LAB_011e24e0:
      if ((int *)plVar7[3] == (int *)plVar7[4]) {
        iVar6 = (**(code **)(*plVar7 + 0x48))(plVar7);
      }
      else {
        iVar6 = *(int *)plVar7[3];
      }
      bVar4 = iVar6 == -1;
      param_2 = (long *)0x0;
      if (!bVar4) {
        param_2 = plVar7;
      }
      if (param_3 == (long *)0x0) break;
LAB_011e2520:
      if ((int *)param_3[3] == (int *)param_3[4]) {
        iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
      }
      else {
        iVar6 = *(int *)param_3[3];
      }
      if (iVar6 == -1) break;
      if (!bVar4) goto LAB_011e264c;
    }
  } while( true );
}

