
/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >
   std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__do_get_unsigned<unsigned
   long>(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >,
   std::__ndk1::ios_base&, unsigned int&, unsigned long&) const */

long * __thiscall
std::__ndk1::
num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__do_get_unsigned<unsigned_long>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<wchar_t> *param_4,uint *param_5,
          undefined8 *param_6)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  wchar_t wVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  byte *pbVar16;
  uint *puVar17;
  char *pcVar18;
  uint local_1c4;
  uint *local_1c0;
  char *local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  char *local_1a0;
  basic_string local_198 [8];
  ulong local_190;
  byte *local_188;
  wchar_t local_17c;
  uint local_178 [40];
  ios_base aiStack_d8 [120];
  
  lVar3 = tpidr_el0;
  lVar10 = *(long *)(lVar3 + 0x28);
  uVar12 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar12 == 0) {
    iVar7 = 0;
  }
  else if (uVar12 == 0x40) {
    iVar7 = 8;
  }
  else if (uVar12 == 8) {
    iVar7 = 0x10;
  }
  else {
    iVar7 = 10;
  }
  __num_get<wchar_t>::__stage2_int_prep(param_4,aiStack_d8,&local_17c,(wchar_t *)param_4);
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = (char *)0x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1b0,0x16,'\0');
  local_1c0 = local_178;
  pcVar18 = (char *)((ulong)&local_1b0 | 1);
  if ((local_1b0 & 1) != 0) {
    pcVar18 = local_1a0;
  }
  local_1c4 = 0;
  local_1b8 = pcVar18;
LAB_017ff1f8:
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_017ff23c;
LAB_017ff278:
    param_3 = (long *)0x0;
    if (bVar4) goto LAB_017ff368;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar6 = *(int *)param_2[3];
    }
    bVar4 = iVar6 == -1;
    plVar2 = (long *)0x0;
    if (!bVar4) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_017ff278;
LAB_017ff23c:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar6 = *(int *)param_3[3];
    }
    if (iVar6 == -1) goto LAB_017ff278;
    if (!bVar4) goto LAB_017ff368;
  }
  uVar13 = local_1b0 >> 1 & 0x7f;
  uVar9 = uVar13;
  if ((local_1b0 & 1) != 0) {
    uVar9 = local_1a8;
  }
  if (local_1b8 == pcVar18 + uVar9) {
    if ((local_1b0 & 1) != 0) {
      uVar13 = local_1a8;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1b0,uVar13 << 1,'\0');
    if ((local_1b0 & 1) == 0) {
      uVar9 = 0x16;
    }
    else {
      uVar9 = (local_1b0 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1b0,uVar9,'\0');
    pcVar18 = (char *)((ulong)&local_1b0 | 1);
    if ((local_1b0 & 1) != 0) {
      pcVar18 = local_1a0;
    }
    local_1b8 = pcVar18 + uVar13;
  }
  if ((wchar_t *)param_2[3] == (wchar_t *)param_2[4]) {
    wVar5 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    wVar5 = *(wchar_t *)param_2[3];
  }
  iVar6 = __num_get<wchar_t>::__stage2_int_loop
                    (wVar5,iVar7,pcVar18,&local_1b8,&local_1c4,local_17c,local_198,local_178,
                     &local_1c0,(wchar_t *)aiStack_d8);
  if (iVar6 != 0) goto LAB_017ff368;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_017ff1f8;
LAB_017ff368:
  uVar9 = (ulong)((byte)local_198[0] >> 1);
  if (((byte)local_198[0] & 1) != 0) {
    uVar9 = local_190;
  }
  if ((uVar9 != 0) && ((long)local_1c0 - (long)local_178 < 0xa0)) {
    *local_1c0 = local_1c4;
    local_1c0 = local_1c0 + 1;
  }
  uVar8 = FUN_01828c58(pcVar18,local_1b8,param_5,iVar7);
  *param_6 = uVar8;
  uVar9 = (ulong)((byte)local_198[0] >> 1);
  if (((byte)local_198[0] & 1) != 0) {
    uVar9 = local_190;
  }
  if (uVar9 != 0) {
    puVar11 = local_1c0 + -1;
    if ((local_178 != local_1c0) && (local_178 < puVar11)) {
      puVar17 = local_178;
      puVar14 = puVar11;
      do {
        puVar17 = puVar17 + 1;
        uVar12 = puVar17[-1];
        puVar17[-1] = *puVar14;
        puVar15 = puVar14 + -1;
        *puVar14 = uVar12;
        puVar14 = puVar15;
      } while (puVar17 < puVar15);
    }
    pbVar1 = (byte *)((ulong)local_198 | 1);
    if (((byte)local_198[0] & 1) != 0) {
      pbVar1 = local_188;
    }
    uVar12 = (uint)*pbVar1;
    bVar4 = 1 < (byte)(*pbVar1 + 1);
    if (local_178 < puVar11) {
      puVar17 = local_178;
      pbVar16 = pbVar1;
      uVar9 = (ulong)((byte)local_198[0] >> 1);
      if (((byte)local_198[0] & 1) != 0) {
        uVar9 = local_190;
      }
      do {
        if ((bVar4) && (*puVar17 != uVar12)) goto LAB_017ff4bc;
        if (1 < (long)(pbVar1 + (uVar9 - (long)pbVar16))) {
          pbVar16 = pbVar16 + 1;
        }
        uVar12 = (uint)*pbVar16;
        puVar17 = puVar17 + 1;
        bVar4 = 1 < (uVar12 + 1 & 0xff);
      } while (puVar17 < puVar11);
    }
    if ((bVar4) && (uVar12 <= *puVar11 - 1)) {
LAB_017ff4bc:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_017ff510;
LAB_017ff4e4:
    if (!bVar4) goto LAB_017ff554;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar4 = iVar7 == -1;
    plVar2 = (long *)0x0;
    if (!bVar4) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_017ff4e4;
LAB_017ff510:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (bVar4 != (iVar7 == -1)) goto LAB_017ff554;
  }
  *param_5 = *param_5 | 2;
LAB_017ff554:
  if ((local_1b0 & 1) != 0) {
    operator_delete(local_1a0);
  }
  if (((byte)local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  if (*(long *)(lVar3 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}

