
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void local_get_elf_image(long param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5,
                        undefined8 *param_6,long param_7)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  char *pcVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong __len;
  undefined8 uVar12;
  stat *local_c0;
  stat local_98;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00176428);
  plVar6 = (long *)FUN_0011bbe4(DAT_00175e60,param_3);
  if (plVar6 == (long *)0x0) {
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00176428);
    iVar4 = FUN_0011aff0(param_3,0);
    if (iVar4 < 0) {
      uVar12 = 0xfffffff6;
      goto LAB_0011b38c;
    }
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00176428);
    plVar6 = (long *)FUN_0011bbe4(DAT_00175e60,param_3);
    if (plVar6 != (long *)0x0) goto LAB_0011b344;
LAB_0011b37c:
    uVar12 = 0xfffffff6;
  }
  else {
LAB_0011b344:
    pthread_mutex_lock((pthread_mutex_t *)(plVar6 + 6));
    if (*(char *)((long)plVar6 + 0x59) != '\0') goto LAB_0011b360;
    *(undefined1 *)((long)plVar6 + 0x59) = 1;
    plVar1 = plVar6 + 0xb;
    iVar4 = open((char *)plVar6[5],0);
    if (iVar4 < 0) {
LAB_0011b518:
      if ((*(uint *)(plVar6 + 4) & 1) == 0) {
        if ((char)plVar6[0xb] != '\0') goto LAB_0011b4dc;
      }
      else {
        plVar6[0xc] = param_1;
        plVar6[0xd] = param_7;
        plVar6[0xe] = (long)plVar6;
        lVar9 = _Uelf64_memory_read(plVar1,*plVar6,local_98.__unused + 1,4,0);
        if (((lVar9 == 4) && (iVar4 = memcmp(local_98.__unused + 1,&DAT_00128030,4), iVar4 == 0)) &&
           ((lVar9 = _Uelf64_memory_read(plVar1,*plVar6 + 4,
                                         (undefined1 *)((long)local_98.__unused + 0xc),0xc,0),
            lVar9 == 0xc && (local_98.__unused[1]._4_1_ == '\x02')))) {
          bVar2 = local_98.__unused[1]._6_1_ == '\x01';
          *(bool *)(plVar6 + 0xb) = bVar2;
        }
        else {
          *(undefined1 *)(plVar6 + 0xb) = 0;
          bVar2 = false;
        }
        if (bVar2) goto LAB_0011b4dc;
      }
    }
    else {
      iVar5 = fstat(iVar4,&local_98);
      if (iVar5 == -1) {
        close(iVar4);
        goto LAB_0011b518;
      }
      plVar6[0xd] = local_98.st_size;
      pvVar8 = mmap((void *)0x0,local_98.st_size,1,2,iVar4,0);
      plVar6[0xc] = (long)pvVar8;
      close(iVar4);
      pvVar8 = (void *)plVar6[0xc];
      if (pvVar8 == (void *)0xffffffffffffffff) goto LAB_0011b518;
      __len = plVar6[0xd];
      if (__len < 7) {
        *(undefined1 *)plVar1 = 0;
LAB_0011b50c:
        munmap(pvVar8,__len);
        goto LAB_0011b518;
      }
      iVar4 = memcmp(pvVar8,&DAT_00128030,4);
      if (((iVar4 != 0) || (*(char *)((long)pvVar8 + 4) != '\x02')) ||
         (*(char *)((long)pvVar8 + 6) != '\x01')) {
        *(undefined1 *)(plVar6 + 0xb) = 0;
        goto LAB_0011b50c;
      }
      *(undefined1 *)plVar1 = 1;
      *(undefined1 *)((long)plVar6 + 0x5a) = 1;
      *(undefined1 *)((long)plVar6 + 0x59) = 1;
LAB_0011b4dc:
      local_c0 = &local_98;
      cVar3 = FUN_00115788(plVar1,plVar6[2],local_c0);
      if (cVar3 != '\0') {
        plVar6[3] = local_98.st_dev;
      }
    }
LAB_0011b360:
    pthread_mutex_unlock((pthread_mutex_t *)(plVar6 + 6));
    if ((char)plVar6[0xb] == '\0') goto LAB_0011b37c;
    lVar11 = *plVar6;
    lVar10 = 0;
    lVar9 = plVar6[0xc];
    *param_2 = plVar6[0xb];
    param_2[1] = lVar9;
    lVar9 = plVar6[0xe];
    cVar3 = *(char *)((long)param_2 + 2);
    param_2[2] = plVar6[0xd];
    param_2[3] = lVar9;
    *param_4 = lVar11;
    if (cVar3 != '\0') {
      lVar10 = plVar6[2];
    }
    *param_5 = lVar10;
    if (param_6 == (undefined8 *)0x0) {
      uVar12 = 0;
    }
    else if ((char *)plVar6[5] == (char *)0x0) {
      *param_6 = 0;
      uVar12 = 0;
    }
    else {
      pcVar7 = strdup((char *)plVar6[5]);
      uVar12 = 0;
      *param_6 = pcVar7;
    }
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00176428);
LAB_0011b38c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}

