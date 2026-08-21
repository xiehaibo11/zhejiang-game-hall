
undefined8 FUN_001644bc(long param_1,ulong param_2,long *param_3,uint param_4)

{
  byte bVar1;
  undefined *__src;
  ulong uVar2;
  undefined *__dest;
  long *plVar3;
  size_t __n;
  long lVar4;
  undefined1 auStack_6e8 [32];
  undefined8 local_6c8;
  long local_6b0;
  undefined4 uStack_6a8;
  long local_698;
  long local_690;
  undefined8 uStack_688;
  undefined1 auStack_680 [16];
  uint local_670;
  
  if (((param_4 == 0) ||
      (uVar2 = FUN_00164974(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar2 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar2 = FUN_00164b3c(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar2 & 1) == 0)))) {
    lVar4 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0016bce4);
    if (PTR_DAT_0016ba58 < PTR_DAT_0016ba60) {
      plVar3 = (long *)PTR_DAT_0016ba58;
      if (lVar4 == -1) {
        do {
          if (((ulong)plVar3[1] <= param_2) && (param_2 < (ulong)plVar3[2])) goto LAB_001645c4;
          plVar3 = plVar3 + 4;
        } while (plVar3 < PTR_DAT_0016ba60);
      }
      else {
        do {
          if (((*plVar3 == lVar4) && ((ulong)plVar3[1] <= param_2)) && (param_2 < (ulong)plVar3[2]))
          goto LAB_001645c4;
          plVar3 = plVar3 + 4;
        } while (plVar3 < PTR_DAT_0016ba60);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0016bce4);
    goto LAB_0016460c;
  }
LAB_0016462c:
  bVar1 = 1;
LAB_00164630:
  lVar4 = *param_3;
  memset(auStack_680,0,0x618);
  uVar2 = FUN_00162944(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x250) = 0x3000000;
  *(undefined8 *)(param_1 + 0x230) = uStack_688;
  *(long *)(param_1 + 0x228) = local_690;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(long *)(param_1 + 0x220) = local_698;
  *(undefined8 *)(param_1 + 0x238) = local_6c8;
  *(ulong *)(param_1 + 0x240) = (ulong)local_670;
  *(long *)(param_1 + 600) = local_6b0;
  *(undefined4 *)(param_1 + 0x254) = uStack_6a8;
  *(long *)(param_1 + 0x260) = lVar4;
  if (((bool)(bVar1 & param_4 == 0)) && (param_3[4] == 0)) {
    lVar4 = *param_3;
    pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0016bce4);
    __src = PTR_DAT_0016ba58;
    if (PTR_DAT_0016ba68 <= PTR_DAT_0016ba60) {
      __n = (long)PTR_DAT_0016ba68 - (long)PTR_DAT_0016ba58;
      __dest = malloc(__n * 4);
      memcpy(__dest,__src,__n);
      if ((undefined8 *)__src != &DAT_0016bd20) {
        free(__src);
      }
      PTR_DAT_0016ba60 = __dest + ((long)__n >> 5) * 0x20;
      PTR_DAT_0016ba68 = __dest + ((long)__n >> 3) * 0x20;
      PTR_DAT_0016ba58 = __dest;
    }
    *(long *)PTR_DAT_0016ba60 = lVar4;
    *(long *)((long)PTR_DAT_0016ba60 + 8) = local_698;
    *(long *)((long)PTR_DAT_0016ba60 + 0x18) = local_6b0;
    *(long *)((long)PTR_DAT_0016ba60 + 0x10) = local_690;
    PTR_DAT_0016ba60 = (undefined *)((long)PTR_DAT_0016ba60 + 0x20);
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0016bce4);
  }
  return 1;
LAB_001645c4:
  lVar4 = plVar3[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0016bce4);
  if ((lVar4 != 0) &&
     (uVar2 = FUN_00164974(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar4,
                           &local_6b0,auStack_6e8), (uVar2 & 1) != 0)) {
    bVar1 = 0;
    goto LAB_00164630;
  }
LAB_0016460c:
  uVar2 = FUN_00164974(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  goto LAB_0016462c;
}

