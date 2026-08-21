
void FUN_01661484(undefined8 *param_1,LiveRange *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  LinearScanAllocator *this;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined **local_d0;
  LinearScanAllocator *pLStack_c8;
  long *local_b0;
  undefined **local_a0;
  LinearScanAllocator *pLStack_98;
  undefined ***local_80;
  LinearScanAllocator *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this = (LinearScanAllocator *)*param_1;
  v8::internal::compiler::LinearScanAllocator::AddToInactive(this,param_2);
  local_60 = *(undefined4 *)(param_1 + 1);
  puVar8 = *(undefined8 **)(this + 0x48);
  puVar1 = *(undefined8 **)(this + 0x50);
  local_68 = this;
  if (puVar8 != puVar1) {
    do {
      local_a0 = &PTR_FUN_01cca638;
      pLStack_98 = this;
      local_80 = &local_a0;
      FUN_01667074(&local_68,param_2,*puVar8,&local_a0);
      if (&local_a0 == local_80) {
        pcVar4 = (code *)(*local_80)[4];
LAB_016614f0:
        (*pcVar4)();
      }
      else if (local_80 != (undefined ***)0x0) {
        pcVar4 = (code *)(*local_80)[5];
        goto LAB_016614f0;
      }
      puVar8 = puVar8 + 1;
    } while (puVar1 != puVar8);
  }
  iVar3 = *(int *)(this + 0xc);
  if (0 < iVar3) {
    uVar9 = 0;
    do {
      if (uVar9 == ((ulong)(*(uint *)(param_2 + 4) >> 7) & 0x3f)) {
        puVar8 = (undefined8 *)(*(long *)(this + 0x68) + uVar9 * 0x20);
        plVar10 = puVar8 + 1;
        plVar11 = (long *)*puVar8;
        if (plVar11 != plVar10) {
          do {
            local_d0 = &PTR_FUN_01cca680;
            pLStack_c8 = this;
            local_b0 = (long *)&local_d0;
            FUN_01667074(&local_68,param_2,plVar11[4],&local_d0);
            if (&local_d0 == (undefined ***)local_b0) {
              pcVar4 = *(code **)(*local_b0 + 0x20);
LAB_016615dc:
              (*pcVar4)();
            }
            else if (local_b0 != (long *)0x0) {
              pcVar4 = *(code **)(*local_b0 + 0x28);
              goto LAB_016615dc;
            }
            plVar5 = (long *)plVar11[1];
            if ((long *)plVar11[1] == (long *)0x0) {
              plVar5 = plVar11 + 2;
              plVar6 = (long *)*plVar5;
              if ((long *)*plVar6 != plVar11) {
                do {
                  lVar7 = *plVar5;
                  plVar5 = (long *)(lVar7 + 0x10);
                  plVar6 = (long *)*plVar5;
                } while (*plVar6 != lVar7);
              }
            }
            else {
              do {
                plVar6 = plVar5;
                plVar5 = (long *)*plVar6;
              } while ((long *)*plVar6 != (long *)0x0);
            }
            plVar11 = plVar6;
          } while (plVar6 != plVar10);
          iVar3 = *(int *)(this + 0xc);
        }
      }
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)iVar3);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

