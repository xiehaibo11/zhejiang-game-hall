
/* WARNING: Removing unreachable block (ram,0x011b0884) */
/* WARNING: Removing unreachable block (ram,0x011b0914) */
/* WARNING: Removing unreachable block (ram,0x011b085c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_011af9c4(long param_1)

{
  int iVar1;
  int __fd;
  undefined1 uVar2;
  long *plVar3;
  undefined4 __mode;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  char *pcVar10;
  char *pcVar11;
  ssize_t sVar12;
  size_t sVar13;
  ssize_t sVar14;
  ulong uVar15;
  iovec *piVar16;
  uint uVar17;
  long lVar18;
  size_t sVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  iovec *piVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  undefined1 local_2110 [128];
  stat local_2090;
  undefined8 local_1f80;
  uint local_1f78;
  uint local_1f74;
  __mode_t _Stack_1f70;
  undefined1 *local_1f68;
  long local_1f60;
  undefined1 auStack_1f40 [40];
  undefined1 auStack_1f18 [8];
  long local_1f10;
  long local_88 [5];
  
  lVar20 = tpidr_el0;
  lVar18 = *(long *)(lVar20 + 0x28);
  iVar1 = *(int *)(param_1 + -0x110);
  puVar9 = (uint *)__errno();
  plVar3 = &local_2090.st_ctim.tv_nsec;
LAB_011afa5c:
  *puVar9 = 0;
  switch(*(undefined4 *)(param_1 + -0x110)) {
  case 1:
    if ((DAT_0179370c & 1) == 0) {
      uVar7 = open(*(char **)(param_1 + -0xe8),*(uint *)(param_1 + -0x34) | 0x80000,
                   (ulong)*(uint *)(param_1 + -0x30));
      if ((-1 < (int)uVar7) || (*puVar9 != 0x16)) goto LAB_011b0544;
      DAT_0179370c = 1;
      lVar26 = *(long *)(param_1 + -0x100);
    }
    else {
      lVar26 = *(long *)(param_1 + -0x100);
    }
    if (lVar26 != 0) {
      uv_rwlock_rdlock(*(long *)(param_1 + -0x108) + 0x130);
    }
    uVar7 = open(*(char **)(param_1 + -0xe8),*(int *)(param_1 + -0x34),
                 (ulong)*(uint *)(param_1 + -0x30));
    if ((-1 < (int)uVar7) && (iVar6 = FUN_011a2cfc(uVar7,1), iVar6 != 0)) {
      iVar6 = FUN_011a2d5c(uVar7);
      if (iVar6 != 0) {
switchD_011afa78_default:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar7 = 0xffffffff;
    }
    if (*(long *)(param_1 + -0x100) == 0) goto LAB_011b0544;
    uv_rwlock_rdunlock(*(long *)(param_1 + -0x108) + 0x130);
    uVar25 = (ulong)(int)uVar7;
    goto joined_r0x011b0148;
  case 2:
    iVar6 = close(*(int *)(param_1 + -0x38));
    break;
  case 3:
    uVar8 = FUN_011a2798();
    uVar7 = *(uint *)(param_1 + -0x2c);
    piVar23 = *(iovec **)(param_1 + -0x28);
    uVar25 = 0;
    if (uVar7 != 0) {
      lVar26 = *(__off_t *)(param_1 + -0x20);
      piVar16 = piVar23;
      do {
        uVar17 = uVar8;
        if (uVar7 <= uVar8) {
          uVar17 = uVar7;
        }
        *(uint *)(param_1 + -0x2c) = uVar17;
        if (-1 < lVar26) {
          if (uVar17 == 1) {
            uVar21 = pread(*(int *)(param_1 + -0x38),piVar16->iov_base,piVar16->iov_len,lVar26);
            goto joined_r0x011afebc;
          }
          if (DAT_01793710 == '\x01') {
LAB_011afee8:
            lVar26 = 0;
            uVar21 = 0;
            uVar24 = 1;
            uVar15 = 1;
            do {
              sVar19 = *(size_t *)(*(long *)(param_1 + -0x28) + lVar26 + 8);
              if (sVar19 != 0) {
                uVar15 = pread(*(int *)(param_1 + -0x38),
                               *(void **)(*(long *)(param_1 + -0x28) + lVar26),sVar19,
                               *(long *)(param_1 + -0x20) + uVar21);
                uVar21 = (uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU)) + uVar21;
              }
              if ((long)uVar15 < 1) break;
              lVar26 = lVar26 + 0x10;
              bVar4 = uVar24 < *(uint *)(param_1 + -0x2c);
              uVar24 = uVar24 + 1;
            } while (bVar4);
            if ((long)uVar21 < 1) {
              uVar21 = uVar15;
            }
            goto joined_r0x011afebc;
          }
          uVar21 = FUN_011ae3a0(*(undefined4 *)(param_1 + -0x38));
          if (uVar21 != 0xffffffffffffffff) goto joined_r0x011afebc;
          if (*puVar9 == 0x26) {
            DAT_01793710 = '\x01';
            goto LAB_011afee8;
          }
          uVar21 = 0xffffffffffffffff;
LAB_011b088c:
          if (uVar25 != 0) {
            uVar21 = uVar25;
          }
          break;
        }
        if (uVar17 == 1) {
          uVar21 = read(*(int *)(param_1 + -0x38),piVar16->iov_base,piVar16->iov_len);
        }
        else {
          uVar21 = readv(*(int *)(param_1 + -0x38),piVar16,uVar17);
        }
joined_r0x011afebc:
        if ((long)uVar21 < 1) goto LAB_011b088c;
        lVar26 = *(long *)(param_1 + -0x20);
        if (-1 < lVar26) {
          lVar26 = lVar26 + uVar21;
          *(long *)(param_1 + -0x20) = lVar26;
        }
        uVar25 = uVar21 + uVar25;
        uVar7 = uVar7 - *(uint *)(param_1 + -0x2c);
        piVar16 = (iovec *)(*(long *)(param_1 + -0x28) + (ulong)*(uint *)(param_1 + -0x2c) * 0x10);
        *(iovec **)(param_1 + -0x28) = piVar16;
        uVar21 = uVar25;
      } while (uVar7 != 0);
joined_r0x011b08e4:
      uVar25 = uVar21;
      if ((uVar25 == 0xffffffffffffffff) && (*puVar9 == 4)) goto LAB_011b04c4;
    }
    goto joined_r0x011b08f4;
  case 4:
    uVar8 = FUN_011a2798();
    uVar7 = *(uint *)(param_1 + -0x2c);
    piVar23 = *(iovec **)(param_1 + -0x28);
    uVar25 = 0;
    if (uVar7 != 0) {
      lVar26 = *(__off_t *)(param_1 + -0x20);
      piVar16 = piVar23;
      do {
        uVar17 = uVar8;
        if (uVar7 <= uVar8) {
          uVar17 = uVar7;
        }
        *(uint *)(param_1 + -0x2c) = uVar17;
        if (-1 < lVar26) {
          if (uVar17 == 1) {
            uVar21 = pwrite(*(int *)(param_1 + -0x38),piVar16->iov_base,piVar16->iov_len,lVar26);
            goto joined_r0x011b002c;
          }
          if (DAT_01793714 == '\x01') {
LAB_011b0058:
            lVar26 = 0;
            uVar15 = 0;
            uVar21 = 0;
            uVar24 = 1;
            do {
              sVar19 = *(size_t *)(*(long *)(param_1 + -0x28) + lVar26 + 8);
              if (sVar19 != 0) {
                uVar15 = pwrite(*(int *)(param_1 + -0x38),
                                *(void **)(*(long *)(param_1 + -0x28) + lVar26),sVar19,
                                *(long *)(param_1 + -0x20) + uVar21);
                uVar21 = (uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU)) + uVar21;
              }
              if ((long)uVar15 < 0) break;
              lVar26 = lVar26 + 0x10;
              bVar4 = uVar24 < *(uint *)(param_1 + -0x2c);
              uVar24 = uVar24 + 1;
            } while (bVar4);
            if ((long)uVar21 < 1) {
              uVar21 = uVar15;
            }
            goto joined_r0x011b002c;
          }
          uVar21 = FUN_011ae3cc(*(undefined4 *)(param_1 + -0x38));
          if (uVar21 != 0xffffffffffffffff) goto joined_r0x011b002c;
          if (*puVar9 == 0x26) {
            DAT_01793714 = '\x01';
            goto LAB_011b0058;
          }
          uVar21 = 0xffffffffffffffff;
LAB_011b08d8:
          if (uVar25 != 0) {
            uVar21 = uVar25;
          }
          break;
        }
        if (uVar17 == 1) {
          uVar21 = write(*(int *)(param_1 + -0x38),piVar16->iov_base,piVar16->iov_len);
        }
        else {
          uVar21 = writev(*(int *)(param_1 + -0x38),piVar16,uVar17);
        }
joined_r0x011b002c:
        if ((long)uVar21 < 1) goto LAB_011b08d8;
        lVar26 = *(long *)(param_1 + -0x20);
        if (-1 < lVar26) {
          lVar26 = lVar26 + uVar21;
          *(long *)(param_1 + -0x20) = lVar26;
        }
        uVar25 = uVar21 + uVar25;
        uVar7 = uVar7 - *(uint *)(param_1 + -0x2c);
        piVar16 = (iovec *)(*(long *)(param_1 + -0x28) + (ulong)*(uint *)(param_1 + -0x2c) * 0x10);
        *(iovec **)(param_1 + -0x28) = piVar16;
        uVar21 = uVar25;
      } while (uVar7 != 0);
      goto joined_r0x011b08e4;
    }
joined_r0x011b08f4:
    if (piVar23 != (iovec *)(param_1 + 0x28)) {
      FUN_0119f27c(piVar23);
    }
    *(undefined8 *)(param_1 + -0x28) = 0;
    *(undefined4 *)(param_1 + -0x2c) = 0;
    goto joined_r0x011b0148;
  case 5:
    local_88[0] = *(long *)(param_1 + -0x20);
    sVar14 = sendfile(*(int *)(param_1 + -0x38),*(int *)(param_1 + -0x34),local_88,
                      *(size_t *)(param_1 + 0x30));
    lVar26 = *(long *)(param_1 + -0x20);
    if ((sVar14 != -1) || (lVar26 < local_88[0])) {
      uVar25 = local_88[0] - lVar26;
      *(long *)(param_1 + -0x20) = local_88[0];
      goto joined_r0x011b04f8;
    }
    uVar7 = *puVar9;
    if (((0x16 < uVar7) || ((1 << (ulong)(uVar7 & 0x1f) & 0x440020U) == 0)) && (uVar7 != 0x58))
    goto LAB_011b04c4;
    *puVar9 = 0;
    uVar21 = *(ulong *)(param_1 + 0x30);
    if (uVar21 != 0) {
      iVar6 = *(int *)(param_1 + -0x34);
      __fd = *(int *)(param_1 + -0x38);
      uVar25 = 0;
      uVar2 = true;
      do {
        while( true ) {
          sVar19 = uVar21 - uVar25;
          if (0x1fff < sVar19) {
            sVar19 = 0x2000;
          }
          if ((bool)uVar2) break;
LAB_011afc20:
          sVar14 = read(iVar6,local_2110 + 0x80,sVar19);
          if (sVar14 == -1) goto code_r0x011afc3c;
          if (sVar14 == 0) goto LAB_011afd38;
          uVar2 = false;
joined_r0x011afc88:
          if (0 < sVar14) {
            lVar22 = 0;
            do {
              while (sVar12 = write(__fd,local_2110 + lVar22 + 0x80,sVar14 - lVar22), sVar12 == -1)
              {
                if (*puVar9 != 4) {
                  if (*puVar9 != 0xb) goto LAB_011b04c4;
                  local_2110._4_4_ = 4;
                  local_2110._0_4_ = __fd;
                  while (iVar5 = poll((pollfd *)local_2110,1,-1), iVar5 == -1) {
                    if (*puVar9 != 4) goto LAB_011b0870;
                  }
                  if ((local_2110._0_8_ & 0xfffb000000000000) != 0) {
LAB_011b0870:
                    *puVar9 = 5;
                    goto LAB_011b04c4;
                  }
                }
              }
              lVar22 = sVar12 + lVar22;
            } while (lVar22 < sVar14);
          }
          uVar25 = sVar14 + uVar25;
          lVar26 = sVar14 + lVar26;
          if (uVar21 <= uVar25) {
LAB_011afd38:
            if (uVar25 != 0xffffffffffffffff) goto LAB_011afd40;
            goto joined_r0x011b04f8;
          }
        }
        do {
          sVar14 = pread(iVar6,local_2110 + 0x80,sVar19,lVar26);
          if (sVar14 != -1) {
            if (sVar14 != 0) goto joined_r0x011afc88;
            goto LAB_011afd38;
          }
          uVar7 = *puVar9;
        } while (uVar7 == 4);
LAB_011afc48:
        if ((!(bool)uVar2) || (uVar25 != 0)) {
          if (1 < uVar25 + 1) goto LAB_011afd40;
          break;
        }
        uVar2 = false;
      } while ((uVar7 == 5) || (uVar7 == 0x1d));
      goto LAB_011b04c4;
    }
    uVar25 = 0;
    *(long *)(param_1 + -0x20) = lVar26;
    goto LAB_011b0944;
  case 6:
    iVar6 = stat(*(char **)(param_1 + -0xe8),(stat *)(local_2110 + 0x80));
    goto joined_r0x011b00cc;
  case 7:
    iVar6 = lstat(*(char **)(param_1 + -0xe8),(stat *)(local_2110 + 0x80));
    goto joined_r0x011b00cc;
  case 8:
    iVar6 = fstat(*(int *)(param_1 + -0x38),(stat *)(local_2110 + 0x80));
joined_r0x011b00cc:
    if (iVar6 == 0) {
      *(__dev_t *)(param_1 + -0xe0) = local_2090.st_dev;
      *(__nlink_t *)(param_1 + -0xd0) = local_2090.st_nlink >> 0x20;
      *(__nlink_t *)(param_1 + -0xd8) = local_2090.st_nlink & 0xffffffff;
      *(ulong *)(param_1 + -0xc0) = (ulong)local_2090._24_8_ >> 0x20;
      *(ulong *)(param_1 + -200) = local_2090._24_8_ & 0xffffffff;
      *(undefined8 *)(param_1 + -0xb8) = local_2090._32_8_;
      *(__ino_t *)(param_1 + -0xb0) = local_2090.st_ino;
      *(__off_t *)(param_1 + -0xa8) = local_2090.st_size;
      *(long *)(param_1 + -0xa0) = (long)(int)local_2090.st_blksize;
      *(ulong *)(param_1 + -0x98) = CONCAT44(local_2090.st_blocks._4_4_,(int)local_2090.st_blocks);
      *(long *)(param_1 + -0x78) = local_2090.st_atim.tv_nsec;
      *(__time_t *)(param_1 + -0x80) = local_2090.st_atim.tv_sec;
      *(long *)(param_1 + -0x68) = local_2090.st_mtim.tv_nsec;
      *(ulong *)(param_1 + -0x70) =
           CONCAT44(local_2090.st_mtim.tv_sec._4_4_,(uint)local_2090.st_mtim.tv_sec);
      *(__time_t *)(param_1 + -0x60) = local_2090.st_ctim.tv_sec;
      *(long *)(param_1 + -0x58) = local_2090.st_ctim.tv_nsec;
      *(__time_t *)(param_1 + -0x50) = local_2090.st_ctim.tv_sec;
      *(long *)(param_1 + -0x48) = local_2090.st_ctim.tv_nsec;
      *(undefined8 *)(param_1 + -0x90) = 0;
      *(undefined8 *)(param_1 + -0x88) = 0;
    }
    uVar25 = (ulong)iVar6;
    goto joined_r0x011b0148;
  case 9:
    iVar6 = ftruncate(*(int *)(param_1 + -0x38),*(__off_t *)(param_1 + -0x20));
    break;
  case 10:
    local_2090.st_dev = (__dev_t)*(double *)(param_1 + -0x10);
    local_2090.st_ino = (__ino_t)*(double *)(param_1 + -8);
    iVar6 = utime(*(char **)(param_1 + -0xe8),(utimbuf *)(local_2110 + 0x80));
    break;
  case 0xb:
    if ((DAT_01793708 & 1) == 0) {
      local_2090.st_dev = (__dev_t)*(double *)(param_1 + -0x10);
      local_2090.st_ino = ((ulong)(long)(*(double *)(param_1 + -0x10) * 1000000.0) % 1000000) * 1000
      ;
      local_2090.st_nlink = (__nlink_t)*(double *)(param_1 + -8);
      local_2090._24_8_ = ((ulong)(long)(*(double *)(param_1 + -8) * 1000000.0) % 1000000) * 1000;
      uVar7 = FUN_011ae368(*(undefined4 *)(param_1 + -0x38),0,local_2110 + 0x80,0);
      if ((uVar7 == 0) || (*puVar9 != 0x26)) goto LAB_011b0544;
      DAT_01793708 = 1;
    }
    local_2110._0_8_ = (undefined8)*(double *)(param_1 + -0x10);
    local_2110._8_8_ = (ulong)(long)(*(double *)(param_1 + -0x10) * 1000000.0) % 1000000;
    local_2110._16_8_ = (undefined8)*(double *)(param_1 + -8);
    local_2110._24_8_ = (ulong)(long)(*(double *)(param_1 + -8) * 1000000.0) % 1000000;
    snprintf((char *)local_88,0x1b,"/proc/self/fd/%d",(ulong)*(uint *)(param_1 + -0x38));
    uVar7 = utimes((char *)local_88,(timeval *)local_2110);
    if ((uVar7 != 0) &&
       (((uVar8 = *puVar9, uVar8 == 0x14 || (uVar8 == 0xd)) ||
        ((uVar8 == 2 &&
         ((iVar6 = fcntl(*(int *)(param_1 + -0x38),3), iVar6 != -1 || (*puVar9 != 9)))))))) {
      *puVar9 = 0x26;
      uVar25 = (ulong)(int)uVar7;
      goto joined_r0x011b04f8;
    }
    goto LAB_011b0544;
  case 0xc:
    iVar6 = access(*(char **)(param_1 + -0xe8),*(int *)(param_1 + -0x34));
    break;
  case 0xd:
    iVar6 = chmod(*(char **)(param_1 + -0xe8),*(__mode_t *)(param_1 + -0x30));
    break;
  case 0xe:
    iVar6 = fchmod(*(int *)(param_1 + -0x38),*(__mode_t *)(param_1 + -0x30));
    break;
  case 0xf:
    iVar6 = fsync(*(int *)(param_1 + -0x38));
    break;
  case 0x10:
    iVar6 = fdatasync(*(int *)(param_1 + -0x38));
    break;
  case 0x11:
    iVar6 = unlink(*(char **)(param_1 + -0xe8));
    break;
  case 0x12:
    iVar6 = rmdir(*(char **)(param_1 + -0xe8));
    break;
  case 0x13:
    iVar6 = mkdir(*(char **)(param_1 + -0xe8),*(__mode_t *)(param_1 + -0x30));
    break;
  case 0x14:
    pcVar10 = mkdtemp(*(char **)(param_1 + -0xe8));
    uVar25 = -(ulong)(pcVar10 == (char *)0x0);
    goto joined_r0x011b04f8;
  case 0x15:
    iVar6 = rename(*(char **)(param_1 + -0xe8),*(char **)(param_1 + -0x40));
    break;
  case 0x16:
    local_2090.st_dev = 0;
    uVar7 = scandir(*(char **)(param_1 + -0xe8),(dirent ***)(local_2110 + 0x80),FUN_011b2228,
                    FUN_011b2270);
    *(undefined4 *)(param_1 + -0x2c) = 0;
    if (uVar7 != 0xffffffff) {
      if (uVar7 == 0) {
        free((void *)local_2090.st_dev);
        local_2090.st_dev = 0;
      }
      *(__dev_t *)(param_1 + -0xf0) = local_2090.st_dev;
    }
    goto LAB_011b0544;
  case 0x17:
    iVar6 = link(*(char **)(param_1 + -0xe8),*(char **)(param_1 + -0x40));
    break;
  case 0x18:
    iVar6 = symlink(*(char **)(param_1 + -0xe8),*(char **)(param_1 + -0x40));
    break;
  case 0x19:
    sVar13 = pathconf(*(char **)(param_1 + -0xe8),5);
    sVar19 = 0x1000;
    if (sVar13 != 0xffffffffffffffff) {
      sVar19 = sVar13;
    }
    pcVar10 = malloc(sVar19 + 1);
    if (pcVar10 != (char *)0x0) {
      sVar14 = readlink(*(char **)(param_1 + -0xe8),pcVar10,sVar19);
      if (sVar14 == -1) goto LAB_011afdd0;
      pcVar10[sVar14] = '\0';
LAB_011b09a0:
      *(undefined8 *)(param_1 + -0xf8) = 0;
      *(char **)(param_1 + -0xf0) = pcVar10;
      iVar1 = *(int *)(param_1 + -0x110);
      goto joined_r0x011b09b4;
    }
LAB_011b04d4:
    *puVar9 = 0xc;
    uVar7 = *puVar9;
    if (iVar1 != 2) goto LAB_011afde4;
    goto LAB_011b0920;
  case 0x1a:
    iVar6 = chown(*(char **)(param_1 + -0xe8),*(__uid_t *)(param_1 + -0x18),
                  *(__gid_t *)(param_1 + -0x14));
    break;
  case 0x1b:
    iVar6 = fchown(*(int *)(param_1 + -0x38),*(__uid_t *)(param_1 + -0x18),
                   *(__gid_t *)(param_1 + -0x14));
    break;
  case 0x1c:
    lVar26 = pathconf(*(char **)(param_1 + -0xe8),5);
    sVar19 = 0x1001;
    if (lVar26 != -1) {
      sVar19 = lVar26 + 1;
    }
    pcVar10 = malloc(sVar19);
    if (pcVar10 == (char *)0x0) goto LAB_011b04d4;
    pcVar11 = realpath(*(char **)(param_1 + -0xe8),pcVar10);
    if (pcVar11 != (char *)0x0) goto LAB_011b09a0;
LAB_011afdd0:
    FUN_0119f27c(pcVar10);
    uVar7 = *puVar9;
    goto joined_r0x011afde0;
  case 0x1d:
    local_2090.st_ctim.tv_sec = *(long *)(param_1 + -0xe8);
    local_2090.st_ino = CONCAT44(local_2090.st_ino._4_4_,6);
    local_2090.st_blocks._0_4_ = 1;
    local_1f80 = 0;
    local_1f68 = (undefined1 *)0x0;
    local_2090.st_atim.tv_nsec = 0;
    local_2090.st_atim.tv_sec = 0;
    local_2090.st_mtim.tv_nsec = 0;
    local_2090.st_mtim.tv_sec._4_4_ = 0;
    local_2090.st_mtim.tv_sec._0_4_ = 0;
    _Stack_1f70 = 0;
    local_1f74 = 0;
    FUN_011af9c4(auStack_1f40);
    uVar7 = (uint)local_2090.st_mtim.tv_sec;
    if ((local_2090.st_ctim.tv_sec != 0) &&
       ((local_2090.st_atim.tv_nsec != 0 || ((int)local_2090.st_blocks == 0x14)))) {
      FUN_0119f27c();
    }
    local_2090.st_ctim.tv_sec = 0;
    local_1f80 = 0;
    if (((int)local_2090.st_blocks == 0x16) &&
       ((undefined1 *)local_2090.st_mtim.tv_nsec != (undefined1 *)0x0)) {
      FUN_011a1bf4(local_2110 + 0x80);
    }
    if (local_1f68 != auStack_1f18) {
      FUN_0119f27c();
    }
    local_1f68 = (undefined1 *)0x0;
    if ((long *)local_2090.st_mtim.tv_nsec != plVar3) {
      FUN_0119f27c();
    }
    local_2090.st_mtim.tv_nsec = 0;
    if (-1 < (int)uVar7) {
      iVar6 = fstat(uVar7,(stat *)local_2110);
      if (iVar6 == 0) {
        local_2090.st_ctim.tv_sec = *(long *)(param_1 + -0x40);
        local_2090.st_ino = CONCAT44(local_2090.st_ino._4_4_,6);
        local_2090.st_blocks._0_4_ = 1;
        __mode = local_2110._16_4_;
        local_1f74 = (*(uint *)(param_1 + -0x34) & 1) << 7 | 0x241;
        local_1f80 = 0;
        local_1f68 = (undefined1 *)0x0;
        local_2090.st_atim.tv_nsec = 0;
        local_2090.st_atim.tv_sec = 0;
        local_2090.st_mtim.tv_nsec = 0;
        local_2090.st_mtim.tv_sec._4_4_ = 0;
        local_2090.st_mtim.tv_sec._0_4_ = 0;
        _Stack_1f70 = local_2110._16_4_;
        FUN_011af9c4(auStack_1f40);
        uVar8 = (uint)local_2090.st_mtim.tv_sec;
        if ((local_2090.st_ctim.tv_sec != 0) &&
           ((local_2090.st_atim.tv_nsec != 0 || ((int)local_2090.st_blocks == 0x14)))) {
          FUN_0119f27c();
        }
        local_2090.st_ctim.tv_sec = 0;
        local_1f80 = 0;
        if (((int)local_2090.st_blocks == 0x16) &&
           ((undefined1 *)local_2090.st_mtim.tv_nsec != (undefined1 *)0x0)) {
          FUN_011a1bf4(local_2110 + 0x80);
        }
        if (local_1f68 != auStack_1f18) {
          FUN_0119f27c();
        }
        local_1f68 = (undefined1 *)0x0;
        if ((long *)local_2090.st_mtim.tv_nsec != plVar3) {
          FUN_0119f27c();
        }
        local_2090.st_mtim.tv_nsec = 0;
        uVar17 = uVar8;
        if (-1 < (int)uVar8) {
          iVar6 = fchmod(uVar8,__mode);
          if (iVar6 == -1) goto LAB_011b0480;
          if ((*(byte *)(param_1 + -0x34) & 6) == 0) {
LAB_011b0678:
            if (local_2110._48_8_ != 0) {
              lVar26 = 0;
              lVar22 = local_2110._48_8_;
              do {
                local_2090.st_ino = CONCAT44(local_2090.st_ino._4_4_,6);
                local_2090.st_blocks._0_4_ = 5;
                local_1f80 = 0;
                local_1f68 = (undefined1 *)0x0;
                local_2090.st_ctim.tv_sec = 0;
                local_2090.st_atim.tv_nsec = 0;
                local_2090.st_atim.tv_sec = 0;
                local_2090.st_mtim.tv_nsec = 0;
                local_2090.st_mtim.tv_sec._4_4_ = 0;
                local_2090.st_mtim.tv_sec._0_4_ = 0;
                local_1f74 = uVar7;
                local_1f78 = uVar8;
                local_1f60 = lVar26;
                local_1f10 = lVar22;
                FUN_011af9c4(auStack_1f40);
                uVar17 = (uint)local_2090.st_mtim.tv_sec;
                if ((local_2090.st_ctim.tv_sec != 0) &&
                   ((local_2090.st_atim.tv_nsec != 0 || ((int)local_2090.st_blocks == 0x14)))) {
                  FUN_0119f27c();
                }
                local_2090.st_ctim.tv_sec = 0;
                local_1f80 = 0;
                if (((int)local_2090.st_blocks == 0x16) &&
                   ((undefined1 *)local_2090.st_mtim.tv_nsec != (undefined1 *)0x0)) {
                  FUN_011a1bf4(local_2110 + 0x80);
                }
                if (local_1f68 != auStack_1f18) {
                  FUN_0119f27c();
                }
                local_1f68 = (undefined1 *)0x0;
                if ((long *)local_2090.st_mtim.tv_nsec != plVar3) {
                  FUN_0119f27c();
                }
                local_2090.st_mtim.tv_nsec = 0;
                if ((int)uVar17 < 0) goto LAB_011b076c;
                lVar22 = lVar22 - CONCAT44(local_2090.st_mtim.tv_sec._4_4_,
                                           (uint)local_2090.st_mtim.tv_sec);
                lVar26 = CONCAT44(local_2090.st_mtim.tv_sec._4_4_,(uint)local_2090.st_mtim.tv_sec) +
                         lVar26;
              } while (lVar22 != 0);
            }
          }
          else {
            iVar6 = ioctl(uVar8,0x40049409,(ulong)uVar7);
            if (iVar6 == -1) {
              uVar17 = *puVar9;
              if (((uVar17 == 0x12) || (uVar17 == 0x5f)) || (uVar17 == 0x19)) {
                if ((*(byte *)(param_1 + -0x34) >> 2 & 1) != 0) {
                  uVar17 = 0xffffffa1;
                  goto LAB_011b076c;
                }
                goto LAB_011b0678;
              }
              goto LAB_011b0484;
            }
          }
          goto LAB_011b074c;
        }
      }
      else {
        uVar8 = 0xffffffff;
LAB_011b0480:
        uVar17 = *puVar9;
LAB_011b0484:
        if ((int)uVar17 < 1) {
LAB_011b074c:
          uVar17 = 0;
        }
        else {
          uVar17 = -uVar17;
        }
      }
LAB_011b076c:
      uVar7 = FUN_011a30c4(uVar7);
      if (uVar7 == 0 || uVar17 != 0) {
        uVar7 = uVar17;
      }
      if ((int)uVar8 < 0) {
        if (uVar7 == 0) goto LAB_011b0860;
      }
      else {
        uVar8 = FUN_011a30c4(uVar8);
        if (uVar8 == 0 || uVar7 != 0) {
          uVar8 = uVar7;
        }
        if (uVar8 == 0) {
LAB_011b0860:
          uVar25 = 0;
          goto LAB_011b0944;
        }
        local_2090.st_ctim.tv_sec = *(long *)(param_1 + -0x40);
        local_2090.st_ino = CONCAT44(local_2090.st_ino._4_4_,6);
        local_2090.st_blocks._0_4_ = 0x11;
        local_1f80 = 0;
        local_1f68 = (undefined1 *)0x0;
        local_2090.st_atim.tv_nsec = 0;
        local_2090.st_atim.tv_sec = 0;
        local_2090.st_mtim.tv_nsec = 0;
        local_2090.st_mtim.tv_sec._4_4_ = 0;
        local_2090.st_mtim.tv_sec._0_4_ = 0;
        FUN_011af9c4(auStack_1f40);
        if ((local_2090.st_ctim.tv_sec != 0) &&
           ((local_2090.st_atim.tv_nsec != 0 || ((int)local_2090.st_blocks == 0x14)))) {
          FUN_0119f27c();
        }
        local_2090.st_ctim.tv_sec = 0;
        local_1f80 = 0;
        if (((int)local_2090.st_blocks == 0x16) &&
           ((undefined1 *)local_2090.st_mtim.tv_nsec != (undefined1 *)0x0)) {
          FUN_011a1bf4(local_2110 + 0x80);
        }
        if (local_1f68 != auStack_1f18) {
          FUN_0119f27c();
        }
        local_1f68 = (undefined1 *)0x0;
        if ((long *)local_2090.st_mtim.tv_nsec != plVar3) {
          FUN_0119f27c();
        }
        local_2090.st_mtim.tv_nsec = 0;
        uVar7 = uVar8;
      }
      *puVar9 = -uVar7;
      goto LAB_011b04c4;
    }
LAB_011b0544:
    uVar25 = (ulong)(int)uVar7;
joined_r0x011b0148:
    if (uVar25 == 0xffffffffffffffff) goto LAB_011b04c4;
    goto LAB_011b0944;
  case 0x1e:
    iVar6 = lchown(*(char **)(param_1 + -0xe8),*(__uid_t *)(param_1 + -0x18),
                   *(__gid_t *)(param_1 + -0x14));
    break;
  default:
    goto switchD_011afa78_default;
  }
  uVar25 = (ulong)iVar6;
  goto joined_r0x011b04f8;
code_r0x011afc3c:
  uVar7 = *puVar9;
  if (uVar7 != 4) goto LAB_011afc48;
  goto LAB_011afc20;
LAB_011afd40:
  *(long *)(param_1 + -0x20) = lVar26;
joined_r0x011b04f8:
  if (uVar25 != 0xffffffffffffffff) {
LAB_011b0944:
    *(ulong *)(param_1 + -0xf8) = uVar25;
    if (uVar25 == 0) {
      iVar1 = *(int *)(param_1 + -0x110);
joined_r0x011b09b4:
      if (iVar1 - 6U < 3) {
        *(long *)(param_1 + -0xf0) = param_1 + -0xe0;
      }
    }
    lVar20 = *(long *)(lVar20 + 0x28);
    goto joined_r0x011b0974;
  }
LAB_011b04c4:
  uVar7 = *puVar9;
joined_r0x011afde0:
  if (iVar1 == 2) goto LAB_011b0920;
LAB_011afde4:
  if (uVar7 != 4) {
LAB_011b0920:
    *(long *)(param_1 + -0xf8) = -(long)(int)uVar7;
    lVar20 = *(long *)(lVar20 + 0x28);
joined_r0x011b0974:
    if (lVar20 == lVar18) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_011afa5c;
}

