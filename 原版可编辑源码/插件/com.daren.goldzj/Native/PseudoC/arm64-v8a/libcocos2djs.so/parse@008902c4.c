
/* CSSColorParser::parse(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

ulong CSSColorParser::parse(basic_string *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  size_t __n;
  byte *pbVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  size_t sVar8;
  void *pvVar9;
  void *pvVar10;
  longlong lVar11;
  char cVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  byte *pbVar17;
  ulong uVar18;
  uint uVar19;
  byte bVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  uint uVar24;
  char *__s;
  int *piVar25;
  uint uVar26;
  uint *puVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  ulong local_f8;
  ulong local_f0;
  void *local_e8;
  byte *local_e0;
  byte *local_d8;
  undefined8 local_c8;
  ulong local_c0;
  int *local_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  char *local_a0;
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  uStack_a8 = 0;
  local_a0 = (char *)0x0;
  local_b0 = 0;
  if (((byte)*param_1 & 1) == 0) {
    local_a0 = *(char **)(param_1 + 0x10);
    uStack_a8 = *(ulong *)(param_1 + 8);
    local_b0 = *(ulong *)param_1;
  }
  else {
    uVar18 = *(ulong *)(param_1 + 8);
    if (0xffffffffffffffef < uVar18) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar9 = *(void **)(param_1 + 0x10);
    if (uVar18 < 0x17) {
      pcVar22 = (char *)((ulong)&local_b0 | 1);
      local_b0 = (ulong)(byte)((int)uVar18 << 1);
      if (uVar18 != 0) goto LAB_00890370;
    }
    else {
      uVar7 = uVar18 + 0x10 & 0xfffffffffffffff0;
      pcVar22 = operator_new(uVar7);
      local_b0 = uVar7 | 1;
      uStack_a8 = uVar18;
      local_a0 = pcVar22;
LAB_00890370:
      memcpy(pcVar22,pvVar9,uVar18);
    }
    pcVar22[uVar18] = '\0';
  }
  __s = (char *)((ulong)&local_b0 | 1);
  uVar18 = local_b0 >> 1 & 0x7f;
  pcVar22 = __s;
  if ((local_b0 & 1) != 0) {
    uVar18 = uStack_a8;
    pcVar22 = local_a0;
  }
  pcVar23 = pcVar22 + uVar18;
  if (uVar18 != 0) {
    cVar12 = *pcVar22;
    while (cVar12 != ' ') {
      uVar18 = uVar18 - 1;
      pcVar21 = pcVar23;
      if (uVar18 == 0) goto joined_r0x00890430;
      pcVar21 = pcVar22 + 1;
      pcVar22 = pcVar22 + 1;
      cVar12 = *pcVar21;
    }
  }
  pcVar21 = pcVar22;
  if (pcVar22 != pcVar23) {
    while (pcVar22 = pcVar22 + 1, pcVar22 != pcVar23) {
      if (*pcVar22 != ' ') {
        *pcVar21 = *pcVar22;
        pcVar21 = pcVar21 + 1;
      }
    }
  }
joined_r0x00890430:
  if ((local_b0 & 1) == 0) {
    uVar18 = (local_b0 & 0xff) >> 1;
    pcVar22 = (char *)((long)&local_b0 + uVar18 + 1);
    pcVar23 = __s;
  }
  else {
    pcVar22 = local_a0 + uStack_a8;
    pcVar23 = local_a0;
    uVar18 = uStack_a8;
  }
  uVar13 = local_b0 & 0xff;
  uVar16 = (long)pcVar21 - (long)pcVar23;
  uVar7 = uVar18 - uVar16;
  if (uVar18 < uVar16) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  uVar15 = (long)pcVar22 - (long)pcVar21;
  if (uVar15 != 0) {
    pcVar22 = __s;
    if ((local_b0 & 1) != 0) {
      pcVar22 = local_a0;
    }
    uVar2 = uVar7;
    if (uVar15 <= uVar7) {
      uVar2 = uVar15;
    }
    if (uVar7 - uVar2 != 0) {
      memmove(pcVar22 + uVar16,pcVar22 + uVar16 + uVar2,uVar7 - uVar2);
      uVar13 = local_b0 & 0xff;
    }
    uVar18 = uVar18 - uVar2;
    uVar7 = uVar18;
    if ((uVar13 & 1) == 0) {
      local_b0 = CONCAT71(local_b0._1_7_,(char)((int)uVar18 << 1));
      uVar7 = uStack_a8;
    }
    uStack_a8 = uVar7;
    pcVar22[uVar18] = '\0';
    uVar13 = local_b0 & 0xff;
  }
  if ((uVar13 & 1) == 0) {
    pcVar22 = (char *)((long)&local_b0 + (uVar13 >> 1) + 1);
    pcVar23 = __s;
    if (__s != pcVar22) {
LAB_008904d0:
      do {
        iVar6 = tolower((int)*pcVar23);
        pcVar21 = pcVar23 + 1;
        *pcVar23 = (char)iVar6;
        pcVar23 = pcVar21;
      } while (pcVar22 != pcVar21);
    }
  }
  else {
    pcVar22 = local_a0 + uStack_a8;
    pcVar23 = local_a0;
    if (local_a0 != pcVar22) goto LAB_008904d0;
  }
  uVar7 = uStack_a8;
  uVar18 = local_b0;
  lVar14 = DAT_01d36d08 - DAT_01d36d00;
  if (lVar14 == 0) {
    uVar16 = (ulong)((byte)local_b0 >> 1);
  }
  else {
    uVar16 = (ulong)((byte)local_b0 >> 1);
    uVar13 = 0;
    pcVar22 = __s;
    __n = uVar16;
    if ((local_b0 & 1) != 0) {
      pcVar22 = local_a0;
      __n = uStack_a8;
    }
    puVar27 = (uint *)(DAT_01d36d00 + 0xc);
    do {
      pcVar23 = *(char **)(puVar27 + -3);
      sVar8 = strlen(pcVar23);
      if (sVar8 == __n) {
        if (__n != 0) {
          if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          iVar6 = memcmp(pcVar22,pcVar23,__n);
          if (iVar6 != 0) goto LAB_00890618;
        }
        uVar24 = puVar27[-1];
        uVar18 = (ulong)*puVar27;
        uVar26 = uVar24 >> 8;
        uVar19 = uVar24 >> 0x10;
        uVar1 = uVar24 & 0xff000000;
        goto joined_r0x00890648;
      }
LAB_00890618:
      uVar13 = uVar13 + 1;
      puVar27 = puVar27 + 4;
    } while (uVar13 < (ulong)(lVar14 >> 4));
  }
  if ((uVar18 & 1) != 0) {
    uVar16 = uVar7;
  }
  if (uVar16 == 0) goto LAB_00890d40;
  if ((uVar18 & 1) != 0) {
    __s = local_a0;
  }
  if (*__s != '#') {
    pvVar9 = memchr(__s,0x28,uVar16);
    uVar7 = (long)pvVar9 - (long)__s;
    uVar18 = uVar16;
    pvVar10 = memchr(__s,0x29,uVar16);
    cVar12 = (char)uVar18;
    lVar14 = (long)pvVar10 - (long)__s;
    uVar24 = 0;
    if (pvVar10 == (void *)0x0) {
      lVar14 = -1;
    }
    uVar18 = 0x3f800000;
    if ((uVar7 == 0xffffffffffffffff) || (pvVar9 == (void *)0x0)) {
      uVar26 = 0;
      uVar19 = 0;
      goto joined_r0x0089074c;
    }
    if (lVar14 + 1U != uVar16) goto LAB_00890d40;
    uVar18 = uVar16;
    if (uVar7 <= uVar16) {
      uVar18 = uVar7;
    }
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = (int *)0x0;
    if (0xffffffffffffffef < uVar18) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar18 < 0x17) {
      piVar25 = (int *)((ulong)&local_c8 | 1);
      local_c8 = (ulong)(byte)((int)uVar18 << 1);
      if (uVar18 != 0) goto LAB_0089078c;
    }
    else {
      uVar13 = uVar18 + 0x10 & 0xfffffffffffffff0;
      piVar25 = operator_new(uVar13);
      local_c8 = uVar13 | 1;
      local_c0 = uVar18;
      local_b8 = piVar25;
LAB_0089078c:
      uVar13 = uVar18;
      memcpy(piVar25,__s,uVar18);
      cVar12 = (char)uVar13;
    }
    uVar7 = uVar7 + 1;
    *(undefined1 *)((long)piVar25 + uVar18) = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = (void *)0x0;
    if (uVar16 < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
    uVar18 = uVar16 - uVar7;
    if (lVar14 - uVar7 <= uVar16 - uVar7) {
      uVar18 = lVar14 - uVar7;
    }
    if (0xffffffffffffffef < uVar18) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar18 < 0x17) {
      pvVar9 = (void *)((ulong)&local_f8 | 1);
      local_f8 = (ulong)(byte)((int)uVar18 << 1);
      if (uVar18 != 0) goto LAB_00890808;
    }
    else {
      uVar13 = uVar18 + 0x10 & 0xfffffffffffffff0;
      pvVar9 = operator_new(uVar13);
      local_f8 = uVar13 | 1;
      local_f0 = uVar18;
      local_e8 = pvVar9;
LAB_00890808:
      uVar13 = uVar18;
      memcpy(pvVar9,__s + uVar7,uVar18);
      cVar12 = (char)uVar13;
    }
    *(undefined1 *)((long)pvVar9 + uVar18) = 0;
    split((CSSColorParser *)&local_f8,(basic_string *)0x2c,cVar12);
    if ((local_f8 & 1) != 0) {
      operator_delete(local_e8);
    }
    pbVar17 = local_e0;
    uVar18 = (ulong)((byte)local_c8 >> 1);
    if ((local_c8 & 1) != 0) {
      uVar18 = local_c0;
    }
    uVar7 = local_c8 & 1;
    bVar20 = (byte)local_c8 & 1;
    if (uVar18 != 4) {
      if (uVar18 == 3) {
        piVar25 = (int *)((ulong)&local_c8 | 1);
        if ((local_c8 & 1) != 0) {
          piVar25 = local_b8;
        }
        iVar6 = memcmp(piVar25,&DAT_01854acc,3);
        if (iVar6 == 0) {
          lVar14 = (long)local_d8 - (long)local_e0;
          goto LAB_00890a34;
        }
        piVar25 = (int *)((ulong)&local_c8 | 1);
        if (uVar7 != 0) {
          piVar25 = local_b8;
        }
        iVar6 = memcmp(piVar25,&DAT_01854ad5,3);
        if (iVar6 == 0) {
          lVar14 = (long)local_d8 - (long)local_e0;
          goto LAB_00890c6c;
        }
      }
LAB_00890978:
      pbVar17 = local_e0;
      if (local_e0 != (byte *)0x0) {
        while (pbVar4 = local_d8, pbVar4 != pbVar17) {
          local_d8 = pbVar4 + -0x18;
          if ((*local_d8 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
        }
        goto LAB_00890d10;
      }
LAB_00890d20:
      if (bVar20 != 0) {
        operator_delete(local_b8);
      }
      goto LAB_00890d40;
    }
    piVar25 = (int *)((ulong)&local_c8 | 1);
    if ((local_c8 & 1) != 0) {
      piVar25 = local_b8;
    }
    if (*piVar25 == 0x61626772) {
      lVar14 = (long)local_d8 - (long)local_e0;
      if (*piVar25 != 0x61626772) {
LAB_00890a34:
        pbVar17 = local_e0;
        if (lVar14 == 0x48) {
          fVar32 = 1.0;
          goto LAB_00890a40;
        }
        if (local_e0 == (byte *)0x0) goto LAB_00890d20;
        while (pbVar4 = local_d8, pbVar4 != pbVar17) {
          local_d8 = pbVar4 + -0x18;
          if ((*local_d8 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
        }
LAB_00890d10:
        operator_delete(local_e0);
        bVar20 = (byte)local_c8 & 1;
        goto LAB_00890d20;
      }
      if (lVar14 != 0x60) {
        if (local_e0 == (byte *)0x0) goto LAB_00890d20;
        while (pbVar4 = local_d8, pbVar4 != pbVar17) {
          local_d8 = pbVar4 + -0x18;
          if ((*local_d8 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
        }
        goto LAB_00890d10;
      }
      pbVar17 = local_d8 + -0x17;
      uVar18 = (ulong)(local_d8[-0x18] >> 1);
      if ((local_d8[-0x18] & 1) != 0) {
        pbVar17 = *(byte **)(local_d8 + -8);
        uVar18 = *(ulong *)(local_d8 + -0x10);
      }
      if ((uVar18 == 0) || (pbVar17[uVar18 - 1] != 0x25)) {
        fVar29 = strtof((char *)pbVar17,(char **)0x0);
        bVar5 = 0.0 <= fVar29;
        if (1.0 < fVar29) {
          fVar29 = 1.0;
        }
        fVar32 = 0.0;
        if (bVar5) {
          fVar32 = fVar29;
        }
      }
      else {
        fVar28 = strtof((char *)pbVar17,(char **)0x0);
        fVar28 = fVar28 / 100.0;
        fVar29 = fVar28;
        if (1.0 < fVar28) {
          fVar29 = 1.0;
        }
        fVar32 = 0.0;
        if (0.0 <= fVar28) {
          fVar32 = fVar29;
        }
      }
LAB_00890a40:
      uVar18 = *(ulong *)(local_e0 + 8);
      pbVar17 = *(byte **)(local_e0 + 0x10);
      if ((*local_e0 & 1) == 0) {
        pbVar17 = local_e0 + 1;
        uVar18 = (ulong)(*local_e0 >> 1);
      }
      if ((uVar18 == 0) || (pbVar17[uVar18 - 1] != 0x25)) {
        lVar11 = strtoll((char *)pbVar17,(char **)0x0,10);
        lVar14 = (long)(double)lVar11;
        if (0xfe < lVar14) {
          lVar14 = 0xff;
        }
        uVar24 = (uint)lVar14;
        if (lVar14 < 1) {
          uVar24 = 0;
        }
      }
      else {
        fVar29 = strtof((char *)pbVar17,(char **)0x0);
        fVar29 = (float)(int)((fVar29 / 100.0) * 255.0);
        if (0.0 <= fVar29) {
          if (fVar29 <= 255.0) {
            uVar24 = (uint)fVar29;
          }
          else {
            uVar24 = 0xff;
          }
        }
        else {
          uVar24 = 0;
        }
      }
      pbVar17 = local_e0 + 0x19;
      uVar18 = (ulong)(local_e0[0x18] >> 1);
      if ((local_e0[0x18] & 1) != 0) {
        pbVar17 = *(byte **)(local_e0 + 0x28);
        uVar18 = *(ulong *)(local_e0 + 0x20);
      }
      if ((uVar18 == 0) || (pbVar17[uVar18 - 1] != 0x25)) {
        lVar11 = strtoll((char *)pbVar17,(char **)0x0,10);
        lVar14 = (long)(double)lVar11;
        if (0xfe < lVar14) {
          lVar14 = 0xff;
        }
        uVar26 = (uint)lVar14;
        if (lVar14 < 1) {
          uVar26 = 0;
        }
      }
      else {
        fVar29 = strtof((char *)pbVar17,(char **)0x0);
        fVar29 = (float)(int)((fVar29 / 100.0) * 255.0);
        if (0.0 <= fVar29) {
          if (fVar29 <= 255.0) {
            uVar26 = (uint)fVar29;
          }
          else {
            uVar26 = 0xff;
          }
        }
        else {
          uVar26 = 0;
        }
      }
      pbVar17 = local_e0 + 0x31;
      uVar18 = (ulong)(local_e0[0x30] >> 1);
      if ((local_e0[0x30] & 1) != 0) {
        pbVar17 = *(byte **)(local_e0 + 0x40);
        uVar18 = *(ulong *)(local_e0 + 0x38);
      }
      if ((uVar18 == 0) || (pbVar17[uVar18 - 1] != 0x25)) {
        lVar11 = strtoll((char *)pbVar17,(char **)0x0,10);
        lVar14 = (long)(double)lVar11;
        if (0xfe < lVar14) {
          lVar14 = 0xff;
        }
        uVar19 = (uint)lVar14;
        if (lVar14 < 1) {
          uVar19 = 0;
        }
      }
      else {
        fVar29 = strtof((char *)pbVar17,(char **)0x0);
        fVar29 = (float)(int)((fVar29 / 100.0) * 255.0);
        if (0.0 <= fVar29) {
          if (fVar29 <= 255.0) {
            uVar19 = (uint)fVar29;
          }
          else {
            uVar19 = 0xff;
          }
        }
        else {
          uVar19 = 0;
        }
      }
      pbVar17 = local_e0;
      if (fVar32 <= 0.0) {
        fVar32 = 0.0;
      }
      uVar18 = (ulong)(uint)fVar32;
      if (local_e0 != (byte *)0x0) {
        while (pbVar4 = local_d8, pbVar4 != pbVar17) {
          local_d8 = pbVar4 + -0x18;
          if ((*local_d8 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
        }
        goto LAB_008911d8;
      }
    }
    else {
      piVar25 = (int *)((ulong)&local_c8 | 1);
      if ((local_c8 & 1) != 0) {
        piVar25 = local_b8;
      }
      if (*piVar25 != 0x616c7368) goto LAB_00890978;
      lVar14 = (long)local_d8 - (long)local_e0;
      if (*piVar25 == 0x616c7368) {
        if (lVar14 != 0x60) {
          if (local_e0 != (byte *)0x0) {
            while (pbVar4 = local_d8, pbVar4 != pbVar17) {
              local_d8 = pbVar4 + -0x18;
              if ((*local_d8 & 1) != 0) {
                operator_delete(*(void **)(pbVar4 + -8));
              }
            }
            goto LAB_00890d10;
          }
          goto LAB_00890d20;
        }
        pbVar17 = local_d8 + -0x17;
        uVar18 = (ulong)(local_d8[-0x18] >> 1);
        if ((local_d8[-0x18] & 1) != 0) {
          pbVar17 = *(byte **)(local_d8 + -8);
          uVar18 = *(ulong *)(local_d8 + -0x10);
        }
        if ((uVar18 == 0) || (pbVar17[uVar18 - 1] != 0x25)) {
          fVar29 = strtof((char *)pbVar17,(char **)0x0);
          bVar5 = 0.0 <= fVar29;
          if (1.0 < fVar29) {
            fVar29 = 1.0;
          }
          fVar32 = 0.0;
          if (bVar5) {
            fVar32 = fVar29;
          }
        }
        else {
          fVar28 = strtof((char *)pbVar17,(char **)0x0);
          fVar28 = fVar28 / 100.0;
          fVar29 = fVar28;
          if (1.0 < fVar28) {
            fVar29 = 1.0;
          }
          fVar32 = 0.0;
          if (0.0 <= fVar28) {
            fVar32 = fVar29;
          }
        }
      }
      else {
LAB_00890c6c:
        pbVar17 = local_e0;
        if (lVar14 != 0x48) {
          if (local_e0 != (byte *)0x0) {
            while (pbVar4 = local_d8, pbVar4 != pbVar17) {
              local_d8 = pbVar4 + -0x18;
              if ((*local_d8 & 1) != 0) {
                operator_delete(*(void **)(pbVar4 + -8));
              }
            }
            goto LAB_00890d10;
          }
          goto LAB_00890d20;
        }
        fVar32 = 1.0;
      }
      pbVar17 = *(byte **)(local_e0 + 0x10);
      if ((*local_e0 & 1) == 0) {
        pbVar17 = local_e0 + 1;
      }
      fVar29 = strtof((char *)pbVar17,(char **)0x0);
      for (fVar29 = fVar29 / 360.0; fVar29 < 0.0; fVar29 = fVar29 + 1.0) {
      }
      for (; 1.0 < fVar29; fVar29 = fVar29 + -1.0) {
      }
      pbVar17 = local_e0 + 0x19;
      uVar18 = (ulong)(local_e0[0x18] >> 1);
      if ((local_e0[0x18] & 1) != 0) {
        pbVar17 = *(byte **)(local_e0 + 0x28);
        uVar18 = *(ulong *)(local_e0 + 0x20);
      }
      if ((uVar18 == 0) || (pbVar17[uVar18 - 1] != 0x25)) {
        fVar28 = strtof((char *)pbVar17,(char **)0x0);
      }
      else {
        fVar28 = strtof((char *)pbVar17,(char **)0x0);
        fVar28 = fVar28 / 100.0;
      }
      fVar30 = fVar28;
      if (1.0 < fVar28) {
        fVar30 = 1.0;
      }
      fVar31 = 0.0;
      fVar33 = 0.0;
      if (0.0 <= fVar28) {
        fVar33 = fVar30;
      }
      pbVar17 = local_e0 + 0x31;
      uVar18 = (ulong)(local_e0[0x30] >> 1);
      if ((local_e0[0x30] & 1) != 0) {
        pbVar17 = *(byte **)(local_e0 + 0x40);
        uVar18 = *(ulong *)(local_e0 + 0x38);
      }
      if ((uVar18 == 0) || (pbVar17[uVar18 - 1] != 0x25)) {
        fVar28 = strtof((char *)pbVar17,(char **)0x0);
        if (0.0 <= fVar28) goto LAB_00890f3c;
LAB_00890f5c:
        fVar28 = (fVar33 + 1.0) * fVar31;
      }
      else {
        fVar28 = strtof((char *)pbVar17,(char **)0x0);
        fVar31 = 0.0;
        fVar28 = fVar28 / 100.0;
        if (fVar28 < 0.0) goto LAB_00890f5c;
LAB_00890f3c:
        fVar31 = fVar28;
        if (1.0 < fVar28) {
          fVar31 = 1.0;
        }
        if (fVar31 <= 0.5) goto LAB_00890f5c;
        fVar28 = (fVar33 + fVar31) - fVar33 * fVar31;
      }
      pbVar17 = local_e0;
      fVar30 = fVar29 + 0.33333334;
      if (0.0 <= fVar30) {
        if (1.0 < fVar30) {
          fVar30 = fVar30 + -1.0;
        }
      }
      else {
        fVar30 = fVar30 + 1.0;
      }
      fVar31 = (fVar31 + fVar31) - fVar28;
      if (1.0 <= fVar30 * 6.0) {
        fVar33 = fVar28;
        if ((1.0 <= fVar30 + fVar30) && (fVar33 = fVar31, fVar30 * 3.0 < 2.0)) {
          fVar30 = (fVar28 - fVar31) * (0.6666667 - fVar30);
          goto LAB_00890fb0;
        }
      }
      else {
        fVar30 = (fVar28 - fVar31) * fVar30;
LAB_00890fb0:
        fVar33 = fVar31 + fVar30 * 6.0;
      }
      fVar30 = (float)(int)(fVar33 * 255.0);
      if (0.0 <= fVar30) {
        if (fVar30 <= 255.0) {
          uVar24 = (uint)fVar30;
        }
        else {
          uVar24 = 0xff;
        }
      }
      else {
        uVar24 = 0;
      }
      fVar30 = fVar29 + 1.0;
      if (0.0 <= fVar29) {
        fVar30 = fVar29;
      }
      if (1.0 <= fVar30 * 6.0) {
        fVar33 = fVar28;
        if ((1.0 <= fVar30 + fVar30) && (fVar33 = fVar31, fVar30 * 3.0 < 2.0)) {
          fVar30 = (0.6666667 - fVar30) * (fVar28 - fVar31);
          goto LAB_00891050;
        }
      }
      else {
        fVar30 = fVar30 * (fVar28 - fVar31);
LAB_00891050:
        fVar33 = fVar31 + fVar30 * 6.0;
      }
      fVar30 = (float)(int)(fVar33 * 255.0);
      if (0.0 <= fVar30) {
        if (fVar30 <= 255.0) {
          uVar26 = (uint)fVar30;
        }
        else {
          uVar26 = 0xff;
        }
      }
      else {
        uVar26 = 0;
      }
      fVar29 = fVar29 + -0.33333334;
      if (0.0 <= fVar29) {
        if (1.0 < fVar29) {
          fVar29 = fVar29 + -1.0;
        }
      }
      else {
        fVar29 = fVar29 + 1.0;
      }
      if (1.0 <= fVar29 * 6.0) {
        fVar30 = fVar28;
        if ((1.0 <= fVar29 + fVar29) && (fVar30 = fVar31, fVar29 * 3.0 < 2.0)) {
          fVar29 = 0.6666667 - fVar29;
          goto LAB_00891104;
        }
      }
      else {
LAB_00891104:
        fVar30 = fVar31 + (fVar28 - fVar31) * fVar29 * 6.0;
      }
      fVar29 = (float)(int)(fVar30 * 255.0);
      if (0.0 <= fVar29) {
        if (fVar29 <= 255.0) {
          uVar19 = (uint)fVar29;
        }
        else {
          uVar19 = 0xff;
        }
      }
      else {
        uVar19 = 0;
      }
      if (fVar32 <= 0.0) {
        fVar32 = 0.0;
      }
      uVar18 = (ulong)(uint)fVar32;
      if (local_e0 != (byte *)0x0) {
        while (pbVar4 = local_d8, pbVar4 != pbVar17) {
          local_d8 = pbVar4 + -0x18;
          if ((*local_d8 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
        }
LAB_008911d8:
        operator_delete(local_e0);
      }
    }
    if ((local_c8 & 1) != 0) {
      operator_delete(local_b8);
    }
    goto joined_r0x0089074c;
  }
  if (uVar16 == 7) {
    local_c0 = 0;
    local_b8 = (int *)0x0;
    local_c8._0_5_ = CONCAT41(*(undefined4 *)(__s + 1),0xc);
    local_c8 = (ulong)CONCAT25(*(undefined2 *)(__s + 5),(undefined5)local_c8);
    uVar18 = strtoll((char *)((ulong)&local_c8 | 1),(char **)0x0,0x10);
    if ((local_c8 & 1) != 0) {
      operator_delete(local_b8);
    }
    if (uVar18 >> 0x18 != 0) goto LAB_00890d40;
    uVar24 = (uint)(uVar18 >> 0x10);
    uVar26 = (uint)(uVar18 >> 8);
LAB_00890744:
    uVar19 = (uint)uVar18;
  }
  else {
    if (uVar16 == 4) {
      local_c0 = 0;
      local_b8 = (int *)0x0;
      local_c8._0_3_ = CONCAT21(*(undefined2 *)(__s + 1),6);
      local_c8 = (ulong)CONCAT13(__s[3],(undefined3)local_c8);
      uVar7 = strtoll((char *)((ulong)&local_c8 | 1),(char **)0x0,0x10);
      if ((local_c8 & 1) != 0) {
        operator_delete(local_b8);
      }
      if (uVar7 < 0x1000) {
        uVar1 = (uint)uVar7 & 0xf;
        uVar26 = (uint)(uVar7 >> 4) & 0xf | (uint)uVar7 & 0xf0;
        uVar18 = (ulong)(uVar1 | uVar1 << 4);
        uVar24 = (uint)((uVar7 & 0xf00) >> 4) | (uint)(uVar7 >> 8) & 0xf;
        goto LAB_00890744;
      }
    }
LAB_00890d40:
    uVar19 = 0;
    uVar26 = 0;
    uVar24 = 0;
  }
  uVar18 = 0x3f800000;
joined_r0x0089074c:
  uVar1 = 0;
joined_r0x00890648:
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar3 + 0x28) == local_98) {
    return (ulong)(uVar1 | uVar24 & 0xff | (uVar26 & 0xff) << 8 | (uVar19 & 0xff) << 0x10) |
           uVar18 << 0x20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

