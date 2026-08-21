
/* std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >
   std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >
   >::__do_get_signed<long>(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, long&) const */

long * __thiscall
std::__ndk1::
num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__do_get_signed<long>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<wchar_t> *param_4,uint *param_5,
          undefined8 *param_6)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  wchar_t wVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  char *pcVar11;
  uint local_1c4;
  uint *local_1c0;
  char *local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  char *local_1a0;
  basic_string local_198 [8];
  ulong local_190;
  void *local_188;
  wchar_t local_17c;
  uint local_178 [40];
  ios_base aiStack_d8 [104];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    iVar6 = 0;
  }
  else if (uVar1 == 0x40) {
    iVar6 = 8;
  }
  else if (uVar1 == 8) {
    iVar6 = 0x10;
  }
  else {
    iVar6 = 10;
  }
  __num_get<wchar_t>::__stage2_int_prep(param_4,aiStack_d8,&local_17c,(wchar_t *)param_4);
  local_1a8 = 0;
  local_1a0 = (char *)0x0;
  local_1b0 = 0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1b0,0x16,'\0');
  local_1c0 = local_178;
  pcVar11 = (char *)((ulong)&local_1b0 | 1);
  if ((local_1b0 & 1) != 0) {
    pcVar11 = local_1a0;
  }
  local_1c4 = 0;
  plVar10 = param_2;
  local_1b8 = pcVar11;
  if (param_2 != (long *)0x0) goto LAB_011e01a0;
LAB_011e01b4:
  bVar3 = true;
  if (param_3 != (long *)0x0) goto LAB_011e01e0;
  do {
    param_3 = (long *)0x0;
    if (bVar3) {
LAB_011e030c:
      uVar8 = (ulong)((byte)local_198[0] >> 1);
      if (((byte)local_198[0] & 1) != 0) {
        uVar8 = local_190;
      }
      if ((uVar8 != 0) && ((long)local_1c0 - (long)local_178 < 0xa0)) {
        *local_1c0 = local_1c4;
        local_1c0 = local_1c0 + 1;
      }
      uVar7 = FUN_01208584(pcVar11,local_1b8,param_5,iVar6);
      *param_6 = uVar7;
      __check_grouping(local_198,local_178,local_1c0,param_5);
      if (param_2 == (long *)0x0) {
        bVar3 = true;
        if (param_3 == (long *)0x0) goto LAB_011e0398;
LAB_011e03c0:
        if ((int *)param_3[3] == (int *)param_3[4]) {
          iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
        }
        else {
          iVar6 = *(int *)param_3[3];
        }
        if (bVar3 != (iVar6 == -1)) goto LAB_011e0400;
      }
      else {
        if ((int *)param_2[3] == (int *)param_2[4]) {
          iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        else {
          iVar6 = *(int *)param_2[3];
        }
        bVar3 = iVar6 == -1;
        plVar10 = (long *)0x0;
        if (!bVar3) {
          plVar10 = param_2;
        }
        param_2 = plVar10;
        if (param_3 != (long *)0x0) goto LAB_011e03c0;
LAB_011e0398:
        if (!bVar3) goto LAB_011e0400;
      }
      *param_5 = *param_5 | 2;
LAB_011e0400:
      if ((local_1b0 & 1) != 0) {
        operator_delete(local_1a0);
      }
      if (((byte)local_198[0] & 1) != 0) {
        operator_delete(local_188);
      }
      if (*(long *)(lVar2 + 0x28) == local_70) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    while( true ) {
      uVar9 = local_1b0 >> 1 & 0x7f;
      uVar8 = uVar9;
      if ((local_1b0 & 1) != 0) {
        uVar8 = local_1a8;
      }
      if (local_1b8 == pcVar11 + uVar8) {
        if ((local_1b0 & 1) != 0) {
          uVar9 = local_1a8;
        }
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1b0,uVar9 << 1,'\0');
        if ((local_1b0 & 1) == 0) {
          uVar8 = 0x16;
        }
        else {
          uVar8 = (local_1b0 & 0xfffffffffffffffe) - 1;
        }
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1b0,uVar8,'\0');
        pcVar11 = (char *)((ulong)&local_1b0 | 1);
        if ((local_1b0 & 1) != 0) {
          pcVar11 = local_1a0;
        }
        local_1b8 = pcVar11 + uVar9;
      }
      if ((wchar_t *)param_2[3] == (wchar_t *)param_2[4]) {
        wVar4 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      else {
        wVar4 = *(wchar_t *)param_2[3];
      }
      iVar5 = __num_get<wchar_t>::__stage2_int_loop
                        (wVar4,iVar6,pcVar11,&local_1b8,&local_1c4,local_17c,local_198,local_178,
                         &local_1c0,(wchar_t *)aiStack_d8);
      if (iVar5 != 0) goto LAB_011e030c;
      if (param_2[3] == param_2[4]) {
        (**(code **)(*param_2 + 0x50))(param_2);
      }
      else {
        param_2[3] = param_2[3] + 4;
      }
      plVar10 = param_2;
      if (param_2 == (long *)0x0) goto LAB_011e01b4;
LAB_011e01a0:
      if ((int *)plVar10[3] == (int *)plVar10[4]) {
        iVar5 = (**(code **)(*plVar10 + 0x48))(plVar10);
      }
      else {
        iVar5 = *(int *)plVar10[3];
      }
      bVar3 = iVar5 == -1;
      param_2 = (long *)0x0;
      if (!bVar3) {
        param_2 = plVar10;
      }
      if (param_3 == (long *)0x0) break;
LAB_011e01e0:
      if ((int *)param_3[3] == (int *)param_3[4]) {
        iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
      }
      else {
        iVar5 = *(int *)param_3[3];
      }
      if (iVar5 == -1) break;
      if (!bVar3) goto LAB_011e030c;
    }
  } while( true );
}

