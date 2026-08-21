
/* std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >
   std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__do_get_floating_point<long
   double>(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >,
   std::__ndk1::ios_base&, unsigned int&, long double&) const */

long * __thiscall
std::__ndk1::
num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__do_get_floating_point<long_double>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<wchar_t> *param_4,
          wchar_t *param_5,undefined1 (*param_6) [16])

{
  long lVar1;
  bool bVar2;
  wchar_t wVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  char *pcVar8;
  undefined1 auVar9 [16];
  char local_1e4 [4];
  bool local_1e0 [4];
  uint local_1dc;
  uint *local_1d8;
  char *local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  char *local_1b8;
  basic_string local_1b0 [8];
  ulong local_1a8;
  void *local_1a0;
  wchar_t local_198;
  wchar_t wStack_194;
  uint local_190 [40];
  ios_base aiStack_f0 [128];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  __num_get<wchar_t>::__stage2_float_prep(param_4,aiStack_f0,&wStack_194,&local_198,param_5);
  local_1c0 = 0;
  local_1b8 = (char *)0x0;
  local_1c8 = 0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1c8,0x16,'\0');
  local_1e0[0] = true;
  pcVar8 = (char *)((ulong)&local_1c8 | 1);
  if ((local_1c8 & 1) != 0) {
    pcVar8 = local_1b8;
  }
  local_1dc = 0;
  local_1e4[0] = 'E';
  plVar7 = param_2;
  local_1d8 = local_190;
  local_1d0 = pcVar8;
  if (param_2 != (long *)0x0) goto LAB_011e208c;
LAB_011e20a0:
  bVar2 = true;
  if (param_3 != (long *)0x0) goto LAB_011e20cc;
  do {
    param_3 = (long *)0x0;
    if (bVar2) {
LAB_011e21f8:
      uVar5 = (ulong)((byte)local_1b0[0] >> 1);
      if (((byte)local_1b0[0] & 1) != 0) {
        uVar5 = local_1a8;
      }
      if (((local_1e0[0] != false) && (uVar5 != 0)) && ((long)local_1d8 - (long)local_190 < 0xa0)) {
        *local_1d8 = local_1dc;
        local_1d8 = local_1d8 + 1;
      }
      auVar9 = FUN_01208f8c(pcVar8,local_1d0,param_5);
      *param_6 = auVar9;
      __check_grouping(local_1b0,local_190,local_1d8,(uint *)param_5);
      if (param_2 == (long *)0x0) {
        bVar2 = true;
        if (param_3 == (long *)0x0) goto LAB_011e2288;
LAB_011e22b4:
        if ((int *)param_3[3] == (int *)param_3[4]) {
          iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
        }
        else {
          iVar4 = *(int *)param_3[3];
        }
        if (bVar2 != (iVar4 == -1)) goto LAB_011e22f8;
      }
      else {
        if ((int *)param_2[3] == (int *)param_2[4]) {
          iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        else {
          iVar4 = *(int *)param_2[3];
        }
        bVar2 = iVar4 == -1;
        plVar7 = (long *)0x0;
        if (!bVar2) {
          plVar7 = param_2;
        }
        param_2 = plVar7;
        if (param_3 != (long *)0x0) goto LAB_011e22b4;
LAB_011e2288:
        if (!bVar2) goto LAB_011e22f8;
      }
      *param_5 = *param_5 | 2;
LAB_011e22f8:
      if ((local_1c8 & 1) != 0) {
        operator_delete(local_1b8);
      }
      if (((byte)local_1b0[0] & 1) != 0) {
        operator_delete(local_1a0);
      }
      if (*(long *)(lVar1 + 0x28) == local_70) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    while( true ) {
      uVar6 = local_1c8 >> 1 & 0x7f;
      uVar5 = uVar6;
      if ((local_1c8 & 1) != 0) {
        uVar5 = local_1c0;
      }
      if (local_1d0 == pcVar8 + uVar5) {
        if ((local_1c8 & 1) != 0) {
          uVar6 = local_1c0;
        }
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1c8,uVar6 << 1,'\0');
        if ((local_1c8 & 1) == 0) {
          uVar5 = 0x16;
        }
        else {
          uVar5 = (local_1c8 & 0xfffffffffffffffe) - 1;
        }
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1c8,uVar5,'\0');
        pcVar8 = (char *)((ulong)&local_1c8 | 1);
        if ((local_1c8 & 1) != 0) {
          pcVar8 = local_1b8;
        }
        local_1d0 = pcVar8 + uVar6;
      }
      if ((wchar_t *)param_2[3] == (wchar_t *)param_2[4]) {
        wVar3 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      else {
        wVar3 = *(wchar_t *)param_2[3];
      }
      iVar4 = __num_get<wchar_t>::__stage2_float_loop
                        (wVar3,local_1e0,local_1e4,pcVar8,&local_1d0,wStack_194,local_198,local_1b0,
                         local_190,&local_1d8,&local_1dc,(wchar_t *)aiStack_f0);
      if (iVar4 != 0) goto LAB_011e21f8;
      if (param_2[3] == param_2[4]) {
        (**(code **)(*param_2 + 0x50))(param_2);
      }
      else {
        param_2[3] = param_2[3] + 4;
      }
      plVar7 = param_2;
      if (param_2 == (long *)0x0) goto LAB_011e20a0;
LAB_011e208c:
      if ((int *)plVar7[3] == (int *)plVar7[4]) {
        iVar4 = (**(code **)(*plVar7 + 0x48))(plVar7);
      }
      else {
        iVar4 = *(int *)plVar7[3];
      }
      bVar2 = iVar4 == -1;
      param_2 = (long *)0x0;
      if (!bVar2) {
        param_2 = plVar7;
      }
      if (param_3 == (long *)0x0) break;
LAB_011e20cc:
      if ((int *)param_3[3] == (int *)param_3[4]) {
        iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
      }
      else {
        iVar4 = *(int *)param_3[3];
      }
      if (iVar4 == -1) break;
      if (!bVar2) goto LAB_011e21f8;
    }
  } while( true );
}

