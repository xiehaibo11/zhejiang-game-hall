
undefined4
local_get_elf_image(long param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5,
                   undefined8 *param_6,long param_7)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  int __fd;
  int iVar5;
  uint uVar6;
  long *plVar7;
  char *pcVar8;
  void *pvVar9;
  int *__addr;
  long lVar10;
  ulong uVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  int local_e8;
  char cStack_e4;
  undefined1 uStack_e3;
  char cStack_e2;
  undefined1 uStack_e1;
  size_t local_b8;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_001774d8);
  plVar7 = (long *)FUN_0011eab4(DAT_00176ec8,param_3);
  if (plVar7 == (long *)0x0) {
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001774d8);
    uVar11 = FUN_0011e3c4(param_3,0);
    if ((int)uVar11 < 0) {
      uVar12 = 0xfffffff6;
      goto LAB_0011e2a4;
    }
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_001774d8);
    plVar7 = (long *)FUN_0011eab4(DAT_00176ec8,param_3);
    if (plVar7 != (long *)0x0) goto LAB_0011e104;
LAB_0011e1bc:
    uVar12 = 0xfffffff6;
  }
  else {
LAB_0011e104:
    pthread_mutex_lock((pthread_mutex_t *)(plVar7 + 6));
    plVar1 = plVar7 + 0xb;
    if (*(char *)((long)plVar7 + 0x59) == '\0') {
      *(undefined1 *)((long)plVar7 + 0x59) = 1;
      __fd = open((char *)plVar7[5],0);
      if (__fd < 0) {
LAB_0011e2e0:
        if ((*(byte *)(plVar7 + 4) & 1) == 0) {
LAB_0011e2e8:
          cVar4 = (char)*plVar1;
        }
        else {
LAB_0011e304:
          plVar7[0xd] = param_7;
          plVar7[0xe] = (long)plVar7;
          plVar7[0xc] = param_1;
          lVar10 = _Uelf64_memory_read(plVar1,*plVar7,&local_e8,4,0);
          cVar4 = false;
          if (lVar10 == 4) {
            if (local_e8 != 0x464c457f) {
              *(char *)plVar1 = '\0';
              goto LAB_0011e124;
            }
            lVar10 = _Uelf64_memory_read(plVar1,*plVar7 + 4,&cStack_e4,0xc,0);
            cVar4 = false;
            if ((lVar10 == 0xc) && (cStack_e4 == '\x02')) {
              cVar4 = cStack_e2 == '\x01';
            }
          }
          *(char *)plVar1 = cVar4;
        }
        if (cVar4 == '\0') goto LAB_0011e124;
      }
      else {
        iVar5 = fstat(__fd,(stat *)&local_e8);
        if (iVar5 == -1) {
          close(__fd);
          goto LAB_0011e2e0;
        }
        plVar7[0xd] = local_b8;
        pvVar9 = mmap((void *)0x0,local_b8,1,2,__fd,0);
        plVar7[0xc] = (long)pvVar9;
        close(__fd);
        __addr = (int *)plVar7[0xc];
        if (__addr == (int *)0xffffffffffffffff) goto LAB_0011e2e0;
        if ((((ulong)plVar7[0xd] < 7) || (*__addr != 0x464c457f)) || ((char)__addr[1] != '\x02')) {
          *(char *)plVar1 = '\0';
LAB_0011e2f8:
          munmap(__addr,plVar7[0xd]);
          if ((*(byte *)(plVar7 + 4) & 1) == 0) goto LAB_0011e2e8;
          goto LAB_0011e304;
        }
        bVar3 = *(char *)((long)__addr + 6) == '\x01';
        *(bool *)plVar1 = bVar3;
        if (!bVar3) goto LAB_0011e2f8;
        *(undefined2 *)((long)plVar7 + 0x59) = 0x101;
      }
      uVar11 = FUN_001191a4(plVar1,plVar7[2],&local_e8);
      if ((uVar11 & 1) != 0) {
        plVar7[3] = CONCAT17(uStack_e1,
                             CONCAT16(cStack_e2,CONCAT15(uStack_e3,CONCAT14(cStack_e4,local_e8))));
      }
    }
LAB_0011e124:
    pthread_mutex_unlock((pthread_mutex_t *)(plVar7 + 6));
    if ((char)*plVar1 == '\0') goto LAB_0011e1bc;
    lVar10 = plVar7[0xb];
    lVar14 = plVar7[0xe];
    lVar13 = plVar7[0xd];
    param_2[1] = plVar7[0xc];
    *param_2 = lVar10;
    param_2[3] = lVar14;
    param_2[2] = lVar13;
    *param_4 = *plVar7;
    if (*(char *)((long)param_2 + 2) == '\0') {
      *param_5 = 0;
      if (param_6 == (undefined8 *)0x0) goto LAB_0011e280;
LAB_0011e168:
      if ((char *)plVar7[5] == (char *)0x0) {
        uVar12 = 0;
        *param_6 = 0;
      }
      else {
        pcVar8 = strdup((char *)plVar7[5]);
        uVar12 = 0;
        *param_6 = pcVar8;
      }
    }
    else {
      *param_5 = plVar7[2];
      if (param_6 != (undefined8 *)0x0) goto LAB_0011e168;
LAB_0011e280:
      uVar12 = 0;
    }
  }
  uVar6 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001774d8);
  uVar11 = (ulong)uVar6;
LAB_0011e2a4:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}

