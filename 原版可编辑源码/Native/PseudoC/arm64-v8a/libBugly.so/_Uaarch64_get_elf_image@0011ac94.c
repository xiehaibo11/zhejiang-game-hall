
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Uaarch64_get_elf_image
               (long param_1,long *param_2,int param_3,undefined8 param_4,long *param_5,
               long *param_6,undefined8 *param_7,long param_8)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  __pid_t _Var4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  char *pcVar9;
  void *pvVar10;
  long lVar11;
  long lVar12;
  ulong __len;
  stat *local_b0;
  stat local_98;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _Var4 = getpid();
  if (_Var4 == param_3) {
    uVar7 = local_get_elf_image(param_1,param_2,param_4,param_5,param_6,param_7,param_8);
    goto LAB_0011ad84;
  }
  plVar8 = (long *)FUN_0011bbe4(*(undefined8 *)(param_1 + 0x32a98),param_4);
  if (plVar8 != (long *)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)(plVar8 + 6));
    if (*(char *)((long)plVar8 + 0x59) != '\0') goto LAB_0011ad28;
    *(undefined1 *)((long)plVar8 + 0x59) = 1;
    plVar1 = plVar8 + 0xb;
    iVar5 = open((char *)plVar8[5],0);
    if (iVar5 < 0) {
LAB_0011aed4:
      if ((*(uint *)(plVar8 + 4) & 1) == 0) {
        if ((char)plVar8[0xb] != '\0') goto LAB_0011aea8;
      }
      else {
        plVar8[0xe] = (long)plVar8;
        plVar8[0xc] = param_1;
        plVar8[0xd] = param_8;
        lVar11 = _Uelf64_memory_read(plVar1,*plVar8,local_98.__unused + 1,4,0);
        if (((lVar11 == 4) && (iVar5 = memcmp(local_98.__unused + 1,&DAT_00128030,4), iVar5 == 0))
           && ((lVar11 = _Uelf64_memory_read(plVar1,*plVar8 + 4,
                                             (undefined1 *)((long)local_98.__unused + 0xc),0xc,0),
               lVar11 == 0xc && (local_98.__unused[1]._4_1_ == '\x02')))) {
          bVar2 = local_98.__unused[1]._6_1_ == '\x01';
          *(bool *)(plVar8 + 0xb) = bVar2;
        }
        else {
          *(undefined1 *)(plVar8 + 0xb) = 0;
          bVar2 = false;
        }
        if (bVar2) goto LAB_0011aea8;
      }
    }
    else {
      iVar6 = fstat(iVar5,&local_98);
      if (iVar6 == -1) {
        close(iVar5);
        goto LAB_0011aed4;
      }
      plVar8[0xd] = local_98.st_size;
      pvVar10 = mmap((void *)0x0,local_98.st_size,1,2,iVar5,0);
      plVar8[0xc] = (long)pvVar10;
      close(iVar5);
      pvVar10 = (void *)plVar8[0xc];
      if (pvVar10 == (void *)0xffffffffffffffff) goto LAB_0011aed4;
      __len = plVar8[0xd];
      if ((((__len < 7) || (iVar5 = memcmp(pvVar10,&DAT_00128030,4), iVar5 != 0)) ||
          (*(char *)((long)pvVar10 + 4) != '\x02')) || (*(char *)((long)pvVar10 + 6) != '\x01')) {
        *(undefined1 *)(plVar8 + 0xb) = 0;
        munmap(pvVar10,__len);
        goto LAB_0011aed4;
      }
      *(undefined1 *)(plVar8 + 0xb) = 1;
      *(undefined1 *)((long)plVar8 + 0x5a) = 1;
      *(undefined1 *)((long)plVar8 + 0x59) = 1;
LAB_0011aea8:
      local_b0 = &local_98;
      cVar3 = FUN_00115788(plVar1,plVar8[2],local_b0);
      if (cVar3 != '\0') {
        plVar8[3] = local_98.st_dev;
      }
    }
LAB_0011ad28:
    pthread_mutex_unlock((pthread_mutex_t *)(plVar8 + 6));
    if ((char)plVar8[0xb] != '\0') {
      lVar12 = *plVar8;
      lVar11 = plVar8[0xc];
      *param_2 = plVar8[0xb];
      param_2[1] = lVar11;
      lVar11 = plVar8[0xe];
      cVar3 = *(char *)((long)param_2 + 2);
      param_2[2] = plVar8[0xd];
      param_2[3] = lVar11;
      *param_5 = lVar12;
      if (cVar3 == '\0') {
        *param_6 = 0;
      }
      else {
        *param_6 = plVar8[2];
      }
      if (param_7 == (undefined8 *)0x0) {
        uVar7 = 0;
      }
      else {
        pcVar9 = strdup((char *)plVar8[5]);
        *param_7 = pcVar9;
        uVar7 = 0;
      }
      goto LAB_0011ad84;
    }
  }
  uVar7 = 0xfffffff6;
LAB_0011ad84:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

