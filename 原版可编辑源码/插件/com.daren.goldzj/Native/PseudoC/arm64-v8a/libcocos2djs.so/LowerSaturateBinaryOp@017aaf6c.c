
/* v8::internal::compiler::SimdScalarLowering::LowerSaturateBinaryOp(v8::internal::compiler::Node*,
   v8::internal::compiler::SimdScalarLowering::SimdType, v8::internal::compiler::Operator const*,
   bool) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::LowerSaturateBinaryOp
          (SimdScalarLowering *this,long param_1,uint param_3,Operator *param_4,uint param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Zone *pZVar4;
  Graph *pGVar5;
  Operator *pOVar6;
  undefined8 uVar7;
  Node *pNVar8;
  undefined8 uVar9;
  Operator *pOVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  Graph *pGVar18;
  long lVar19;
  Node *pNVar20;
  undefined8 *puVar21;
  int local_10c;
  int local_108;
  undefined4 local_104;
  int local_100;
  int local_fc;
  Node *local_e0;
  Graph *pGStack_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  Node *local_b0;
  CommonOperatorBuilder *pCStack_a8;
  undefined8 local_88;
  Node *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  plVar17 = (long *)(param_1 + 0x20);
  plVar14 = plVar17;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    plVar14 = (long *)(*plVar17 + 0x10);
  }
  puVar2 = (undefined8 *)GetReplacementsWithType(this,*plVar14,param_3);
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    plVar17 = (long *)(*plVar17 + 0x10);
  }
  puVar3 = (undefined8 *)GetReplacementsWithType(this,plVar17[1],param_3);
  if ((param_3 & 0xff) == 4) {
    bVar1 = (param_5 & 1) == 0;
    local_fc = -0x8000;
    if (bVar1) {
      local_fc = 0;
    }
    local_108 = 0xffff;
    local_104 = 3;
    local_100 = 0x7fff;
    if (bVar1) {
      local_100 = 0xffff;
    }
    lVar19 = 8;
    local_10c = 0x10;
  }
  else {
    bVar1 = (param_5 & 1) == 0;
    local_100 = 0x7f;
    if (bVar1) {
      local_100 = 0xff;
    }
    local_fc = -0x80;
    if (bVar1) {
      local_fc = 0;
    }
    if ((param_3 & 0xfd) == 0) {
      local_108 = 0xff;
      local_104 = 2;
      local_10c = 0x18;
      lVar19 = 2;
    }
    else {
      if ((param_3 & 0xff | 2) == 3) {
        lVar19 = 4;
      }
      else {
        if ((param_3 & 0xff) != 5) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        lVar19 = 0x10;
      }
      local_104 = 2;
      local_10c = 0x18;
      local_108 = 0xff;
    }
  }
  uVar13 = (ulong)(uint)((int)lVar19 << 3);
  pZVar4 = *(Zone **)**(undefined8 **)this;
  puVar11 = *(undefined8 **)(pZVar4 + 0x10);
  lVar12 = lVar19;
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar11) < uVar13) {
    puVar11 = (undefined8 *)Zone::NewExpand(pZVar4,uVar13);
    puVar21 = puVar11;
  }
  else {
    *(ulong *)(pZVar4 + 0x10) = (long)puVar11 + uVar13;
    puVar21 = puVar11;
  }
  do {
    pNVar20 = (Node *)*puVar2;
    if ((param_5 & 1) == 0) {
      pGVar18 = (Graph *)**(undefined8 **)this;
      pOVar6 = (Operator *)
               MachineOperatorBuilder::Word32And
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      pCStack_a8 = (CommonOperatorBuilder *)
                   MachineGraph::Int32Constant(*(MachineGraph **)this,local_108);
      local_b0 = pNVar20;
      pNVar20 = (Node *)Graph::NewNode(pGVar18,pOVar6,2,&local_b0,false);
      pNVar8 = (Node *)*puVar3;
      pGVar18 = (Graph *)**(undefined8 **)this;
      pOVar6 = (Operator *)
               MachineOperatorBuilder::Word32And
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      pCStack_a8 = (CommonOperatorBuilder *)
                   MachineGraph::Int32Constant(*(MachineGraph **)this,local_108);
      local_b0 = pNVar8;
      pCStack_a8 = (CommonOperatorBuilder *)Graph::NewNode(pGVar18,pOVar6,2,&local_b0,false);
    }
    else {
      pCStack_a8 = (CommonOperatorBuilder *)*puVar3;
    }
    local_b0 = pNVar20;
    pGVar5 = (Graph *)Graph::NewNode((Graph *)**(undefined8 **)this,param_4,2,&local_b0,false);
    puVar15 = *(undefined8 **)this;
    pGVar18 = (Graph *)*puVar15;
    uVar9 = puVar15[1];
    pOVar6 = (Operator *)MachineOperatorBuilder::Int32LessThan((MachineOperatorBuilder *)puVar15[2])
    ;
    pCStack_a8 = (CommonOperatorBuilder *)
                 MachineGraph::Int32Constant(*(MachineGraph **)this,local_fc);
    local_b0 = (Node *)pGVar5;
    uVar7 = Graph::NewNode(pGVar18,pOVar6,2,&local_b0,false);
    Diamond::Diamond((Diamond *)&local_b0,pGVar18,uVar9,uVar7,0);
    pNVar8 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)this,local_fc);
    pNVar20 = local_b0;
    pOVar6 = (Operator *)CommonOperatorBuilder::Phi(pCStack_a8,local_104,2);
    local_d0 = local_88;
    local_e0 = pNVar8;
    pGStack_d8 = pGVar5;
    uVar9 = Graph::NewNode((Graph *)pNVar20,pOVar6,3,&local_e0,false);
    *puVar11 = uVar9;
    puVar15 = *(undefined8 **)this;
    pGVar18 = (Graph *)*puVar15;
    uVar9 = puVar15[1];
    pOVar6 = (Operator *)MachineOperatorBuilder::Int32LessThan((MachineOperatorBuilder *)puVar15[2])
    ;
    local_e0 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)this,local_100);
    pGStack_d8 = (Graph *)*puVar11;
    uVar7 = Graph::NewNode(pGVar18,pOVar6,2,&local_e0,false);
    Diamond::Diamond((Diamond *)&local_e0,pGVar18,uVar9,uVar7,0);
    pNVar8 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)this,local_100);
    pNVar20 = local_e0;
    uVar9 = *puVar11;
    pOVar6 = (Operator *)CommonOperatorBuilder::Phi((CommonOperatorBuilder *)pGStack_d8,local_104,2)
    ;
    local_70 = local_b8;
    local_80 = pNVar8;
    uStack_78 = uVar9;
    pNVar20 = (Node *)Graph::NewNode((Graph *)pNVar20,pOVar6,3,&local_80,false);
    *puVar11 = pNVar20;
    if ((param_5 & 1) == 0) {
      pGVar5 = (Graph *)**(undefined8 **)this;
      pOVar6 = (Operator *)
               MachineOperatorBuilder::Word32Sar
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      pGVar18 = (Graph *)**(undefined8 **)this;
      pOVar10 = (Operator *)
                MachineOperatorBuilder::Word32Shl
                          ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)this,local_10c);
      local_80 = pNVar20;
      pNVar20 = (Node *)Graph::NewNode(pGVar18,pOVar10,2,&local_80,false);
      uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)this,local_10c);
      local_80 = pNVar20;
      pNVar20 = (Node *)Graph::NewNode(pGVar5,pOVar6,2,&local_80,false);
    }
    *puVar11 = pNVar20;
    puVar3 = puVar3 + 1;
    lVar12 = lVar12 + -1;
    puVar2 = puVar2 + 1;
    puVar11 = puVar11 + 1;
  } while (lVar12 != 0);
  pZVar4 = *(Zone **)**(undefined8 **)this;
  lVar12 = *(long *)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - lVar12) < uVar13) {
    lVar12 = Zone::NewExpand(pZVar4,uVar13);
  }
  else {
    *(ulong *)(pZVar4 + 0x10) = lVar12 + uVar13;
  }
  lVar16 = 0;
  *(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) = lVar12;
  do {
    *(undefined8 *)
     (*(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) +
     lVar16) = *(undefined8 *)((long)puVar21 + lVar16);
    lVar16 = lVar16 + 8;
  } while (lVar19 * 8 - lVar16 != 0);
  *(int *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 0xc) =
       (int)lVar19;
  return;
}

