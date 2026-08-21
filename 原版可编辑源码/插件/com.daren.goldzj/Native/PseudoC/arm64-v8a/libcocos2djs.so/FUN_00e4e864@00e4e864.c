
/* WARNING: Removing unreachable block (ram,0x00e4eb84) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00e4e864(long param_1,code *param_2,uint param_3)

{
  size_t sVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ushort uVar13;
  bool bVar14;
  short sVar15;
  int iVar16;
  uint uVar17;
  ulong *puVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 uVar21;
  short *psVar22;
  char *pcVar23;
  size_t sVar24;
  long lVar25;
  byte *pbVar26;
  undefined8 *puVar27;
  undefined1 *puVar28;
  ulong uVar29;
  char *pcVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  ulong *puVar34;
  undefined1 *puVar35;
  undefined2 *puVar36;
  long lVar37;
  ulong uVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  undefined1 *__n;
  char *pcVar41;
  ulong uVar42;
  char *__s;
  char *__s_00;
  size_t local_a8;
  long local_a0;
  char *local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  uVar42 = *(ulong *)(param_2 + 0xb8);
  local_6c = FUN_00e1bb5c(param_1,0);
  if (local_6c != 0) {
    return (ulong)local_6c;
  }
  uStack_78 = 0x800000000;
  local_80 = 0x100000001;
  local_68 = 0;
  puVar18 = (ulong *)FUN_00e1388c(uVar42,0x78,&local_68);
  if (local_68 == 0) {
    puVar18[8] = (ulong)&local_80;
    *(undefined2 *)(puVar18 + 3) = 0x7fff;
    uVar38 = *(ulong *)(param_1 + 8);
    puVar34 = puVar18 + 0xc;
    *puVar34 = uVar42;
    puVar18[0xd] = uVar42;
    puVar18[0xe] = uVar38;
    puVar18[9] = 0;
    puVar18[10] = 0;
    puVar18[0xb] = 0;
    uVar21 = *(undefined8 *)(param_1 + 0x38);
    local_64 = 0;
    puVar39 = (undefined1 *)FUN_00e13bcc(uVar21,1,0,0x400,0,&local_64);
    if (local_64 == 0) {
      uVar17 = 0x100;
      local_a0 = 1;
      local_90 = FUN_00e50074;
      *puVar39 = 0;
      sVar24 = 0;
      uVar38 = 0x400;
LAB_00e4ea48:
      do {
        lVar31 = 0;
        lVar25 = FUN_00e1d538(param_1,puVar39 + sVar24,uVar38 - sVar24);
        sVar1 = lVar25 + sVar24;
        sVar24 = sVar1;
        if (0 < (long)sVar1) {
          do {
            bVar3 = puVar39[lVar31];
            uVar33 = (uint)bVar3;
            if (uVar17 == uVar33) {
              uVar17 = 0x100;
              lVar32 = lVar31;
            }
            else {
              lVar37 = 0;
              while ((uVar33 != 10 && (uVar33 != 0xd))) {
                if ((long)sVar1 <= lVar31 + lVar37 + 1) goto LAB_00e4eb88;
                bVar3 = puVar39[lVar37 + lVar31 + 1];
                lVar37 = lVar37 + 1;
                uVar33 = (uint)bVar3;
              }
              pcVar30 = puVar39 + lVar31;
              pcVar30[lVar37] = '\0';
              lVar32 = lVar31 + lVar37;
              if (((*pcVar30 != '\x1a') && (*pcVar30 != '#')) && (lVar31 < lVar32)) {
                local_64 = (*local_90)(pcVar30,lVar37,local_a0,&local_90,puVar18);
                if (local_64 == 0xffffffff) {
                  local_64 = (*local_90)(pcVar30,lVar37,local_a0,&local_90,puVar18);
                }
                if (local_64 != 0) goto LAB_00e4ebe0;
              }
              pcVar30[lVar37] = bVar3;
              local_a0 = local_a0 + 1;
              uVar33 = 10;
              if (bVar3 != 0xd) {
                uVar33 = 0x100;
              }
              uVar17 = 0xd;
              if (bVar3 != 10) {
                uVar17 = uVar33;
              }
            }
            lVar31 = lVar32 + 1;
            sVar24 = sVar1 - lVar31;
          } while (sVar24 != 0 && lVar31 <= (long)sVar1);
        }
LAB_00e4eb88:
        if (lVar25 == 0) break;
        if (lVar31 != 0) {
          memmove(puVar39,puVar39 + lVar31,sVar24);
          goto LAB_00e4ea48;
        }
        if (0xffff < uVar38) {
          local_64 = 6;
          break;
        }
        puVar39 = (undefined1 *)FUN_00e13bcc(uVar21,1,uVar38,uVar38 << 1,puVar39,&local_64);
        sVar24 = uVar38;
        uVar38 = uVar38 << 1;
      } while (local_64 == 0);
    }
LAB_00e4ebe0:
    FUN_00e139fc(uVar21,puVar39);
    local_68 = local_64;
    uVar38 = puVar18[7];
    if (local_64 == 0) {
      if (uVar38 != 0) {
        if (*(int *)(uVar38 + 0x30) != 8) {
          *(undefined2 *)(uVar38 + 0x34) = *(undefined2 *)(uVar38 + 8);
        }
        if ((*(int *)puVar18[8] != 0) &&
           (*(long *)(uVar38 + 0x58) != 0 || *(long *)(uVar38 + 0x70) != 0)) {
          sVar15 = (short)puVar18[3];
          uVar17 = (int)*(short *)((long)puVar18 + 0x1c) - (int)sVar15;
          if (uVar17 != *(ushort *)(uVar38 + 8)) {
            *(short *)(uVar38 + 8) = (short)uVar17;
          }
          if (*(short *)(uVar38 + 0xc) != sVar15) {
            *(short *)(uVar38 + 0xc) = sVar15;
          }
          sVar15 = *(short *)((long)puVar18 + 0x1e);
          if (*(short *)(uVar38 + 0x10) != sVar15) {
            *(short *)(uVar38 + 0x10) = sVar15;
          }
          sVar4 = (short)puVar18[4];
          if (*(short *)(uVar38 + 0x12) != sVar4) {
            *(short *)(uVar38 + 0x12) = sVar4;
            *(short *)(uVar38 + 0xe) = -sVar4;
          }
          if ((int)sVar4 + (int)sVar15 != (uint)*(ushort *)(uVar38 + 10)) {
            *(short *)(uVar38 + 10) = (short)((int)sVar4 + (int)sVar15);
          }
        }
      }
      if ((*puVar18 & 1) != 0) {
        if (((uint)*puVar18 >> 5 & 1) == 0) {
          local_68 = 0xb9;
        }
        else {
          local_68 = 0xba;
        }
        goto LAB_00e4ef04;
      }
      if (uVar38 == 0) {
        local_68 = 3;
        uVar19 = *puVar34;
      }
      else {
        lVar25 = *(long *)(uVar38 + 0xa0);
        if (lVar25 == 0) {
          uVar19 = *puVar34;
        }
        else {
          lVar25 = FUN_00e13bcc(*(undefined8 *)(uVar38 + 0xb8),1,lVar25,lVar25 + 1,
                                *(undefined8 *)(uVar38 + 0x98),&local_68);
          uVar38 = puVar18[7];
          *(long *)(uVar38 + 0x98) = lVar25;
          if (local_68 != 0) goto LAB_00e4ef04;
          *(undefined1 *)(lVar25 + *(long *)(uVar38 + 0xa0)) = 0;
          uVar38 = puVar18[7];
          uVar19 = *puVar34;
        }
      }
    }
    else {
LAB_00e4ef04:
      FUN_00e50eb4(uVar38);
      FUN_00e139fc(uVar42,puVar18[7]);
      uVar38 = 0;
      puVar18[7] = 0;
      uVar19 = *puVar34;
    }
joined_r0x00e4ef8c:
    if (uVar19 != 0) {
      FUN_00e139fc(uVar19,puVar18[9]);
      puVar18[10] = 0;
      puVar18[9] = 0;
      puVar18[0xc] = 0;
      puVar18[0xb] = 0;
    }
    FUN_00e139fc(uVar42,puVar18[5]);
    puVar18[5] = 0;
    FUN_00e139fc(uVar42,puVar18);
  }
  else {
    uVar38 = 0;
    if (puVar18 != (ulong *)0x0) {
      uVar19 = puVar18[0xc];
      goto joined_r0x00e4ef8c;
    }
  }
  local_6c = local_68;
  if ((local_68 & 0xff) == 0xb0) {
    FUN_00e4fbf0(param_2);
    return 2;
  }
  if (local_68 != 0) {
    return (ulong)local_68;
  }
  *(ulong *)(param_2 + 0x108) = uVar38;
  if ((0 < (int)param_3) && ((param_3 & 0xffff) != 0)) {
    FUN_00e4fbf0(param_2);
    return 6;
  }
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)param_2 = 1;
  *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) | 0x12;
  if ((uVar38 == 0) || (*(long *)(uVar38 + 0x80) == 0)) {
LAB_00e4ee18:
    *(undefined8 *)(param_2 + 0x28) = 0;
  }
  else {
    plVar20 = (long *)FUN_00e14820("SPACING",*(undefined8 *)(uVar38 + 0xa8));
    if (plVar20 != (long *)0x0) {
      lVar25 = *(long *)(uVar38 + 0x90);
      lVar31 = *plVar20;
      if ((((lVar25 + lVar31 * 0x18 != 0) && (*(int *)(lVar25 + lVar31 * 0x18 + 8) == 1)) &&
          (pbVar26 = *(byte **)(lVar25 + lVar31 * 0x18 + 0x10), pbVar26 != (byte *)0x0)) &&
         ((uVar17 = *pbVar26 - 0x43, uVar17 < 0x2b &&
          ((1L << ((ulong)uVar17 & 0x3f) & 0x40100000401U) != 0)))) {
        *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) | 4;
      }
    }
    if ((*(long *)(uVar38 + 0x80) == 0) ||
       (plVar20 = (long *)FUN_00e14820("FAMILY_NAME",*(undefined8 *)(uVar38 + 0xa8)),
       plVar20 == (long *)0x0)) goto LAB_00e4ee18;
    if ((*(long *)(uVar38 + 0x90) + *plVar20 * 0x18 == 0) ||
       (lVar25 = *(long *)(*(long *)(uVar38 + 0x90) + *plVar20 * 0x18 + 0x10), lVar25 == 0))
    goto LAB_00e4ee18;
    uVar21 = FUN_00e1eb6c(uVar42,lVar25,&local_6c);
    *(undefined8 *)(param_2 + 0x28) = uVar21;
    if (local_6c != 0) {
      return (ulong)local_6c;
    }
  }
  local_90 = (code *)((ulong)local_90 & 0xffffffff00000000);
  lVar25 = *(long *)(param_2 + 0x108);
  uVar21 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_2 + 0x18) = 0;
  if ((lVar25 == 0) || (*(long *)(lVar25 + 0x80) == 0)) {
    pcVar30 = (char *)0x0;
    local_98 = (char *)0x0;
    local_a8 = 0;
    __s = (char *)0x0;
    sVar24 = 0;
    pcVar23 = (char *)0x0;
    bVar14 = true;
LAB_00e4efb4:
    __s_00 = "Regular";
    puVar39 = &DAT_00000008;
    __n = &DAT_00000007;
  }
  else {
    plVar20 = (long *)FUN_00e14820("SLANT",*(undefined8 *)(lVar25 + 0xa8));
    if (plVar20 == (long *)0x0) {
LAB_00e4ef44:
      lVar31 = *(long *)(lVar25 + 0x80);
joined_r0x00e4ef4c:
      pcVar30 = (char *)0x0;
      if (lVar31 == 0) goto LAB_00e4ef50;
LAB_00e4f490:
      plVar20 = (long *)FUN_00e14820("WEIGHT_NAME",*(undefined8 *)(lVar25 + 0xa8));
      pcVar23 = pcVar30;
      if (plVar20 == (long *)0x0) {
LAB_00e4f554:
        local_98 = (char *)0x0;
        if (*(long *)(lVar25 + 0x80) == 0) goto LAB_00e4f520;
LAB_00e4f560:
        plVar20 = (long *)FUN_00e14820("SETWIDTH_NAME",*(undefined8 *)(lVar25 + 0xa8));
        if (plVar20 != (long *)0x0) {
          lVar31 = *(long *)(lVar25 + 0x90);
          lVar32 = *plVar20;
          if ((lVar31 + lVar32 * 0x18 == 0) || (*(int *)(lVar31 + lVar32 * 0x18 + 8) != 1))
          goto LAB_00e4f5d8;
          __s = *(char **)(lVar31 + lVar32 * 0x18 + 0x10);
          if ((__s == (char *)0x0) ||
             (((cVar2 = *__s, cVar2 == '\0' || (cVar2 == 'N')) || (cVar2 == 'n')))) {
            lVar31 = *(long *)(lVar25 + 0x80);
            goto joined_r0x00e4f5f0;
          }
          if (*(long *)(lVar25 + 0x80) != 0) goto LAB_00e4f5f4;
LAB_00e4f670:
          pcVar41 = (char *)0x0;
          goto joined_r0x00e4f668;
        }
LAB_00e4f5d8:
        lVar31 = *(long *)(lVar25 + 0x80);
joined_r0x00e4f5f0:
        __s = (char *)0x0;
        if (lVar31 == 0) goto LAB_00e4f670;
LAB_00e4f5f4:
        plVar20 = (long *)FUN_00e14820("ADD_STYLE_NAME",*(undefined8 *)(lVar25 + 0xa8));
        if (plVar20 == (long *)0x0) goto LAB_00e4f670;
        lVar25 = *(long *)(lVar25 + 0x90);
        lVar31 = *plVar20;
        if ((lVar25 + lVar31 * 0x18 == 0) || (*(int *)(lVar25 + lVar31 * 0x18 + 8) != 1))
        goto LAB_00e4f670;
        __s_00 = *(char **)(lVar25 + lVar31 * 0x18 + 0x10);
        pcVar41 = __s_00;
        if (__s_00 == (char *)0x0) goto joined_r0x00e4f668;
        cVar2 = *__s_00;
        pcVar41 = (char *)0x0;
        if (((cVar2 == '\0') || (cVar2 == 'N')) || (cVar2 == 'n')) goto joined_r0x00e4f668;
        __n = (undefined1 *)strlen(__s_00);
        puVar40 = __n + 1;
        puVar39 = puVar40;
        if (local_98 == (char *)0x0) goto LAB_00e4f534;
LAB_00e4f684:
        local_a8 = strlen(local_98);
        puVar39 = puVar40 + local_a8 + 1;
        bVar14 = false;
        if (pcVar30 == (char *)0x0) goto LAB_00e4f6b4;
        goto LAB_00e4f6a0;
      }
      lVar31 = *(long *)(lVar25 + 0x90);
      lVar32 = *plVar20;
      if (((lVar31 + lVar32 * 0x18 == 0) || (*(int *)(lVar31 + lVar32 * 0x18 + 8) != 1)) ||
         (pbVar26 = *(byte **)(lVar31 + lVar32 * 0x18 + 0x10), pbVar26 == (byte *)0x0)) {
        lVar31 = *(long *)(lVar25 + 0x80);
        local_98 = (char *)0x0;
      }
      else {
        if ((*pbVar26 | 0x20) != 0x62) goto LAB_00e4f554;
        *(ulong *)(param_2 + 0x18) = *(ulong *)(param_2 + 0x18) | 2;
        lVar31 = *(long *)(lVar25 + 0x80);
        local_98 = "Bold";
      }
      if (lVar31 != 0) goto LAB_00e4f560;
LAB_00e4f520:
      __s = (char *)0x0;
      pcVar41 = (char *)0x0;
joined_r0x00e4f668:
      __s_00 = pcVar41;
      puVar40 = (undefined1 *)0x0;
      __n = (undefined1 *)0x0;
      puVar39 = (undefined1 *)0x0;
      if (local_98 != (char *)0x0) goto LAB_00e4f684;
LAB_00e4f534:
      local_98 = (char *)0x0;
      local_a8 = 0;
      bVar14 = true;
      if (pcVar30 != (char *)0x0) goto LAB_00e4f6a0;
    }
    else {
      lVar31 = *(long *)(lVar25 + 0x90);
      lVar32 = *plVar20;
      if ((lVar31 + lVar32 * 0x18 == 0) || (*(int *)(lVar31 + lVar32 * 0x18 + 8) != 1))
      goto LAB_00e4ef44;
      puVar27 = (undefined8 *)(lVar31 + lVar32 * 0x18 + 0x10);
      pbVar26 = (byte *)*puVar27;
      if (((pbVar26 == (byte *)0x0) || (uVar17 = *pbVar26 - 0x49, 0x26 < uVar17)) ||
         ((1L << ((ulong)uVar17 & 0x3f) & 0x4100000041U) == 0)) {
        lVar31 = *(long *)(lVar25 + 0x80);
        goto joined_r0x00e4ef4c;
      }
      *(ulong *)(param_2 + 0x18) = *(ulong *)(param_2 + 0x18) | 1;
      pcVar30 = "Oblique";
      if ((*(byte *)*puVar27 | 0x20) != 0x6f) {
        pcVar30 = "Italic";
      }
      if (*(long *)(lVar25 + 0x80) != 0) goto LAB_00e4f490;
LAB_00e4ef50:
      __n = (undefined1 *)0x0;
      __s = (char *)0x0;
      __s_00 = (char *)0x0;
      local_98 = (char *)0x0;
      local_a8 = 0;
      puVar39 = (undefined1 *)0x0;
      bVar14 = true;
      if (pcVar30 == (char *)0x0) {
        pcVar23 = (char *)0x0;
      }
      else {
LAB_00e4f6a0:
        pcVar23 = (char *)strlen(pcVar30);
        puVar39 = puVar39 + (long)pcVar23 + 1;
      }
    }
LAB_00e4f6b4:
    if (__s == (char *)0x0) {
      sVar24 = 0;
    }
    else {
      sVar24 = strlen(__s);
      puVar39 = puVar39 + sVar24 + 1;
    }
    if (puVar39 == (undefined1 *)0x0) goto LAB_00e4efb4;
  }
  puVar39 = (undefined1 *)FUN_00e1388c(uVar21,puVar39,&local_90);
  *(undefined1 **)(param_2 + 0x30) = puVar39;
  if ((uint)local_90 != 0) {
    return (ulong)local_90 & 0xffffffff;
  }
  if (__s_00 != (char *)0x0) {
    memcpy(puVar39,__s_00,(size_t)__n);
    if (__n != (undefined1 *)0x0) {
      if (&DAT_00000007 < __n) {
        puVar28 = (undefined1 *)((ulong)__n & 0xfffffffffffffff8);
        puVar40 = puVar39 + 3;
        puVar35 = puVar28;
        do {
          while( true ) {
            uVar21 = *(undefined8 *)(puVar40 + -3);
            bVar6 = (char)((ulong)uVar21 >> 8) == ' ';
            bVar7 = (char)((ulong)uVar21 >> 0x10) != ' ';
            bVar8 = (char)((ulong)uVar21 >> 0x18) == ' ';
            bVar9 = (char)((ulong)uVar21 >> 0x20) != ' ';
            bVar10 = (char)((ulong)uVar21 >> 0x28) == ' ';
            bVar12 = (char)((ulong)uVar21 >> 0x30) != ' ';
            bVar11 = (char)((ulong)uVar21 >> 0x38) == ' ';
            if ((char)uVar21 != ' ') break;
            puVar40[-3] = 0x2d;
            if (bVar6) goto LAB_00e4f0bc;
LAB_00e4f068:
            if (bVar7) goto LAB_00e4f0c8;
LAB_00e4f070:
            puVar40[-1] = 0x2d;
            if (bVar8) goto LAB_00e4f0d0;
LAB_00e4f07c:
            if (bVar9) goto LAB_00e4f0dc;
LAB_00e4f084:
            puVar40[1] = 0x2d;
            if (bVar10) goto LAB_00e4f0e4;
LAB_00e4f090:
            if (bVar12) goto LAB_00e4f0f0;
LAB_00e4f098:
            puVar40[3] = 0x2d;
            if (bVar11) goto LAB_00e4f0f8;
LAB_00e4f0a4:
            puVar35 = puVar35 + -8;
            puVar40 = puVar40 + 8;
            if (puVar35 == (undefined1 *)0x0) goto LAB_00e4f108;
          }
          if (!bVar6) goto LAB_00e4f068;
LAB_00e4f0bc:
          puVar40[-2] = 0x2d;
          if (!bVar7) goto LAB_00e4f070;
LAB_00e4f0c8:
          if (!bVar8) goto LAB_00e4f07c;
LAB_00e4f0d0:
          *puVar40 = 0x2d;
          if (!bVar9) goto LAB_00e4f084;
LAB_00e4f0dc:
          if (!bVar10) goto LAB_00e4f090;
LAB_00e4f0e4:
          puVar40[2] = 0x2d;
          if (!bVar12) goto LAB_00e4f098;
LAB_00e4f0f0:
          if (!bVar11) goto LAB_00e4f0a4;
LAB_00e4f0f8:
          puVar40[4] = 0x2d;
          puVar35 = puVar35 + -8;
          puVar40 = puVar40 + 8;
        } while (puVar35 != (undefined1 *)0x0);
LAB_00e4f108:
        if (__n == puVar28) goto LAB_00e4f138;
      }
      else {
        puVar28 = (undefined1 *)0x0;
      }
      lVar25 = (long)__n - (long)puVar28;
      pcVar41 = puVar39 + (long)puVar28;
      do {
        if (*pcVar41 == ' ') {
          *pcVar41 = '-';
        }
        lVar25 = lVar25 + -1;
        pcVar41 = pcVar41 + 1;
      } while (lVar25 != 0);
    }
LAB_00e4f138:
    puVar39 = puVar39 + (long)__n;
  }
  if (!bVar14) {
    puVar40 = puVar39;
    if (puVar39 != *(undefined1 **)(param_2 + 0x30)) {
      puVar40 = puVar39 + 1;
      *puVar39 = 0x20;
    }
    memcpy(puVar40,local_98,local_a8);
    puVar39 = puVar40 + local_a8;
  }
  if (pcVar30 != (char *)0x0) {
    puVar40 = puVar39;
    if (puVar39 != *(undefined1 **)(param_2 + 0x30)) {
      puVar40 = puVar39 + 1;
      *puVar39 = 0x20;
    }
    memcpy(puVar40,pcVar30,(size_t)pcVar23);
    puVar39 = puVar40 + (long)pcVar23;
  }
  if (__s != (char *)0x0) {
    puVar40 = puVar39;
    if (puVar39 != *(undefined1 **)(param_2 + 0x30)) {
      puVar40 = puVar39 + 1;
      *puVar39 = 0x20;
    }
    memcpy(puVar40,__s,sVar24);
    if (sVar24 != 0) {
      if (sVar24 < 8) {
        uVar29 = 0;
      }
      else {
        uVar29 = sVar24 & 0xfffffffffffffff8;
        puVar39 = puVar40 + 3;
        uVar19 = uVar29;
        do {
          while( true ) {
            uVar21 = *(undefined8 *)(puVar39 + -3);
            bVar14 = (char)((ulong)uVar21 >> 8) == ' ';
            bVar6 = (char)((ulong)uVar21 >> 0x10) != ' ';
            bVar7 = (char)((ulong)uVar21 >> 0x18) == ' ';
            bVar8 = (char)((ulong)uVar21 >> 0x20) != ' ';
            bVar9 = (char)((ulong)uVar21 >> 0x28) == ' ';
            bVar10 = (char)((ulong)uVar21 >> 0x30) != ' ';
            bVar12 = (char)((ulong)uVar21 >> 0x38) == ' ';
            if ((char)uVar21 != ' ') break;
            puVar39[-3] = 0x2d;
            if (bVar14) goto LAB_00e4f25c;
LAB_00e4f208:
            if (bVar6) goto LAB_00e4f268;
LAB_00e4f210:
            puVar39[-1] = 0x2d;
            if (bVar7) goto LAB_00e4f270;
LAB_00e4f21c:
            if (bVar8) goto LAB_00e4f27c;
LAB_00e4f224:
            puVar39[1] = 0x2d;
            if (bVar9) goto LAB_00e4f284;
LAB_00e4f230:
            if (bVar10) goto LAB_00e4f290;
LAB_00e4f238:
            puVar39[3] = 0x2d;
            if (bVar12) goto LAB_00e4f298;
LAB_00e4f244:
            uVar19 = uVar19 - 8;
            puVar39 = puVar39 + 8;
            if (uVar19 == 0) goto LAB_00e4f2a8;
          }
          if (!bVar14) goto LAB_00e4f208;
LAB_00e4f25c:
          puVar39[-2] = 0x2d;
          if (!bVar6) goto LAB_00e4f210;
LAB_00e4f268:
          if (!bVar7) goto LAB_00e4f21c;
LAB_00e4f270:
          *puVar39 = 0x2d;
          if (!bVar8) goto LAB_00e4f224;
LAB_00e4f27c:
          if (!bVar9) goto LAB_00e4f230;
LAB_00e4f284:
          puVar39[2] = 0x2d;
          if (!bVar10) goto LAB_00e4f238;
LAB_00e4f290:
          if (!bVar12) goto LAB_00e4f244;
LAB_00e4f298:
          puVar39[4] = 0x2d;
          uVar19 = uVar19 - 8;
          puVar39 = puVar39 + 8;
        } while (uVar19 != 0);
LAB_00e4f2a8:
        if (sVar24 == uVar29) goto LAB_00e4f2d8;
      }
      lVar25 = sVar24 - uVar29;
      pcVar30 = puVar40 + uVar29;
      do {
        if (*pcVar30 == ' ') {
          *pcVar30 = '-';
        }
        lVar25 = lVar25 + -1;
        pcVar30 = pcVar30 + 1;
      } while (lVar25 != 0);
    }
LAB_00e4f2d8:
    puVar39 = puVar40 + sVar24;
  }
  *puVar39 = 0;
  local_6c = (uint)local_90;
  if ((uint)local_90 != 0) {
    return (ulong)local_90 & 0xffffffff;
  }
  *(long *)(param_2 + 0x20) = *(long *)(uVar38 + 0x50) + 1;
  *(undefined4 *)(param_2 + 0x38) = 1;
  psVar22 = (short *)FUN_00e13bcc(uVar42,0x20,0,1,0,&local_6c);
  *(short **)(param_2 + 0x40) = psVar22;
  if (local_6c != 0) {
    return (ulong)local_6c;
  }
  psVar22[4] = 0;
  psVar22[5] = 0;
  psVar22[6] = 0;
  psVar22[7] = 0;
  psVar22[0] = 0;
  psVar22[1] = 0;
  psVar22[2] = 0;
  psVar22[3] = 0;
  psVar22[0xc] = 0;
  psVar22[0xd] = 0;
  psVar22[0xe] = 0;
  psVar22[0xf] = 0;
  psVar22[8] = 0;
  psVar22[9] = 0;
  psVar22[10] = 0;
  psVar22[0xb] = 0;
  lVar25 = *(long *)(uVar38 + 0x40);
  if (0xfffe < lVar25 + 0x7fffU) {
    bVar14 = lVar25 < 0;
    lVar25 = 0x7fff;
    if (bVar14) {
      lVar25 = -0x7fff;
    }
    *(long *)(uVar38 + 0x40) = lVar25;
  }
  lVar31 = *(long *)(uVar38 + 0x48);
  if (0xfffe < lVar31 + 0x7fffU) {
    bVar14 = lVar31 < 0;
    lVar31 = 0x7fff;
    if (bVar14) {
      lVar31 = -0x7fff;
    }
    *(long *)(uVar38 + 0x48) = lVar31;
  }
  *psVar22 = (short)lVar31 + (short)lVar25;
  if ((*(long *)(uVar38 + 0x80) == 0) ||
     (plVar20 = (long *)FUN_00e14820("AVERAGE_WIDTH",*(undefined8 *)(uVar38 + 0xa8)),
     plVar20 == (long *)0x0)) {
LAB_00e4f3fc:
    sVar15 = FT_MulDiv((long)*psVar22,2,3);
    psVar22[1] = sVar15;
    lVar25 = *(long *)(uVar38 + 0x80);
joined_r0x00e4f414:
    if (lVar25 == 0) goto LAB_00e4f714;
LAB_00e4f418:
    plVar20 = (long *)FUN_00e14820("POINT_SIZE",*(undefined8 *)(uVar38 + 0xa8));
    if (plVar20 == (long *)0x0) goto LAB_00e4f714;
    if (*(long *)(uVar38 + 0x90) + *plVar20 * 0x18 == 0) goto LAB_00e4f714;
    lVar25 = *(long *)(*(long *)(uVar38 + 0x90) + *plVar20 * 0x18 + 0x10);
    if (lVar25 + 0x504c2U < 0xa0985) {
      lVar31 = -lVar25;
      if (-1 < lVar25) {
        lVar31 = lVar25;
      }
      uVar21 = FT_MulDiv(lVar31,0x70800,0x11a4e);
      *(undefined8 *)(psVar22 + 4) = uVar21;
      lVar25 = 0;
      if (*(long *)(uVar38 + 0x80) == 0) goto LAB_00e4f818;
      goto LAB_00e4f780;
    }
    psVar22[4] = 0x7fff;
    psVar22[5] = 0;
    psVar22[6] = 0;
    psVar22[7] = 0;
    if (*(long *)(uVar38 + 0x80) != 0) goto LAB_00e4f780;
    lVar25 = 0;
  }
  else {
    if (*(long *)(uVar38 + 0x90) + *plVar20 * 0x18 == 0) goto LAB_00e4f3fc;
    lVar25 = *(long *)(*(long *)(uVar38 + 0x90) + *plVar20 * 0x18 + 0x10);
    if (lVar25 + 0x4fff1U < 0x9ffe3) {
      auVar5 = SEXT816(lVar25 + 5) * SEXT816(0x6666666666666667);
      uVar17 = (int)(auVar5._8_8_ >> 2) - (auVar5._12_4_ >> 0x1f);
      uVar13 = -((ushort)(uVar17 >> 0xf) & 1);
      psVar22[1] = uVar13 + (short)uVar17 ^ uVar13;
      lVar25 = *(long *)(uVar38 + 0x80);
      goto joined_r0x00e4f414;
    }
    psVar22[1] = 0x7fff;
    if (*(long *)(uVar38 + 0x80) != 0) goto LAB_00e4f418;
LAB_00e4f714:
    uVar19 = *(ulong *)(uVar38 + 0x18);
    if (uVar19 == 0) {
      *(long *)(psVar22 + 4) = (long)psVar22[1] << 6;
      if (*(long *)(uVar38 + 0x80) != 0) goto LAB_00e4f780;
      lVar25 = 0;
    }
    else {
      lVar25 = 0x7fff;
      if (uVar19 >> 0xf == 0) {
        lVar25 = uVar19 << 6;
      }
      *(long *)(psVar22 + 4) = lVar25;
      if (*(long *)(uVar38 + 0x80) == 0) {
        lVar25 = 0;
      }
      else {
LAB_00e4f780:
        plVar20 = (long *)FUN_00e14820("PIXEL_SIZE",*(undefined8 *)(uVar38 + 0xa8));
        if (plVar20 != (long *)0x0) {
          if (*(long *)(uVar38 + 0x90) + *plVar20 * 0x18 != 0) {
            lVar25 = *(long *)(*(long *)(uVar38 + 0x90) + *plVar20 * 0x18 + 0x10);
            if (lVar25 + 0x7fffU < 0xffff) {
              uVar17 = -((uint)lVar25 >> 0xf & 1);
              uVar19 = (ulong)((uVar17 + (int)(short)lVar25 ^ uVar17) << 6);
            }
            else {
              uVar19 = 0x1fffc0;
            }
            *(ulong *)(psVar22 + 0xc) = uVar19;
          }
        }
        lVar25 = 0;
        if (*(long *)(uVar38 + 0x80) != 0) {
          plVar20 = (long *)FUN_00e14820("RESOLUTION_X",*(undefined8 *)(uVar38 + 0xa8));
          if (plVar20 == (long *)0x0) {
            lVar25 = 0;
          }
          else {
            lVar25 = *(long *)(uVar38 + 0x90) + *plVar20 * 0x18;
          }
        }
      }
    }
  }
LAB_00e4f818:
  plVar20 = (long *)(uVar38 + 0x20);
  if (lVar25 != 0) {
    plVar20 = (long *)(lVar25 + 0x10);
  }
  lVar25 = *plVar20;
  if (lVar25 == 0) {
    uVar17 = 0;
LAB_00e4f860:
    lVar25 = 0;
    if (*(long *)(uVar38 + 0x80) != 0) {
LAB_00e4f868:
      plVar20 = (long *)FUN_00e14820("RESOLUTION_Y",*(undefined8 *)(uVar38 + 0xa8));
      if (plVar20 == (long *)0x0) {
        lVar25 = 0;
      }
      else {
        lVar25 = *(long *)(uVar38 + 0x90) + *plVar20 * 0x18;
      }
    }
  }
  else {
    uVar17 = 0x7fff;
    if (0xfffe < lVar25 + 0x7fffU) goto LAB_00e4f860;
    uVar17 = -((uint)lVar25 >> 0xf & 1);
    uVar17 = uVar17 + (int)(short)lVar25 ^ uVar17;
    if (*(long *)(uVar38 + 0x80) != 0) goto LAB_00e4f868;
    lVar25 = 0;
  }
  plVar20 = (long *)(uVar38 + 0x28);
  if (lVar25 != 0) {
    plVar20 = (long *)(lVar25 + 0x10);
  }
  lVar25 = *plVar20;
  if (lVar25 == 0) {
    uVar33 = 0;
LAB_00e4f8e0:
    lVar25 = *(long *)(psVar22 + 0xc);
    if (lVar25 != 0) goto LAB_00e4f908;
LAB_00e4f8e8:
    lVar25 = *(long *)(psVar22 + 4);
    *(long *)(psVar22 + 0xc) = lVar25;
    if ((uVar33 & 0xffff) != 0) {
      lVar25 = FT_MulDiv(lVar25,(long)(short)uVar33,0x48);
      *(long *)(psVar22 + 0xc) = lVar25;
      goto LAB_00e4f908;
    }
  }
  else {
    uVar33 = 0x7fff;
    if (0xfffe < lVar25 + 0x7fffU) goto LAB_00e4f8e0;
    uVar33 = -((uint)lVar25 >> 0xf & 1);
    uVar33 = uVar33 + (int)(short)lVar25 ^ uVar33;
    lVar25 = *(long *)(psVar22 + 0xc);
    if (lVar25 == 0) goto LAB_00e4f8e8;
LAB_00e4f908:
    if (((uVar17 & 0xffff) != 0) && ((uVar33 & 0xffff) != 0)) {
      lVar25 = FT_MulDiv(lVar25,(long)(short)uVar17,(long)(short)uVar33);
    }
  }
  *(long *)(psVar22 + 8) = lVar25;
  lVar31 = *(long *)(uVar38 + 0x60);
  lVar25 = FUN_00e13bcc(uVar42,0x10,0,*(undefined8 *)(uVar38 + 0x50),0,&local_6c);
  *(long *)(param_2 + 0x110) = lVar25;
  if (local_6c != 0) {
    return (ulong)local_6c;
  }
  *(undefined4 *)(param_2 + 0x118) = 0;
  uVar19 = *(ulong *)(uVar38 + 0x50);
  if (uVar19 != 0) {
    lVar32 = *(long *)(uVar38 + 0x38);
    uVar29 = 0;
    plVar20 = (long *)(lVar31 + 8);
    puVar36 = (undefined2 *)(lVar25 + 8);
    do {
      lVar25 = *plVar20;
      *puVar36 = (short)uVar29;
      *(long *)(puVar36 + -4) = lVar25;
      if ((uVar29 < 0xffffffff) && (lVar25 == lVar32)) {
        *(int *)(param_2 + 0x118) = (int)uVar29;
      }
      uVar29 = uVar29 + 1;
      plVar20 = plVar20 + 7;
      puVar36 = puVar36 + 8;
    } while (uVar29 < uVar19);
  }
  if (*(long *)(uVar38 + 0x80) == 0) {
LAB_00e4fb34:
    local_88 = 0x741444f42;
    local_90 = param_2;
    uVar17 = FUN_00e17cf8(&DAT_01c95870,0,&local_90,0);
    if (*(int *)(param_2 + 0x48) != 0) {
      *(undefined8 *)(param_2 + 0xa8) = **(undefined8 **)(param_2 + 0x50);
    }
    return (ulong)uVar17;
  }
  plVar20 = (long *)FUN_00e14820("CHARSET_REGISTRY",*(undefined8 *)(uVar38 + 0xa8));
  if (plVar20 == (long *)0x0) {
    lVar25 = 0;
    lVar31 = *(long *)(uVar38 + 0x80);
  }
  else {
    lVar25 = *(long *)(uVar38 + 0x90) + *plVar20 * 0x18;
    lVar31 = *(long *)(uVar38 + 0x80);
  }
  if (((lVar31 == 0) ||
      (plVar20 = (long *)FUN_00e14820("CHARSET_ENCODING",*(undefined8 *)(uVar38 + 0xa8)),
      plVar20 == (long *)0x0)) || (lVar25 == 0)) goto LAB_00e4fb34;
  lVar31 = *(long *)(uVar38 + 0x90);
  lVar32 = *plVar20;
  if (((lVar31 + lVar32 * 0x18 == 0) || (*(int *)(lVar25 + 8) != 1)) ||
     ((*(int *)(lVar31 + lVar32 * 0x18 + 8) != 1 ||
      ((*(long *)(lVar25 + 0x10) == 0 ||
       (lVar31 = *(long *)(lVar31 + lVar32 * 0x18 + 0x10), lVar31 == 0)))))) goto LAB_00e4fb34;
  uVar21 = FUN_00e1eb6c(uVar42,lVar31,&local_6c);
  *(undefined8 *)(param_2 + 0xf8) = uVar21;
  if (local_6c != 0) {
    return (ulong)local_6c;
  }
  pbVar26 = (byte *)FUN_00e1eb6c(uVar42,*(undefined8 *)(lVar25 + 0x10),&local_6c);
  *(byte **)(param_2 + 0x100) = pbVar26;
  if (local_6c != 0) {
    return (ulong)local_6c;
  }
  if ((((*pbVar26 | 0x20) == 0x69) && ((pbVar26[1] | 0x20) == 0x73)) &&
     ((pbVar26[2] | 0x20) == 0x6f)) {
    pbVar26 = pbVar26 + 3;
    iVar16 = strcmp((char *)pbVar26,"10646");
    if ((iVar16 != 0) &&
       ((iVar16 = strcmp((char *)pbVar26,"8859"), iVar16 != 0 ||
        (iVar16 = strcmp(*(char **)(param_2 + 0xf8),"1"), iVar16 != 0)))) {
      iVar16 = strcmp((char *)pbVar26,"646.1991");
      if (iVar16 != 0) goto LAB_00e4fb0c;
      iVar16 = strcmp(*(char **)(param_2 + 0xf8),"IRV");
      local_88 = 0;
      if (iVar16 != 0) goto LAB_00e4fb10;
    }
    local_88 = 0x10003756e6963;
  }
  else {
LAB_00e4fb0c:
    local_88 = 0;
  }
LAB_00e4fb10:
  local_90 = param_2;
  uVar42 = FUN_00e17cf8(&DAT_01c95870,0,&local_90,0);
  return uVar42 & 0xffffffff;
}

