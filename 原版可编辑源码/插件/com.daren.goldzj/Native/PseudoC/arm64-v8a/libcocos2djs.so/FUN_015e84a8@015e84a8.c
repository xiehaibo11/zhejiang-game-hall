
void FUN_015e84a8(long *param_1)

{
  Mutex *this;
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  CancelableTask *this_00;
  void *pvVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  CancelableTask *pCVar17;
  long *plVar18;
  long *local_78;
  long *local_70;
  long *local_68;
  
  this = (Mutex *)(param_1 + 0x20);
  v8::base::Mutex::Lock(this);
  if ((param_1[0x25] == param_1[0x26]) || ((*(byte *)(param_1 + 6) & 1) != 0)) {
    v8::base::Mutex::Unlock(this);
    return;
  }
  lVar14 = param_1[0x19] + param_1[0x18];
  lVar13 = param_1[0x1e] - param_1[0x1d] >> 4;
  if ((int)param_1[0x1c] < (int)lVar13) {
    lVar14 = (lVar13 + lVar14) - (long)(int)param_1[0x1c];
  }
  plVar18 = (long *)0x0;
  if (lVar14 == 0) {
    plVar16 = (long *)0x0;
  }
  else {
    lVar13 = param_1[0x26];
    plVar16 = (long *)0x0;
    if (param_1[0x25] != lVar13) {
      plVar18 = (long *)0x0;
      local_78 = (long *)0x0;
      plVar11 = (long *)0x0;
      do {
        uVar5 = *(undefined4 *)(lVar13 + -4);
        param_1[0x26] = lVar13 + -4;
        lVar12 = *(long *)(*param_1 + 0x178);
        this_00 = operator_new(0x50);
        lVar13 = param_1[1];
        lVar3 = param_1[2];
        if (lVar3 != 0) {
          plVar16 = (long *)(lVar3 + 8);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar7) {
              *plVar16 = *plVar16 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        lVar2 = param_1[4];
        lVar4 = param_1[5];
        if (lVar4 != 0) {
          plVar16 = (long *)(lVar4 + 8);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar7) {
              *plVar16 = *plVar16 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        v8::internal::CancelableTask::CancelableTask
                  (this_00,(CancelableTaskManager *)(lVar12 + 0x70));
        *(undefined ***)this_00 = &PTR_FUN_01cc9ac0;
        pCVar17 = this_00 + 0x20;
        *(undefined ***)pCVar17 = &PTR_FUN_01cc9af0;
        *(long *)(this_00 + 0x28) = lVar13;
        *(long *)(this_00 + 0x30) = lVar3;
        *(long *)(this_00 + 0x38) = lVar2;
        *(long *)(this_00 + 0x40) = lVar4;
        *(undefined4 *)(this_00 + 0x48) = uVar5;
        if (plVar18 < local_78) {
          *plVar18 = (long)pCVar17;
          plVar16 = plVar11;
          plVar10 = plVar18;
        }
        else {
          lVar13 = (long)plVar18 - (long)plVar11 >> 3;
          uVar1 = lVar13 + 1;
          if (uVar1 >> 0x3d != 0) {
LAB_015e881c:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar15 = (long)local_78 - (long)plVar11 >> 2;
          if (uVar1 <= uVar15) {
            uVar1 = uVar15;
          }
          if (0xffffffffffffffe < (ulong)((long)local_78 - (long)plVar11 >> 3)) {
            uVar1 = 0x1fffffffffffffff;
          }
          if (uVar1 == 0) {
            pvVar8 = (void *)0x0;
          }
          else {
            if (uVar1 >> 0x3d != 0) goto LAB_015e881c;
            pvVar8 = operator_new(uVar1 << 3);
          }
          plVar10 = (long *)((long)pvVar8 + lVar13 * 8);
          local_78 = (long *)((long)pvVar8 + uVar1 * 8);
          *plVar10 = (long)pCVar17;
          plVar9 = plVar18;
          plVar16 = plVar10;
          if (plVar18 != plVar11) {
            do {
              plVar9 = plVar9 + -1;
              lVar13 = *plVar9;
              *plVar9 = 0;
              plVar16 = plVar16 + -1;
              *plVar16 = lVar13;
            } while (plVar11 != plVar9);
            do {
              plVar18 = plVar18 + -1;
              plVar9 = (long *)*plVar18;
              *plVar18 = 0;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))();
              }
            } while (plVar11 != plVar18);
          }
          if (plVar11 != (long *)0x0) {
            operator_delete(plVar11);
          }
        }
        plVar18 = plVar10 + 1;
        lVar14 = lVar14 + -1;
      } while ((lVar14 != 0) && (lVar13 = param_1[0x26], plVar11 = plVar16, param_1[0x25] != lVar13)
              );
    }
  }
  v8::base::Mutex::Unlock(this);
  v8::base::Mutex::Lock((Mutex *)(param_1 + 0x2b));
  lVar14 = param_1[0x33];
  v8::base::Mutex::Unlock((Mutex *)(param_1 + 0x2b));
  bVar7 = plVar16 != plVar18;
  plVar11 = plVar16;
  if ((int)lVar14 == 0) {
    while (bVar7) {
      plVar10 = (long *)v8::internal::V8::GetCurrentPlatform();
      local_68 = (long *)*plVar11;
      *plVar11 = 0;
      (**(code **)(*plVar10 + 0x48))(plVar10,&local_68);
      plVar10 = local_68;
      local_68 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 8))();
      }
      bVar7 = plVar18 != plVar11 + 1;
      plVar11 = plVar11 + 1;
    }
  }
  else {
    while (bVar7) {
      plVar10 = (long *)v8::internal::V8::GetCurrentPlatform();
      local_70 = (long *)*plVar11;
      *plVar11 = 0;
      (**(code **)(*plVar10 + 0x38))(plVar10,&local_70);
      plVar10 = local_70;
      local_70 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 8))();
      }
      bVar7 = plVar18 != plVar11 + 1;
      plVar11 = plVar11 + 1;
    }
  }
  if (plVar16 != (long *)0x0) {
    while (plVar16 != plVar18) {
      while( true ) {
        plVar18 = plVar18 + -1;
        plVar11 = (long *)*plVar18;
        *plVar18 = 0;
        if (plVar11 == (long *)0x0) break;
        (**(code **)(*plVar11 + 8))();
        if (plVar16 == plVar18) goto LAB_015e87f4;
      }
    }
LAB_015e87f4:
    operator_delete(plVar16);
  }
  return;
}

