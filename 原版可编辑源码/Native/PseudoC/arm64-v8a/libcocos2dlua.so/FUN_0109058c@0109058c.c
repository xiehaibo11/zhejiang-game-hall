
/* WARNING: Removing unreachable block (ram,0x01090b50) */
/* WARNING: Removing unreachable block (ram,0x01090aac) */
/* WARNING: Removing unreachable block (ram,0x0109101c) */

uint FUN_0109058c(long param_1,ulong *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  short sVar4;
  size_t __n;
  long lVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  short *psVar10;
  long lVar11;
  undefined8 uVar12;
  void *__dest;
  size_t sVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  char *pcVar17;
  ulong uVar18;
  ushort uVar19;
  uint uVar20;
  long local_150;
  long local_148;
  undefined1 auStack_130 [8];
  long local_128;
  undefined1 auStack_120 [8];
  ulong local_118;
  long local_110;
  ulong local_108;
  undefined1 auStack_100 [20];
  ushort local_ec;
  ushort local_ea;
  undefined1 auStack_e8 [20];
  ushort local_d4;
  ushort local_d2;
  undefined1 auStack_d0 [20];
  ushort local_bc;
  ushort local_ba;
  ulong *local_b8;
  undefined8 local_b0;
  long local_a8;
  short local_98;
  ushort local_96;
  ushort local_94;
  short local_90;
  ushort local_8e;
  uint local_8c;
  uint local_88 [2];
  long local_80;
  long local_70;
  long local_68;
  
                    /* catch() { ... } // from try @ 010904ec with catch @ 01090598 */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar15 = param_2[0x17];
  uVar16 = param_2[0x18];
  param_2[0x1f] = 0;
  local_8c = FT_Stream_Seek(uVar16,0);
  local_88[0] = local_8c;
  if ((local_8c == 0) &&
     (local_8c = FT_Stream_ReadFields(uVar16,&DAT_0145f89c,&local_90), local_88[0] = local_8c,
     local_8c == 0)) {
    local_8c = 2;
    if (local_90 == 0x5a4d) {
      local_8c = FT_Stream_Seek(uVar16,local_8e);
      local_88[0] = local_8c;
      if ((local_8c == 0) &&
         (local_8c = FT_Stream_ReadFields(uVar16,&DAT_0145f8b0,&local_98), local_88[0] = local_8c,
         local_8c == 0)) {
        local_8c = 2;
        if (local_98 == 0x4550) {
          local_8c = FT_Stream_Seek(uVar16,local_8e);
          if ((local_8c == 0) &&
             (local_8c = FT_Stream_ReadFields(uVar16,&DAT_0145f8c8,&local_b8), local_8c == 0)) {
            if ((((local_b8 != (ulong *)0x4550) || ((short)local_b0 != 0x14c)) ||
                (local_b0._4_2_ != 0xe0)) || (local_b0._6_2_ != 0x10b)) {
              uVar8 = 3;
              local_8c = 3;
              uVar7 = 2;
              goto LAB_01090b60;
            }
            *param_2 = 0;
            if (local_b0._2_2_ != 0) {
              uVar19 = 0;
              do {
                local_8c = 0;
                local_8c = FT_Stream_ReadFields(uVar16,&DAT_0145f8fc,local_88);
                if (local_8c != 0) goto LAB_01090b44;
                if (local_a8 == local_80) {
                  local_8c = FT_Stream_Seek(uVar16,local_70);
                  if ((local_8c != 0) ||
                     (local_8c = FT_Stream_ReadFields(uVar16,&DAT_0145f91c,auStack_d0),
                     lVar11 = local_70, local_8c != 0)) goto LAB_01090b44;
                  if ((uint)local_ba + (uint)local_bc == 0) {
                    uVar8 = 0;
                    goto LAB_01090c98;
                  }
                  uVar20 = 0;
                  lVar1 = local_70 + 0x10;
                  local_8c = 0;
                  goto LAB_01090ff0;
                }
                uVar19 = uVar19 + 1;
              } while (uVar19 < local_b0._2_2_);
            }
LAB_01090b3c:
            local_8c = 3;
LAB_01090b44:
            uVar7 = 2;
            uVar8 = local_8c;
          }
          else {
            uVar7 = 2;
            uVar8 = local_8c;
          }
          goto LAB_01090b64;
        }
        uVar8 = 2;
        if (local_98 != 0x454e) goto LAB_01090c98;
        local_8c = FT_Stream_Seek(uVar16,(ulong)local_96 + (ulong)local_8e);
        local_88[0] = local_8c;
        if ((local_8c == 0) &&
           (local_8c = FT_Stream_EnterFrame(uVar16,(ulong)local_94 - (ulong)local_96),
           local_88[0] = local_8c, local_8c == 0)) {
          uVar7 = FT_Stream_GetUShortLE(uVar16);
          sVar6 = FT_Stream_GetUShortLE(uVar16);
          while (sVar6 != 0) {
            uVar8 = FT_Stream_GetUShortLE(uVar16);
            if (sVar6 == -0x7ff8) {
              lVar11 = FT_Stream_Pos(uVar16);
              lVar11 = (lVar11 + *(long *)(uVar16 + 0x40) + 4) - *(long *)(uVar16 + 0x48);
              goto LAB_01090bb8;
            }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01090658 with catch @ 01090768
                        */
            *(ulong *)(uVar16 + 0x40) = *(long *)(uVar16 + 0x40) + (ulong)(uVar8 & 0xffff) * 0xc + 4
            ;
            sVar6 = FT_Stream_GetUShortLE(uVar16);
          }
          lVar11 = 0;
          uVar8 = 0;
LAB_01090bb8:
          FT_Stream_ExitFrame(uVar16);
          if (lVar11 != 0) {
            uVar20 = uVar8 & 0xffff;
            if ((uVar20 != 0) &&
               ((ulong)uVar20 * 0x76 < *(ulong *)(uVar16 + 8) ||
                (ulong)uVar20 * 0x76 - *(ulong *)(uVar16 + 8) == 0)) {
              *param_2 = (ulong)uVar20;
              if ((int)(uVar8 & 0xffff) <= param_3) goto LAB_01090cf8;
              local_88[0] = local_8c;
              if (-1 < param_3) {
                uVar18 = ft_mem_alloc(uVar15,0xf0,&local_8c);
                param_2[0x1f] = uVar18;
                local_88[0] = local_8c;
                if (local_8c == 0) {
                    /* try { // try from 01090c1c to 01190da7 has its CatchHandler @ 01090c1c
                       catch() { ... } // from try @ 01090c1c with catch @ 01090c1c
                       catch() { ... } // from try @ 01090e44 with catch @ 01090c1c
                       catch() { ... } // from try @ 01090fa8 with catch @ 01090c1c */
                  local_8c = FT_Stream_Seek(uVar16,lVar11 + param_3 * 0xc);
                  if ((local_8c != 0) ||
                     (local_8c = FT_Stream_EnterFrame(uVar16,0xc), local_8c != 0))
                  goto LAB_01090cac;
                  uVar8 = FT_Stream_GetUShortLE(uVar16);
                  *(ulong *)param_2[0x1f] =
                       (ulong)(uVar8 & 0xffff) << ((ulong)(uVar7 & 0xffff) & 0x3f);
                  uVar8 = FT_Stream_GetUShortLE(uVar16);
                  *(ulong *)(param_2[0x1f] + 0xe0) =
                       (ulong)(uVar8 & 0xffff) << ((ulong)(uVar7 & 0xffff) & 0x3f);
                  *(long *)(uVar16 + 0x40) = *(long *)(uVar16 + 0x40) + 8;
                  FT_Stream_ExitFrame(uVar16);
                  local_8c = FUN_010913f0(param_2[0x1f],uVar16);
                  uVar8 = local_8c;
                  goto LAB_01090c98;
                }
              }
              goto LAB_01090600;
            }
          }
LAB_01090cec:
          local_8c = 3;
          local_88[0] = local_8c;
        }
      }
    }
    else {
LAB_01090cac:
      uVar16 = param_2[0x1f];
      local_88[0] = local_8c;
      if (uVar16 != 0) {
        uVar18 = param_2[0x17];
        if (*(long *)(uVar16 + 0xd8) != 0) {
          FT_Stream_ReleaseFrame(param_2[0x18]);
        }
        ft_mem_free(uVar18,*(undefined8 *)(uVar16 + 0xe8));
        *(undefined8 *)(uVar16 + 0xe8) = 0;
        ft_mem_free(uVar18,uVar16);
        param_2[0x1f] = 0;
        local_88[0] = local_8c;
      }
    }
  }
  goto LAB_01090600;
  while( true ) {
    if (-1 < (int)local_108) goto LAB_01090b3c;
    local_108 = local_108 & 0xffffffff7fffffff;
                    /* try { // try from 01090da8 to 01190db3 has its CatchHandler @ 01091118 */
    lVar2 = local_70 + local_108;
    local_8c = FT_Stream_Seek(uVar16,lVar2);
                    /* try { // try from 01090dc0 to 01190e27 has its CatchHandler @ 0109111c */
    if ((local_8c != 0) ||
       (local_8c = FT_Stream_ReadFields(uVar16,&DAT_0145f91c,auStack_e8), local_8c != 0))
    goto LAB_01090b44;
    if ((uint)local_d2 + (uint)local_d4 != 0) {
      uVar7 = 0;
      local_8c = 0;
      do {
        local_8c = FT_Stream_Seek(uVar16,lVar2 + 0x10 + (ulong)(uVar7 << 3));
        if ((local_8c != 0) ||
           (local_8c = FT_Stream_ReadFields(uVar16,&DAT_0145f93c,auStack_120), local_8c != 0))
        goto LAB_01090b44;
        if (-1 < (int)local_118) goto LAB_01090b3c;
        local_118 = local_118 & 0xffffffff7fffffff;
        lVar3 = local_70 + local_118;
                    /* try { // try from 01090f98 to 01190fa7 has its CatchHandler @ 01091120 */
        local_8c = FT_Stream_Seek(uVar16,lVar3);
                    /* try { // try from 01090fa8 to 0119113b has its CatchHandler @ 01090c1c */
        if ((local_8c != 0) ||
           (local_8c = FT_Stream_ReadFields(uVar16,&DAT_0145f91c,auStack_100), local_8c != 0))
        goto LAB_01090b44;
        if ((uint)local_ea + (uint)local_ec != 0) {
          uVar8 = 0;
          local_8c = 0;
          do {
                    /* try { // try from 01090e38 to 01190e43 has its CatchHandler @ 01091114 */
            local_8c = FT_Stream_Seek(uVar16,lVar3 + 0x10 + (ulong)(uVar8 << 3));
                    /* try { // try from 01090e44 to 01190f97 has its CatchHandler @ 01090c1c */
            if ((local_8c != 0) ||
               (local_8c = FT_Stream_ReadFields(uVar16,&DAT_0145f93c,auStack_130), local_8c != 0))
            goto LAB_01090b44;
            if ((int)local_118 < 0) goto LAB_01090b3c;
            if (local_110 == 8) {
              local_8c = FT_Stream_Seek(uVar16,local_128 + lVar11);
              if ((local_8c != 0) ||
                 (local_8c = FT_Stream_ReadFields(uVar16,&DAT_0145f94c,&local_150), local_8c != 0))
              goto LAB_01090b44;
              uVar18 = *param_2;
              if (uVar18 == (long)param_3) {
                plVar14 = (long *)ft_mem_alloc(uVar15,0xf0,&local_8c);
                param_2[0x1f] = (ulong)plVar14;
                if (local_8c != 0) goto LAB_01090b44;
                *plVar14 = (local_150 + local_70) - local_80;
                plVar14[0x1c] = local_148;
                local_8c = FUN_010913f0(plVar14,uVar16);
                if (local_8c != 0) {
                  uVar7 = 0xd;
                  uVar8 = local_8c;
                  goto LAB_01090b64;
                }
                uVar18 = *param_2;
              }
              *param_2 = uVar18 + 1;
            }
            uVar8 = uVar8 + 1 & 0xffff;
          } while (uVar8 < (uint)local_ea + (uint)local_ec);
        }
        uVar7 = uVar7 + 1 & 0xffff;
      } while (uVar7 < (uint)local_d2 + (uint)local_d4);
    }
    uVar20 = uVar20 + 1 & 0xffff;
    uVar8 = 0;
    uVar7 = 0;
    if ((uint)local_ba + (uint)local_bc <= uVar20) break;
LAB_01090ff0:
    local_8c = FT_Stream_Seek(uVar16,lVar1 + (ulong)(uVar20 << 3));
    if ((local_8c != 0) ||
       (local_8c = FT_Stream_ReadFields(uVar16,&DAT_0145f93c,&local_110), local_8c != 0))
    goto LAB_01090b44;
  }
LAB_01090b60:
  if (uVar7 == 0) {
LAB_01090c98:
    if (*param_2 == 0) goto LAB_01090cec;
    if ((long)param_3 < (long)*param_2) goto LAB_01090ca8;
LAB_01090cf8:
    local_8c = 6;
    local_88[0] = local_8c;
  }
  else {
LAB_01090b64:
    local_88[0] = local_8c;
    if ((uVar7 != 2) && (local_88[0] = uVar7, uVar7 == 0xd)) {
LAB_01090ca8:
      local_88[0] = local_8c;
      if (uVar8 != 0) goto LAB_01090cac;
    }
  }
LAB_01090600:
  uVar7 = local_88[0];
  if ((param_3 < 0) && (local_88[0] == 0)) goto LAB_01090a38;
  if ((local_88[0] & 0xff) == 2) {
    puVar9 = (undefined8 *)ft_mem_alloc(uVar15,0xf0,local_88);
    param_2[0x1f] = (ulong)puVar9;
    uVar7 = local_88[0];
    if (local_88[0] != 0) goto LAB_01090a38;
    *param_2 = 1;
    *puVar9 = 0;
    puVar9[0x1c] = *(undefined8 *)(param_1 + 8);
    local_88[0] = FUN_010913f0(puVar9,param_1);
    if (local_88[0] == 0) {
                    /* try { // try from 01090658 to 0119065f has its CatchHandler @ 01090768 */
      if (param_3 < 1) {
        if (-1 < param_3) goto LAB_01090790;
LAB_01090a6c:
        uVar7 = 0;
        goto LAB_01090a38;
      }
      local_88[0] = 6;
    }
  }
  else if (local_88[0] == 0) {
LAB_01090790:
    uVar16 = param_2[2];
    uVar18 = param_2[0x1f];
    param_2[1] = (long)param_3;
    param_2[2] = uVar16 | 0x12;
    if (*(short *)(uVar18 + 0x70) == *(short *)(uVar18 + 0x72)) {
      param_2[2] = uVar16 | 0x16;
    }
    if (*(char *)(uVar18 + 0x62) != '\0') {
      param_2[3] = param_2[3] | 1;
    }
    if (799 < *(ushort *)(uVar18 + 0x66)) {
      param_2[3] = param_2[3] | 2;
    }
    psVar10 = (short *)ft_mem_realloc(uVar15,0x20,0,1,0,local_88);
    param_2[8] = (ulong)psVar10;
    if (local_88[0] == 0) {
      *(undefined4 *)(param_2 + 7) = 1;
      psVar10[1] = *(short *)(uVar18 + 0x70);
      *psVar10 = *(short *)(uVar18 + 0x60) + *(short *)(uVar18 + 0x6c);
      lVar11 = (ulong)*(ushort *)(uVar18 + 0x56) << 6;
      *(long *)(psVar10 + 4) = lVar11;
      sVar6 = *(short *)(uVar18 + 0x58);
      sVar4 = *(short *)(uVar18 + 0x5a);
      if (sVar6 == 0) {
        sVar6 = 0x48;
      }
      lVar11 = FT_MulDiv(lVar11,sVar6,0x48);
      uVar16 = lVar11 + 0x20U & 0xffffffffffffffc0;
      *(ulong *)(psVar10 + 0xc) = uVar16;
      lVar11 = (ulong)*(ushort *)(uVar18 + 0x6c) * 0x40;
      if (lVar11 < (long)uVar16) {
        *(long *)(psVar10 + 0xc) = lVar11;
        uVar12 = FT_MulDiv(lVar11,0x48,sVar6);
        *(undefined8 *)(psVar10 + 4) = uVar12;
      }
      else {
        uVar12 = *(undefined8 *)(psVar10 + 4);
      }
      if (sVar4 == 0) {
        sVar4 = 0x48;
      }
      lVar11 = FT_MulDiv(uVar12,sVar4,0x48);
      *(ulong *)(psVar10 + 8) = lVar11 + 0x20U & 0xffffffffffffffc0;
      local_b0 = 0;
      if (*(char *)(uVar18 + 0x68) == 'M') {
        local_b0 = 0x161726d6e;
      }
      local_b8 = param_2;
      local_88[0] = FT_CMap_New(&DAT_0172aa08,0,&local_b8,0);
      if (local_88[0] == 0) {
        if ((int)param_2[9] != 0) {
          param_2[0x15] = *(ulong *)param_2[10];
        }
        if (*(byte *)(uVar18 + 0x74) <= *(byte *)(uVar18 + 0x75)) {
          param_2[4] = ((ulong)*(byte *)(uVar18 + 0x75) + 2) - (ulong)*(byte *)(uVar18 + 0x74);
          __n = *(ulong *)(uVar18 + 0x10) - *(ulong *)(uVar18 + 0x88);
          if (*(ulong *)(uVar18 + 0x88) <= *(ulong *)(uVar18 + 0x10) && __n != 0) {
            __dest = (void *)ft_mem_alloc(uVar15,__n + 1,local_88);
            *(void **)(uVar18 + 0xe8) = __dest;
            if (local_88[0] == 0) {
              memcpy(__dest,(void *)(*(long *)(uVar18 + 0xd8) + *(long *)(uVar18 + 0x88)),__n);
              *(undefined1 *)(*(long *)(uVar18 + 0xe8) + __n) = 0;
              pcVar17 = *(char **)(uVar18 + 0xe8);
              sVar13 = strlen(pcVar17);
              uVar15 = ft_mem_realloc(uVar15,1,__n,sVar13 + 1,pcVar17,local_88);
              *(ulong *)(uVar18 + 0xe8) = uVar15;
              if (local_88[0] == 0) {
                uVar16 = param_2[3];
                param_2[5] = uVar15;
                param_2[6] = (ulong)"Regular";
                if (((uint)uVar16 >> 1 & 1) == 0) {
                  if ((uVar16 & 1) == 0) goto LAB_01090a6c;
                  pcVar17 = "Italic";
                }
                else {
                  pcVar17 = "Bold Italic";
                  if ((uVar16 & 1) == 0) {
                    pcVar17 = "Bold";
                  }
                }
                param_2[6] = (ulong)pcVar17;
                uVar7 = 0;
                goto LAB_01090a38;
              }
            }
            goto LAB_010909e0;
          }
        }
        local_88[0] = 3;
      }
    }
  }
  else if (param_2 == (ulong *)0x0) goto LAB_01090a38;
LAB_010909e0:
  uVar16 = param_2[0x1f];
  uVar15 = param_2[0x17];
  if (uVar16 != 0) {
    if (*(long *)(uVar16 + 0xd8) != 0) {
      FT_Stream_ReleaseFrame(param_2[0x18]);
    }
    ft_mem_free(uVar15,*(undefined8 *)(uVar16 + 0xe8));
    *(undefined8 *)(uVar16 + 0xe8) = 0;
    ft_mem_free(uVar15,uVar16);
    param_2[0x1f] = 0;
  }
  ft_mem_free(uVar15,param_2[8]);
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  uVar7 = local_88[0];
LAB_01090a38:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

