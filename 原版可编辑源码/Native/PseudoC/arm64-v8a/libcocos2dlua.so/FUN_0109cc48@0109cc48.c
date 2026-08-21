
int FUN_0109cc48(long param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  size_t sVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  size_t *psVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long lVar23;
  void *__base;
  ulong *puVar24;
  undefined8 uVar25;
  undefined1 *local_f0;
  uint local_cc;
  size_t local_c8;
  undefined1 auStack_c0 [8];
  long local_b8;
  ulong local_b0;
  undefined2 local_a8;
  ulong local_a0;
  ulong local_90;
  long local_88;
  long local_80;
  ulong local_78;
  long local_70;
  uint local_64;
  
  puVar22 = (undefined8 *)param_2[0x6c];
  if (puVar22 == (undefined8 *)0x0) {
    puVar22 = (undefined8 *)
              FT_Get_Module_Interface(*(undefined8 *)(param_2[0x16] + 8),&DAT_0145cf10);
    if (puVar22 == (undefined8 *)0x0) {
      return 0xb;
    }
    param_2[0x6c] = puVar22;
    param_2[0x66] = *puVar22;
  }
  uVar3 = ft_module_get_service(param_2[0x16],"postscript-cmaps");
  param_2[0x6d] = uVar3;
  uVar25 = *(undefined8 *)(param_1 + 0x38);
  puVar7 = param_2 + 0x1f;
  *puVar7 = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  uVar3 = FT_Stream_Pos(param_1);
  lVar4 = FT_Stream_ReadULong(param_1,&local_cc);
  if (local_cc != 0) {
    return local_cc;
  }
  do {
    if (lVar4 < 0x74746366) {
      if (lVar4 < 0x4f54544f) {
        if ((lVar4 != 0x10000) && (lVar4 != 0x20000)) {
          return 2;
        }
      }
      else {
                    /* try { // try from 0109d504 to 0119d50b has its CatchHandler @ 0109d674 */
        if ((lVar4 != 0x4f54544f) && (lVar4 != 0x74727565)) {
          return 2;
        }
      }
LAB_0109d52c:
      *puVar7 = 0x74746366;
      if (lVar4 == 0x74746366) {
        local_cc = FT_Stream_ReadFields(param_1,&DAT_014601b4,puVar7);
        if (local_cc != 0) {
          return local_cc;
        }
        uVar11 = param_2[0x21];
        if (uVar11 == 0) {
          return 8;
        }
        if (*(ulong *)(param_1 + 8) >> 5 < uVar11) {
          return 10;
        }
        uVar3 = ft_mem_realloc(uVar25,8,0,uVar11,0,&local_cc);
        param_2[0x22] = uVar3;
        if (local_cc != 0) {
          return local_cc;
        }
        iVar2 = FT_Stream_EnterFrame(param_1,param_2[0x21] << 2);
        if (iVar2 != 0) {
          return iVar2;
        }
        local_cc = 0;
        if (0 < (long)param_2[0x21]) {
          lVar4 = 0;
          do {
            uVar3 = FT_Stream_GetULong(param_1);
            *(undefined8 *)(param_2[0x22] + lVar4 * 8) = uVar3;
            lVar4 = lVar4 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0109d504 with catch @ 0109d674
                        */
          } while (lVar4 < (long)param_2[0x21]);
        }
        FT_Stream_ExitFrame(param_1);
        if (local_cc != 0) {
          return local_cc;
        }
      }
      else {
        param_2[0x21] = 1;
        param_2[0x20] = 0x10000;
        puVar7 = (undefined8 *)ft_mem_alloc(uVar25,8,&local_cc);
        param_2[0x22] = puVar7;
        if (local_cc != 0) {
          return local_cc;
        }
        *puVar7 = uVar3;
      }
      uVar11 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU));
      if ((long)uVar11 < (long)param_2[0x21]) {
        uVar3 = param_2[0x18];
        iVar2 = FT_Stream_Seek(uVar3,*(undefined8 *)(param_2[0x22] + uVar11 * 8));
        if ((iVar2 == 0) && (iVar2 = (*(code *)puVar22[0x16])(param_2,uVar3), iVar2 == 0)) {
          *param_2 = param_2[0x21];
          param_2[1] = uVar11;
        }
      }
      else {
        iVar2 = 6;
      }
      return iVar2;
    }
    if (lVar4 != 0x774f4646) {
      if ((lVar4 != 0x74746366) && (lVar4 != 0x74797031)) {
        return 2;
      }
      goto LAB_0109d52c;
    }
    local_cc = FT_Stream_Seek(param_1,uVar3);
    if (local_cc != 0) {
      return local_cc;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    local_64 = 0;
    local_64 = FT_Stream_ReadFields(param_1,&DAT_014601c4,auStack_c0);
    if (local_64 != 0) {
      return local_64;
    }
    if (local_b8 == 0x74746366) {
      return 8;
    }
    if (local_b8 == 0x774f4646) {
      return 8;
    }
    if (((local_b0 != *(ulong *)(param_1 + 8)) || (uVar11 = (ulong)local_a8, uVar11 == 0)) ||
       (local_b0 <= uVar11 * 0x14 + 0x2c)) {
      return 8;
    }
    if (local_a0 <= (uVar11 << 4 | 0xc)) {
      return 8;
    }
    if ((local_a0 & 3) != 0) {
      return 8;
    }
    if (local_90 == 0) {
      if (local_80 != 0 || local_88 != 0) {
        return 8;
      }
    }
    else if ((local_88 != 0) && (local_80 == 0)) {
      return 8;
    }
    if ((local_78 == 0) && (local_70 != 0)) {
      return 8;
    }
    puVar5 = (undefined1 *)ft_mem_alloc(uVar3,local_a0,&local_64);
    if (local_64 == 0) {
      lVar4 = ft_mem_alloc(uVar3,0x50,&local_64);
                    /* try { // try from 0109cdf4 to 0119cedb has its CatchHandler @ 0109cdf4
                       catch() { ... } // from try @ 0109cdf4 with catch @ 0109cdf4
                       catch() { ... } // from try @ 0109d0c8 with catch @ 0109cdf4 */
      if (local_64 != 0) goto LAB_0109ce04;
      uVar10 = (uint)local_a8;
      if (uVar10 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = 0;
        do {
          uVar10 = uVar10 >> 1;
          iVar2 = iVar2 + 1;
        } while (uVar10 != 0);
      }
      uVar10 = iVar2 - 1;
      iVar2 = 0x10 << (ulong)(uVar10 & 0x1f);
      *puVar5 = (char)((ulong)local_b8 >> 0x18);
                    /* try { // try from 0109cedc to 0119cefb has its CatchHandler @ 0109d150 */
      iVar1 = (uint)local_a8 * 0x10 - iVar2;
      puVar5[1] = (char)((ulong)local_b8 >> 0x10);
      puVar5[2] = (char)((ulong)local_b8 >> 8);
      puVar5[3] = (char)local_b8;
                    /* try { // try from 0109cf10 to 0119cf1f has its CatchHandler @ 0109d12c */
      puVar5[4] = local_a8._1_1_;
      puVar5[7] = (char)iVar2;
                    /* try { // try from 0109cf20 to 0119cf2f has its CatchHandler @ 0109d138 */
      puVar5[8] = (char)(uVar10 >> 8);
      puVar5[6] = (char)((uint)iVar2 >> 8);
      puVar5[9] = (char)uVar10;
      puVar5[10] = (char)((uint)iVar1 >> 8);
      puVar5[5] = (undefined1)local_a8;
      puVar5[0xb] = (char)iVar1;
      puVar8 = (ulong *)ft_mem_realloc(uVar3,0x30,0,local_a8,0,&local_64);
                    /* try { // try from 0109cf4c to 0119cf5b has its CatchHandler @ 0109d128 */
      if (local_64 == 0) {
        __base = (void *)ft_mem_realloc(uVar3,8,0,local_a8,0,&local_64);
                    /* try { // try from 0109cf88 to 0119cf97 has its CatchHandler @ 0109d124 */
                    /* try { // try from 0109cf98 to 0119cfa7 has its CatchHandler @ 0109d130 */
        if ((local_64 == 0) &&
           (local_64 = FT_Stream_EnterFrame(param_1,(ulong)local_a8 * 0x14), local_64 == 0)) {
          if (local_a8 != 0) {
            lVar23 = 0;
            puVar24 = puVar8;
            uVar11 = 0;
            do {
              uVar6 = FT_Stream_GetULong(param_1);
              *puVar24 = uVar6;
              uVar6 = FT_Stream_GetULong(param_1);
              puVar24[1] = uVar6;
              uVar6 = FT_Stream_GetULong(param_1);
              puVar24[2] = uVar6;
              uVar6 = FT_Stream_GetULong(param_1);
              puVar24[3] = uVar6;
                    /* try { // try from 0109cff4 to 0119cfff has its CatchHandler @ 0109d138 */
              uVar6 = FT_Stream_GetULong(param_1);
              uVar12 = *puVar24;
              puVar24[4] = uVar6;
              if (uVar12 <= uVar11) {
                FT_Stream_ExitFrame(param_1);
                local_64 = 8;
                goto LAB_0109ce0c;
              }
              *(ulong **)((long)__base + lVar23 * 8) = puVar24;
              lVar23 = lVar23 + 1;
              puVar24 = puVar24 + 6;
              uVar11 = uVar12;
            } while (lVar23 < (long)(ulong)local_a8);
          }
          FT_Stream_ExitFrame(param_1);
          qsort(__base,(ulong)local_a8,8,FUN_0109fca4);
          uVar12 = (ulong)local_a8;
                    /* try { // try from 0109d058 to 0119d063 has its CatchHandler @ 0109d134 */
          uVar11 = uVar12 * 0x14 + 0x2c;
          uVar6 = uVar12 << 4 | 0xc;
          if (uVar12 == 0) {
            uVar11 = 0x2c;
            uVar6 = 0xc;
          }
          else {
            lVar23 = 0;
            do {
              lVar17 = *(long *)((long)__base + lVar23 * 8);
              if (*(ulong *)(lVar17 + 8) != uVar11) goto LAB_0109d440;
              uVar20 = *(ulong *)(lVar17 + 0x10);
                    /* try { // try from 0109d0bc to 0119d0c7 has its CatchHandler @ 0109d130 */
              if ((((local_b0 < uVar20) || (local_b0 - uVar20 < uVar11)) ||
                  (uVar21 = *(ulong *)(lVar17 + 0x18), uVar21 < uVar20)) ||
                 ((local_a0 < uVar21 || (local_a0 - uVar21 < uVar6)))) goto LAB_0109d440;
              *(ulong *)(lVar17 + 0x28) = uVar6;
                    /* try { // try from 0109d0c8 to 0119d2c7 has its CatchHandler @ 0109cdf4 */
              lVar23 = lVar23 + 1;
              uVar11 = (uVar20 + 3 & 0xfffffffffffffffc) + uVar11;
              uVar6 = (uVar21 + 3 & 0xfffffffffffffffc) + uVar6;
            } while (lVar23 < (long)uVar12);
          }
                    /* catch() { ... } // from try @ 0109cf88 with catch @ 0109d124 */
                    /* catch() { ... } // from try @ 0109cf4c with catch @ 0109d128 */
                    /* catch() { ... } // from try @ 0109cf10 with catch @ 0109d12c */
                    /* catch() { ... } // from try @ 0109cf98 with catch @ 0109d130
                       catch() { ... } // from try @ 0109d0bc with catch @ 0109d130 */
                    /* catch() { ... } // from try @ 0109cf5c with catch @ 0109d134
                       catch() { ... } // from try @ 0109d058 with catch @ 0109d134 */
                    /* catch() { ... } // from try @ 0109cf20 with catch @ 0109d138
                       catch() { ... } // from try @ 0109cff4 with catch @ 0109d138 */
                    /* catch() { ... } // from try @ 0109cedc with catch @ 0109d150 */
          if ((((local_90 == 0) ||
               ((local_90 == uVar11 && (uVar11 = local_88 + uVar11, uVar11 <= local_b0)))) &&
              ((local_78 == 0 ||
               ((local_78 == (uVar11 + 3 & 0xfffffffffffffffc) &&
                (uVar11 = local_70 + local_78, uVar11 <= local_b0)))))) &&
             ((uVar11 == local_b0 && (uVar6 == local_a0)))) {
            if (local_a8 != 0) {
              local_f0 = puVar5 + 0xc;
              lVar23 = 0;
              do {
                puVar24 = puVar8 + lVar23 * 6;
                *local_f0 = (char)(*puVar24 >> 0x18);
                local_f0[1] = (char)(*puVar24 >> 0x10);
                local_f0[2] = (char)(*puVar24 >> 8);
                local_f0[3] = (char)*puVar24;
                local_f0[4] = (char)(puVar24[4] >> 0x18);
                local_f0[5] = (char)(puVar24[4] >> 0x10);
                local_f0[6] = (char)(puVar24[4] >> 8);
                local_f0[7] = (char)puVar24[4];
                puVar16 = puVar24 + 5;
                local_f0[8] = (char)(*puVar16 >> 0x18);
                local_f0[9] = (char)(*puVar16 >> 0x10);
                local_f0[10] = (char)(*puVar16 >> 8);
                local_f0[0xb] = (char)*puVar16;
                psVar15 = puVar24 + 3;
                local_f0[0xc] = (char)(*psVar15 >> 0x18);
                local_f0[0xd] = (char)(*psVar15 >> 0x10);
                local_f0[0xe] = (char)(*psVar15 >> 8);
                local_f0[0xf] = (char)*psVar15;
                local_64 = FT_Stream_Seek(param_1,puVar24[1]);
                if (local_64 != 0) goto LAB_0109ce0c;
                local_64 = FT_Stream_EnterFrame(param_1,puVar8[lVar23 * 6 + 2]);
                if (local_64 != 0) goto LAB_0109ce0c;
                sVar9 = puVar8[lVar23 * 6 + 2];
                if (sVar9 == *psVar15) {
                  memcpy(puVar5 + *puVar16,*(void **)(param_1 + 0x40),sVar9);
                }
                else {
                  local_c8 = *psVar15;
                  local_64 = FT_Gzip_Uncompress(uVar3,puVar5 + *puVar16,&local_c8,
                                                *(undefined8 *)(param_1 + 0x40));
                  if (local_64 != 0) goto LAB_0109ce0c;
                  if (local_c8 != *psVar15) goto LAB_0109d440;
                }
                local_f0 = local_f0 + 0x10;
                FT_Stream_ExitFrame(param_1);
                uVar6 = *puVar16;
                sVar9 = *psVar15;
                uVar11 = sVar9 + uVar6;
                if ((uVar11 & 3) != 0) {
                  uVar12 = 1 - ((ulong)((int)sVar9 + (int)uVar6 + 1) & 3);
                  if ((0x1f < uVar12) && (uVar20 = uVar12 & 0xffffffffffffffe0, uVar20 != 0)) {
                    uVar21 = sVar9 + uVar6 + 1;
                    uVar18 = uVar21 & 3;
                    uVar19 = -uVar18;
                    if ((((uint)uVar21 & 3) + ((uint)uVar19 & 3) >> 2 == 0) &&
                       (uVar19 < 3 || uVar18 == 0xfffffffffffffffd)) {
                      uVar11 = uVar11 + uVar20;
                      puVar14 = (undefined8 *)(puVar5 + uVar6 + sVar9 + 0x10);
                      uVar6 = uVar20;
                      do {
                        puVar14[-1] = 0;
                        puVar14[-2] = 0;
                        puVar14[1] = 0;
                        *puVar14 = 0;
                        uVar6 = uVar6 - 0x20;
                        puVar14 = puVar14 + 4;
                      } while (uVar6 != 0);
                      if (uVar12 == uVar20) goto LAB_0109d3e4;
                    }
                  }
                  do {
                    puVar5[uVar11] = 0;
                    uVar11 = uVar11 + 1;
                  } while ((uVar11 & 3) != 0);
                }
LAB_0109d3e4:
                lVar23 = lVar23 + 1;
                uVar6 = local_a0;
              } while (lVar23 < (long)(ulong)local_a8);
            }
            FT_Stream_OpenMemory(lVar4,puVar5,uVar6);
            uVar13 = *(undefined8 *)(param_1 + 0x38);
            *(code **)(lVar4 + 0x30) = FUN_0109fcc4;
            *(undefined8 *)(lVar4 + 0x38) = uVar13;
            FT_Stream_Free(param_2[0x18],*(uint *)(param_2 + 2) >> 10 & 1);
            param_2[0x18] = lVar4;
            param_2[2] = param_2[2] & 0xfffffffffffffbff;
          }
          else {
LAB_0109d440:
            local_64 = 8;
          }
        }
      }
      else {
        __base = (void *)0x0;
                    /* try { // try from 0109cf5c to 0119cf6b has its CatchHandler @ 0109d134 */
      }
    }
    else {
      lVar4 = 0;
LAB_0109ce04:
      __base = (void *)0x0;
      puVar8 = (ulong *)0x0;
    }
LAB_0109ce0c:
    ft_mem_free(uVar3,puVar8);
    ft_mem_free(uVar3,__base);
    if (local_64 == 0) {
      local_cc = 0;
    }
    else {
      ft_mem_free(uVar3,puVar5);
      FT_Stream_Close(lVar4);
      ft_mem_free(uVar3,lVar4);
      local_cc = local_64;
      if (local_64 != 0) {
        return local_64;
      }
    }
    param_1 = param_2[0x18];
    uVar3 = FT_Stream_Pos(param_1);
    lVar4 = FT_Stream_ReadULong(param_1,&local_cc);
    if (local_cc != 0) {
      return local_cc;
    }
  } while( true );
}

