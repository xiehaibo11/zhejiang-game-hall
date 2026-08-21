
/* v8::internal::compiler::LoadElimination::AbstractState::LookupField(v8::internal::compiler::Node*,
   v8::internal::compiler::LoadElimination::IndexRange, v8::internal::compiler::ConstFieldInfo)
   const */

long * __thiscall
v8::internal::compiler::LoadElimination::AbstractState::LookupField
          (AbstractState *this,undefined8 param_1,undefined8 param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  AbstractState *pAVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long local_58;
  
  iVar4 = (int)((ulong)param_3 >> 0x20);
  if ((int)param_3 != iVar4) {
    plVar9 = (long *)0x0;
    bVar1 = false;
    lVar10 = (long)(int)param_3;
    pAVar5 = this + lVar10 * 8;
    local_58 = param_4;
    if (param_4 == 0) goto LAB_0176ee08;
    while (puVar12 = *(undefined8 **)(pAVar5 + 0x108), puVar12 != (undefined8 *)0x0) {
      plVar11 = (long *)*puVar12;
      while( true ) {
        if (plVar11 == puVar12 + 1) {
          return (long *)0x0;
        }
        uVar7 = *(byte *)(plVar11[4] + 0x17) & 0xf;
        plVar6 = (long *)(plVar11[4] + 0x20);
        if (uVar7 == 0xf) {
          uVar7 = *(uint *)(*plVar6 + 8);
          plVar6 = (long *)(*plVar6 + 0x10);
        }
        if ((((int)uVar7 < 1) || (*plVar6 != 0)) &&
           (uVar3 = thunk_FUN_0176bf74(param_1), (uVar3 & 1) != 0)) break;
        plVar6 = (long *)plVar11[1];
        if ((long *)plVar11[1] == (long *)0x0) {
          plVar6 = plVar11 + 2;
          bVar2 = *(long **)*plVar6 != plVar11;
          plVar11 = (long *)*plVar6;
          if (bVar2) {
            do {
              lVar8 = *plVar6;
              plVar6 = (long *)(lVar8 + 0x10);
              plVar11 = (long *)*plVar6;
            } while (*plVar11 != lVar8);
          }
        }
        else {
          do {
            plVar11 = plVar6;
            plVar6 = (long *)*plVar11;
          } while ((long *)*plVar11 != (long *)0x0);
        }
      }
      uVar3 = compiler::operator==((ConstFieldInfo *)(plVar11 + 8),(ConstFieldInfo *)&local_58);
      if ((uVar3 & 1) == 0) {
        return (long *)0x0;
      }
      while( true ) {
        lVar10 = lVar10 + 1;
        if (!bVar1) {
          plVar9 = plVar11 + 5;
        }
        if ((int)lVar10 == iVar4) {
          return plVar9;
        }
        if (!bVar1) {
          bVar1 = true;
        }
        pAVar5 = this + lVar10 * 8;
        if (local_58 != 0) break;
LAB_0176ee08:
        puVar12 = *(undefined8 **)(pAVar5 + 8);
        if (puVar12 == (undefined8 *)0x0) {
          return (long *)0x0;
        }
        plVar11 = (long *)*puVar12;
        while( true ) {
          if (plVar11 == puVar12 + 1) {
            return (long *)0x0;
          }
          uVar7 = *(byte *)(plVar11[4] + 0x17) & 0xf;
          plVar6 = (long *)(plVar11[4] + 0x20);
          if (uVar7 == 0xf) {
            uVar7 = *(uint *)(*plVar6 + 8);
            plVar6 = (long *)(*plVar6 + 0x10);
          }
          if ((((int)uVar7 < 1) || (*plVar6 != 0)) &&
             (uVar3 = thunk_FUN_0176bf74(param_1), (uVar3 & 1) != 0)) break;
          plVar6 = (long *)plVar11[1];
          if ((long *)plVar11[1] == (long *)0x0) {
            plVar6 = plVar11 + 2;
            bVar2 = *(long **)*plVar6 != plVar11;
            plVar11 = (long *)*plVar6;
            if (bVar2) {
              do {
                lVar8 = *plVar6;
                plVar6 = (long *)(lVar8 + 0x10);
                plVar11 = (long *)*plVar6;
              } while (*plVar11 != lVar8);
            }
          }
          else {
            do {
              plVar11 = plVar6;
              plVar6 = (long *)*plVar11;
            } while ((long *)*plVar11 != (long *)0x0);
          }
        }
      }
    }
  }
  return (long *)0x0;
}

