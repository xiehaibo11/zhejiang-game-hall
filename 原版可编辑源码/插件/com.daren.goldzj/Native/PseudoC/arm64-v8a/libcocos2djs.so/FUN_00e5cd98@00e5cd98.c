
char * FUN_00e5cd98(long param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  uint uVar33;
  char *__dest;
  size_t sVar34;
  char *pcVar35;
  uint uVar36;
  uint uVar37;
  char *pcVar38;
  uint uVar39;
  uint uVar40;
  undefined8 *puVar41;
  uint uVar42;
  uint uVar43;
  ulong uVar44;
  int iVar45;
  uint uVar46;
  byte *pbVar47;
  long lVar48;
  uint uVar49;
  ulong uVar50;
  ulong uVar51;
  short *psVar52;
  uint uVar53;
  uint uVar54;
  undefined8 uVar55;
  uint uVar56;
  long lVar57;
  long lVar58;
  char *pcVar59;
  ulong uVar60;
  uint uVar61;
  undefined8 uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  undefined8 uVar70;
  int iVar72;
  int iVar73;
  undefined8 uVar71;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  uint *local_70;
  uint local_68;
  int local_64;
  
  if (*(char **)(param_1 + 0x4a0) != (char *)0x0) {
    return *(char **)(param_1 + 0x4a0);
  }
  if ((*(long *)(param_1 + 0x4c0) == 0) ||
     (((*(ushort *)(param_1 + 10) & 0x7fff) == 0 && (-1 < *(char *)(param_1 + 0x11))))) {
    uVar50 = (ulong)*(ushort *)(param_1 + 0x230);
    if (uVar50 == 0) {
      return (char *)0x0;
    }
    lVar48 = *(long *)(param_1 + 0x248);
    uVar51 = 0;
    iVar45 = -1;
    psVar52 = (short *)(lVar48 + 4);
    iVar68 = -1;
    do {
      while ((iVar66 = iVar45, psVar52[1] != 6 || (psVar52[2] == 0))) {
joined_r0x00e5ce6c:
        iVar45 = iVar66;
        psVar52 = psVar52 + 0x10;
        uVar51 = uVar51 + 1;
        if (uVar50 == uVar51) goto LAB_00e5ce94;
      }
      if (psVar52[-2] != 1) {
        if (((psVar52[-2] == 3) && ((ushort)psVar52[-1] < 2)) &&
           (iVar66 = (int)uVar51, *psVar52 != 0x409 && iVar45 != -1)) {
          iVar66 = iVar45;
        }
        goto joined_r0x00e5ce6c;
      }
      if (psVar52[-1] != 0) goto joined_r0x00e5ce6c;
      iVar66 = (int)uVar51;
      if (*psVar52 != 0 && iVar68 != -1) {
        iVar66 = iVar68;
      }
      uVar51 = uVar51 + 1;
      psVar52 = psVar52 + 0x10;
      iVar68 = iVar66;
    } while (uVar50 != uVar51);
LAB_00e5ce94:
    if (iVar45 < 0) {
      if (iVar68 < 0) {
        return (char *)0x0;
      }
      if (iVar45 != -1) {
        lVar48 = *(long *)(param_1 + 0x248);
        goto LAB_00e5ce98;
      }
      __dest = (char *)0x0;
    }
    else {
LAB_00e5ce98:
      __dest = (char *)FUN_00e5dca0(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x260)
                                    ,lVar48 + (long)iVar45 * 0x20,FUN_00e5ddc4);
    }
    if ((iVar68 != -1) && (__dest == (char *)0x0)) {
      __dest = (char *)FUN_00e5ddfc(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x260)
                                    ,*(long *)(param_1 + 0x248) + (long)iVar68 * 0x20,FUN_00e5ddc4);
    }
    goto LAB_00e5dbd4;
  }
  uVar55 = *(undefined8 *)(param_1 + 0xb8);
  lVar48 = *(long *)(param_1 + 0x380);
  if (*(long *)(param_1 + 0x4d0) == 0) {
    uVar50 = (ulong)*(ushort *)(param_1 + 0x230);
    if (uVar50 != 0) {
      lVar57 = *(long *)(param_1 + 0x248);
      uVar51 = 0;
      iVar45 = -1;
      psVar52 = (short *)(lVar57 + 4);
      iVar68 = -1;
      do {
        while ((iVar66 = iVar45, psVar52[1] != 0x19 || (psVar52[2] == 0))) {
joined_r0x00e5d00c:
          iVar45 = iVar66;
          psVar52 = psVar52 + 0x10;
          uVar51 = uVar51 + 1;
          if (uVar50 == uVar51) goto LAB_00e5d050;
        }
        if (psVar52[-2] != 1) {
          if (((psVar52[-2] == 3) && ((ushort)psVar52[-1] < 2)) &&
             (iVar66 = (int)uVar51, *psVar52 != 0x409 && iVar45 != -1)) {
            iVar66 = iVar45;
          }
          goto joined_r0x00e5d00c;
        }
        if (psVar52[-1] != 0) goto joined_r0x00e5d00c;
        iVar66 = (int)uVar51;
        if (*psVar52 != 0 && iVar68 != -1) {
          iVar66 = iVar68;
        }
        uVar51 = uVar51 + 1;
        psVar52 = psVar52 + 0x10;
        iVar68 = iVar66;
      } while (uVar50 != uVar51);
LAB_00e5d050:
      if (iVar45 < 0) {
        if (iVar68 < 0) {
          uVar51 = 0;
          psVar52 = (short *)(lVar57 + 4);
          iVar68 = -1;
          iVar66 = -1;
LAB_00e5dad8:
          do {
            iVar45 = iVar68;
            if ((psVar52[1] == 0x10) && (psVar52[2] != 0)) {
              if (psVar52[-2] == 1) {
                if ((psVar52[-1] == 0) && (iVar45 = (int)uVar51, *psVar52 != 0 && iVar68 != -1)) {
                  iVar45 = iVar68;
                }
              }
              else if ((psVar52[-2] == 3) && ((ushort)psVar52[-1] < 2)) {
                iVar45 = (int)uVar51;
                if (*psVar52 != 0x409 && iVar66 != -1) {
                  iVar45 = iVar66;
                }
                uVar51 = uVar51 + 1;
                psVar52 = psVar52 + 0x10;
                iVar66 = iVar45;
                if (uVar50 == uVar51) break;
                goto LAB_00e5dad8;
              }
            }
            iVar68 = iVar45;
            uVar51 = uVar51 + 1;
            psVar52 = psVar52 + 0x10;
            iVar45 = iVar66;
          } while (uVar50 != uVar51);
          if (-1 < iVar45) goto LAB_00e5db5c;
          if (iVar68 < 0) {
            uVar51 = 0;
            psVar52 = (short *)(lVar57 + 4);
            iVar68 = -1;
            iVar66 = -1;
LAB_00e5dc14:
            do {
              iVar45 = iVar68;
              if ((psVar52[1] == 1) && (psVar52[2] != 0)) {
                if (psVar52[-2] == 1) {
                  if ((psVar52[-1] == 0) && (iVar45 = (int)uVar51, *psVar52 != 0 && iVar68 != -1)) {
                    iVar45 = iVar68;
                  }
                }
                else if ((psVar52[-2] == 3) && ((ushort)psVar52[-1] < 2)) {
                  iVar45 = (int)uVar51;
                  if (*psVar52 != 0x409 && iVar66 != -1) {
                    iVar45 = iVar66;
                  }
                  uVar51 = uVar51 + 1;
                  psVar52 = psVar52 + 0x10;
                  iVar66 = iVar45;
                  if (uVar50 == uVar51) break;
                  goto LAB_00e5dc14;
                }
              }
              iVar68 = iVar45;
              uVar51 = uVar51 + 1;
              psVar52 = psVar52 + 0x10;
              iVar45 = iVar66;
            } while (uVar50 != uVar51);
            if (-1 < iVar45) goto LAB_00e5db5c;
            if (iVar68 < 0) goto LAB_00e5d1a4;
          }
        }
        if (iVar45 != -1) goto LAB_00e5db5c;
        pcVar35 = (char *)0x0;
      }
      else {
LAB_00e5db5c:
        pcVar35 = (char *)FUN_00e5dca0(uVar55,*(undefined8 *)(param_1 + 0x260),
                                       lVar57 + (long)iVar45 * 0x20,FUN_00e5df10);
      }
      if ((iVar68 != -1) && (pcVar35 == (char *)0x0)) {
        pcVar35 = (char *)FUN_00e5ddfc(*(undefined8 *)(param_1 + 0xb8),
                                       *(undefined8 *)(param_1 + 0x260),
                                       *(long *)(param_1 + 0x248) + (long)iVar68 * 0x20,FUN_00e5df10
                                      );
      }
      __dest = (char *)0x0;
      if (pcVar35 == (char *)0x0) goto LAB_00e5dbd4;
      sVar34 = strlen(pcVar35);
      uVar49 = (uint)sVar34;
      if (0x5b < uVar49) {
        uVar49 = 0x5b;
        pcVar35[0x5b] = '\0';
      }
      *(char **)(param_1 + 0x4d0) = pcVar35;
      *(uint *)(param_1 + 0x4d8) = uVar49;
      goto LAB_00e5cefc;
    }
LAB_00e5d1a4:
    __dest = (char *)0x0;
  }
  else {
LAB_00e5cefc:
    (**(code **)(lVar48 + 0x50))(param_1,&local_68,&local_70,0,&local_78);
    if (((*(ulong *)(param_1 + 8) & 0x7fff0000) == 0) || (*(char *)(param_1 + 0x11) < '\0')) {
LAB_00e5d174:
      lVar48 = *(long *)(local_78 + 0x10);
      __dest = (char *)FUN_00e1388c(uVar55,*(int *)(param_1 + 0x4d8) + local_68 * 0x11 + 1,&local_64
                                   );
      if (local_64 != 0) goto LAB_00e5d1a4;
      pcVar35 = strcpy(__dest,*(char **)(param_1 + 0x4d0));
      pcVar35 = pcVar35 + *(uint *)(param_1 + 0x4d8);
      if (local_68 != 0) {
        uVar49 = 0;
        do {
          if (*(long *)local_70 != *(long *)(lVar48 + 0x10)) {
            pcVar59 = pcVar35 + 1;
            *pcVar35 = '_';
            uVar46 = *local_70;
            if (uVar46 == 0) {
              pcVar59 = pcVar35 + 2;
              pcVar35[1] = '0';
              uVar55 = *(undefined8 *)(lVar48 + 0x20);
              uVar46 = (uint)((ulong)uVar55 >> 0x18);
            }
            else {
              if ((int)uVar46 < 0) {
                pcVar59 = pcVar35 + 2;
                uVar46 = -uVar46;
                pcVar35[1] = '-';
              }
              if (uVar46 >> 0x10 != 0) {
                uVar50 = 0;
                uVar51 = 1;
                uVar65 = uVar46 >> 0x10;
                puVar41 = &local_88;
                do {
                  uVar44 = uVar51;
                  uVar60 = uVar50;
                  puVar41 = (undefined8 *)((long)puVar41 + 1);
                  uVar50 = uVar60 + 1;
                  *(byte *)((long)&local_80 + uVar60) =
                       (char)uVar65 + (char)(uVar65 / 10) * -10 | 0x30;
                  bVar1 = 9 < uVar65;
                  uVar51 = uVar44 + 1;
                  uVar65 = uVar65 / 10;
                } while (bVar1);
                pcVar35 = pcVar59;
                uVar51 = uVar50;
                if ((uVar50 < 8) ||
                   ((pcVar59 < (char *)((long)&local_80 + uVar50) &&
                    (&local_80 < pcVar59 + uVar60 + 1)))) {
LAB_00e5d310:
                  do {
                    uVar44 = uVar51 - 1;
                    *pcVar35 = *(char *)((long)&local_88 + uVar51 + 7);
                    pcVar35 = pcVar35 + 1;
                    uVar51 = uVar44;
                  } while (0 < (long)uVar44);
                }
                else {
                  uVar60 = uVar50 & 0xfffffffffffffff8;
                  uVar44 = uVar44 & 0xfffffffffffffff8;
                  do {
                    uVar44 = uVar44 - 8;
                    uVar55 = NEON_rev64(*puVar41,1);
                    *(undefined8 *)pcVar35 = uVar55;
                    puVar41 = puVar41 + -1;
                    pcVar35 = pcVar35 + 8;
                  } while (uVar44 != 0);
                  pcVar35 = pcVar59 + uVar60;
                  uVar51 = uVar50 - uVar60;
                  if (uVar50 != uVar60) goto LAB_00e5d310;
                }
                pcVar59 = pcVar59 + uVar50;
              }
              if ((uVar46 & 0xffff) != 0) {
                uVar65 = (uVar46 & 0xffff) * 10 + 5;
                uVar46 = (uVar65 & 0xffff) + (uVar65 & 0xffff) * 4;
                pcVar59[1] = (char)(uVar65 >> 0x10) + '0';
                uVar65 = uVar46 * 2 & 0xfffe;
                pcVar59[2] = (byte)(uVar46 >> 0xf) | 0x30;
                uVar64 = uVar65 * 5 >> 0xf | 0x30;
                *pcVar59 = '.';
                uVar46 = uVar65 * 10 & 0xfffc;
                pcVar35 = pcVar59 + 3;
                *pcVar35 = (char)uVar64;
                uVar65 = 0;
                if (uVar46 != 0) {
                  uVar64 = uVar46 * 5 >> 0xf | 0x30;
                  uVar46 = uVar46 * 10 & 0xfff8;
                  pcVar35 = pcVar59 + 4;
                  *pcVar35 = (char)uVar64;
                  uVar65 = 0;
                  if (uVar46 != 0) {
                    uVar64 = uVar46 * 5 >> 0xf | 0x30;
                    pcVar35 = pcVar59 + 5;
                    *pcVar35 = (char)uVar64;
                    uVar65 = 0;
                    if ((uVar46 * 10 & 0xfff0) != 0) {
                      uVar65 = (uVar46 * 10 & 0xfff0) * 10;
                    }
                  }
                }
                if ((0x542df < uVar65) || ((long)pcVar35 - (long)pcVar59 != 5)) goto LAB_00e5d41c;
                if (uVar64 == 0x31) {
                  *pcVar35 = '0';
                  pcVar59 = pcVar35;
LAB_00e5d428:
                  do {
                    pcVar35 = pcVar59 + -1;
                    *pcVar59 = '\0';
                    pcVar59 = pcVar35;
                  } while (*pcVar35 == '0');
                }
                else {
                  if (uVar65 != 0x2a120) {
                    if (0x2a11f < uVar65) goto LAB_00e5d41c;
                    pcVar59 = pcVar35;
                    if (uVar64 != 0x30) goto LAB_00e5d410;
                    goto LAB_00e5d428;
                  }
                  if ((uVar64 & 1) == 0) {
LAB_00e5d41c:
                    pcVar59 = pcVar35;
                    if (uVar64 == 0x30) goto LAB_00e5d428;
                  }
                  else {
LAB_00e5d410:
                    *pcVar35 = (char)uVar64 + -1;
                  }
                }
                pcVar59 = pcVar35 + 1;
              }
              uVar55 = *(undefined8 *)(lVar48 + 0x20);
              uVar46 = (uint)((ulong)uVar55 >> 0x18);
            }
            pcVar35 = pcVar59;
            if (((uVar46 & 0xff) != 0x20) &&
               ((((uint)((ulong)uVar55 >> 0x18) & 0xdf) - 0x41 < 0x1a ||
                ((uVar46 & 0xff) - 0x30 < 10)))) {
              pcVar35 = pcVar59 + 1;
              *pcVar59 = (char)((ulong)uVar55 >> 0x18);
              uVar55 = *(undefined8 *)(lVar48 + 0x20);
            }
            uVar46 = (uint)((ulong)uVar55 >> 0x10);
            uVar65 = uVar46 & 0xff;
            pcVar59 = pcVar35;
            if ((uVar65 != 0x20) && (((uVar46 & 0xdf) - 0x41 < 0x1a || (uVar65 - 0x30 < 10)))) {
              pcVar59 = pcVar35 + 1;
              *pcVar35 = (char)((ulong)uVar55 >> 0x10);
              uVar55 = *(undefined8 *)(lVar48 + 0x20);
            }
            uVar64 = (uint)uVar55;
            uVar46 = (uint)((ulong)uVar55 >> 8);
            uVar65 = uVar46 & 0xff;
            pcVar38 = pcVar59;
            if ((uVar65 != 0x20) && (((uVar46 & 0xdf) - 0x41 < 0x1a || (uVar65 - 0x30 < 10)))) {
              pcVar38 = pcVar59 + 1;
              *pcVar59 = (char)((ulong)uVar55 >> 8);
              uVar64 = (uint)*(undefined8 *)(lVar48 + 0x20);
            }
            pcVar35 = pcVar38;
            if (((uVar64 & 0xff) != 0x20) &&
               (((uVar64 & 0xdf) - 0x41 < 0x1a || ((uVar64 & 0xff) - 0x30 < 10)))) {
              pcVar35 = pcVar38 + 1;
              *pcVar38 = (char)uVar64;
            }
          }
          uVar49 = uVar49 + 1;
          lVar48 = lVar48 + 0x30;
          local_70 = local_70 + 2;
        } while (uVar49 < local_68);
      }
      pcVar35 = pcVar35 + -(long)__dest;
    }
    else {
      lVar58 = (*(ulong *)(param_1 + 8) >> 0x10 & 0x7fff) - 1;
      lVar57 = *(long *)(param_1 + 0x370);
      lVar48 = *(long *)(local_78 + 0x18);
      iVar45 = *(int *)(lVar48 + lVar58 * 0x10 + 0xc);
      local_80 = (char *)0x0;
      if ((iVar45 == 6) || (iVar45 - 0x100U >> 8 < 0x7f)) {
        (**(code **)(lVar57 + 0x120))(param_1,iVar45,&local_80);
        __dest = local_80;
        if (local_80 == (char *)0x0) {
          lVar48 = *(long *)(local_78 + 0x18);
          goto LAB_00e5d0a4;
        }
        sVar34 = strlen(local_80);
        pcVar35 = (char *)(sVar34 + 1);
      }
      else {
LAB_00e5d0a4:
        (**(code **)(lVar57 + 0x120))(param_1,*(undefined4 *)(lVar48 + lVar58 * 0x10 + 8),&local_88)
        ;
        if (local_88 == (byte *)0x0) goto LAB_00e5d174;
        iVar45 = *(int *)(param_1 + 0x4d8);
        sVar34 = strlen((char *)local_88);
        __dest = (char *)FUN_00e1388c(uVar55,sVar34 + (iVar45 + 1) + 1,&local_64);
        if (local_64 != 0) goto LAB_00e5d1a4;
        pcVar35 = strcpy(__dest,*(char **)(param_1 + 0x4d0));
        pcVar35 = pcVar35 + *(uint *)(param_1 + 0x4d8);
        *pcVar35 = '-';
        uVar49 = (uint)*local_88;
        pcVar35 = pcVar35 + 1;
        if (*local_88 != 0) {
          pbVar47 = local_88 + 1;
          do {
            while ((9 < uVar49 - 0x30 && (0x19 < (uVar49 & 0xdf) - 0x41))) {
              uVar49 = (uint)*pbVar47;
              pbVar47 = pbVar47 + 1;
              if (uVar49 == 0) goto LAB_00e5d154;
            }
            pcVar59 = pcVar35 + 1;
            *pcVar35 = (char)uVar49;
            uVar49 = (uint)*pbVar47;
            pbVar47 = pbVar47 + 1;
            pcVar35 = pcVar59;
          } while (uVar49 != 0);
        }
LAB_00e5d154:
        *pcVar35 = '\0';
        FUN_00e139fc(uVar55,local_88);
        pcVar35 = pcVar35 + (1 - (long)__dest);
      }
    }
    if (0x7f < (long)pcVar35) {
      uVar46 = (uint)pcVar35;
      uVar49 = uVar46 + 0xf;
      if (-1 < (int)uVar46) {
        uVar49 = uVar46;
      }
      uVar65 = 0x75bcd15;
      uVar64 = 0x75bcd15;
      uVar63 = 0x75bcd15;
      uVar61 = 0x75bcd15;
      if (0x1e < uVar46 + 0xf) {
        uVar62 = 0x75bcd15075bcd15;
        iVar45 = (int)uVar49 >> 4;
        pcVar35 = __dest + (long)(int)(uVar49 & 0xfffffff0) + (long)(iVar45 * -4) * 4 + 8;
        uVar55 = uVar62;
        do {
          pcVar59 = pcVar35 + -8;
          uVar70 = *(undefined8 *)pcVar35;
          iVar45 = iVar45 + -1;
          pcVar35 = pcVar35 + 0x10;
          iVar68 = (int)*(undefined8 *)pcVar59;
          iVar69 = (int)((ulong)*(undefined8 *)pcVar59 >> 0x20);
          iVar66 = iVar68 * -0x34f28000;
          iVar67 = iVar69 * -0x68770000;
          uVar74 = NEON_ushl(CONCAT44(iVar69 * -0x54f16877,iVar68 * 0x239b961b),0xfffffff0ffffffef,4
                            );
          iVar68 = CONCAT13((byte)((ulong)uVar74 >> 0x18) | (byte)((uint)iVar66 >> 0x18),
                            CONCAT12((byte)((ulong)uVar74 >> 0x10) | (byte)((uint)iVar66 >> 0x10),
                                     CONCAT11((byte)((ulong)uVar74 >> 8) | (byte)((uint)iVar66 >> 8)
                                              ,(char)uVar74)));
          iVar66 = (int)uVar70;
          iVar72 = (int)((ulong)uVar70 >> 0x20);
          iVar69 = iVar66 * -0x6a360000;
          iVar73 = iVar72 * 0x2e4c0000;
          uVar70 = NEON_ushl(CONCAT44(iVar72 * -0x5e1c746d,iVar66 * 0x38b34ae5),0xfffffff2fffffff1,4
                            );
          iVar69 = CONCAT13((byte)((ulong)uVar70 >> 0x18) | (byte)((uint)iVar69 >> 0x18),
                            CONCAT12((byte)((ulong)uVar70 >> 0x10) | (byte)((uint)iVar69 >> 0x10),
                                     (short)uVar70));
          iVar66 = iVar68 * -0x54f16877;
          iVar68 = (int)(CONCAT17((byte)((ulong)uVar74 >> 0x38) | (byte)((uint)iVar67 >> 0x18),
                                  CONCAT16((byte)((ulong)uVar74 >> 0x30) |
                                           (byte)((uint)iVar67 >> 0x10),
                                           CONCAT15((char)((ulong)uVar74 >> 0x28),
                                                    CONCAT14((char)((ulong)uVar74 >> 0x20),iVar68)))
                                 ) >> 0x20) * 0x38b34ae5;
          uVar75 = NEON_ext(uVar62,uVar55,4,1);
          iVar67 = iVar69 * -0x5e1c746d;
          iVar69 = (int)(CONCAT17((byte)((ulong)uVar70 >> 0x38) | (byte)((uint)iVar73 >> 0x18),
                                  CONCAT16((byte)((ulong)uVar70 >> 0x30) |
                                           (byte)((uint)iVar73 >> 0x10),
                                           CONCAT15((char)((ulong)uVar70 >> 0x28),
                                                    CONCAT14((char)((ulong)uVar70 >> 0x20),iVar69)))
                                 ) >> 0x20) * 0x239b961b;
          uVar62 = CONCAT17((byte)((uint)iVar68 >> 0x18) ^ (byte)((ulong)uVar62 >> 0x38),
                            CONCAT16((byte)((uint)iVar68 >> 0x10) ^ (byte)((ulong)uVar62 >> 0x30),
                                     CONCAT15((byte)((uint)iVar68 >> 8) ^
                                              (byte)((ulong)uVar62 >> 0x28),
                                              CONCAT14((byte)iVar68 ^ (byte)((ulong)uVar62 >> 0x20),
                                                       CONCAT13((byte)((uint)iVar66 >> 0x18) ^
                                                                (byte)((ulong)uVar62 >> 0x18),
                                                                CONCAT12((byte)((uint)iVar66 >> 0x10
                                                                               ) ^ (byte)((ulong)
                                                  uVar62 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar66 >> 8) ^
                                                           (byte)((ulong)uVar62 >> 8),
                                                           (byte)iVar66 ^ (byte)uVar62)))))));
          uVar74 = CONCAT17((byte)((uint)iVar69 >> 0x18) ^ (byte)((ulong)uVar55 >> 0x38),
                            CONCAT16((byte)((uint)iVar69 >> 0x10) ^ (byte)((ulong)uVar55 >> 0x30),
                                     CONCAT15((byte)((uint)iVar69 >> 8) ^
                                              (byte)((ulong)uVar55 >> 0x28),
                                              CONCAT14((byte)iVar69 ^ (byte)((ulong)uVar55 >> 0x20),
                                                       CONCAT13((byte)((uint)iVar67 >> 0x18) ^
                                                                (byte)((ulong)uVar55 >> 0x18),
                                                                CONCAT12((byte)((uint)iVar67 >> 0x10
                                                                               ) ^ (byte)((ulong)
                                                  uVar55 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar67 >> 8) ^
                                                           (byte)((ulong)uVar55 >> 8),
                                                           (byte)iVar67 ^ (byte)uVar55)))))));
          uVar71 = NEON_ushl(uVar62,0x1100000013,4);
          uVar62 = NEON_ushl(uVar62,0xfffffff1fffffff3,4);
          iVar66 = CONCAT13((byte)((ulong)uVar71 >> 0x18) | (byte)((ulong)uVar62 >> 0x18),
                            CONCAT12((byte)((ulong)uVar71 >> 0x10) | (byte)((ulong)uVar62 >> 0x10),
                                     CONCAT11((byte)((ulong)uVar71 >> 8) |
                                              (byte)((ulong)uVar62 >> 8),(byte)uVar71 | (byte)uVar62
                                             )));
          uVar70 = NEON_ushl(uVar74,0xd0000000f,4);
          uVar74 = NEON_ushl(uVar74,0xffffffedffffffef,4);
          iVar68 = CONCAT13((byte)((ulong)uVar70 >> 0x18) | (byte)((ulong)uVar74 >> 0x18),
                            CONCAT12((byte)((ulong)uVar70 >> 0x10) | (byte)((ulong)uVar74 >> 0x10),
                                     CONCAT11((byte)((ulong)uVar70 >> 8) |
                                              (byte)((ulong)uVar74 >> 8),(byte)uVar70 | (byte)uVar74
                                             )));
          uVar61 = (iVar66 + (int)uVar75) * 5 + 0x561ccd1b;
          uVar63 = ((int)(CONCAT17((byte)((ulong)uVar71 >> 0x38) | (byte)((ulong)uVar62 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar71 >> 0x30) |
                                            (byte)((ulong)uVar62 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar71 >> 0x28) |
                                                     (byte)((ulong)uVar62 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar71 >> 0x20) |
                                                              (byte)((ulong)uVar62 >> 0x20),iVar66))
                                           )) >> 0x20) + (int)((ulong)uVar75 >> 0x20)) * 5 +
                   0xbcaa747;
          uVar62 = CONCAT44(uVar63,uVar61);
          uVar55 = NEON_ext(uVar55,uVar62,4,1);
          uVar64 = (iVar68 + (int)uVar55) * 5 + 0x96cd1c35;
          uVar65 = ((int)(CONCAT17((byte)((ulong)uVar70 >> 0x38) | (byte)((ulong)uVar74 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar70 >> 0x30) |
                                            (byte)((ulong)uVar74 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar70 >> 0x28) |
                                                     (byte)((ulong)uVar74 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar70 >> 0x20) |
                                                              (byte)((ulong)uVar74 >> 0x20),iVar68))
                                           )) >> 0x20) + (int)((ulong)uVar55 >> 0x20)) * 5 +
                   0x32ac3b17;
          uVar55 = CONCAT44(uVar65,uVar64);
        } while (iVar45 != 0);
      }
      if ((uVar46 & 0xf) - 1 < 0xf) {
        pbVar47 = (byte *)(__dest + (int)(uVar49 & 0xfffffff0));
        uVar56 = 0;
        uVar36 = 0;
        uVar43 = 0;
        uVar54 = 0;
        uVar49 = 0;
        uVar40 = 0;
        uVar42 = 0;
        uVar33 = 0;
        uVar37 = 0;
        uVar39 = 0;
        uVar53 = 0;
        switch(uVar46 & 0xf) {
        case 0xf:
          uVar56 = (uint)pbVar47[0xe] << 0x10;
        case 0xe:
          uVar36 = uVar56 | (uint)pbVar47[0xd] << 8;
        case 0xd:
          uVar65 = ((uVar36 ^ pbVar47[0xc]) * 0x2e4c0000 |
                   (uVar36 ^ pbVar47[0xc]) * -0x5e1c746d >> 0xe) * 0x239b961b ^ uVar65;
        case 0xc:
          uVar43 = (uint)pbVar47[0xb] << 0x18;
        case 0xb:
          uVar54 = uVar43 | (uint)pbVar47[10] << 0x10;
        case 10:
          uVar49 = uVar54 ^ (uint)pbVar47[9] << 8;
        case 9:
          uVar64 = ((uVar49 ^ pbVar47[8]) * -0x6a360000 | (uVar49 ^ pbVar47[8]) * 0x38b34ae5 >> 0xf)
                   * -0x5e1c746d ^ uVar64;
        case 8:
          uVar40 = (uint)pbVar47[7] << 0x18;
        case 7:
          uVar42 = uVar40 | (uint)pbVar47[6] << 0x10;
        case 6:
          uVar33 = uVar42 ^ (uint)pbVar47[5] << 8;
        case 5:
          uVar63 = ((uVar33 ^ pbVar47[4]) * -0x68770000 |
                   (uVar33 ^ pbVar47[4]) * -0x54f16877 >> 0x10) * 0x38b34ae5 ^ uVar63;
        case 4:
          uVar37 = (uint)pbVar47[3] << 0x18;
        case 3:
          uVar39 = uVar37 | (uint)pbVar47[2] << 0x10;
        case 2:
          uVar53 = uVar39 ^ (uint)pbVar47[1] << 8;
        case 1:
          uVar61 = ((uVar53 ^ *pbVar47) * -0x34f28000 | (uVar53 ^ *pbVar47) * 0x239b961b >> 0x11) *
                   -0x54f16877 ^ uVar61;
        }
      }
      uVar49 = (uVar64 ^ uVar46) + (uVar65 ^ uVar46) + (uVar63 ^ uVar46) + (uVar61 ^ uVar46);
      uVar63 = uVar49 + (uVar63 ^ uVar46);
      uVar64 = uVar49 + (uVar64 ^ uVar46);
      uVar46 = uVar49 + (uVar65 ^ uVar46);
      pcVar35 = __dest + *(uint *)(param_1 + 0x4d8);
      uVar49 = (uVar49 ^ uVar49 >> 0x10) * -0x7a143595;
      uVar65 = (uVar63 ^ uVar63 >> 0x10) * -0x7a143595;
      uVar64 = (uVar64 ^ uVar64 >> 0x10) * -0x7a143595;
      uVar63 = (uVar46 ^ uVar46 >> 0x10) * -0x7a143595;
      uVar49 = (uVar49 ^ uVar49 >> 0xd) * -0x3d4d51cb;
      uVar46 = (uVar65 ^ uVar65 >> 0xd) * -0x3d4d51cb;
      uVar64 = (uVar64 ^ uVar64 >> 0xd) * -0x3d4d51cb;
      uVar65 = (uVar63 ^ uVar63 >> 0xd) * -0x3d4d51cb;
      uVar46 = uVar46 ^ uVar46 >> 0x10;
      uVar64 = uVar64 ^ uVar64 >> 0x10;
      uVar65 = uVar65 ^ uVar65 >> 0x10;
      uVar49 = uVar46 + (uVar49 ^ uVar49 >> 0x10) + uVar64 + uVar65;
      uVar46 = uVar49 + uVar46;
      *pcVar35 = '-';
      pcVar35[0x21] = '.';
      pcVar35[0x22] = '.';
      pcVar35[0x23] = '.';
      pcVar35[0x24] = '\0';
      uVar65 = uVar49 + uVar65;
      cVar2 = "0123456789ABCDEF"[(ulong)uVar49 & 0xf];
      uVar64 = uVar49 + uVar64;
      cVar3 = "0123456789ABCDEF"[(ulong)(uVar49 >> 8) & 0xf];
      cVar4 = "0123456789ABCDEF"[(ulong)(uVar49 >> 0xc) & 0xf];
      cVar5 = "0123456789ABCDEF"[(ulong)(uVar49 >> 0x10) & 0xf];
      cVar6 = "0123456789ABCDEF"[(ulong)(uVar49 >> 4) & 0xf];
      cVar7 = "0123456789ABCDEF"[(ulong)(uVar49 >> 0x14) & 0xf];
      cVar8 = "0123456789ABCDEF"[(ulong)(uVar49 >> 0x18) & 0xf];
      cVar9 = "0123456789ABCDEF"[(ulong)uVar65 & 0xf];
      cVar10 = "0123456789ABCDEF"[(ulong)(uVar65 >> 4) & 0xf];
      cVar11 = "0123456789ABCDEF"[uVar49 >> 0x1c];
      cVar12 = "0123456789ABCDEF"[(ulong)(uVar65 >> 8) & 0xf];
      cVar13 = "0123456789ABCDEF"[(ulong)(uVar65 >> 0xc) & 0xf];
      cVar14 = "0123456789ABCDEF"[(ulong)(uVar65 >> 0x10) & 0xf];
      cVar15 = "0123456789ABCDEF"[(ulong)(uVar65 >> 0x14) & 0xf];
      cVar16 = "0123456789ABCDEF"[(ulong)(uVar65 >> 0x18) & 0xf];
      cVar17 = "0123456789ABCDEF"[(ulong)uVar64 & 0xf];
      cVar18 = "0123456789ABCDEF"[(ulong)(uVar64 >> 4) & 0xf];
      cVar19 = "0123456789ABCDEF"[(ulong)(uVar64 >> 8) & 0xf];
      cVar20 = "0123456789ABCDEF"[(ulong)(uVar64 >> 0xc) & 0xf];
      cVar21 = "0123456789ABCDEF"[(ulong)(uVar64 >> 0x10) & 0xf];
      cVar22 = "0123456789ABCDEF"[(ulong)(uVar64 >> 0x14) & 0xf];
      cVar23 = "0123456789ABCDEF"[(ulong)(uVar64 >> 0x18) & 0xf];
      cVar24 = "0123456789ABCDEF"[uVar64 >> 0x1c];
      cVar25 = "0123456789ABCDEF"[(ulong)uVar46 & 0xf];
      cVar26 = "0123456789ABCDEF"[(ulong)(uVar46 >> 4) & 0xf];
      cVar27 = "0123456789ABCDEF"[(ulong)(uVar46 >> 8) & 0xf];
      cVar28 = "0123456789ABCDEF"[(ulong)(uVar46 >> 0xc) & 0xf];
      cVar29 = "0123456789ABCDEF"[(ulong)(uVar46 >> 0x10) & 0xf];
      cVar30 = "0123456789ABCDEF"[(ulong)(uVar46 >> 0x14) & 0xf];
      cVar31 = "0123456789ABCDEF"[(ulong)(uVar46 >> 0x18) & 0xf];
      cVar32 = "0123456789ABCDEF"[uVar46 >> 0x1c];
      pcVar35[0x19] = "0123456789ABCDEF"[uVar65 >> 0x1c];
      pcVar35[7] = cVar6;
      pcVar35[8] = cVar2;
      pcVar35[0x20] = cVar9;
      pcVar35[0x1f] = cVar10;
      pcVar35[0x1e] = cVar12;
      pcVar35[6] = cVar3;
      pcVar35[0x1d] = cVar13;
      pcVar35[0x1c] = cVar14;
      pcVar35[0x1b] = cVar15;
      pcVar35[5] = cVar4;
      pcVar35[0x1a] = cVar16;
      pcVar35[0x18] = cVar17;
      pcVar35[0x17] = cVar18;
      pcVar35[4] = cVar5;
      pcVar35[0x16] = cVar19;
      pcVar35[0x15] = cVar20;
      pcVar35[0x14] = cVar21;
      pcVar35[3] = cVar7;
      pcVar35[0x13] = cVar22;
      pcVar35[0x12] = cVar23;
      pcVar35[0x11] = cVar24;
      pcVar35[2] = cVar8;
      pcVar35[0x10] = cVar25;
      pcVar35[0xf] = cVar26;
      pcVar35[0xe] = cVar27;
      pcVar35[0xd] = cVar28;
      pcVar35[0xc] = cVar29;
      pcVar35[0xb] = cVar30;
      pcVar35[10] = cVar31;
      pcVar35[9] = cVar32;
      pcVar35[1] = cVar11;
    }
  }
LAB_00e5dbd4:
  *(char **)(param_1 + 0x4a0) = __dest;
  return __dest;
}

