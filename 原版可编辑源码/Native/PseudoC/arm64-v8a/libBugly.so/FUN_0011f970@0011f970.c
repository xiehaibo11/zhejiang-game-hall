
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011f970(int param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 auVar7 [16];
  long lVar8;
  long *__addr;
  char cVar9;
  int __fd;
  int iVar10;
  int iVar11;
  undefined1 (*pauVar12) [16];
  void *pvVar13;
  ssize_t sVar14;
  byte *pbVar15;
  ulong *puVar16;
  char *pcVar17;
  undefined1 (*pauVar18) [16];
  ulong uVar19;
  ulong uVar20;
  byte bVar21;
  long lVar22;
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  ulong uVar25;
  byte *pbVar26;
  undefined1 *puVar27;
  ulong uVar28;
  byte *pbVar29;
  ulong uVar30;
  byte *pbVar31;
  byte *__dest;
  size_t __len;
  long *plVar32;
  size_t __n;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ulong *puStack_32b78;
  ulong uStack_32b70;
  undefined1 uStack_32b60;
  undefined1 uStack_32b5f;
  undefined1 uStack_32b5e;
  long *plStack_32b58;
  ulong uStack_32b50;
  ulong *puStack_32b48;
  stat asStack_32b40 [1442];
  byte abStack_20 [4];
  undefined2 uStack_1c;
  byte abStack_1a [8];
  undefined8 uStack_12;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  abStack_20[0] = 0x2f;
  abStack_20[1] = 0x70;
  abStack_20[2] = 0x72;
  abStack_20[3] = 0x6f;
  uStack_1c = 0x2f63;
  pauVar23 = (undefined1 (*) [16])abStack_1a;
  lVar22 = (long)param_2;
  do {
    pauVar12 = pauVar23;
    lVar8 = lVar22 / 10;
    pauVar23 = (undefined1 (*) [16])(*pauVar12 + 1);
    (*pauVar12)[0] = (char)lVar22 + (char)lVar8 * -10 + '0';
    lVar22 = lVar8;
  } while (lVar8 != 0);
  uVar19 = ((long)pauVar23 - (long)abStack_1a) / 2;
  if (0 < (long)uVar19) {
    if (((byte *)((long)pauVar12 + (1 - uVar19)) < abStack_20 + uVar19 + 6 &&
         (undefined1 (*) [16])abStack_1a < pauVar23) || (uVar19 < 0x10)) {
      pauVar18 = pauVar12;
      pbVar26 = abStack_1a;
      do {
        bVar5 = *pbVar26;
        *pbVar26 = (*pauVar18)[0];
        pauVar24 = pauVar18 + -1;
        (*pauVar18)[0] = bVar5;
        pauVar18 = (undefined1 (*) [16])(*pauVar24 + 0xf);
        pbVar26 = pbVar26 + 1;
      } while ((undefined1 (*) [16])(*pauVar24 + 0xf) !=
               (undefined1 (*) [16])((long)pauVar12 - uVar19));
    }
    else {
      pauVar24 = (undefined1 (*) [16])(pauVar12[-1] + 1);
      uVar20 = (uVar19 - 0x10 >> 4) + 1;
      uVar25 = 0;
      lVar22 = uVar20 * 0x10;
      pauVar18 = (undefined1 (*) [16])abStack_1a;
      do {
        uVar25 = uVar25 + 1;
        auVar33._8_8_ = 0x1020304050607;
        auVar33._0_8_ = 0x8090a0b0c0d0e0f;
        auVar34 = a64_TBL(ZEXT816(0),*pauVar24,auVar33);
        auVar7._8_8_ = 0x1020304050607;
        auVar7._0_8_ = 0x8090a0b0c0d0e0f;
        auVar33 = a64_TBL(ZEXT816(0),*pauVar18,auVar7);
        *(long *)(*pauVar18 + 8) = auVar34._8_8_;
        *(long *)*pauVar18 = auVar34._0_8_;
        *(long *)(*pauVar24 + 8) = auVar33._8_8_;
        *(long *)*pauVar24 = auVar33._0_8_;
        pauVar24 = pauVar24 + -1;
        pauVar18 = pauVar18 + 1;
      } while (uVar25 < uVar20);
      if (lVar22 - uVar19 != 0) {
        bVar5 = abStack_1a[lVar22];
        abStack_1a[lVar22] = pauVar12[-uVar20][0];
        pauVar12[-uVar20][0] = bVar5;
        if (lVar22 + 1 < (long)uVar19) {
          pbVar26 = (byte *)((long)pauVar12 - (lVar22 + 1));
          bVar5 = abStack_1a[lVar22 + 1];
          abStack_1a[lVar22 + 1] = *pbVar26;
          *pbVar26 = bVar5;
          if (lVar22 + 2 < (long)uVar19) {
            pbVar26 = (byte *)((long)pauVar12 - (lVar22 + 2));
            bVar5 = abStack_1a[lVar22 + 2];
            abStack_1a[lVar22 + 2] = *pbVar26;
            *pbVar26 = bVar5;
            if (lVar22 + 3 < (long)uVar19) {
              pbVar26 = (byte *)((long)pauVar12 - (lVar22 + 3));
              bVar5 = abStack_1a[lVar22 + 3];
              abStack_1a[lVar22 + 3] = *pbVar26;
              *pbVar26 = bVar5;
              if (lVar22 + 4 < (long)uVar19) {
                pbVar26 = (byte *)((long)pauVar12 - (lVar22 + 4));
                bVar5 = abStack_1a[lVar22 + 4];
                abStack_1a[lVar22 + 4] = *pbVar26;
                *pbVar26 = bVar5;
                if (lVar22 + 5 < (long)uVar19) {
                  pbVar26 = (byte *)((long)pauVar12 - (lVar22 + 5));
                  bVar5 = abStack_1a[lVar22 + 5];
                  abStack_1a[lVar22 + 5] = *pbVar26;
                  *pbVar26 = bVar5;
                  if (lVar22 + 6 < (long)uVar19) {
                    pbVar26 = (byte *)((long)pauVar12 - (lVar22 + 6));
                    bVar5 = abStack_1a[lVar22 + 6];
                    abStack_1a[lVar22 + 6] = *pbVar26;
                    *pbVar26 = bVar5;
                    if (lVar22 + 7 < (long)uVar19) {
                      pbVar26 = (byte *)((long)pauVar12 - (lVar22 + 7));
                      bVar5 = abStack_1a[lVar22 + 7];
                      abStack_1a[lVar22 + 7] = *pbVar26;
                      *pbVar26 = bVar5;
                      if (lVar22 + 8 < (long)uVar19) {
                        puVar27 = (undefined1 *)((long)pauVar12 - (lVar22 + 8));
                        uVar6 = *(undefined1 *)(&uStack_12 + uVar20 * 2);
                        *(undefined1 *)(&uStack_12 + uVar20 * 2) = *puVar27;
                        *puVar27 = uVar6;
                        if (lVar22 + 9 < (long)uVar19) {
                          puVar27 = (undefined1 *)((long)pauVar12 - (lVar22 + 9));
                          uVar6 = *(undefined1 *)((long)&uStack_12 + lVar22 + 1);
                          *(undefined1 *)((long)&uStack_12 + lVar22 + 1) = *puVar27;
                          *puVar27 = uVar6;
                          if (lVar22 + 10 < (long)uVar19) {
                            puVar27 = (undefined1 *)((long)pauVar12 - (lVar22 + 10));
                            uVar6 = *(undefined1 *)((long)&uStack_12 + lVar22 + 2);
                            *(undefined1 *)((long)&uStack_12 + lVar22 + 2) = *puVar27;
                            *puVar27 = uVar6;
                            if (lVar22 + 0xb < (long)uVar19) {
                              puVar27 = (undefined1 *)((long)pauVar12 - (lVar22 + 0xb));
                              uVar6 = *(undefined1 *)((long)&uStack_12 + lVar22 + 3);
                              *(undefined1 *)((long)&uStack_12 + lVar22 + 3) = *puVar27;
                              *puVar27 = uVar6;
                              if (lVar22 + 0xc < (long)uVar19) {
                                puVar27 = (undefined1 *)((long)pauVar12 - (lVar22 + 0xc));
                                uVar6 = *(undefined1 *)((long)&uStack_12 + lVar22 + 4);
                                *(undefined1 *)((long)&uStack_12 + lVar22 + 4) = *puVar27;
                                *puVar27 = uVar6;
                                if (lVar22 + 0xd < (long)uVar19) {
                                  puVar27 = (undefined1 *)((long)pauVar12 - (lVar22 + 0xd));
                                  uVar6 = *(undefined1 *)((long)&uStack_12 + lVar22 + 5);
                                  *(undefined1 *)((long)&uStack_12 + lVar22 + 5) = *puVar27;
                                  *puVar27 = uVar6;
                                  if (lVar22 + 0xe < (long)uVar19) {
                                    puVar27 = (undefined1 *)((long)pauVar12 - (lVar22 + 0xe));
                                    uVar6 = *(undefined1 *)((long)&uStack_12 + lVar22 + 6);
                                    *(undefined1 *)((long)&uStack_12 + lVar22 + 6) = *puVar27;
                                    *puVar27 = uVar6;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined4 *)*pauVar23 = 0x70616d2f;
  (*pauVar12 + 5)[0] = 's';
  (*pauVar12 + 5)[1] = '\0';
  __fd = open((char *)abStack_20,0);
  if (-1 < __fd) {
    iVar10 = getpagesize();
    __len = (size_t)iVar10;
    pvVar13 = mmap((void *)0x0,__len,3,0x22,-1,0);
    if (pvVar13 != (void *)0xffffffffffffffff) {
      pbVar1 = (byte *)((long)pvVar13 + __len);
      uStack_32b70 = 0;
      plVar32 = (long *)0x0;
      puStack_32b78 = (ulong *)0x0;
      pbVar26 = pbVar1;
LAB_0011fd48:
      __dest = pbVar1 + -__len;
LAB_0011fd4c:
      pbVar29 = pbVar26;
      __n = (long)pbVar1 - (long)pbVar29;
      if ((long)__n < 1) {
LAB_0011fda8:
        sVar14 = read(__fd,__dest + __n,__len - __n);
        pbVar26 = __dest;
        if (sVar14 < 1) goto LAB_00120468;
        uVar19 = __n + sVar14;
        pbVar29 = __dest;
        if (uVar19 < __len) {
          pbVar29 = pbVar1 + -uVar19;
          memmove(pbVar29,__dest,uVar19);
        }
        pbVar26 = pbVar29 + (__n - 1) + sVar14;
        if (((long)__n < (long)uVar19) && (pbVar26 = pbVar29 + __n, pbVar29[__n] != 10)) {
          pbVar15 = pbVar29 + __n + 1;
          do {
            pbVar31 = pbVar15;
            pbVar26 = pbVar29 + (__n - 1) + sVar14;
            if (pbVar31 == pbVar29 + uVar19) break;
            pbVar15 = pbVar31 + 1;
            pbVar26 = pbVar31;
          } while (*pbVar31 != 10);
        }
        *pbVar26 = 0;
        pbVar26 = pbVar26 + 1;
        if (pbVar29 == (byte *)0x0) goto LAB_0011fd4c;
      }
      else {
        bVar5 = *pbVar29;
        pbVar26 = pbVar29;
        while (bVar5 != 10) {
          if ((bVar5 == 0) || (pbVar26 = pbVar26 + 1, pbVar26 == pbVar1)) {
            memmove(__dest,pbVar29,__n);
            goto LAB_0011fda8;
          }
          bVar5 = *pbVar26;
        }
        *pbVar26 = 0;
        pbVar26 = pbVar26 + 1;
      }
      if ((*pbVar29 == 9) || (*pbVar29 == 0x20)) {
        pbVar15 = pbVar29 + 1;
        do {
          do {
            pbVar29 = pbVar15;
            pbVar15 = pbVar29 + 1;
          } while (*pbVar29 == 9);
        } while (*pbVar29 == 0x20);
      }
      uVar19 = 0;
      pbVar15 = pbVar29;
      do {
        bVar5 = *pbVar15;
        uVar25 = (ulong)bVar5;
        uVar20 = uVar25 - 0x30;
        if (9 < uVar20) {
          if (uVar25 - 0x61 < 6) {
            uVar20 = uVar25 - 0x57;
          }
          else {
            if (5 < uVar25 - 0x41) goto LAB_0011feac;
            uVar20 = uVar25 - 0x37;
          }
        }
        uVar19 = uVar20 | uVar19 << 4;
        pbVar15 = pbVar15 + 1;
      } while( true );
    }
    close(__fd);
  }
  puStack_32b78 = (ulong *)0x0;
LAB_00120490:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puStack_32b78);
  }
  return;
LAB_0011feac:
  if (pbVar15 != pbVar29) {
    pbVar29 = pbVar15;
    if (bVar5 != 0) {
      pbVar29 = pbVar15 + 1;
      if (pbVar29 == (byte *)0x0) goto LAB_0011fd4c;
      bVar21 = pbVar15[1];
      if (bVar21 != 9) goto LAB_0011fed4;
      do {
        do {
          pbVar29 = pbVar29 + 1;
          bVar21 = *pbVar29;
        } while (bVar21 == 9);
LAB_0011fed4:
      } while (bVar21 == 0x20);
    }
    uVar20 = 0;
    pbVar15 = pbVar29;
    do {
      bVar21 = *pbVar15;
      uVar28 = (ulong)bVar21;
      uVar25 = uVar28 - 0x30;
      if (9 < uVar25) {
        if (uVar28 - 0x61 < 6) {
          uVar25 = uVar28 - 0x57;
        }
        else {
          if (5 < uVar28 - 0x41) goto LAB_0011ff2c;
          uVar25 = uVar28 - 0x37;
        }
      }
      uVar20 = uVar25 | uVar20 << 4;
      pbVar15 = pbVar15 + 1;
    } while( true );
  }
  goto LAB_0011fd4c;
LAB_0011ff2c:
  if (pbVar15 != pbVar29) {
    while ((bVar21 == 9 || (bVar21 == 0x20))) {
      pbVar15 = pbVar15 + 1;
      bVar21 = *pbVar15;
    }
    if (((bVar21 & 0xdf) != 0) && (bVar21 != 9)) {
      uVar25 = 0;
      do {
        uVar28 = uVar25;
        if (uVar25 < 0xf) {
          uVar28 = uVar25 + 1;
          abStack_20[uVar25] = bVar21;
        }
        pbVar15 = pbVar15 + 1;
        bVar21 = *pbVar15;
      } while (((bVar21 & 0xdf) != 0) && (uVar25 = uVar28, bVar21 != 9));
      if (uVar28 - 1 < 0xf) {
        abStack_20[uVar28] = 0;
        while ((bVar21 == 9 || (bVar21 == 0x20))) {
          pbVar15 = pbVar15 + 1;
          bVar21 = *pbVar15;
        }
        uVar25 = 0;
        pbVar29 = pbVar15;
        do {
          bVar21 = *pbVar29;
          uVar30 = (ulong)bVar21;
          uVar28 = uVar30 - 0x30;
          if (9 < uVar28) {
            if (uVar30 - 0x61 < 6) {
              uVar28 = uVar30 - 0x57;
            }
            else {
              if (5 < uVar30 - 0x41) goto LAB_00120030;
              uVar28 = uVar30 - 0x37;
            }
          }
          uVar25 = uVar28 | uVar25 << 4;
          pbVar29 = pbVar29 + 1;
        } while( true );
      }
    }
  }
  goto LAB_0011fd4c;
LAB_00120030:
  if (pbVar29 == pbVar15) goto LAB_0011fd4c;
  while ((bVar21 == 9 || (pbVar15 = pbVar29, bVar21 == 0x20))) {
    pbVar29 = pbVar29 + 1;
    bVar21 = *pbVar29;
  }
  for (; (bVar21 = *pbVar15, (ulong)bVar21 - 0x30 < 10 || ((byte)((bVar21 & 0xdf) + 0xbf) < 6));
      pbVar15 = pbVar15 + 1) {
  }
  if (pbVar15 == pbVar29) goto LAB_0011fd4c;
  pbVar29 = pbVar15;
  pbVar31 = pbVar15;
  if (bVar21 != 0) {
    pbVar29 = pbVar15 + 1;
    if (pbVar29 == (byte *)0x0) goto LAB_0011fd4c;
    if ((pbVar15[1] == 9) || (pbVar31 = pbVar29, pbVar15[1] == 0x20)) {
      pbVar15 = pbVar15 + 2;
      do {
        do {
          pbVar29 = pbVar15;
          pbVar15 = pbVar29 + 1;
        } while (*pbVar29 == 9);
        pbVar31 = pbVar29;
      } while (*pbVar29 == 0x20);
    }
  }
  for (; (bVar4 = *pbVar29, (ulong)bVar4 - 0x30 < 10 || ((byte)((bVar4 & 0xdf) + 0xbf) < 6));
      pbVar29 = pbVar29 + 1) {
  }
  if ((pbVar29 == pbVar31) || ((bVar4 != 9 && (bVar4 != 0x20)))) goto LAB_0011fd4c;
  pbVar29 = pbVar29 + 1;
  do {
    do {
      pbVar15 = pbVar29;
      bVar4 = *pbVar15;
      pbVar29 = pbVar15 + 1;
    } while (bVar4 == 9);
  } while (bVar4 == 0x20);
  pbVar29 = pbVar15;
  if (9 < (ulong)bVar4 - 0x30) goto LAB_0011fd4c;
  do {
    pbVar31 = pbVar29;
    pbVar29 = pbVar31 + 1;
    bVar4 = *pbVar29;
  } while ((ulong)bVar4 - 0x30 < 10);
  if (pbVar29 == pbVar15) goto LAB_0011fd4c;
  if ((bVar4 == 9) || (pbVar15 = pbVar29, bVar4 == 0x20)) {
    pbVar31 = pbVar31 + 2;
    do {
      do {
        pbVar29 = pbVar31;
        bVar4 = *pbVar29;
        pbVar31 = pbVar29 + 1;
      } while (bVar4 == 9);
      pbVar15 = pbVar29;
    } while (bVar4 == 0x20);
  }
  while (((bVar4 & 0xdf) != 0 && (bVar4 != 9))) {
    pbVar29 = pbVar29 + 1;
    bVar4 = *pbVar29;
  }
  if ((bVar5 != 0x2d) || (bVar21 != 0x3a)) goto LAB_0011fd4c;
  uVar2 = abStack_20[0] == 0x72 | 2;
  if (abStack_20[1] != 'w') {
    uVar2 = (uint)(abStack_20[0] == 0x72);
  }
  uVar3 = uVar2 | 4;
  if (abStack_20[2] != 'x') {
    uVar3 = uVar2;
  }
  puVar16 = (ulong *)FUN_0011bad4();
  if (puVar16 == (ulong *)0xffffffffffffffff) goto LAB_00120468;
  puVar16[0xf] = (ulong)puStack_32b78;
  *puVar16 = uVar19;
  puVar16[1] = uVar20;
  puVar16[2] = uVar25;
  puVar16[3] = 0;
  *(uint *)(puVar16 + 4) = uVar3;
  pcVar17 = strdup((char *)pbVar15);
  puVar16[5] = (ulong)pcVar17;
  pthread_mutex_init((pthread_mutex_t *)(puVar16 + 6),(pthread_mutexattr_t *)0x0);
  pcVar17 = (char *)puVar16[5];
  *(undefined1 *)(puVar16 + 0xb) = 0;
  *(undefined1 *)((long)puVar16 + 0x59) = 0;
  *(undefined1 *)((long)puVar16 + 0x5a) = 0;
  iVar10 = strncmp("/dev/",pcVar17,5);
  if ((iVar10 == 0) && (iVar10 = strncmp("ashmem/",pcVar17 + 5,7), iVar10 != 0)) {
    *(uint *)(puVar16 + 4) = (uint)puVar16[4] | 0x8000;
  }
  puStack_32b78 = puVar16;
  if ((((*pcVar17 == '\0') || (iVar10 = strncmp("[stack:",pcVar17,7), iVar10 == 0)) ||
      ((uVar3 & 5) != 5)) || (((uint)puVar16[4] >> 0xf & 1) != 0)) goto LAB_0011fd48;
  if (param_1 == 0) {
    iVar10 = open(pcVar17,0);
    if (-1 < iVar10) {
      iVar11 = fstat(iVar10,asStack_32b40);
      if (iVar11 == -1) {
        close(iVar10);
      }
      else {
        uStack_32b50 = asStack_32b40[0].st_size;
        plStack_32b58 = mmap((void *)0x0,asStack_32b40[0].st_size,1,2,iVar10,0);
        close(iVar10);
        uVar19 = uStack_32b50;
        __addr = plStack_32b58;
        if (plStack_32b58 != (long *)0xffffffffffffffff) {
          if (((6 < uStack_32b50) && (iVar10 = memcmp(plStack_32b58,&DAT_00128030,4), iVar10 == 0))
             && ((*(char *)((long)__addr + 4) == '\x02' && (*(char *)((long)__addr + 6) == '\x01')))
             ) {
            uStack_32b60 = 1;
            uStack_32b5e = 1;
            uStack_32b5f = 1;
            cVar9 = FUN_00115788(&uStack_32b60,uVar25,asStack_32b40);
            if (cVar9 != '\0') {
              puVar16[3] = asStack_32b40[0].st_dev;
            }
            munmap(plStack_32b58,uStack_32b50);
            goto LAB_0011fd48;
          }
          uStack_32b60 = 0;
          munmap(__addr,uVar19);
        }
      }
    }
    if (plVar32 != (long *)0x0) goto LAB_00120348;
  }
  else {
    if (plVar32 != (long *)0x0) goto LAB_00120348;
    if (param_1 == 1) {
      _Uaarch64_local_access_addr_space_init(asStack_32b40[0].__unused + 1);
      plVar32 = asStack_32b40[0].__unused + 1;
      goto LAB_00120348;
    }
  }
  plVar32 = (long *)_Uaarch64_create_addr_space(_UPT_accessors,0);
  if (plVar32 != (long *)0x0) {
    uStack_32b70 = _UPT_create(param_2);
    if (uStack_32b70 != 0) {
LAB_00120348:
      uStack_32b50 = uStack_32b70;
      uStack_32b5e = 0;
      plStack_32b58 = plVar32;
      puStack_32b48 = puVar16;
      lVar22 = _Uelf64_memory_read(&uStack_32b60,*puVar16,abStack_20,4,0);
      if (((lVar22 == 4) && (iVar10 = memcmp(abStack_20,&DAT_00128030,4), iVar10 == 0)) &&
         ((lVar22 = _Uelf64_memory_read(&uStack_32b60,*puVar16 + 4,&uStack_1c,0xc,0), lVar22 == 0xc
          && (((char)uStack_1c == '\x02' && (abStack_1a[0] == 1)))))) {
        uStack_32b60 = 1;
        cVar9 = FUN_00115788(&uStack_32b60,puVar16[2],asStack_32b40);
        if (cVar9 != '\0') {
          puVar16[3] = asStack_32b40[0].st_dev;
        }
      }
      goto LAB_0011fd48;
    }
    _Uaarch64_destroy_addr_space(plVar32);
  }
  plVar32 = (long *)0x0;
  goto LAB_0011fd48;
LAB_00120468:
  close(__fd);
  if (pbVar26 != (byte *)0x0) {
    munmap(pbVar1 + -__len,__len);
  }
  if ((plVar32 != (long *)0x0) && (param_1 == 0)) {
    _Uaarch64_destroy_addr_space(plVar32);
    _UPT_destroy(uStack_32b70);
  }
  goto LAB_00120490;
}

