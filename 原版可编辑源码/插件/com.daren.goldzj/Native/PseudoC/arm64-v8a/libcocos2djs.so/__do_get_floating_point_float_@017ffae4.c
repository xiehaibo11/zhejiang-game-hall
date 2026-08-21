
/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >
   std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >
   >::__do_get_floating_point<float>(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, float&) const */

long * __thiscall
std::__ndk1::
num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__do_get_floating_point<float>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<wchar_t> *param_4,
          wchar_t *param_5,undefined4 *param_6)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  wchar_t wVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  byte *pbVar14;
  uint *puVar15;
  char *pcVar16;
  undefined4 uVar17;
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
  byte *local_1a0;
  wchar_t local_198;
  wchar_t wStack_194;
  uint local_190 [40];
  ios_base aiStack_f0 [144];
  
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
  __num_get<wchar_t>::__stage2_float_prep(param_4,aiStack_f0,&wStack_194,&local_198,param_5);
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = (char *)0x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1c8,0x16,'\0');
  local_1e0[0] = true;
  pcVar16 = (char *)((ulong)&local_1c8 | 1);
  if ((local_1c8 & 1) != 0) {
    pcVar16 = local_1b8;
  }
  local_1dc = 0;
  local_1e4[0] = 'E';
  local_1d8 = local_190;
  local_1d0 = pcVar16;
LAB_017ffba0:
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_017ffbe4;
LAB_017ffc20:
    param_3 = (long *)0x0;
    if (bVar4) goto LAB_017ffd10;
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
    if (param_3 == (long *)0x0) goto LAB_017ffc20;
LAB_017ffbe4:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar6 = *(int *)param_3[3];
    }
    if (iVar6 == -1) goto LAB_017ffc20;
    if (!bVar4) goto LAB_017ffd10;
  }
  uVar11 = local_1c8 >> 1 & 0x7f;
  uVar7 = uVar11;
  if ((local_1c8 & 1) != 0) {
    uVar7 = local_1c0;
  }
  if (local_1d0 == pcVar16 + uVar7) {
    if ((local_1c8 & 1) != 0) {
      uVar11 = local_1c0;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1c8,uVar11 << 1,'\0');
    if ((local_1c8 & 1) == 0) {
      uVar7 = 0x16;
    }
    else {
      uVar7 = (local_1c8 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1c8,uVar7,'\0');
    pcVar16 = (char *)((ulong)&local_1c8 | 1);
    if ((local_1c8 & 1) != 0) {
      pcVar16 = local_1b8;
    }
    local_1d0 = pcVar16 + uVar11;
  }
  if ((wchar_t *)param_2[3] == (wchar_t *)param_2[4]) {
    wVar5 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    wVar5 = *(wchar_t *)param_2[3];
  }
  iVar6 = __num_get<wchar_t>::__stage2_float_loop
                    (wVar5,local_1e0,local_1e4,pcVar16,&local_1d0,wStack_194,local_198,local_1b0,
                     local_190,&local_1d8,&local_1dc,(wchar_t *)aiStack_f0);
  if (iVar6 != 0) goto LAB_017ffd10;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_017ffba0;
LAB_017ffd10:
  uVar7 = (ulong)((byte)local_1b0[0] >> 1);
  if (((byte)local_1b0[0] & 1) != 0) {
    uVar7 = local_1a8;
  }
  if (((local_1e0[0] != false) && (uVar7 != 0)) && ((long)local_1d8 - (long)local_190 < 0xa0)) {
    *local_1d8 = local_1dc;
    local_1d8 = local_1d8 + 1;
  }
  uVar17 = FUN_01828f10(pcVar16,local_1d0,param_5);
  *param_6 = uVar17;
  uVar7 = (ulong)((byte)local_1b0[0] >> 1);
  if (((byte)local_1b0[0] & 1) != 0) {
    uVar7 = local_1a8;
  }
  if (uVar7 != 0) {
    puVar9 = local_1d8 + -1;
    if ((local_190 != local_1d8) && (local_190 < puVar9)) {
      puVar15 = local_190;
      puVar12 = puVar9;
      do {
        puVar15 = puVar15 + 1;
        uVar10 = puVar15[-1];
        puVar15[-1] = *puVar12;
        puVar13 = puVar12 + -1;
        *puVar12 = uVar10;
        puVar12 = puVar13;
      } while (puVar15 < puVar13);
    }
    pbVar1 = (byte *)((ulong)local_1b0 | 1);
    if (((byte)local_1b0[0] & 1) != 0) {
      pbVar1 = local_1a0;
    }
    uVar10 = (uint)*pbVar1;
    bVar4 = 1 < (byte)(*pbVar1 + 1);
    if (local_190 < puVar9) {
      puVar15 = local_190;
      pbVar14 = pbVar1;
      uVar7 = (ulong)((byte)local_1b0[0] >> 1);
      if (((byte)local_1b0[0] & 1) != 0) {
        uVar7 = local_1a8;
      }
      do {
        if ((bVar4) && (*puVar15 != uVar10)) goto LAB_017ffe6c;
        if (1 < (long)(pbVar1 + (uVar7 - (long)pbVar14))) {
          pbVar14 = pbVar14 + 1;
        }
        uVar10 = (uint)*pbVar14;
        puVar15 = puVar15 + 1;
        bVar4 = 1 < (uVar10 + 1 & 0xff);
      } while (puVar15 < puVar9);
    }
    if ((bVar4) && (uVar10 <= *puVar9 - 1)) {
LAB_017ffe6c:
      *param_5 = L'\x04';
    }
  }
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_017ffec0;
LAB_017ffe94:
    if (!bVar4) goto LAB_017fff04;
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
    if (param_3 == (long *)0x0) goto LAB_017ffe94;
LAB_017ffec0:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar6 = *(int *)param_3[3];
    }
    if (bVar4 != (iVar6 == -1)) goto LAB_017fff04;
  }
  *param_5 = *param_5 | 2;
LAB_017fff04:
  if ((local_1c8 & 1) != 0) {
    operator_delete(local_1b8);
  }
  if (((byte)local_1b0[0] & 1) != 0) {
    operator_delete(local_1a0);
  }
  if (*(long *)(lVar3 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}

