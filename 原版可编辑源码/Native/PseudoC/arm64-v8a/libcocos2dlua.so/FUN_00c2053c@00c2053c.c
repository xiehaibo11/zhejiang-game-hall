
void FUN_00c2053c(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  char cVar4;
  size_t __n;
  size_t __n_00;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  void *pvVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  uint local_4;
  
  if ((*(byte *)(param_2 + 0x3d) & 1) != 0) {
    uVar15 = (ulong)*(uint *)(param_2 + 0x30);
    plVar11 = (long *)(*(long *)(param_2 + 0x20) + -8);
    if (uVar15 != 0) {
      uVar13 = 0;
      do {
        while( true ) {
          lVar9 = *plVar11;
          uVar13 = uVar13 + 1;
          plVar11 = plVar11 + -1;
          if (*(char *)(lVar9 + 9) != '\a') break;
          FUN_00c2053c(param_1);
          if (uVar15 == uVar13) goto LAB_00c205b0;
        }
      } while (uVar15 != uVar13);
    }
  }
LAB_00c205b0:
  lVar9 = param_1[2];
  uVar2 = *(int *)(param_2 + 0xc) * 4 + 0x23 + (uint)*(byte *)(param_2 + 0x3c) * 2;
  if ((uint)((int)param_1[1] - (int)lVar9) < uVar2) {
    lVar9 = FUN_00c1a418(param_1,uVar2);
  }
  local_4 = 0;
  *(byte *)(lVar9 + 5) = *(byte *)(param_2 + 0x3d) & 7;
  *(undefined1 *)(lVar9 + 6) = *(undefined1 *)(param_2 + 10);
  *(undefined1 *)(lVar9 + 7) = *(undefined1 *)(param_2 + 0xb);
  *(undefined1 *)(lVar9 + 8) = *(undefined1 *)(param_2 + 0x3c);
  uVar7 = thunk_FUN_00bff61c(lVar9 + 9,*(undefined4 *)(param_2 + 0x30));
  uVar7 = thunk_FUN_00bff61c(uVar7,*(undefined4 *)(param_2 + 0x34));
  pvVar8 = (void *)thunk_FUN_00bff61c(uVar7,*(int *)(param_2 + 0xc) + -1);
  if ((int)param_1[7] == 0) {
    if (*(long *)(param_2 + 0x50) == 0) {
      pvVar8 = (void *)thunk_FUN_00bff61c(pvVar8,0);
    }
    else {
      local_4 = (*(int *)(param_2 + 0x38) - (int)*(long *)(param_2 + 0x50)) + (int)param_2;
      pvVar8 = (void *)thunk_FUN_00bff61c();
      if (local_4 != 0) {
        uVar7 = thunk_FUN_00bff61c(pvVar8,*(undefined4 *)(param_2 + 0x48));
        pvVar8 = (void *)thunk_FUN_00bff61c(uVar7,*(undefined4 *)(param_2 + 0x4c));
      }
    }
  }
  __n = ((ulong)(*(int *)(param_2 + 0xc) - 1) & 0x3fffffff) * 4;
  pvVar8 = memcpy(pvVar8,(void *)(param_2 + 0x6c),__n);
  __n_00 = (ulong)*(byte *)(param_2 + 0x3c) * 2;
  pvVar8 = memcpy((void *)((long)pvVar8 + __n),*(void **)(param_2 + 0x28),__n_00);
  uVar2 = *(uint *)(param_2 + 0x30);
  pvVar8 = (void *)((long)pvVar8 + __n_00);
  *param_1 = (long)pvVar8;
  puVar14 = *(uint **)(param_2 + 0x20);
  if (uVar2 != 0) {
    lVar9 = 0;
    do {
      lVar17 = *(long *)(puVar14 + (ulong)uVar2 * -2 + lVar9 * 2);
      cVar4 = *(char *)(lVar17 + 9);
      if (cVar4 == '\x04') {
        uVar6 = *(int *)(lVar17 + 0x10) + 5;
        if ((uint)((int)param_1[1] - (int)pvVar8) < uVar6) goto LAB_00c20914;
      }
      else {
        if (cVar4 == '\a') {
          uVar10 = 1;
          uVar6 = 0;
        }
        else if (cVar4 == '\n') {
          if (*(short *)(lVar17 + 10) == 0xb) {
            uVar10 = 0x15;
            uVar6 = 2;
          }
          else {
            uVar10 = 0x15;
            uVar6 = 3;
            if (*(short *)(lVar17 + 10) != 0xc) {
              uVar6 = 4;
            }
          }
        }
        else {
          uVar10 = 0xb;
          uVar6 = 1;
        }
        if ((uint)((int)param_1[1] - (int)pvVar8) < uVar10) {
LAB_00c20914:
          pvVar8 = (void *)FUN_00c1a4a8(param_1);
        }
      }
      pvVar8 = (void *)thunk_FUN_00bff61c(pvVar8,uVar6);
      if (uVar6 < 5) {
        if (uVar6 != 1) {
          if (uVar6 != 0) {
            uVar7 = thunk_FUN_00bff61c(pvVar8,*(undefined4 *)(lVar17 + 0x10));
            pvVar8 = (void *)thunk_FUN_00bff61c(uVar7,*(undefined4 *)(lVar17 + 0x14));
            if (uVar6 == 4) {
              uVar7 = thunk_FUN_00bff61c(pvVar8,*(undefined4 *)(lVar17 + 0x18));
              pvVar8 = (void *)thunk_FUN_00bff61c(uVar7,*(undefined4 *)(lVar17 + 0x1c));
            }
          }
          goto LAB_00c20714;
        }
        if (*(uint *)(lVar17 + 0x30) == 0) {
          uVar6 = *(uint *)(lVar17 + 0x34);
          if (uVar6 != 0) goto LAB_00c209a0;
LAB_00c20af4:
          uVar7 = thunk_FUN_00bff61c(pvVar8,0);
          pvVar8 = (void *)thunk_FUN_00bff61c(uVar7,0);
          *param_1 = (long)pvVar8;
        }
        else {
          lVar12 = (ulong)*(uint *)(lVar17 + 0x30) - 1;
          do {
            if (*(long *)(*(long *)(lVar17 + 0x10) + lVar12 * 8) != -1) {
              uVar6 = *(uint *)(lVar17 + 0x34);
              uVar10 = (int)lVar12 + 1;
              if (uVar6 != 0) goto LAB_00c209a4;
              iVar16 = 0;
              uVar7 = thunk_FUN_00bff61c(pvVar8,uVar10);
              lVar12 = thunk_FUN_00bff61c(uVar7,0);
              *param_1 = lVar12;
              goto LAB_00c209f0;
            }
            lVar12 = lVar12 + -1;
          } while (lVar12 != -1);
          uVar6 = *(uint *)(lVar17 + 0x34);
          if (uVar6 == 0) goto LAB_00c20af4;
LAB_00c209a0:
          uVar10 = 0;
LAB_00c209a4:
          iVar16 = 0;
          uVar15 = 0;
          do {
            uVar1 = (int)uVar15 + 1;
            if (*(long *)(*(long *)(lVar17 + 0x28) + uVar15 * 0x18) != -1) {
              iVar16 = iVar16 + 1;
            }
            uVar15 = (ulong)uVar1;
          } while (uVar1 <= uVar6);
          uVar7 = thunk_FUN_00bff61c(pvVar8,uVar10);
          lVar12 = thunk_FUN_00bff61c(uVar7,iVar16);
          *param_1 = lVar12;
          if (uVar10 != 0) {
LAB_00c209f0:
            uVar6 = 0;
            lVar12 = *(long *)(lVar17 + 0x10);
            do {
              uVar6 = uVar6 + 1;
              FUN_00c20404(param_1,lVar12);
              lVar12 = lVar12 + 8;
            } while (uVar6 < uVar10);
          }
          if (iVar16 != 0) {
            plVar11 = (long *)(*(long *)(lVar17 + 0x28) + (ulong)*(uint *)(lVar17 + 0x34) * 0x18);
            do {
              if (*plVar11 != -1) {
                FUN_00c20404(param_1,plVar11 + 1);
                FUN_00c20404(param_1,plVar11);
                iVar16 = iVar16 + -1;
                if (iVar16 == 0) break;
              }
              plVar11 = plVar11 + -3;
            } while( true );
          }
          pvVar8 = (void *)*param_1;
        }
      }
      else {
        uVar6 = *(uint *)(lVar17 + 0x10);
        pvVar8 = memcpy(pvVar8,(void *)(lVar17 + 0x18),(ulong)uVar6);
        pvVar8 = (void *)((long)pvVar8 + (ulong)uVar6);
LAB_00c20714:
        *param_1 = (long)pvVar8;
      }
      lVar9 = lVar9 + 1;
    } while ((uint)lVar9 < uVar2);
    puVar14 = *(uint **)(param_2 + 0x20);
  }
  iVar16 = *(int *)(param_2 + 0x34);
  if ((uint)((int)param_1[1] - (int)pvVar8) < (uint)(iVar16 * 10)) {
    pvVar8 = (void *)FUN_00c1a4a8(param_1);
  }
  if (iVar16 != 0) {
    puVar3 = puVar14 + (ulong)(iVar16 - 1) * 2 + 2;
    do {
      while ((int)((long)*(undefined8 *)puVar14 >> 0x2f) != -0xe) {
        lVar9 = thunk_FUN_00bff61c(pvVar8,(*puVar14 & 0x80000000 | *puVar14 << 1) + 1);
        if ((int)*puVar14 < 0) {
          *(byte *)(lVar9 + -1) = *(byte *)(lVar9 + -1) & 7 | (byte)(*puVar14 >> 0x1b) & 0x18;
        }
        pvVar8 = (void *)thunk_FUN_00bff61c(lVar9,puVar14[1]);
LAB_00c20790:
        puVar14 = puVar14 + 2;
        if (puVar14 == puVar3) goto LAB_00c207ec;
      }
      uVar2 = *puVar14;
      pvVar8 = (void *)thunk_FUN_00bff61c(pvVar8,uVar2 & 0x80000000 | uVar2 << 1);
      if (-1 < (int)uVar2) goto LAB_00c20790;
      puVar14 = puVar14 + 2;
      *(byte *)((long)pvVar8 + -1) =
           *(byte *)((long)pvVar8 + -1) & 7 | (byte)((int)uVar2 >> 0x1b) & 0x18;
    } while (puVar14 != puVar3);
  }
LAB_00c207ec:
  *param_1 = (long)pvVar8;
  if (local_4 != 0) {
    if ((uint)((int)param_1[1] - (int)pvVar8) < local_4) {
      pvVar8 = (void *)FUN_00c1a4a8(param_1);
    }
    pvVar8 = memcpy(pvVar8,*(void **)(param_2 + 0x50),(ulong)local_4);
    *param_1 = (long)pvVar8 + (ulong)local_4;
  }
  if (*(int *)((long)param_1 + 0x3c) == 0) {
    iVar16 = ((int)*param_1 + -5) - (int)param_1[2];
    uVar2 = ((uint)LZCOUNT(iVar16) ^ 0x1f) * 9 + 0x48 >> 6;
    lVar9 = (ulong)(5 - uVar2) + param_1[2];
    thunk_FUN_00bff61c(lVar9,iVar16);
    uVar5 = (*(code *)param_1[5])(param_1[3],lVar9,uVar2 + iVar16,param_1[6]);
    *(undefined4 *)((long)param_1 + 0x3c) = uVar5;
  }
  return;
}

