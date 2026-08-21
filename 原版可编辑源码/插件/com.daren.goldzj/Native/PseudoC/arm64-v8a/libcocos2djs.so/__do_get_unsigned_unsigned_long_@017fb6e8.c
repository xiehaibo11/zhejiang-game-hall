
/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >
   std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__do_get_unsigned<unsigned long>(std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, unsigned long&) const */

long * __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get_unsigned<unsigned_long>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<char> *param_4,uint *param_5,
          undefined8 *param_6)

{
  byte *pbVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  byte *pbVar14;
  uint *puVar15;
  bool bVar16;
  long *plVar17;
  long *plVar18;
  char *pcVar19;
  uint local_174;
  uint *local_170;
  char *local_168;
  ulong local_160;
  ulong local_158;
  char *local_150;
  basic_string local_148 [8];
  ulong local_140;
  byte *local_138;
  char local_130 [4];
  uint local_12c [40];
  ios_base aiStack_8c [44];
  
  lVar2 = tpidr_el0;
  lVar8 = *(long *)(lVar2 + 0x28);
  uVar10 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar10 == 0) {
    iVar5 = 0;
  }
  else if (uVar10 == 0x40) {
    iVar5 = 8;
  }
  else if (uVar10 == 8) {
    iVar5 = 0x10;
  }
  else {
    iVar5 = 10;
  }
  __num_get<char>::__stage2_int_prep(param_4,aiStack_8c,local_130,(char *)param_4);
  local_160 = 0;
  local_158 = 0;
  local_150 = (char *)0x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_160,0x16,'\0');
  local_170 = local_12c;
  pcVar19 = (char *)((ulong)&local_160 | 1);
  if ((local_160 & 1) != 0) {
    pcVar19 = local_150;
  }
  local_174 = 0;
  local_168 = pcVar19;
LAB_017fb7cc:
  plVar17 = param_2;
  if ((param_2 == (long *)0x0) || (param_2[3] != param_2[4])) {
    if (param_3 != (long *)0x0) goto LAB_017fb7e0;
LAB_017fb828:
    param_3 = (long *)0x0;
    if (plVar17 == (long *)0x0) goto LAB_017fb918;
  }
  else {
    iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    plVar17 = (long *)0x0;
    if (iVar4 != -1) {
      plVar17 = param_2;
    }
    if (param_3 == (long *)0x0) goto LAB_017fb828;
LAB_017fb7e0:
    if ((param_3[3] == param_3[4]) && (iVar4 = (**(code **)(*param_3 + 0x48))(param_3), iVar4 == -1)
       ) goto LAB_017fb828;
    if (plVar17 != (long *)0x0) goto LAB_017fb918;
  }
  uVar11 = local_160 >> 1 & 0x7f;
  uVar7 = uVar11;
  if ((local_160 & 1) != 0) {
    uVar7 = local_158;
  }
  if (local_168 == pcVar19 + uVar7) {
    if ((local_160 & 1) != 0) {
      uVar11 = local_158;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_160,uVar11 << 1,'\0');
    if ((local_160 & 1) == 0) {
      uVar7 = 0x16;
    }
    else {
      uVar7 = (local_160 & 0xfffffffffffffffe) - 1;
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_160,uVar7,'\0');
    pcVar19 = (char *)((ulong)&local_160 | 1);
    if ((local_160 & 1) != 0) {
      pcVar19 = local_150;
    }
    local_168 = pcVar19 + uVar11;
  }
  if ((char *)plVar17[3] == (char *)plVar17[4]) {
    cVar3 = (**(code **)(*plVar17 + 0x48))(plVar17);
  }
  else {
    cVar3 = *(char *)plVar17[3];
  }
  iVar4 = __num_get<char>::__stage2_int_loop
                    (cVar3,iVar5,pcVar19,&local_168,&local_174,local_130[0],local_148,local_12c,
                     &local_170,(char *)aiStack_8c);
  if (iVar4 != 0) goto LAB_017fb918;
  param_2 = plVar17;
  if (plVar17[3] == plVar17[4]) {
    (**(code **)(*plVar17 + 0x50))(plVar17);
  }
  else {
    plVar17[3] = plVar17[3] + 1;
  }
  goto LAB_017fb7cc;
LAB_017fb918:
  uVar7 = (ulong)((byte)local_148[0] >> 1);
  if (((byte)local_148[0] & 1) != 0) {
    uVar7 = local_140;
  }
  if ((uVar7 != 0) && ((long)local_170 - (long)local_12c < 0xa0)) {
    *local_170 = local_174;
    local_170 = local_170 + 1;
  }
  uVar6 = FUN_01828c58(pcVar19,local_168,param_5,iVar5);
  *param_6 = uVar6;
  uVar7 = (ulong)((byte)local_148[0] >> 1);
  if (((byte)local_148[0] & 1) != 0) {
    uVar7 = local_140;
  }
  if (uVar7 != 0) {
    puVar9 = local_170 + -1;
    if ((local_12c != local_170) && (local_12c < puVar9)) {
      puVar15 = local_12c;
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
    pbVar1 = (byte *)((ulong)local_148 | 1);
    if (((byte)local_148[0] & 1) != 0) {
      pbVar1 = local_138;
    }
    uVar10 = (uint)*pbVar1;
    bVar16 = 1 < (byte)(*pbVar1 + 1);
    if (local_12c < puVar9) {
      puVar15 = local_12c;
      pbVar14 = pbVar1;
      uVar7 = (ulong)((byte)local_148[0] >> 1);
      if (((byte)local_148[0] & 1) != 0) {
        uVar7 = local_140;
      }
      do {
        if ((bVar16) && (*puVar15 != uVar10)) goto LAB_017fba6c;
        if (1 < (long)(pbVar1 + (uVar7 - (long)pbVar14))) {
          pbVar14 = pbVar14 + 1;
        }
        uVar10 = (uint)*pbVar14;
        puVar15 = puVar15 + 1;
        bVar16 = 1 < (uVar10 + 1 & 0xff);
      } while (puVar15 < puVar9);
    }
    if ((bVar16) && (uVar10 <= *puVar9 - 1)) {
LAB_017fba6c:
      *param_5 = 4;
    }
  }
  plVar18 = plVar17;
  if ((plVar17 == (long *)0x0) || (plVar17[3] != plVar17[4])) {
    if (param_3 != (long *)0x0) goto LAB_017fba88;
LAB_017fbb34:
    if (plVar18 != (long *)0x0) goto LAB_017fbabc;
  }
  else {
    iVar5 = (**(code **)(*plVar17 + 0x48))(plVar17);
    plVar18 = (long *)0x0;
    if (iVar5 != -1) {
      plVar18 = plVar17;
    }
    if (param_3 == (long *)0x0) goto LAB_017fbb34;
LAB_017fba88:
    if ((param_3[3] == param_3[4]) && (iVar5 = (**(code **)(*param_3 + 0x48))(param_3), iVar5 == -1)
       ) goto LAB_017fbb34;
    if (plVar18 == (long *)0x0) goto LAB_017fbabc;
  }
  *param_5 = *param_5 | 2;
LAB_017fbabc:
  if ((local_160 & 1) != 0) {
    operator_delete(local_150);
  }
  if (((byte)local_148[0] & 1) != 0) {
    operator_delete(local_138);
  }
  if (*(long *)(lVar2 + 0x28) == lVar8) {
    return plVar18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

