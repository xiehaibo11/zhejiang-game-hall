
/* v8::internal::compiler::SimdScalarLowering::PreparePhiReplacement(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::SimdScalarLowering::PreparePhiReplacement
          (SimdScalarLowering *this,Node *param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  Zone *pZVar5;
  undefined8 uVar6;
  Operator *pOVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined4 uVar14;
  long *plVar15;
  ulong uVar16;
  Graph *this_00;
  long lVar17;
  undefined8 *puVar18;
  
  cVar4 = PhiRepresentationOf(*(Operator **)param_1);
  if (cVar4 == '\r') {
    bVar2 = *(byte *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10
                     + 8);
    uVar3 = *(uint *)(*(long *)param_1 + 0x14);
    if ((bVar2 & 0xfd) == 0) {
      lVar17 = 2;
    }
    else if ((bVar2 | 2) == 3) {
      lVar17 = 4;
    }
    else if (bVar2 == 4) {
      lVar17 = 8;
    }
    else {
      if (bVar2 != 5) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      lVar17 = 0x10;
    }
    uVar11 = (ulong)(uint)((int)lVar17 << 3);
    pZVar5 = *(Zone **)**(undefined8 **)this;
    plVar8 = *(long **)(pZVar5 + 0x10);
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)plVar8) < uVar11) {
      plVar8 = (long *)Zone::NewExpand(pZVar5,uVar11);
    }
    else {
      *(ulong *)(pZVar5 + 0x10) = (long)plVar8 + uVar11;
    }
    uVar1 = uVar3 + 1;
    uVar16 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    plVar15 = plVar8;
    lVar10 = lVar17;
    do {
      pZVar5 = *(Zone **)**(undefined8 **)this;
      lVar13 = *(long *)(pZVar5 + 0x10);
      if ((ulong)(*(long *)(pZVar5 + 0x18) - lVar13) < uVar16) {
        lVar13 = Zone::NewExpand(pZVar5,uVar16);
      }
      else {
        *(ulong *)(pZVar5 + 0x10) = lVar13 + uVar16;
      }
      *plVar15 = lVar13;
      uVar6 = NodeProperties::GetControlInput(param_1,0);
      lVar10 = lVar10 + -1;
      *(undefined8 *)(*plVar15 + (long)(int)uVar3 * 8) = uVar6;
      plVar15 = plVar15 + 1;
    } while (lVar10 != 0);
    if (0 < (int)uVar3) {
      uVar16 = 0;
      lVar10 = lVar17;
      plVar15 = plVar8;
      do {
        do {
          lVar10 = lVar10 + -1;
          *(undefined8 *)(*plVar15 + uVar16 * 8) = *(undefined8 *)(this + 0x70);
          plVar15 = plVar15 + 1;
        } while (lVar10 != 0);
        uVar16 = uVar16 + 1;
        lVar10 = lVar17;
        plVar15 = plVar8;
      } while (uVar16 != uVar3);
    }
    pZVar5 = *(Zone **)**(undefined8 **)this;
    puVar9 = *(undefined8 **)(pZVar5 + 0x10);
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar9) < uVar11) {
      puVar9 = (undefined8 *)Zone::NewExpand(pZVar5,uVar11);
    }
    else {
      *(ulong *)(pZVar5 + 0x10) = (long)puVar9 + uVar11;
    }
    puVar12 = *(undefined8 **)this;
    this_00 = (Graph *)*puVar12;
    uVar14 = (undefined4)(0x20304050b0c >> (((ulong)bVar2 & 7) << 3));
    lVar10 = lVar17;
    puVar18 = puVar9;
    if (5 < bVar2) {
      uVar14 = 0;
    }
    do {
      pOVar7 = (Operator *)
               CommonOperatorBuilder::Phi((CommonOperatorBuilder *)puVar12[1],uVar14,(ulong)uVar3);
      uVar6 = Graph::NewNode(this_00,pOVar7,uVar1,(Node **)*plVar8,false);
      *puVar18 = uVar6;
      puVar12 = *(undefined8 **)this;
      lVar10 = lVar10 + -1;
      this_00 = (Graph *)*puVar12;
      plVar8 = plVar8 + 1;
      puVar18 = puVar18 + 1;
    } while (lVar10 != 0);
    pZVar5 = *(Zone **)this_00;
    lVar10 = *(long *)(pZVar5 + 0x10);
    if ((ulong)(*(long *)(pZVar5 + 0x18) - lVar10) < uVar11) {
      lVar10 = Zone::NewExpand(pZVar5,uVar11);
    }
    else {
      *(ulong *)(pZVar5 + 0x10) = lVar10 + uVar11;
    }
    lVar13 = 0;
    *(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) =
         lVar10;
    do {
      *(undefined8 *)
       (*(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) +
       lVar13) = *(undefined8 *)((long)puVar9 + lVar13);
      lVar13 = lVar13 + 8;
    } while (lVar17 * 8 - lVar13 != 0);
    *(int *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 0xc) =
         (int)lVar17;
  }
  return;
}

