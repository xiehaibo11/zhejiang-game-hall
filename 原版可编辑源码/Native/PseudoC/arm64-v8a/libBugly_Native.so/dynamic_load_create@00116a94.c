
void dynamic_load_create(char *param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  FILE *__stream;
  char *pcVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  void *local_280;
  int local_274;
  long local_270;
  stat asStack_268 [3];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pvVar5 = calloc(1,0x38);
  local_280 = pvVar5;
  if (pvVar5 != (void *)0x0) {
    iVar4 = -1;
    *(undefined4 *)((long)pvVar5 + 8) = 0xffffffff;
    *(undefined8 *)((long)pvVar5 + 0x10) = 0xffffffffffffffff;
    *(long *)((long)pvVar5 + 0x30) = (long)pvVar5 + 0x28;
    __stream = fopen("/proc/self/maps","r");
    if (__stream != (FILE *)0x0) {
      pcVar6 = fgets((char *)asStack_268,0x200,__stream);
      while (pcVar6 != (char *)0x0) {
        iVar4 = sscanf((char *)asStack_268,"%lx-%*lx %*4s %lx %*x:%*x %*d%n",pvVar5,&local_270,
                       &local_274);
        if ((iVar4 == 2) && (local_270 == 0)) {
          pcVar6 = (char *)trim((long)asStack_268[0].__unused + (long)local_274 + -0x78);
          iVar4 = strcmp(pcVar6,param_1);
          if (iVar4 == 0) {
            iVar4 = 0;
            goto LAB_00116b90;
          }
        }
        pcVar6 = fgets((char *)asStack_268,0x200,__stream);
      }
      iVar4 = -1;
LAB_00116b90:
      fclose(__stream);
    }
    pvVar5 = local_280;
    if (iVar4 == 0) {
      iVar4 = open(param_1,0x80000);
      *(int *)((long)pvVar5 + 8) = iVar4;
      if (((-1 < iVar4) && (iVar4 = fstat(iVar4,asStack_268), iVar4 == 0)) &&
         (asStack_268[0].st_size != 0)) {
        *(__off_t *)((long)pvVar5 + 0x18) = asStack_268[0].st_size;
        pvVar7 = mmap((void *)0x0,asStack_268[0].st_size,1,2,*(int *)((long)pvVar5 + 8),0);
        pvVar3 = local_280;
        *(void **)((long)pvVar5 + 0x10) = pvVar7;
        if (((pvVar7 != (void *)0xffffffffffffffff) &&
            (uVar15 = *(ulong *)((long)local_280 + 0x18), 0x3f < uVar15)) &&
           (lVar16 = *(long *)((long)local_280 + 0x10), lVar16 != 0)) {
          uVar12 = (ulong)*(ushort *)(lVar16 + 0x36) * (ulong)*(ushort *)(lVar16 + 0x38);
          if (uVar12 != 0) {
            lVar14 = *(long *)(lVar16 + 0x20);
            uVar13 = 0;
            do {
              if (uVar15 < lVar14 + 0x38 + uVar13) goto LAB_00116b9c;
              if (((*(int *)(lVar16 + lVar14 + uVar13) == 1) &&
                  (lVar10 = lVar16 + lVar14 + uVar13, (*(byte *)(lVar10 + 4) & 1) != 0)) &&
                 (*(long *)(lVar10 + 8) == 0)) {
                *(undefined8 *)((long)local_280 + 0x20) =
                     *(undefined8 *)(lVar16 + lVar14 + uVar13 + 0x10);
                break;
              }
              uVar13 = uVar13 + *(ushort *)(lVar16 + 0x36);
            } while (uVar13 < uVar12);
          }
          uVar13 = (ulong)*(ushort *)(lVar16 + 0x3a);
          uVar12 = (ulong)*(ushort *)(lVar16 + 0x3c);
          if (uVar13 <= uVar12 * uVar13 && uVar12 * uVar13 - uVar13 != 0) {
            lVar14 = 0;
            uVar17 = uVar13;
            do {
              lVar10 = *(long *)(lVar16 + 0x28) + uVar17;
              if (uVar15 < lVar10 + 0x40U) goto LAB_00116b9c;
              lVar10 = *(long *)((long)pvVar3 + 0x10) + lVar10;
              if (lVar10 == 0) goto LAB_00116b9c;
              if (((*(int *)(lVar10 + 4) == 0xb) || (*(int *)(lVar10 + 4) == 2)) &&
                 (*(uint *)(lVar10 + 0x28) < (uint)uVar12)) {
                lVar1 = *(long *)(lVar16 + 0x28) + (ulong)(*(uint *)(lVar10 + 0x28) * (int)uVar13);
                if ((uVar15 < lVar1 + 0x40U) ||
                   (lVar1 = *(long *)((long)pvVar3 + 0x10) + lVar1, lVar1 == 0)) goto LAB_00116b9c;
                if (*(int *)(lVar1 + 4) == 3) {
                  plVar8 = malloc(0x38);
                  if (plVar8 == (long *)0x0) goto LAB_00116b9c;
                  lVar9 = *(long *)(lVar10 + 0x18);
                  lVar14 = lVar14 + 1;
                  *plVar8 = lVar9;
                  plVar8[1] = *(long *)(lVar10 + 0x20) + lVar9;
                  plVar8[2] = *(long *)(lVar10 + 0x38);
                  lVar10 = *(long *)(lVar1 + 0x18);
                  plVar8[3] = lVar10;
                  plVar8[4] = *(long *)(lVar1 + 0x20) + lVar10;
                  plVar8[5] = 0;
                  puVar11 = *(undefined8 **)((long)pvVar3 + 0x30);
                  plVar8[6] = (long)puVar11;
                  *puVar11 = plVar8;
                  *(long **)((long)pvVar3 + 0x30) = plVar8 + 5;
                  uVar13 = (ulong)*(ushort *)(lVar16 + 0x3a);
                  uVar12 = (ulong)*(ushort *)(lVar16 + 0x3c);
                }
              }
              uVar17 = uVar17 + uVar13;
            } while (uVar17 < uVar13 * uVar12);
            pvVar5 = local_280;
            if (lVar14 != 0) goto LAB_00116ba8;
          }
        }
      }
    }
LAB_00116b9c:
    dynamic_load_destroy(&local_280);
    pvVar5 = (void *)0x0;
  }
LAB_00116ba8:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar5);
}

