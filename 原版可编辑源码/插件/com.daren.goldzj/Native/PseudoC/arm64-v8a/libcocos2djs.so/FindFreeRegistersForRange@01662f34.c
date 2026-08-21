
/* v8::internal::compiler::LinearScanAllocator::FindFreeRegistersForRange(v8::internal::compiler::LiveRange*,
   v8::internal::Vector<v8::internal::compiler::LifetimePosition>) */

void __thiscall
v8::internal::compiler::LinearScanAllocator::FindFreeRegistersForRange
          (LinearScanAllocator *this,LiveRange *param_1,long param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  LiveRange *this_00;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  int local_64;
  
  uVar3 = *(uint *)(this + 0xc);
  uVar13 = (ulong)uVar3;
  if (0 < (int)uVar3) {
    if (uVar3 < 8) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar13 & 0xfffffff8;
      puVar8 = (undefined8 *)(param_3 + 0x10);
      uVar10 = uVar5;
      do {
        puVar8[-1] = 0x7fffffff7fffffff;
        puVar8[-2] = 0x7fffffff7fffffff;
        puVar8[1] = 0x7fffffff7fffffff;
        *puVar8 = 0x7fffffff7fffffff;
        uVar10 = uVar10 - 8;
        puVar8 = puVar8 + 4;
      } while (uVar10 != 0);
      if (uVar5 == uVar13) goto LAB_01662fbc;
    }
    lVar6 = uVar13 - uVar5;
    puVar9 = (undefined4 *)(param_3 + uVar5 * 4);
    do {
      lVar6 = lVar6 + -1;
      *puVar9 = 0x7fffffff;
      puVar9 = puVar9 + 1;
    } while (lVar6 != 0);
  }
LAB_01662fbc:
  plVar14 = *(long **)(this + 0x48);
  plVar12 = *(long **)(this + 0x50);
  if (plVar14 != plVar12) {
    do {
      lVar6 = *plVar14;
      uVar10 = (ulong)(*(uint *)(lVar6 + 4) >> 7) & 0x3f;
      *(undefined4 *)(param_3 + uVar10 * 4) = 0;
      if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
        pcVar4 = "unassigned";
        if ((int)uVar10 != 0x20) {
          puVar8 = &RegisterName(v8::internal::Register)::Names;
          if (*(int *)(this + 8) != 0) {
            puVar8 = &RegisterName(v8::internal::VRegister)::Names;
          }
          pcVar4 = (char *)puVar8[uVar10];
        }
        PrintF("Register %s is free until pos %d (1) due to %d\n",pcVar4,0,
               (ulong)*(uint *)(*(long *)(lVar6 + 0x20) + 0x5c));
      }
      plVar14 = plVar14 + 1;
    } while (plVar12 != plVar14);
  }
  if (0 < (int)uVar3) {
    uVar10 = 0;
    do {
      puVar8 = (undefined8 *)(*(long *)(this + 0x68) + uVar10 * 0x20);
      plVar12 = puVar8 + 1;
      plVar14 = (long *)*puVar8;
      if (plVar14 != plVar12) {
        piVar1 = (int *)(param_3 + uVar10 * 4);
        do {
          this_00 = (LiveRange *)plVar14[4];
          if (uVar10 != ((ulong)(*(uint *)(this_00 + 4) >> 7) & 0x3f)) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","cur_inactive->assigned_register() == cur_reg");
          }
          if (*piVar1 <= *(int *)(this_00 + 0x58)) break;
          local_64 = LiveRange::FirstIntersection(this_00,param_1);
          if (local_64 != -1) {
            piVar2 = &local_64;
            if (*piVar1 <= local_64) {
              piVar2 = piVar1;
            }
            *piVar1 = *piVar2;
            if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
              pcVar4 = "unassigned";
              if (uVar10 != 0x20) {
                puVar8 = &RegisterName(v8::internal::Register)::Names;
                if (*(int *)(this + 8) != 0) {
                  puVar8 = &RegisterName(v8::internal::VRegister)::Names;
                }
                pcVar4 = (char *)puVar8[uVar10];
              }
              PrintF("Register %s is free until pos %d (2)\n",pcVar4);
            }
          }
          plVar7 = (long *)plVar14[1];
          if ((long *)plVar14[1] == (long *)0x0) {
            plVar7 = plVar14 + 2;
            plVar11 = (long *)*plVar7;
            if ((long *)*plVar11 != plVar14) {
              do {
                lVar6 = *plVar7;
                plVar7 = (long *)(lVar6 + 0x10);
                plVar11 = (long *)*plVar7;
              } while (*plVar11 != lVar6);
            }
          }
          else {
            do {
              plVar11 = plVar7;
              plVar7 = (long *)*plVar11;
            } while ((long *)*plVar11 != (long *)0x0);
          }
          plVar14 = plVar11;
        } while (plVar11 != plVar12);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar13);
  }
  return;
}

