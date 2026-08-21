
void _Uaarch64_get_elf_image
               (long param_1,long *param_2,int param_3,undefined8 param_4,long *param_5,
               long *param_6,undefined8 *param_7,long param_8)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  __pid_t _Var5;
  int __fd;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  char *pcVar9;
  void *pvVar10;
  int *__addr;
  long lVar11;
  ulong uVar12;
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
  _Var5 = getpid();
  if (_Var5 == param_3) {
    uVar7 = local_get_elf_image(param_1,param_2,param_4,param_5,param_6,param_7,param_8);
    goto LAB_0011dddc;
  }
  plVar8 = (long *)FUN_0011eab4(*(undefined8 *)(param_1 + 0x32a98),param_4);
  if (plVar8 != (long *)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)(plVar8 + 6));
    plVar1 = plVar8 + 0xb;
    if (*(char *)((long)plVar8 + 0x59) == '\0') {
      *(undefined1 *)((long)plVar8 + 0x59) = 1;
      __fd = open((char *)plVar8[5],0);
      if (__fd < 0) {
LAB_0011ded8:
        if ((*(byte *)(plVar8 + 4) & 1) == 0) {
LAB_0011dee0:
          cVar4 = (char)*plVar1;
        }
        else {
LAB_0011defc:
          plVar8[0xd] = param_8;
          plVar8[0xe] = (long)plVar8;
          plVar8[0xc] = param_1;
          lVar11 = _Uelf64_memory_read(plVar1,*plVar8,&local_e8,4,0);
          cVar4 = false;
          if (lVar11 == 4) {
            if (local_e8 != 0x464c457f) {
              *(char *)plVar1 = '\0';
              goto LAB_0011dd7c;
            }
            lVar11 = _Uelf64_memory_read(plVar1,*plVar8 + 4,&cStack_e4,0xc,0);
            cVar4 = false;
            if ((lVar11 == 0xc) && (cStack_e4 == '\x02')) {
              cVar4 = cStack_e2 == '\x01';
            }
          }
          *(char *)plVar1 = cVar4;
        }
        if (cVar4 == '\0') goto LAB_0011dd7c;
      }
      else {
        iVar6 = fstat(__fd,(stat *)&local_e8);
        if (iVar6 == -1) {
          close(__fd);
          goto LAB_0011ded8;
        }
        plVar8[0xd] = local_b8;
        pvVar10 = mmap((void *)0x0,local_b8,1,2,__fd,0);
        plVar8[0xc] = (long)pvVar10;
        close(__fd);
        __addr = (int *)plVar8[0xc];
        if (__addr == (int *)0xffffffffffffffff) goto LAB_0011ded8;
        if ((((ulong)plVar8[0xd] < 7) || (*__addr != 0x464c457f)) || ((char)__addr[1] != '\x02')) {
          *(char *)plVar1 = '\0';
LAB_0011def0:
          munmap(__addr,plVar8[0xd]);
          if ((*(byte *)(plVar8 + 4) & 1) == 0) goto LAB_0011dee0;
          goto LAB_0011defc;
        }
        bVar3 = *(char *)((long)__addr + 6) == '\x01';
        *(bool *)plVar1 = bVar3;
        if (!bVar3) goto LAB_0011def0;
        *(undefined2 *)((long)plVar8 + 0x59) = 0x101;
      }
      uVar12 = FUN_001191a4(plVar1,plVar8[2],&local_e8);
      if ((uVar12 & 1) != 0) {
        plVar8[3] = CONCAT17(uStack_e1,
                             CONCAT16(cStack_e2,CONCAT15(uStack_e3,CONCAT14(cStack_e4,local_e8))));
      }
    }
LAB_0011dd7c:
    pthread_mutex_unlock((pthread_mutex_t *)(plVar8 + 6));
    if ((char)*plVar1 != '\0') {
      lVar11 = plVar8[0xb];
      lVar14 = plVar8[0xe];
      lVar13 = plVar8[0xd];
      param_2[1] = plVar8[0xc];
      *param_2 = lVar11;
      param_2[3] = lVar14;
      param_2[2] = lVar13;
      *param_5 = *plVar8;
      if (*(char *)((long)param_2 + 2) == '\0') {
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
        uVar7 = 0;
        *param_7 = pcVar9;
      }
      goto LAB_0011dddc;
    }
  }
  uVar7 = 0xfffffff6;
LAB_0011dddc:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

