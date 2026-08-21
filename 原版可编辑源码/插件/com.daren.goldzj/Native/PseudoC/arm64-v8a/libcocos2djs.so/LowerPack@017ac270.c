
/* v8::internal::compiler::SimdScalarLowering::LowerPack(v8::internal::compiler::Node*,
   v8::internal::compiler::SimdScalarLowering::SimdType,
   v8::internal::compiler::SimdScalarLowering::SimdType, bool) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::LowerPack
          (SimdScalarLowering *this,long param_1,undefined4 param_3,byte param_4,ulong param_5)

{
  undefined8 *puVar1;
  Graph *pGVar2;
  CommonOperatorBuilder *this_00;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  Operator *pOVar6;
  CommonOperatorBuilder *pCVar7;
  Graph *pGVar8;
  Zone *pZVar9;
  undefined8 uVar10;
  Operator *pOVar11;
  CommonOperatorBuilder *pCVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  MachineGraph *pMVar17;
  long lVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  ulong uVar22;
  long *plVar23;
  Graph *pGVar24;
  ulong uVar25;
  undefined8 *puVar26;
  CommonOperatorBuilder *local_e0;
  Graph *pGStack_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  Graph *local_b0;
  CommonOperatorBuilder *pCStack_a8;
  undefined8 local_88;
  Graph *local_80;
  CommonOperatorBuilder *pCStack_78;
  undefined8 local_70;
  
  plVar23 = (long *)(param_1 + 0x20);
  plVar16 = plVar23;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    plVar16 = (long *)(*plVar23 + 0x10);
  }
  puVar4 = (undefined8 *)GetReplacementsWithType(this,*plVar16,param_3);
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    plVar23 = (long *)(*plVar23 + 0x10);
  }
  lVar5 = GetReplacementsWithType(this,plVar23[1],param_3);
  pOVar6 = (Operator *)
           MachineOperatorBuilder::Int32LessThan(*(MachineOperatorBuilder **)(*(long *)this + 0x10))
  ;
  pMVar17 = *(MachineGraph **)this;
  if (param_4 == 4) {
    if ((param_5 & 1) == 0) {
      pCVar7 = (CommonOperatorBuilder *)MachineGraph::Int32Constant(pMVar17,0);
      pMVar17 = *(MachineGraph **)this;
      iVar19 = 0xffff;
    }
    else {
      pCVar7 = (CommonOperatorBuilder *)MachineGraph::Int32Constant(pMVar17,-0x8000);
      pMVar17 = *(MachineGraph **)this;
      iVar19 = 0x7fff;
    }
    pGVar8 = (Graph *)MachineGraph::Int32Constant(pMVar17,iVar19);
    uVar22 = 8;
    uVar20 = 3;
  }
  else {
    bVar3 = (param_5 & 1) == 0;
    iVar19 = -0x80;
    if (bVar3) {
      iVar19 = 0;
    }
    iVar21 = 0x7f;
    if (bVar3) {
      iVar21 = 0xff;
    }
    pCVar7 = (CommonOperatorBuilder *)MachineGraph::Int32Constant(pMVar17,iVar19);
    pGVar8 = (Graph *)MachineGraph::Int32Constant(*(MachineGraph **)this,iVar21);
    if ((param_4 & 0xfd) == 0) {
      uVar20 = 2;
      uVar22 = 2;
    }
    else {
      if ((param_4 | 2) == 3) {
        uVar22 = 4;
      }
      else {
        if (param_4 != 5) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        uVar22 = 0x10;
      }
      uVar20 = 2;
    }
  }
  uVar15 = (ulong)(uint)((int)uVar22 << 3);
  pZVar9 = *(Zone **)**(undefined8 **)this;
  lVar14 = *(long *)(pZVar9 + 0x10);
  if ((ulong)(*(long *)(pZVar9 + 0x18) - lVar14) < uVar15) {
    lVar14 = Zone::NewExpand(pZVar9,uVar15);
  }
  else {
    *(ulong *)(pZVar9 + 0x10) = lVar14 + uVar15;
  }
  uVar25 = 0;
  puVar26 = (undefined8 *)(lVar5 + (uVar22 >> 1) * -8);
  do {
    puVar1 = puVar4;
    if (uVar22 >> 1 <= uVar25) {
      puVar1 = puVar26;
    }
    pGVar2 = (Graph *)**(undefined8 **)this;
    uVar13 = (*(undefined8 **)this)[1];
    pGVar24 = (Graph *)*puVar1;
    local_b0 = pGVar24;
    pCStack_a8 = pCVar7;
    uVar10 = Graph::NewNode(pGVar2,pOVar6,2,(Node **)&local_b0,false);
    Diamond::Diamond((Diamond *)&local_b0,pGVar2,uVar13,uVar10,0);
    pGVar2 = local_b0;
    pOVar11 = (Operator *)CommonOperatorBuilder::Phi(pCStack_a8,uVar20,2);
    local_d0 = local_88;
    local_e0 = pCVar7;
    pGStack_d8 = pGVar24;
    pCVar12 = (CommonOperatorBuilder *)Graph::NewNode(pGVar2,pOVar11,3,(Node **)&local_e0,false);
    pGVar2 = (Graph *)**(undefined8 **)this;
    uVar13 = (*(undefined8 **)this)[1];
    local_e0 = (CommonOperatorBuilder *)pGVar8;
    pGStack_d8 = (Graph *)pCVar12;
    uVar10 = Graph::NewNode(pGVar2,pOVar6,2,(Node **)&local_e0,false);
    Diamond::Diamond((Diamond *)&local_e0,pGVar2,uVar13,uVar10,0);
    this_00 = local_e0;
    pOVar11 = (Operator *)CommonOperatorBuilder::Phi((CommonOperatorBuilder *)pGStack_d8,uVar20,2);
    local_70 = local_b8;
    local_80 = pGVar8;
    pCStack_78 = pCVar12;
    uVar13 = Graph::NewNode((Graph *)this_00,pOVar11,3,(Node **)&local_80,false);
    *(undefined8 *)(lVar14 + uVar25 * 8) = uVar13;
    uVar25 = uVar25 + 1;
    puVar4 = puVar4 + 1;
    puVar26 = puVar26 + 1;
  } while (uVar22 != uVar25);
  pZVar9 = *(Zone **)**(undefined8 **)this;
  lVar5 = *(long *)(pZVar9 + 0x10);
  if ((ulong)(*(long *)(pZVar9 + 0x18) - lVar5) < uVar15) {
    lVar5 = Zone::NewExpand(pZVar9,uVar15);
  }
  else {
    *(ulong *)(pZVar9 + 0x10) = lVar5 + uVar15;
  }
  lVar18 = 0;
  *(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) = lVar5;
  do {
    *(undefined8 *)
     (*(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) +
     lVar18) = *(undefined8 *)(lVar14 + lVar18);
    lVar18 = lVar18 + 8;
  } while (uVar22 * 8 - lVar18 != 0);
  *(int *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 0xc) =
       (int)uVar22;
  return;
}

