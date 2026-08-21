
ulong FUN_001197e0(undefined8 *param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  byte bVar2;
  ushort uVar3;
  char *pcVar4;
  uint uVar5;
  undefined8 *puVar6;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  char *__dest;
  long lVar17;
  undefined8 *puVar7;
  
  lVar17 = param_1[1];
  if (*(int *)(lVar17 + 0x44) == 0) {
    uVar9 = FUN_00119670();
    return uVar9;
  }
  __mutex = (pthread_mutex_t *)(lVar17 + 0x60);
  if (*(int *)(lVar17 + 0x44) == 1) {
    log2Console(3,"Bugly-libunwind","acquiring lock\n");
    pthread_mutex_lock(__mutex);
  }
  iVar1 = *(int *)(lVar17 + 0x48);
  if (iVar1 != *(int *)(lVar17 + 0x28c)) {
    *(undefined2 *)(lVar17 + 0x8a) = 0;
    *(undefined2 *)(lVar17 + 0x88) = 0x7f;
    puVar6 = (undefined8 *)(lVar17 + 0x8c8);
    sVar13 = -1;
    iVar15 = 1;
    iVar14 = 0;
    do {
      if (iVar14 == 0) {
        *(undefined2 *)((long)puVar6 + 0x12) = 0xffff;
        *puVar6 = 0;
        *(byte *)(lVar17 + 0x8de) = *(byte *)(lVar17 + 0x8de) & 0xfe;
      }
      else {
        *(short *)(puVar6 + 2) = sVar13;
        *(undefined2 *)((long)puVar6 + 0x12) = 0xffff;
        *puVar6 = 0;
        __mutex->__size[(long)iVar14 * 0x650 + 0x87e] =
             __mutex->__size[(long)iVar14 * 0x650 + 0x87e] & 0xfe;
        if (iVar15 == 0x80) goto code_r0x001198b8;
      }
      sVar13 = sVar13 + 1;
      iVar14 = iVar14 + 1;
      iVar15 = iVar15 + 1;
      puVar6 = puVar6 + 0xca;
    } while( true );
  }
LAB_001198d4:
  lVar11 = param_1[3];
  lVar16 = (long)*(short *)(param_1 + 0xd7) * 0x650;
  if (((__mutex->__size[lVar16 + 0x87e] & 1U) == 0) ||
     (lVar11 != *(long *)((long)__mutex + lVar16 + 0x868))) {
    uVar3 = *(ushort *)((long)__mutex + ((ulong)(lVar11 * -0x61c8864680b583ea) >> 0x38) * 2 + 0x2c);
    if (uVar3 < 0x80) {
      do {
        __dest = __mutex->__size + (ulong)uVar3 * 0x650 + 0x230;
        if (((__mutex->__size[(ulong)uVar3 * 0x650 + 0x87e] & 1U) != 0) &&
           (lVar11 == *(long *)((long)__mutex + (ulong)uVar3 * 0x650 + 0x868))) {
          sVar13 = (short)((long)__dest - (lVar17 + 0x290) >> 4) * -0x4e93;
          *(short *)((long)__mutex + (long)*(short *)((long)param_1 + 0x6ba) * 0x650 + 0x87c) =
               sVar13;
          *(short *)(param_1 + 0xd7) = sVar13;
          goto LAB_001199a8;
        }
        uVar3 = *(ushort *)((long)__mutex + (ulong)uVar3 * 0x650 + 0x87a);
      } while (uVar3 < 0x100);
    }
    pvVar8 = malloc(0xcb0);
    if (pvVar8 == (void *)0x0) {
      return 0xfffffffe;
    }
    uVar5 = FUN_00117a44(param_1,lVar11,1);
    if (((int)uVar5 < 0) || (uVar5 = FUN_00119518(param_1,pvVar8,param_1[3]), (int)uVar5 < 0)) {
      lVar17 = param_1[1];
      log2Console(3,"Bugly-libunwind","unmasking signals/interrupts and releasing lock\n");
      if (*(int *)(lVar17 + 0x44) == 1) {
        pthread_mutex_unlock(__mutex);
      }
      if ((*(byte *)(param_1 + 0xcd) >> 3 & 1) == 0) {
        if ((param_1[0xd5] != 0) && (*(int *)(param_1 + 0xd4) == 1)) {
          FUN_0011b9a8(&DAT_00176398);
          param_1[0xd5] = 0;
        }
      }
      else {
        FUN_0011befc(param_1[1],param_1 + 0xce,*param_1);
      }
      free(pvVar8);
      return (ulong)uVar5;
    }
    uVar3 = *(ushort *)(lVar17 + 0x88);
    uVar9 = (ulong)uVar3;
    lVar11 = uVar9 * 0x650;
    __dest = __mutex->__size + lVar11 + 0x230;
    *(undefined2 *)(lVar17 + 0x88) = *(undefined2 *)((long)__mutex + lVar11 + 0x878);
    *(ushort *)((long)__mutex + (ulong)*(ushort *)(lVar17 + 0x8a) * 0x650 + 0x878) = uVar3;
    *(ushort *)(lVar17 + 0x8a) = uVar3;
    lVar11 = *(long *)((long)__mutex + lVar11 + 0x868);
    if (lVar11 != 0) {
      lVar11 = lVar17 + ((ulong)(lVar11 * -0x61c8864680b583ea) >> 0x38) * 2;
      lVar16 = (ulong)*(ushort *)(lVar11 + 0x8c) * 0x650;
      pcVar12 = __mutex->__size + lVar16 + 0x230;
      if (__dest == pcVar12) {
LAB_00119d24:
        *(undefined2 *)(lVar11 + 0x8c) = *(undefined2 *)(pcVar12 + 0x64a);
      }
      else {
        uVar3 = *(ushort *)((long)__mutex + lVar16 + 0x87a);
        pcVar4 = pcVar12;
        while (uVar3 < 0x80) {
          uVar10 = (ulong)uVar3;
          if (__dest == __mutex->__size + uVar10 * 0x650 + 0x230) {
            pcVar12 = __dest;
            if (pcVar4 == (char *)0x0) goto LAB_00119d24;
            *(undefined2 *)(pcVar4 + 0x64a) = *(undefined2 *)(__dest + 0x64a);
            break;
          }
          pcVar4 = __mutex->__size + uVar10 * 0x650 + 0x230;
          uVar3 = *(ushort *)((long)__mutex + uVar10 * 0x650 + 0x87a);
        }
      }
    }
    lVar11 = lVar17 + ((ulong)(param_1[3] * -0x61c8864680b583ea) >> 0x38) * 2;
    sVar13 = (short)((long)__dest - (lVar17 + 0x290) >> 4) * -0x4e93;
    *(undefined2 *)((long)__mutex + uVar9 * 0x650 + 0x87a) = *(undefined2 *)(lVar11 + 0x8c);
    *(short *)(lVar11 + 0x8c) = sVar13;
    *(undefined2 *)((long)__mutex + uVar9 * 0x650 + 0x87c) = 0;
    *(undefined8 *)((long)__mutex + uVar9 * 0x650 + 0x868) = param_1[3];
    bVar2 = __mutex->__size[uVar9 * 0x650 + 0x87e];
    __mutex->__size[uVar9 * 0x650 + 0x87e] = bVar2 | 1;
    *(undefined8 *)((long)__mutex + uVar9 * 0x650 + 0x870) = param_1[5];
    __mutex->__size[uVar9 * 0x650 + 0x87e] = bVar2 & 0xfd | 1;
    memcpy(__dest,(void *)((long)pvVar8 + 0x660),0x638);
    *(short *)((long)__mutex + (long)*(short *)((long)param_1 + 0x6ba) * 0x650 + 0x87c) = sVar13;
    *(undefined2 *)(param_1 + 0xd7) = *(undefined2 *)((long)__mutex + uVar9 * 0x650 + 0x87c);
    *(short *)((long)param_1 + 0x6ba) = sVar13;
    if ((*(byte *)(param_1 + 0xcd) >> 3 & 1) == 0) {
      if ((param_1[0xd5] != 0) && (*(int *)(param_1 + 0xd4) == 1)) {
        FUN_0011b9a8(&DAT_00176398);
        param_1[0xd5] = 0;
      }
    }
    else {
      FUN_0011befc(param_1[1],param_1 + 0xce,*param_1);
    }
    free(pvVar8);
  }
  else {
    __dest = __mutex->__size + lVar16 + 0x230;
LAB_001199a8:
    bVar2 = __dest[0x64e];
    param_1[5] = *(undefined8 *)(__dest + 0x640);
    *(byte *)(param_1 + 0xcd) =
         *(byte *)(param_1 + 0xcd) & 0xfc |
         *(byte *)(param_1 + 0xcd) & 1 | (byte)(((uint)(((ulong)bVar2 ^ 2) >> 1) & 1) << 1);
  }
  pvVar8 = malloc(0x650);
  if (pvVar8 == (void *)0x0) {
    return 0xfffffffe;
  }
  memcpy(pvVar8,__dest,0x650);
  lVar17 = param_1[1];
  log2Console(3,"Bugly-libunwind","unmasking signals/interrupts and releasing lock\n");
  if (*(int *)(lVar17 + 0x44) == 1) {
    pthread_mutex_unlock(__mutex);
  }
  uVar9 = FUN_00117b3c(param_1,pvVar8);
  free(pvVar8);
  return uVar9 & 0xffffffff;
code_r0x001198b8:
  puVar6 = (undefined8 *)(lVar17 + 0x8c);
  do {
    puVar7 = puVar6 + 2;
    puVar6[1] = 0xffffffffffffffff;
    *puVar6 = 0xffffffffffffffff;
    puVar6 = puVar7;
  } while (puVar7 != (undefined8 *)(lVar17 + 0x28c));
  *(int *)(lVar17 + 0x28c) = iVar1;
  goto LAB_001198d4;
}

