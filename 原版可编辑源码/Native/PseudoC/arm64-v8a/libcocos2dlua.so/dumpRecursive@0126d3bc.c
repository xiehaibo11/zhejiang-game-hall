
/* CProfileManager::dumpRecursive(CProfileIterator*, int) */

CProfileIterator * CProfileManager::dumpRecursive(CProfileIterator *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  CProfileIterator *pCVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  timeval local_80;
  
  lVar6 = *(long *)param_1;
  lVar8 = *(long *)(lVar6 + 0x28);
  *(long *)(param_1 + 8) = lVar8;
  if (lVar8 == 0) {
    return param_1;
  }
  if (*(long *)(lVar6 + 0x20) == 0) {
    gettimeofday(&local_80,(__timezone_ptr_t)0x0);
    fVar12 = (float)(ulong)(((local_80.tv_usec - DAT_01795b80[1]) +
                            (local_80.tv_sec - *DAT_01795b80) * 1000000) - ResetTime) / 1000.0;
  }
  else {
    fVar12 = *(float *)(lVar6 + 0xc);
  }
  iVar1 = FrameCounter;
  iVar10 = param_2;
  if (param_2 < 1) {
    puts("----------------------------------");
  }
  else {
    do {
      putchar(0x2e);
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    puts("----------------------------------");
    iVar10 = param_2;
    if (0 < param_2) {
      do {
        putchar(0x2e);
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  printf("Profiling: %s (total running time: %.3f ms) ---\n",(double)fVar12,**(undefined8 **)param_1
        );
  puVar7 = *(undefined8 **)(param_1 + 8);
  if (puVar7 == (undefined8 *)0x0) {
    uVar11 = 0;
    fVar13 = 0.0;
    if (0.0 <= fVar12) goto LAB_0126d65c;
  }
  else {
    dVar14 = (double)iVar1;
    if (fVar12 <= 1.1920929e-07) {
      if (param_2 < 1) {
        uVar5 = 0;
        fVar13 = 0.0;
        do {
          fVar13 = fVar13 + *(float *)((long)puVar7 + 0xc);
          uVar11 = (int)uVar5 + 1;
          printf("%d -- %s (%.2f %%) :: %.3f ms / frame (%d calls)\n",0,
                 (double)*(float *)((long)puVar7 + 0xc) / dVar14,uVar5,*puVar7,
                 (ulong)*(uint *)(puVar7 + 1));
          uVar5 = (ulong)uVar11;
          puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x30);
          *(undefined8 **)(param_1 + 8) = puVar7;
        } while (puVar7 != (undefined8 *)0x0);
      }
      else {
        uVar11 = 0;
        fVar13 = 0.0;
        do {
          fVar15 = *(float *)((long)puVar7 + 0xc);
          iVar10 = param_2;
          do {
            putchar(0x2e);
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          uVar5 = (ulong)uVar11;
          uVar11 = uVar11 + 1;
          fVar13 = fVar13 + fVar15;
          printf("%d -- %s (%.2f %%) :: %.3f ms / frame (%d calls)\n",0,(double)fVar15 / dVar14,
                 uVar5,**(undefined8 **)(param_1 + 8),
                 (ulong)*(uint *)(*(undefined8 **)(param_1 + 8) + 1));
          puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x30);
          *(undefined8 **)(param_1 + 8) = puVar7;
        } while (puVar7 != (undefined8 *)0x0);
      }
    }
    else {
      fVar13 = 0.0;
      uVar3 = 0;
      do {
        fVar15 = *(float *)((long)puVar7 + 0xc);
        uVar11 = uVar3 + 1;
        iVar10 = param_2;
        if (0 < param_2) {
          do {
            putchar(0x2e);
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          puVar7 = *(undefined8 **)(param_1 + 8);
        }
        fVar13 = fVar13 + fVar15;
        printf("%d -- %s (%.2f %%) :: %.3f ms / frame (%d calls)\n",
               (double)((fVar15 / fVar12) * 100.0),(double)fVar15 / dVar14,(ulong)uVar3,*puVar7,
               (ulong)*(uint *)(puVar7 + 1));
        puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x30);
        *(undefined8 **)(param_1 + 8) = puVar7;
        uVar3 = uVar11;
      } while (puVar7 != (undefined8 *)0x0);
    }
    if (fVar13 <= fVar12) goto LAB_0126d65c;
  }
  puts("what\'s wrong");
LAB_0126d65c:
  iVar10 = param_2;
  if (0 < param_2) {
    do {
      putchar(0x2e);
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  dVar14 = 0.0;
  if (1.1920929e-07 < fVar12) {
    dVar14 = (double)(((fVar12 - fVar13) / fVar12) * 100.0);
  }
  uVar3 = printf("%s (%.3f %%) :: %.3f ms\n",dVar14,(double)(fVar12 - fVar13),"Unaccounted:");
  pCVar4 = (CProfileIterator *)(ulong)uVar3;
  if (0 < (int)uVar11) {
    lVar6 = *(long *)param_1;
    uVar3 = 0;
    do {
      lVar6 = *(long *)(lVar6 + 0x28);
      bVar2 = lVar6 != 0;
      *(long *)(param_1 + 8) = lVar6;
      if ((uVar3 != 0) && (lVar6 != 0)) {
        uVar9 = 1;
        do {
          lVar6 = *(long *)(lVar6 + 0x30);
          bVar2 = lVar6 != 0;
          *(long *)(param_1 + 8) = lVar6;
          if (uVar3 == uVar9) break;
          uVar9 = uVar9 + 1;
        } while (lVar6 != 0);
      }
      if (bVar2) {
        *(long *)param_1 = lVar6;
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar6 + 0x28);
      }
      pCVar4 = (CProfileIterator *)dumpRecursive(param_1,param_2 + 3);
      lVar8 = *(long *)(*(long *)param_1 + 0x20);
      lVar6 = *(long *)param_1;
      if (lVar8 != 0) {
        *(long *)param_1 = lVar8;
        lVar6 = lVar8;
      }
      uVar3 = uVar3 + 1;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar6 + 0x28);
    } while (uVar3 != uVar11);
  }
  return pCVar4;
}

