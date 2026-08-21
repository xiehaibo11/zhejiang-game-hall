
void cpHastySpaceStep(undefined8 param_1,int *param_2)

{
  pthread_mutex_t *__mutex;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  float __y;
  int iVar16;
  int iVar17;
  float fVar18;
  
  __y = (float)param_1;
  if (__y == 0.0) {
    return;
  }
  piVar1 = *(int **)(param_2 + 0x1c);
  piVar2 = *(int **)(param_2 + 0x1e);
  fVar18 = (float)param_2[0xd];
  param_2[0xd] = (int)__y;
  param_2[0xc] = param_2[0xc] + 1;
  piVar12 = *(int **)(param_2 + 0xe);
  if (0 < *piVar2) {
    lVar14 = 0;
    do {
      lVar10 = *(long *)(*(long *)(piVar2 + 2) + lVar14 * 8);
      *(undefined4 *)(lVar10 + 0x90) = 1;
      cVar5 = cpBodyIsSleeping(*(undefined8 *)(lVar10 + 0x28));
      if ((cVar5 == '\0') &&
         (cVar5 = cpBodyIsSleeping(*(undefined8 *)(lVar10 + 0x30)), cVar5 == '\0')) {
        cpArbiterUnthread(lVar10);
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < *piVar2);
  }
  *piVar2 = 0;
  cpSpaceLock(param_2);
  if (0 < *piVar12) {
    lVar14 = 0;
    do {
      (**(code **)(*(long *)(*(long *)(piVar12 + 2) + lVar14 * 8) + 8))(param_1);
      lVar14 = lVar14 + 1;
    } while (lVar14 < *piVar12);
  }
  cpSpacePushFreshContactBuffer(param_2);
  (**(code **)(**(long **)(param_2 + 0x1a) + 0x10))(*(long **)(param_2 + 0x1a),cpShapeUpdateFunc,0);
  (**(code **)(**(long **)(param_2 + 0x1a) + 0x40))
            (*(long **)(param_2 + 0x1a),cpSpaceCollideShapes,param_2);
  cpSpaceUnlock(param_2,0);
  cpSpaceProcessComponents(param_1,param_2);
  cpSpaceLock(param_2);
  cpHashSetFilter(*(undefined8 *)(param_2 + 0x22),cpSpaceArbiterSetFilter,param_2);
  iVar16 = param_2[6];
  fVar15 = powf((float)param_2[7],__y);
  if (0 < *piVar2) {
    lVar14 = 0;
    do {
      cpArbiterPreStep(param_1,iVar16,1.0 - fVar15,
                       *(undefined8 *)(*(long *)(piVar2 + 2) + lVar14 * 8));
      lVar14 = lVar14 + 1;
    } while (lVar14 < *piVar2);
  }
  if (0 < *piVar1) {
    lVar14 = 0;
    do {
      puVar11 = *(undefined8 **)(*(long *)(piVar1 + 2) + lVar14 * 8);
      if ((code *)puVar11[8] != (code *)0x0) {
        (*(code *)puVar11[8])(puVar11,param_2);
      }
      (**(code **)*puVar11)(param_1,puVar11);
      lVar14 = lVar14 + 1;
    } while (lVar14 < *piVar1);
  }
  fVar15 = powf((float)param_2[3],__y);
  if (0 < *piVar12) {
    iVar16 = param_2[1];
    iVar17 = param_2[2];
    lVar14 = 0;
    do {
      (*(code *)**(undefined8 **)(*(long *)(piVar12 + 2) + lVar14 * 8))
                (iVar16,iVar17,fVar15,param_1);
      lVar14 = lVar14 + 1;
    } while (lVar14 < *piVar12);
  }
  iVar16 = *piVar2;
  if (fVar18 != 0.0) {
    fVar18 = __y / fVar18;
  }
  if (0 < iVar16) {
    lVar14 = 0;
    do {
      cpArbiterApplyCachedImpulse(fVar18,*(undefined8 *)(*(long *)(piVar2 + 2) + lVar14 * 8));
      iVar16 = *piVar2;
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar16);
  }
  iVar17 = *piVar1;
  if (0 < iVar17) {
    lVar14 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(piVar1 + 2) + lVar14 * 8) + 8))(fVar18);
      iVar17 = *piVar1;
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar17);
    iVar16 = *piVar2;
  }
  if (*(ulong *)(param_2 + 0x72) < (ulong)(long)(iVar16 + iVar17)) {
    uVar6 = *(ulong *)(param_2 + 0x6e);
    *(code **)(param_2 + 0x96) = FUN_01174eb8;
    *(ulong *)(param_2 + 0x70) = uVar6 - 1;
    if (uVar6 - 1 == 0) {
      if (uVar6 <= (ulong)(long)*param_2) {
        piVar12 = *(int **)(param_2 + 0x1c);
        piVar3 = *(int **)(param_2 + 0x1e);
        iVar16 = param_2[0xd];
        uVar8 = 0;
        uVar13 = 0;
        if (uVar6 != 0) {
          uVar13 = (ulong)(long)*param_2 / uVar6;
        }
        do {
          if (0 < *piVar3) {
            lVar14 = 0;
            do {
              cpArbiterApplyImpulse(*(undefined8 *)(*(long *)(piVar3 + 2) + lVar14 * 8));
              lVar14 = lVar14 + 1;
            } while (lVar14 < *piVar3);
          }
          if (0 < *piVar12) {
            lVar14 = 0;
            do {
              (**(code **)(**(long **)(*(long *)(piVar12 + 2) + lVar14 * 8) + 0x10))(iVar16);
              lVar14 = lVar14 + 1;
            } while (lVar14 < *piVar12);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar13);
      }
    }
    else {
      __mutex = (pthread_mutex_t *)(param_2 + 0x74);
      pthread_mutex_lock(__mutex);
      pthread_cond_broadcast((pthread_cond_t *)(param_2 + 0x7e));
      pthread_mutex_unlock(__mutex);
      uVar6 = *(ulong *)(param_2 + 0x6e);
      uVar8 = (uVar6 + (long)*param_2) - 1;
      if (uVar6 <= uVar8) {
        piVar12 = *(int **)(param_2 + 0x1c);
        piVar3 = *(int **)(param_2 + 0x1e);
        iVar16 = param_2[0xd];
        uVar13 = 0;
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar8 / uVar6;
        }
        do {
          if (0 < *piVar3) {
            lVar14 = 0;
            do {
              cpArbiterApplyImpulse(*(undefined8 *)(*(long *)(piVar3 + 2) + lVar14 * 8));
              lVar14 = lVar14 + 1;
            } while (lVar14 < *piVar3);
          }
          if (0 < *piVar12) {
            lVar14 = 0;
            do {
              (**(code **)(**(long **)(*(long *)(piVar12 + 2) + lVar14 * 8) + 0x10))(iVar16);
              lVar14 = lVar14 + 1;
            } while (lVar14 < *piVar12);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar4);
      }
      pthread_mutex_lock(__mutex);
      if (*(long *)(param_2 + 0x70) != 0) {
        pthread_cond_wait((pthread_cond_t *)(param_2 + 0x8a),__mutex);
      }
      pthread_mutex_unlock(__mutex);
    }
    param_2[0x96] = 0;
    param_2[0x97] = 0;
  }
  else {
    iVar16 = *param_2;
    if (iVar16 != 0) {
      piVar12 = *(int **)(param_2 + 0x1c);
      piVar3 = *(int **)(param_2 + 0x1e);
      iVar17 = param_2[0xd];
      uVar6 = 0;
      do {
        if (0 < *piVar3) {
          lVar14 = 0;
          do {
            cpArbiterApplyImpulse(*(undefined8 *)(*(long *)(piVar3 + 2) + lVar14 * 8));
            lVar14 = lVar14 + 1;
          } while (lVar14 < *piVar3);
        }
        if (0 < *piVar12) {
          lVar14 = 0;
          do {
            (**(code **)(**(long **)(*(long *)(piVar12 + 2) + lVar14 * 8) + 0x10))(iVar17);
            lVar14 = lVar14 + 1;
          } while (lVar14 < *piVar12);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < (ulong)(long)iVar16);
    }
  }
  iVar16 = *piVar1;
  if (0 < iVar16) {
    lVar14 = 0;
    do {
      lVar10 = *(long *)(*(long *)(piVar1 + 2) + lVar14 * 8);
      pcVar9 = *(code **)(lVar10 + 0x48);
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(lVar10,param_2);
        iVar16 = *piVar1;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar16);
  }
  if (0 < *piVar2) {
    lVar14 = 0;
    do {
      lVar10 = *(long *)(*(long *)(piVar2 + 2) + lVar14 * 8);
      lVar7 = *(long *)(lVar10 + 0x70);
      (**(code **)(lVar7 + 0x20))(lVar10,param_2,*(undefined8 *)(lVar7 + 0x30));
      lVar14 = lVar14 + 1;
    } while (lVar14 < *piVar2);
  }
  cpSpaceUnlock(param_2,1);
  return;
}

