
/* v8::internal::compiler::RepresentationSelector::VisitObjectState(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::RepresentationSelector::VisitObjectState
          (RepresentationSelector *this,Node *param_1)

{
  Node *pNVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  uint uVar6;
  ulong uVar7;
  Operator *pOVar8;
  ZoneVector *pZVar9;
  undefined2 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  int iVar13;
  Node *pNVar14;
  long lVar15;
  ulong uVar16;
  Zone *this_00;
  CommonOperatorBuilder *this_01;
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
  iVar13 = *(int *)(this + 0x78);
  if (iVar13 == 2) {
    this_00 = *(Zone **)**(undefined8 **)this;
    pZVar9 = *(ZoneVector **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pZVar9) < 0x20) {
      pZVar9 = (ZoneVector *)Zone::NewExpand(this_00,0x20);
    }
    else {
      *(ZoneVector **)(this_00 + 0x10) = pZVar9 + 0x20;
    }
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      uVar6 = *(uint *)(*(long *)(param_1 + 0x20) + 8);
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
    }
    *(undefined8 *)pZVar9 = 0;
    *(undefined8 *)(pZVar9 + 8) = 0;
    *(undefined8 *)(pZVar9 + 0x10) = 0;
    *(Zone **)(pZVar9 + 0x18) = this_00;
    if (uVar6 != 0) {
      uVar16 = (ulong)(int)uVar6;
      if ((uVar16 >> 0x1e & 3) != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar10 = *(undefined2 **)(this_00 + 0x10);
      uVar7 = uVar16 * 2 + 7 & 0xfffffffffffffff8;
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar10) < uVar7) {
        puVar10 = (undefined2 *)Zone::NewExpand(this_00,uVar7);
      }
      else {
        *(ulong *)(this_00 + 0x10) = (long)puVar10 + uVar7;
      }
      *(undefined2 **)pZVar9 = puVar10;
      *(undefined2 **)(pZVar9 + 8) = puVar10;
      *(undefined2 **)(pZVar9 + 0x10) = puVar10 + uVar16;
      do {
        *puVar10 = 0;
        uVar16 = uVar16 - 1;
        puVar10 = (undefined2 *)(*(long *)(pZVar9 + 8) + 2);
        *(undefined2 **)(pZVar9 + 8) = puVar10;
      } while (uVar16 != 0);
    }
    uVar16 = 0;
    pNVar1 = param_1 + 0x20;
    while( true ) {
      uVar6 = *(uint *)(param_1 + 0x14) & 0xf000000;
      if (uVar6 == 0xf000000) {
        uVar2 = *(uint *)(*(long *)pNVar1 + 8);
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
      }
      if ((long)(int)uVar2 <= (long)uVar16) break;
      pNVar14 = pNVar1;
      if (uVar6 == 0xf000000) {
        pNVar14 = (Node *)(*(long *)pNVar1 + 0x10);
      }
      lVar15 = *(long *)(this + 0x18) +
               ((ulong)*(uint *)(*(long *)(pNVar14 + uVar16 * 8) + 0x14) & 0xffffff) * 0x28;
      lVar11 = *(long *)(lVar15 + 0x18);
      if (lVar11 == 0) {
        lVar11 = *(long *)(*(long *)(pNVar14 + uVar16 * 8) + 8);
      }
      uVar5 = DeoptMachineTypeOf(*(undefined1 *)(lVar15 + 1),lVar11);
      *(undefined2 *)(*(long *)pZVar9 + uVar16 * 2) = uVar5;
      pNVar14 = pNVar1;
      if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
        pNVar14 = (Node *)(*(long *)pNVar1 + 0x10);
      }
      local_d0 = *(long *)(*(long *)(this + 0x18) +
                           ((ulong)*(uint *)(*(long *)(pNVar14 + uVar16 * 8) + 0x14) & 0xffffff) *
                           0x28 + 0x18);
      if (local_d0 == 0) {
        local_d0 = *(long *)(*(long *)(pNVar14 + uVar16 * 8) + 8);
      }
      if ((local_d0 == 0x8000001) ||
         (uVar7 = Type::SlowIs((Type *)&local_d0,0x8000001), (uVar7 & 1) != 0)) {
        local_c8[0] = 8;
        local_c4 = 0x100000005;
        local_bc = 0;
        local_b8 = 0;
        local_b0 = 0xffffffff;
        ConvertInput(this,param_1,uVar16 & 0xffffffff,local_c8,0);
      }
      uVar16 = uVar16 + 1;
    }
    this_01 = *(CommonOperatorBuilder **)(*(long *)this + 8);
    uVar6 = ObjectIdOf(*(Operator **)param_1);
    pOVar8 = (Operator *)CommonOperatorBuilder::TypedObjectState(this_01,uVar6,pZVar9);
    NodeProperties::ChangeOp(param_1,pOVar8);
  }
  else {
    if (iVar13 != 0) goto LAB_012e86e0;
    uVar16 = 0;
    pNVar1 = param_1 + 0x20;
    while( true ) {
      uVar6 = *(uint *)(param_1 + 0x14) & 0xf000000;
      if (uVar6 == 0xf000000) {
        uVar2 = *(uint *)(*(long *)pNVar1 + 8);
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
      }
      if ((long)(int)uVar2 <= (long)uVar16) break;
      pNVar14 = pNVar1;
      if (uVar6 == 0xf000000) {
        pNVar14 = (Node *)(*(long *)pNVar1 + 0x10);
      }
      local_d0 = *(long *)(*(long *)(this + 0x18) +
                           ((ulong)*(uint *)(*(long *)(pNVar14 + uVar16 * 8) + 0x14) & 0xffffff) *
                           0x28 + 0x18);
      if (local_d0 == 0) {
        local_d0 = *(long *)(*(long *)(pNVar14 + uVar16 * 8) + 8);
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
      EnqueueInput(this,param_1,uVar16 & 0xffffffff);
      uVar16 = uVar16 + 1;
    }
  }
  iVar13 = *(int *)(this + 0x78);
LAB_012e86e0:
  if (iVar13 == 1) {
    *(undefined1 *)
     (*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28 + 1) = 8;
  }
  else if (iVar13 == 0) {
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

