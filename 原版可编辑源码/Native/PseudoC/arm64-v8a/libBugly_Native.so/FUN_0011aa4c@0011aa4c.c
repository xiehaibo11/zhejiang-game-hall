
uint FUN_0011aa4c(undefined8 *param_1)

{
  pthread_mutex_t *__mutex;
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  undefined2 uVar5;
  long lVar6;
  uint uVar7;
  void *pvVar8;
  byte bVar9;
  ulong uVar10;
  ushort uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ushort *puVar16;
  long lVar17;
  void *__dest;
  long lVar18;
  undefined1 auStack_d20 [1632];
  undefined1 auStack_6c0 [1616];
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  lVar17 = param_1[1];
  if (*(int *)(lVar17 + 0x44) == 0) {
    puVar1 = param_1 + 0xce;
    lVar15 = param_1[3] + (long)(char)((uint)(int)(char)(*(char *)(param_1 + 0xcd) << 6) >> 7);
    param_1[0xd6] = 0;
    param_1[0xd5] = 0;
    param_1[0xd4] = 0;
    param_1[0xd3] = 0;
    param_1[0xd2] = 0;
    param_1[0xd1] = 0;
    param_1[0xd0] = 0;
    param_1[0xcf] = 0;
    param_1[0xce] = 0;
    uVar7 = FUN_0011ecc4(lVar17,lVar15,puVar1,1,*param_1);
    if (uVar7 == 0xfffffff6) {
      uVar7 = (**(code **)param_1[1])((undefined8 *)param_1[1],lVar15,puVar1,1,*param_1);
      if (-1 < (int)uVar7) {
        bVar9 = 4;
        goto LAB_0011ada4;
      }
LAB_0011ae44:
      bVar9 = *(byte *)(param_1 + 0xcd);
    }
    else {
      bVar9 = 0xc;
LAB_0011ada4:
      if (2 < *(uint *)(param_1 + 0xd4)) {
        uVar7 = 0xfffffff6;
        goto LAB_0011ae44;
      }
      bVar3 = *(byte *)(param_1 + 0xcd);
      *(byte *)(param_1 + 0xcd) = bVar3 & 0xf3 | bVar9;
      *(byte *)(param_1 + 0xcd) =
           (*(byte *)(param_1[0xd5] + 0x46) >> 1 & 2 | bVar3 & 0xf1 | bVar9) ^ 2;
      if ((int)uVar7 < 0) goto LAB_0011ae44;
      uVar7 = FUN_0011b1f4(param_1,auStack_d20,param_1[3]);
      if (-1 < (int)uVar7) {
        uVar7 = FUN_0011b330(param_1,auStack_6c0);
        if ((*(byte *)(param_1 + 0xcd) >> 3 & 1) == 0) {
          if ((param_1[0xd5] != 0) && (*(int *)(param_1 + 0xd4) == 1)) {
            FUN_0011e848(&DAT_00177448);
            param_1[0xd5] = 0;
          }
          uVar7 = uVar7 & (int)uVar7 >> 0x1f;
        }
        else {
          FUN_0011eda0(param_1[1],puVar1,*param_1);
          uVar7 = uVar7 & (int)uVar7 >> 0x1f;
        }
        goto LAB_0011b0b0;
      }
      bVar9 = *(byte *)(param_1 + 0xcd);
    }
    if ((bVar9 >> 3 & 1) == 0) {
      if ((param_1[0xd5] != 0) && (*(int *)(param_1 + 0xd4) == 1)) {
        FUN_0011e848(&DAT_00177448);
        param_1[0xd5] = 0;
      }
    }
    else {
      FUN_0011eda0(param_1[1],puVar1,*param_1);
    }
  }
  else {
    __mutex = (pthread_mutex_t *)(lVar17 + 0x60);
    if (*(int *)(lVar17 + 0x44) == 1) {
      log2Console(3,"Bugly-libunwind","acquiring lock\n");
      pthread_mutex_lock(__mutex);
    }
    iVar2 = *(int *)(lVar17 + 0x48);
    if (iVar2 != *(int *)(lVar17 + 0x28c)) {
      lVar12 = 0;
      lVar15 = 0;
      *(undefined4 *)(lVar17 + 0x88) = 0x7f;
      do {
        if (lVar12 != 0) {
          *(short *)(lVar17 + lVar12 + 0x8d8) = (short)lVar15 + -1;
        }
        lVar18 = lVar17 + lVar12;
        lVar15 = lVar15 + 1;
        lVar12 = lVar12 + 0x650;
        *(undefined2 *)(lVar18 + 0x8da) = 0xffff;
        *(undefined8 *)(lVar18 + 0x8c8) = 0;
        *(byte *)(lVar18 + 0x8de) = *(byte *)(lVar18 + 0x8de) & 0xfe;
      } while (lVar15 != 0x80);
      *(undefined8 *)(lVar17 + 0x284) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x27c) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x274) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x26c) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x264) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x25c) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x254) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x24c) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x244) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x23c) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x234) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x22c) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x224) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x21c) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x214) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x20c) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x204) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x1fc) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 500) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x1ec) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x1e4) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x1dc) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x1d4) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x1cc) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x1c4) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x1bc) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x1b4) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x1ac) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x1a4) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x19c) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x194) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x18c) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x184) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x17c) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x174) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x16c) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x164) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x15c) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x154) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x14c) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x144) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x13c) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x134) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 300) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x124) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x11c) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x104) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0xfc) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0xf4) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0xec) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0xe4) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0xdc) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0xd4) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0xcc) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0xc4) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0xbc) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0xb4) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0xac) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0xa4) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x9c) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x94) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x8c) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x114) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x10c) = 0xffffffffffffffff;
      *(int *)(lVar17 + 0x28c) = iVar2;
    }
    uVar10 = (ulong)*(short *)(param_1 + 0xd7);
    lVar15 = param_1[3];
    lVar12 = lVar17 + uVar10 * 0x650;
    if (((*(byte *)(lVar12 + 0x8de) & 1) == 0) ||
       (*(long *)(lVar17 + uVar10 * 0x650 + 0x8c8) != lVar15)) {
      uVar4 = *(ushort *)(lVar17 + ((ulong)(lVar15 * -0x61c8864680b583ea) >> 0x37 & 0x1fe) + 0x8c);
      if (uVar4 < 0x80) {
        do {
          uVar10 = (ulong)uVar4;
          lVar12 = lVar17 + uVar10 * 0x650;
          if (((*(byte *)(lVar12 + 0x8de) & 1) != 0) &&
             (*(long *)(lVar17 + uVar10 * 0x650 + 0x8c8) == lVar15)) {
            *(ushort *)(lVar17 + (long)*(short *)((long)param_1 + 0x6ba) * 0x650 + 0x8dc) = uVar4;
            *(ushort *)(param_1 + 0xd7) = uVar4;
            goto LAB_0011afd8;
          }
          uVar4 = *(ushort *)(lVar17 + uVar10 * 0x650 + 0x8da);
        } while (uVar4 < 0x100);
      }
      pvVar8 = malloc(0xcb0);
      if (pvVar8 != (void *)0x0) {
        puVar1 = param_1 + 0xce;
        lVar15 = lVar15 + (char)((uint)(int)(char)(*(char *)(param_1 + 0xcd) << 6) >> 7);
        param_1[0xd6] = 0;
        param_1[0xd5] = 0;
        param_1[0xd4] = 0;
        param_1[0xd3] = 0;
        param_1[0xd2] = 0;
        param_1[0xd1] = 0;
        param_1[0xd0] = 0;
        param_1[0xcf] = 0;
        param_1[0xce] = 0;
        uVar7 = FUN_0011ecc4(param_1[1],lVar15,puVar1,1,*param_1);
        if (uVar7 == 0xfffffff6) {
          uVar7 = (**(code **)param_1[1])((undefined8 *)param_1[1],lVar15,puVar1,1,*param_1);
          if (-1 < (int)uVar7) {
            bVar9 = 4;
            goto LAB_0011ae7c;
          }
        }
        else {
          bVar9 = 0xc;
LAB_0011ae7c:
          if (*(uint *)(param_1 + 0xd4) < 3) {
            bVar3 = *(byte *)(param_1 + 0xcd);
            *(byte *)(param_1 + 0xcd) = bVar3 & 0xf3 | bVar9;
            *(byte *)(param_1 + 0xcd) =
                 (*(byte *)(param_1[0xd5] + 0x46) >> 1 & 2 | bVar3 & 0xf1 | bVar9) ^ 2;
            if ((-1 < (int)uVar7) &&
               (uVar7 = FUN_0011b1f4(param_1,pvVar8,param_1[3]), -1 < (int)uVar7)) {
              uVar4 = *(ushort *)(lVar17 + 0x88);
              uVar10 = (ulong)uVar4;
              lVar15 = lVar17 + 0x290;
              __dest = (void *)(lVar15 + uVar10 * 0x650);
              *(undefined2 *)(lVar17 + 0x88) = *(undefined2 *)((long)__dest + 0x648);
              *(ushort *)(lVar15 + (ulong)*(ushort *)(lVar17 + 0x8a) * 0x650 + 0x648) = uVar4;
              *(ushort *)(lVar17 + 0x8a) = uVar4;
              if (*(long *)((long)__dest + 0x638) != 0) {
                puVar16 = (ushort *)
                          (lVar17 + ((ulong)(*(long *)((long)__dest + 0x638) * -0x61c8864680b583ea)
                                     >> 0x37 & 0x1fe) + 0x8c);
                uVar13 = (ulong)*puVar16;
                if (*puVar16 == uVar4) {
                  uVar11 = *(ushort *)(lVar17 + uVar13 * 0x650 + 0x8da);
                }
                else {
                  do {
                    lVar12 = lVar17 + uVar13 * 0x650;
                    uVar11 = *(ushort *)(lVar12 + 0x8da);
                    uVar13 = (ulong)uVar11;
                    if (0x7f < uVar13) goto LAB_0011b130;
                  } while (uVar11 != uVar4);
                  uVar11 = *(ushort *)(lVar17 + uVar10 * 0x650 + 0x8da);
                  puVar16 = (ushort *)(lVar12 + 0x8da);
                }
                *puVar16 = uVar11;
              }
LAB_0011b130:
              lVar12 = param_1[3];
              lVar17 = lVar17 + ((ulong)(lVar12 * -0x61c8864680b583ea) >> 0x37 & 0x1fe);
              lVar18 = lVar15 + uVar10 * 0x650;
              *(undefined2 *)(lVar18 + 0x64a) = *(undefined2 *)(lVar17 + 0x8c);
              *(ushort *)(lVar17 + 0x8c) = uVar4;
              *(undefined2 *)(lVar18 + 0x64c) = 0;
              *(long *)((long)__dest + 0x638) = lVar12;
              bVar9 = *(byte *)(lVar18 + 0x64e);
              *(byte *)(lVar18 + 0x64e) = bVar9 | 1;
              uVar14 = param_1[5];
              *(byte *)(lVar18 + 0x64e) = bVar9 & 0xfd | 1;
              *(undefined8 *)(lVar18 + 0x640) = uVar14;
              memcpy(__dest,(void *)((long)pvVar8 + 0x660),0x638);
              *(ushort *)(lVar15 + (long)*(short *)((long)param_1 + 0x6ba) * 0x650 + 0x64c) = uVar4;
              uVar5 = *(undefined2 *)(lVar18 + 0x64c);
              *(ushort *)((long)param_1 + 0x6ba) = uVar4;
              *(undefined2 *)(param_1 + 0xd7) = uVar5;
              if ((*(byte *)(param_1 + 0xcd) >> 3 & 1) == 0) {
                if ((param_1[0xd5] != 0) && (*(int *)(param_1 + 0xd4) == 1)) {
                  FUN_0011e848(&DAT_00177448);
                  param_1[0xd5] = 0;
                }
              }
              else {
                FUN_0011eda0(param_1[1],puVar1,*param_1);
              }
              free(pvVar8);
              goto LAB_0011b008;
            }
          }
          else {
            uVar7 = 0xfffffff6;
          }
        }
        lVar17 = param_1[1];
        log2Console(3,"Bugly-libunwind","unmasking signals/interrupts and releasing lock\n");
        if (*(int *)(lVar17 + 0x44) == 1) {
          pthread_mutex_unlock(__mutex);
        }
        if ((*(byte *)(param_1 + 0xcd) >> 3 & 1) == 0) {
          if ((param_1[0xd5] != 0) && (*(int *)(param_1 + 0xd4) == 1)) {
            FUN_0011e848(&DAT_00177448);
            param_1[0xd5] = 0;
          }
        }
        else {
          FUN_0011eda0(param_1[1],puVar1,*param_1);
        }
        free(pvVar8);
        goto LAB_0011b0b0;
      }
    }
    else {
LAB_0011afd8:
      lVar17 = lVar17 + uVar10 * 0x650;
      __dest = (void *)(lVar17 + 0x290);
      param_1[5] = *(undefined8 *)(lVar17 + 0x8d0);
      *(byte *)(param_1 + 0xcd) =
           (*(byte *)(param_1 + 0xcd) & 0xfd | *(byte *)(lVar12 + 0x8de) & 2) ^ 2;
LAB_0011b008:
      pvVar8 = malloc(0x650);
      if (pvVar8 != (void *)0x0) {
        memcpy(pvVar8,__dest,0x650);
        lVar17 = param_1[1];
        log2Console(3,"Bugly-libunwind","unmasking signals/interrupts and releasing lock\n");
        if (*(int *)(lVar17 + 0x44) == 1) {
          pthread_mutex_unlock(__mutex);
        }
        uVar7 = FUN_0011b330(param_1,pvVar8);
        free(pvVar8);
        if (*(long *)(lVar6 + 0x28) == local_70) {
          return uVar7;
        }
        goto LAB_0011b1f0;
      }
    }
    uVar7 = 0xfffffffe;
  }
LAB_0011b0b0:
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return uVar7;
  }
LAB_0011b1f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

