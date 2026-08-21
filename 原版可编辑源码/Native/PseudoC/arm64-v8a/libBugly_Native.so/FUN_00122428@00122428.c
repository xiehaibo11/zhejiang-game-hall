
void FUN_00122428(int param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  int __fd;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte *__dest;
  ulong *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong *puVar13;
  char *pcVar14;
  char *pcVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  char *pcVar20;
  byte *pbVar21;
  ulong uVar22;
  ulong uVar23;
  byte *__len;
  byte *pbVar24;
  size_t __n;
  ulong uVar25;
  byte *pbVar26;
  void *pvStack_32be8;
  int *piStack_32be0;
  bool bStack_32bb0;
  ushort uStack_32baf;
  int *piStack_32ba8;
  void *pvStack_32ba0;
  ulong *puStack_32b98;
  int iStack_32b90;
  undefined2 uStack_32b8c;
  char acStack_32b8a [207514];
  stat local_f0;
  
  lVar6 = tpidr_el0;
  local_f0.__unused[1] = *(long *)(lVar6 + 0x28);
  uStack_32b8c = 0x2f63;
  iStack_32b90 = 0x6f72702f;
  pcVar15 = acStack_32b8a;
  lVar17 = (long)param_2;
  do {
    pcVar14 = pcVar15;
    uVar25 = lVar17 + 9;
    pcVar15 = pcVar14 + 1;
    *pcVar14 = (char)lVar17 + (char)(lVar17 / 10) * -10 + '0';
    lVar17 = lVar17 / 10;
  } while (0x12 < uVar25);
  lVar18 = (long)pcVar15 - (long)acStack_32b8a;
  lVar17 = lVar18;
  if (lVar18 < 0) {
    lVar17 = lVar18 + 1;
  }
  if (1 < lVar18) {
    lVar17 = lVar17 >> 1;
    pcVar20 = acStack_32b8a;
    do {
      pcVar15 = pcVar15 + -1;
      cVar3 = *pcVar20;
      lVar17 = lVar17 + -1;
      *pcVar20 = *pcVar15;
      *pcVar15 = cVar3;
      pcVar20 = pcVar20 + 1;
    } while (lVar17 != 0);
  }
  builtin_strncpy(pcVar14 + 1,"/maps",6);
  __fd = open((char *)&iStack_32b90,0);
  if (-1 < __fd) {
    iVar7 = getpagesize();
    __len = (byte *)(long)iVar7;
    __dest = mmap((void *)0x0,(size_t)__len,3,0x22,-1,0);
    if (__dest != (byte *)0xffffffffffffffff) {
      piStack_32be0 = (int *)0x0;
      pbVar1 = __dest + (long)__len;
      pvStack_32be8 = (void *)0x0;
      pbVar12 = __dest;
      pbVar11 = pbVar1;
      puVar10 = (ulong *)0x0;
LAB_001225a0:
      pbVar24 = pbVar11;
      __n = (long)pbVar1 - (long)pbVar24;
      if (0 < (long)__n) {
        lVar17 = 0;
        do {
          if (pbVar24[lVar17] == 0) break;
          if (pbVar24[lVar17] == 10) {
            pbVar26 = pbVar24 + lVar17;
            if (pbVar26 != (byte *)0x0) goto LAB_0012264c;
            break;
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 < (long)__n);
        memmove(__dest,pbVar24,__n);
      }
      pbVar11 = (byte *)read(__fd,__dest + __n,(long)__len - __n);
      if (0 < (long)pbVar11) {
        pbVar21 = pbVar11 + __n;
        pbVar12 = pbVar11;
        pbVar24 = __dest;
        if (pbVar21 < __len) {
          pbVar24 = pbVar1 + (-__n - (long)pbVar11);
          pbVar12 = memmove(pbVar24,__dest,(size_t)pbVar21);
        }
        pbVar26 = pbVar24 + __n + (long)pbVar11 + -1;
        do {
          if (pbVar24[__n] == 10) {
            pbVar26 = pbVar24 + __n;
            break;
          }
          __n = __n + 1;
        } while ((long)__n < (long)pbVar21);
LAB_0012264c:
        pbVar11 = pbVar26 + 1;
        *pbVar26 = 0;
        for (; (bVar4 = *pbVar24, bVar4 == 9 || (bVar4 == 0x20)); pbVar24 = pbVar24 + 1) {
        }
        lVar17 = 0;
        uVar25 = 0;
        do {
          uVar16 = (ulong)bVar4;
          uVar19 = uVar16 - 0x30;
          if (9 < uVar19) {
            if (uVar16 - 0x61 < 6) {
              uVar19 = uVar16 - 0x57;
            }
            else {
              if (5 < uVar16 - 0x41) goto LAB_001226c0;
              uVar19 = uVar16 - 0x37;
            }
          }
          bVar4 = pbVar24[lVar17 + 1];
          lVar17 = lVar17 + 1;
          uVar25 = uVar19 | uVar25 << 4;
        } while( true );
      }
      close(__fd);
      if (__dest != (byte *)0x0) goto LAB_00122d68;
      goto LAB_00122d74;
    }
    close(__fd);
  }
  puVar10 = (ulong *)0x0;
LAB_00122d9c:
  if (*(long *)(lVar6 + 0x28) == local_f0.__unused[1]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar10);
LAB_001226c0:
  if (lVar17 != 0) {
    pbVar24 = pbVar24 + lVar17;
    pbVar26 = pbVar24;
    if (bVar4 != 0) {
      pbVar24 = pbVar24 + 1;
      pbVar26 = pbVar24;
    }
    while( true ) {
      pbVar26 = pbVar26 + 1;
      bVar5 = *pbVar24;
      if ((bVar5 != 9) && (bVar5 != 0x20)) break;
      pbVar24 = pbVar24 + 1;
    }
    lVar17 = 0;
    uVar16 = 0;
    do {
      uVar19 = (ulong)bVar5;
      uVar22 = uVar19 - 0x30;
      if (9 < uVar22) {
        if (uVar19 - 0x61 < 6) {
          uVar22 = uVar19 - 0x57;
        }
        else {
          if (5 < uVar19 - 0x41) goto LAB_0012274c;
          uVar22 = uVar19 - 0x37;
        }
      }
      bVar5 = pbVar24[lVar17 + 1];
      uVar16 = uVar22 | uVar16 << 4;
      lVar17 = lVar17 + 1;
      pbVar26 = pbVar26 + 1;
    } while( true );
  }
  goto LAB_001225a0;
LAB_0012274c:
  if (lVar17 != 0) {
    pbVar24 = pbVar24 + lVar17;
    while (((int)uVar19 == 9 || ((int)uVar19 == 0x20))) {
      pbVar24 = pbVar24 + 1;
      pbVar26 = pbVar26 + 1;
      uVar19 = (ulong)*pbVar24;
    }
    uVar22 = 0;
    while ((0x20 < (uint)uVar19 || ((1L << (uVar19 & 0x3f) & 0x100000201U) == 0))) {
      uVar23 = uVar22;
      if (uVar22 < 0xf) {
        uVar23 = uVar22 + 1;
        *(char *)((long)local_f0.__unused + (uVar22 - 0x78)) = (char)uVar19;
      }
      pbVar24 = pbVar24 + 1;
      pbVar26 = pbVar26 + 1;
      uVar22 = uVar23;
      uVar19 = (ulong)*pbVar24;
    }
    if (uVar22 - 1 < 0xf) {
      *(undefined1 *)((long)local_f0.__unused + (uVar22 - 0x78)) = 0;
      for (; (bVar5 = *pbVar24, bVar5 == 9 || (bVar5 == 0x20)); pbVar24 = pbVar24 + 1) {
        pbVar26 = pbVar26 + 1;
      }
      lVar17 = 0;
      uVar19 = 0;
      do {
        uVar22 = (ulong)bVar5;
        uVar23 = uVar22 - 0x30;
        if (9 < uVar23) {
          if (uVar22 - 0x61 < 6) {
            uVar23 = uVar22 - 0x57;
          }
          else {
            if (5 < uVar22 - 0x41) goto LAB_00122854;
            uVar23 = uVar22 - 0x37;
          }
        }
        bVar5 = pbVar24[lVar17 + 1];
        uVar19 = uVar23 | uVar19 << 4;
        lVar17 = lVar17 + 1;
        pbVar26 = pbVar26 + 1;
      } while( true );
    }
  }
  goto LAB_001225a0;
LAB_00122854:
  if (lVar17 != 0) {
    pbVar24 = pbVar24 + lVar17;
    while (((int)uVar22 == 9 || ((int)uVar22 == 0x20))) {
      pbVar24 = pbVar24 + 1;
      pbVar26 = pbVar26 + 1;
      uVar22 = (ulong)*pbVar24;
    }
    lVar17 = 0;
    do {
      if (9 < uVar22 - 0x30) {
        iVar7 = (int)uVar22;
        if ((0x25 < iVar7 - 0x41U) || ((1L << ((ulong)(iVar7 - 0x41U) & 0x3f) & 0x3f0000003fU) == 0)
           ) goto LAB_001228b8;
      }
      uVar22 = (ulong)*pbVar26;
      lVar17 = lVar17 + 1;
      pbVar26 = pbVar26 + 1;
    } while( true );
  }
  goto LAB_001225a0;
LAB_001228b8:
  if (lVar17 == 0) goto LAB_001225a0;
  pbVar24 = pbVar24 + lVar17;
  if (iVar7 != 0) {
    pbVar24 = pbVar26;
  }
  if (pbVar24 == (byte *)0x0) goto LAB_001225a0;
  pbVar26 = pbVar24 + 2;
  for (; (bVar5 = *pbVar24, bVar5 == 9 || (bVar5 == 0x20)); pbVar24 = pbVar24 + 1) {
    pbVar26 = pbVar26 + 1;
  }
  lVar17 = 0;
  while ((uVar22 = (ulong)bVar5, uVar22 - 0x30 < 10 ||
         ((bVar5 - 0x41 < 0x26 && ((1L << ((ulong)(bVar5 - 0x41) & 0x3f) & 0x3f0000003fU) != 0)))))
  {
    bVar5 = pbVar24[lVar17 + 1];
    lVar17 = lVar17 + 1;
    pbVar26 = pbVar26 + 1;
  }
  if (lVar17 == 0) goto LAB_001225a0;
  pbVar24 = pbVar24 + lVar17;
  while (((int)uVar22 == 9 || ((int)uVar22 == 0x20))) {
    pbVar24 = pbVar24 + 1;
    pbVar26 = pbVar26 + 1;
    uVar22 = (ulong)*pbVar24;
  }
  if (9 < uVar22 - 0x30) goto LAB_001225a0;
  lVar17 = 0;
  do {
    pbVar21 = pbVar26;
    uVar22 = (ulong)pbVar24[lVar17 + 1];
    lVar17 = lVar17 + 1;
    pbVar26 = pbVar21 + 1;
  } while (uVar22 - 0x30 < 10);
  if (lVar17 == 0) goto LAB_001225a0;
  pbVar24 = pbVar24 + lVar17;
  while (((int)uVar22 == 9 || (pbVar26 = pbVar24, (int)uVar22 == 0x20))) {
    pbVar24 = pbVar24 + 1;
    pbVar21 = pbVar21 + 1;
    uVar22 = (ulong)*pbVar24;
  }
  while (((int)uVar22 == 9 || ((int)uVar22 == 0x20))) {
    pbVar21 = pbVar21 + 1;
    uVar22 = (ulong)pbVar26[1];
    pbVar26 = pbVar26 + 1;
  }
  lVar17 = 0;
  while ((0x20 < (uint)uVar22 || ((1L << (uVar22 & 0x3f) & 0x100000201U) == 0))) {
    pbVar26 = pbVar21 + lVar17;
    lVar17 = lVar17 + 1;
    uVar22 = (ulong)*pbVar26;
  }
  if ((bVar4 != 0x2d) || (iVar7 != 0x3a)) goto LAB_001225a0;
  uVar8 = (char)local_f0.st_dev == 'r' | 2;
  if (local_f0.st_dev._1_1_ != 'w') {
    uVar8 = (uint)((char)local_f0.st_dev == 'r');
  }
  uVar2 = uVar8 | 4;
  if (local_f0.st_dev._2_1_ != 'x') {
    uVar2 = uVar8;
  }
  puVar13 = (ulong *)FUN_0011ea20(pbVar12);
  if (puVar13 != (ulong *)0xffffffffffffffff) {
    *puVar13 = uVar25;
    puVar13[1] = uVar16;
    puVar13[2] = uVar19;
    puVar13[3] = 0;
    puVar13[0xf] = (ulong)puVar10;
    *(uint *)(puVar13 + 4) = uVar2;
    pcVar15 = strdup((char *)pbVar24);
    puVar13[5] = (ulong)pcVar15;
    pthread_mutex_init((pthread_mutex_t *)(puVar13 + 6),(pthread_mutexattr_t *)0x0);
    pcVar15 = (char *)puVar13[5];
    *(undefined2 *)(puVar13 + 0xb) = 0;
    *(undefined1 *)((long)puVar13 + 0x5a) = 0;
    uVar8 = strncmp("/dev/",pcVar15,5);
    pbVar12 = (byte *)(ulong)uVar8;
    if (uVar8 == 0) {
      uVar8 = strncmp("ashmem/",pcVar15 + 5,7);
      pbVar12 = (byte *)(ulong)uVar8;
      if (uVar8 != 0) {
        *(uint *)(puVar13 + 4) = (uint)puVar13[4] | 0x8000;
      }
    }
    puVar10 = puVar13;
    if (*pcVar15 != '\0') {
      uVar8 = strncmp("[stack:",pcVar15,7);
      pbVar12 = (byte *)(ulong)uVar8;
      if ((((uVar2 & 0xfffffffd) == 5) && (uVar8 != 0)) && (-1 < *(char *)((long)puVar13 + 0x21))) {
        if ((param_1 == 0) && (iVar7 = open(pcVar15,0), -1 < iVar7)) {
          iVar9 = fstat(iVar7,&local_f0);
          if (iVar9 == -1) {
            close(iVar7);
          }
          else {
            pvStack_32ba0 = (void *)local_f0.st_size;
            piStack_32ba8 = mmap((void *)0x0,local_f0.st_size,1,2,iVar7,0);
            close(iVar7);
            if (piStack_32ba8 != (int *)0xffffffffffffffff) {
              if (((pvStack_32ba0 < (void *)0x7) || (*piStack_32ba8 != 0x464c457f)) ||
                 ((char)piStack_32ba8[1] != '\x02')) {
                bStack_32bb0 = false;
              }
              else {
                bStack_32bb0 = *(char *)((long)piStack_32ba8 + 6) == '\x01';
                if (bStack_32bb0) {
                  uStack_32baf = 0x101;
                  uVar25 = FUN_001191a4(&bStack_32bb0,uVar19,&local_f0);
                  if ((uVar25 & 1) != 0) {
                    puVar13[3] = CONCAT17(local_f0.st_dev._7_1_,
                                          CONCAT16(local_f0.st_dev._6_1_,
                                                   CONCAT15(local_f0.st_dev._5_1_,
                                                            CONCAT14(local_f0.st_dev._4_1_,
                                                                     CONCAT13(local_f0.st_dev._3_1_,
                                                                              CONCAT12(local_f0.
                                                  st_dev._2_1_,
                                                  CONCAT11(local_f0.st_dev._1_1_,
                                                           (char)local_f0.st_dev)))))));
                  }
                  uVar8 = munmap(piStack_32ba8,(size_t)pvStack_32ba0);
                  pbVar12 = (byte *)(ulong)uVar8;
                  goto LAB_001225a0;
                }
              }
              munmap(piStack_32ba8,(size_t)pvStack_32ba0);
            }
          }
        }
        if (piStack_32be0 == (int *)0x0) {
          if (param_1 == 1) {
            _Uaarch64_local_access_addr_space_init(&iStack_32b90);
            piStack_32be0 = &iStack_32b90;
          }
          else {
            piStack_32be0 = (int *)_Uaarch64_create_addr_space(_UPT_accessors,0);
            if (piStack_32be0 == (int *)0x0) {
              piStack_32be0 = (int *)0x0;
              pbVar12 = (byte *)0x0;
              goto LAB_001225a0;
            }
            pvStack_32be8 = (void *)_UPT_create(param_2);
            if (pvStack_32be8 == (void *)0x0) {
              pbVar12 = (byte *)_Uaarch64_destroy_addr_space(piStack_32be0);
              pvStack_32be8 = (void *)0x0;
              piStack_32be0 = (int *)0x0;
              goto LAB_001225a0;
            }
          }
        }
        uStack_32baf = uStack_32baf & 0xff;
        pvStack_32ba0 = pvStack_32be8;
        piStack_32ba8 = piStack_32be0;
        puStack_32b98 = puVar13;
        pbVar12 = (byte *)_Uelf64_memory_read(&bStack_32bb0,*puVar13,&local_f0,4,0);
        if ((((pbVar12 == (byte *)0x4) &&
             (CONCAT13(local_f0.st_dev._3_1_,
                       CONCAT12(local_f0.st_dev._2_1_,
                                CONCAT11(local_f0.st_dev._1_1_,(char)local_f0.st_dev))) ==
              0x464c457f)) &&
            (pbVar12 = (byte *)_Uelf64_memory_read(&bStack_32bb0,*puVar13 + 4,
                                                   (undefined1 *)((long)&local_f0.st_dev + 4),0xc,0)
            , pbVar12 == (byte *)0xc)) && (local_f0.st_dev._4_1_ == '\x02')) {
          bStack_32bb0 = local_f0.st_dev._6_1_ == '\x01';
          if ((bStack_32bb0) &&
             (pbVar12 = (byte *)FUN_001191a4(&bStack_32bb0,puVar13[2],&local_f0),
             ((ulong)pbVar12 & 1) != 0)) {
            puVar13[3] = CONCAT17(local_f0.st_dev._7_1_,
                                  CONCAT16(local_f0.st_dev._6_1_,
                                           CONCAT15(local_f0.st_dev._5_1_,
                                                    CONCAT14(local_f0.st_dev._4_1_,
                                                             CONCAT13(local_f0.st_dev._3_1_,
                                                                      CONCAT12(local_f0.st_dev._2_1_
                                                                               ,CONCAT11(local_f0.
                                                  st_dev._1_1_,(char)local_f0.st_dev)))))));
          }
        }
        else {
          bStack_32bb0 = false;
        }
      }
    }
    goto LAB_001225a0;
  }
  close(__fd);
LAB_00122d68:
  munmap(__dest,(size_t)__len);
LAB_00122d74:
  if ((param_1 == 0) && (piStack_32be0 != (int *)0x0)) {
    _Uaarch64_destroy_addr_space();
    _UPT_destroy(pvStack_32be8);
  }
  goto LAB_00122d9c;
}

