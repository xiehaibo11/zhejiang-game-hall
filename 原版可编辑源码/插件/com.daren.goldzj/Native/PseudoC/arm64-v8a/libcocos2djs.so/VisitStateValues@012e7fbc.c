
/* v8::internal::compiler::RepresentationSelector::VisitStateValues(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::RepresentationSelector::VisitStateValues
          (RepresentationSelector *this,Node *param_1)

{
  Node *pNVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  Operator *pOVar8;
  long *plVar9;
  undefined2 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  Node *pNVar15;
  long lVar16;
  ulong uVar17;
  Zone *this_00;
  long lVar18;
  long local_d0;
  undefined1 local_c8 [4];
  undefined8 local_c4;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar14 = *(int *)(this + 0x78);
  if (iVar14 == 2) {
    this_00 = *(Zone **)**(undefined8 **)this;
    plVar9 = *(long **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)plVar9) < 0x20) {
      plVar9 = (long *)Zone::NewExpand(this_00,0x20);
    }
    else {
      *(long **)(this_00 + 0x10) = plVar9 + 4;
    }
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      uVar13 = *(uint *)(*(long *)(param_1 + 0x20) + 8);
    }
    else {
      uVar13 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
    }
    *plVar9 = 0;
    plVar9[1] = 0;
    plVar9[2] = 0;
    plVar9[3] = (long)this_00;
    if (uVar13 != 0) {
      uVar17 = (ulong)(int)uVar13;
      if ((uVar17 >> 0x1e & 3) != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar10 = *(undefined2 **)(this_00 + 0x10);
      uVar7 = uVar17 * 2 + 7 & 0xfffffffffffffff8;
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar10) < uVar7) {
        puVar10 = (undefined2 *)Zone::NewExpand(this_00,uVar7);
      }
      else {
        *(ulong *)(this_00 + 0x10) = (long)puVar10 + uVar7;
      }
      *plVar9 = (long)puVar10;
      plVar9[1] = (long)puVar10;
      plVar9[2] = (long)(puVar10 + uVar17);
      do {
        *puVar10 = 0;
        uVar17 = uVar17 - 1;
        puVar10 = (undefined2 *)(plVar9[1] + 2);
        plVar9[1] = (long)puVar10;
      } while (uVar17 != 0);
    }
    uVar17 = 0;
    pNVar1 = param_1 + 0x20;
    while( true ) {
      uVar13 = *(uint *)(param_1 + 0x14) & 0xf000000;
      if (uVar13 == 0xf000000) {
        uVar2 = *(uint *)(*(long *)pNVar1 + 8);
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
      }
      if ((long)(int)uVar2 <= (long)uVar17) break;
      pNVar15 = pNVar1;
      if (uVar13 == 0xf000000) {
        pNVar15 = (Node *)(*(long *)pNVar1 + 0x10);
      }
      lVar18 = *(long *)(pNVar15 + uVar17 * 8);
      local_d0 = *(long *)(*(long *)(this + 0x18) +
                           ((ulong)*(uint *)(lVar18 + 0x14) & 0xffffff) * 0x28 + 0x18);
      if (local_d0 == 0) {
        local_d0 = *(long *)(lVar18 + 8);
      }
      if ((local_d0 == 0x8000001) ||
         (uVar7 = Type::SlowIs((Type *)&local_d0,0x8000001), (uVar7 & 1) != 0)) {
        local_c8[0] = 8;
        local_c4 = 0x100000005;
        local_bc = 0;
        local_b8 = 0;
        local_b0 = 0xffffffff;
        ConvertInput(this,param_1,uVar17 & 0xffffffff,local_c8,0);
      }
      lVar16 = *(long *)(this + 0x18) + ((ulong)*(uint *)(lVar18 + 0x14) & 0xffffff) * 0x28;
      lVar11 = *(long *)(lVar16 + 0x18);
      if (lVar11 == 0) {
        lVar11 = *(long *)(lVar18 + 8);
      }
      uVar5 = DeoptMachineTypeOf(*(undefined1 *)(lVar16 + 1),lVar11);
      *(undefined2 *)(*plVar9 + uVar17 * 2) = uVar5;
      uVar17 = uVar17 + 1;
    }
    uVar6 = SparseInputMaskOf(*(Operator **)param_1);
    pOVar8 = (Operator *)
             CommonOperatorBuilder::TypedStateValues
                       (*(CommonOperatorBuilder **)(*(long *)this + 8),plVar9,uVar6);
    NodeProperties::ChangeOp(param_1,pOVar8);
  }
  else {
    if (iVar14 != 0) goto LAB_012e82f4;
    uVar17 = 0;
    pNVar1 = param_1 + 0x20;
    while( true ) {
      uVar13 = *(uint *)(param_1 + 0x14) & 0xf000000;
      if (uVar13 == 0xf000000) {
        uVar2 = *(uint *)(*(long *)pNVar1 + 8);
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
      }
      if ((long)(int)uVar2 <= (long)uVar17) break;
      pNVar15 = pNVar1;
      if (uVar13 == 0xf000000) {
        pNVar15 = (Node *)(*(long *)pNVar1 + 0x10);
      }
      local_d0 = *(long *)(*(long *)(this + 0x18) +
                           ((ulong)*(uint *)(*(long *)(pNVar15 + uVar17 * 8) + 0x14) & 0xffffff) *
                           0x28 + 0x18);
      if (local_d0 == 0) {
        local_d0 = *(long *)(*(long *)(pNVar15 + uVar17 * 8) + 8);
      }
      if ((local_d0 == 0x8000001) ||
         (uVar7 = Type::SlowIs((Type *)&local_d0,0x8000001), (uVar7 & 1) != 0)) {
        local_88[0] = 8;
        puVar12 = local_88;
        puVar4 = local_88;
      }
      else {
        puVar12 = local_a8;
        local_a8[0] = 0;
        puVar4 = local_a8;
      }
      *(undefined8 *)((ulong)puVar4 | 4) = 0x100000005;
      puVar12[0xc] = 0;
      *(undefined8 *)(puVar12 + 0x10) = 0;
      *(undefined4 *)(puVar12 + 0x18) = 0xffffffff;
      EnqueueInput(this,param_1,uVar17 & 0xffffffff);
      uVar17 = uVar17 + 1;
    }
  }
  iVar14 = *(int *)(this + 0x78);
LAB_012e82f4:
  if (iVar14 == 1) {
    *(undefined1 *)
     (*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28 + 1) = 8;
  }
  else if (iVar14 == 0) {
    *(undefined8 *)
     (*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28 + 0x10) =
         0xffffffff;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

