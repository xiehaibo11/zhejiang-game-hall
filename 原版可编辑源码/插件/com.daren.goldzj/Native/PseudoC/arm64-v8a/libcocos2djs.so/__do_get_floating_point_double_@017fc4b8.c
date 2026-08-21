
/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >
   std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__do_get_floating_point<double>(std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, double&) const */

long * __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get_floating_point<double>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<char> *param_4,uint *param_5,
          undefined8 *param_6)

{
  byte *pbVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  byte *pbVar12;
  uint *puVar13;
  bool bVar14;
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  undefined8 uVar18;
  char local_184 [4];
  bool local_180 [4];
  uint local_17c;
  uint *local_178;
  char *local_170;
  ulong local_168;
  ulong local_160;
  char *local_158;
  basic_string local_150 [8];
  ulong local_148;
  byte *local_140;
  char local_138 [4];
  char local_134 [4];
  uint local_130 [40];
  ios_base aiStack_90 [48];
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  __num_get<char>::__stage2_float_prep(param_4,aiStack_90,local_134,local_138,(char *)param_5);
  local_168 = 0;
  local_160 = 0;
  local_158 = (char *)0x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_168,0x16,'\0');
  local_180[0] = true;
  pcVar17 = (char *)((ulong)&local_168 | 1);
  if ((local_168 & 1) != 0) {
    pcVar17 = local_158;
  }
  local_17c = 0;
  local_184[0] = 'E';
  local_178 = local_130;
  local_170 = pcVar17;
LAB_017fc574:
  plVar15 = param_2;
  if ((param_2 == (long *)0x0) || (param_2[3] != param_2[4])) {
    if (param_3 != (long *)0x0) goto LAB_017fc588;
LAB_017fc5d0:
    param_3 = (long *)0x0;
    if (plVar15 == (long *)0x0) goto LAB_017fc6c4;
  }
  else {
    iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    plVar15 = (long *)0x0;
    if (iVar4 != -1) {
      plVar15 = param_2;
    }
    if (param_3 == (long *)0x0) goto LAB_017fc5d0;
LAB_017fc588:
    if ((param_3[3] == param_3[4]) && (iVar4 = (**(code **)(*param_3 + 0x48))(param_3), iVar4 == -1)
       ) goto LAB_017fc5d0;
    if (plVar15 != (long *)0x0) goto LAB_017fc6c4;
  }
  uVar9 = local_168 >> 1 & 0x7f;
  uVar5 = uVar9;
  if ((local_168 & 1) != 0) {
    uVar5 = local_160;
  }
  if (local_170 == pcVar17 + uVar5) {
    if ((local_168 & 1) != 0) {
      uVar9 = local_160;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_168,uVar9 << 1,'\0');
    if ((local_168 & 1) == 0) {
      uVar5 = 0x16;
    }
    else {
      uVar5 = (local_168 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_168,uVar5,'\0');
    pcVar17 = (char *)((ulong)&local_168 | 1);
    if ((local_168 & 1) != 0) {
      pcVar17 = local_158;
    }
    local_170 = pcVar17 + uVar9;
  }
  if ((char *)plVar15[3] == (char *)plVar15[4]) {
    cVar3 = (**(code **)(*plVar15 + 0x48))(plVar15);
  }
  else {
    cVar3 = *(char *)plVar15[3];
  }
  iVar4 = __num_get<char>::__stage2_float_loop
                    (cVar3,local_180,local_184,pcVar17,&local_170,local_134[0],local_138[0],
                     local_150,local_130,&local_178,&local_17c,(char *)aiStack_90);
  if (iVar4 != 0) goto LAB_017fc6c4;
  param_2 = plVar15;
  if (plVar15[3] == plVar15[4]) {
    (**(code **)(*plVar15 + 0x50))(plVar15);
  }
  else {
    plVar15[3] = plVar15[3] + 1;
  }
  goto LAB_017fc574;
LAB_017fc6c4:
  uVar5 = (ulong)((byte)local_150[0] >> 1);
  if (((byte)local_150[0] & 1) != 0) {
    uVar5 = local_148;
  }
  if (((local_180[0] != false) && (uVar5 != 0)) && ((long)local_178 - (long)local_130 < 0xa0)) {
    *local_178 = local_17c;
    local_178 = local_178 + 1;
  }
  uVar18 = FUN_01829038(pcVar17,local_170,param_5);
  *param_6 = uVar18;
  uVar5 = (ulong)((byte)local_150[0] >> 1);
  if (((byte)local_150[0] & 1) != 0) {
    uVar5 = local_148;
  }
  if (uVar5 != 0) {
    puVar7 = local_178 + -1;
    if ((local_130 != local_178) && (local_130 < puVar7)) {
      puVar13 = local_130;
      puVar10 = puVar7;
      do {
        puVar13 = puVar13 + 1;
        uVar8 = puVar13[-1];
        puVar13[-1] = *puVar10;
        puVar11 = puVar10 + -1;
        *puVar10 = uVar8;
        puVar10 = puVar11;
      } while (puVar13 < puVar11);
    }
    pbVar1 = (byte *)((ulong)local_150 | 1);
    if (((byte)local_150[0] & 1) != 0) {
      pbVar1 = local_140;
    }
    uVar8 = (uint)*pbVar1;
    bVar14 = 1 < (byte)(*pbVar1 + 1);
    if (local_130 < puVar7) {
      puVar13 = local_130;
      pbVar12 = pbVar1;
      uVar5 = (ulong)((byte)local_150[0] >> 1);
      if (((byte)local_150[0] & 1) != 0) {
        uVar5 = local_148;
      }
      do {
        if ((bVar14) && (*puVar13 != uVar8)) goto LAB_017fc820;
        if (1 < (long)(pbVar1 + (uVar5 - (long)pbVar12))) {
          pbVar12 = pbVar12 + 1;
        }
        uVar8 = (uint)*pbVar12;
        puVar13 = puVar13 + 1;
        bVar14 = 1 < (uVar8 + 1 & 0xff);
      } while (puVar13 < puVar7);
    }
    if ((bVar14) && (uVar8 <= *puVar7 - 1)) {
LAB_017fc820:
      *param_5 = 4;
    }
  }
  plVar16 = plVar15;
  if ((plVar15 == (long *)0x0) || (plVar15[3] != plVar15[4])) {
    if (param_3 != (long *)0x0) goto LAB_017fc83c;
LAB_017fc8e8:
    if (plVar16 != (long *)0x0) goto LAB_017fc870;
  }
  else {
    iVar4 = (**(code **)(*plVar15 + 0x48))(plVar15);
    plVar16 = (long *)0x0;
    if (iVar4 != -1) {
      plVar16 = plVar15;
    }
    if (param_3 == (long *)0x0) goto LAB_017fc8e8;
LAB_017fc83c:
    if ((param_3[3] == param_3[4]) && (iVar4 = (**(code **)(*param_3 + 0x48))(param_3), iVar4 == -1)
       ) goto LAB_017fc8e8;
    if (plVar16 == (long *)0x0) goto LAB_017fc870;
  }
  *param_5 = *param_5 | 2;
LAB_017fc870:
  if ((local_168 & 1) != 0) {
    operator_delete(local_158);
  }
  if (((byte)local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return plVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

