
/* v8::internal::compiler::SimdScalarLowering::LowerBinaryOpForSmallInt(v8::internal::compiler::Node*,
   v8::internal::compiler::SimdScalarLowering::SimdType, v8::internal::compiler::Operator const*,
   bool) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::LowerBinaryOpForSmallInt
          (SimdScalarLowering *this,long param_1,uint param_3,Operator *param_4,ulong param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  Zone *pZVar3;
  Node *pNVar4;
  Operator *pOVar5;
  Operator *pOVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  Graph *pGVar17;
  undefined8 *puVar18;
  Graph *pGVar19;
  Node *local_70;
  undefined8 uStack_68;
  
  plVar15 = (long *)(param_1 + 0x20);
  plVar12 = plVar15;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    plVar12 = (long *)(*plVar15 + 0x10);
  }
  puVar1 = (undefined8 *)GetReplacementsWithType(this,*plVar12,param_3);
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    plVar15 = (long *)(*plVar15 + 0x10);
  }
  puVar2 = (undefined8 *)GetReplacementsWithType(this,plVar15[1],param_3);
  if ((param_3 & 0xfd) == 0) {
    lVar16 = 2;
  }
  else if ((param_3 & 0xff | 2) == 3) {
    lVar16 = 4;
  }
  else if ((param_3 & 0xff) == 4) {
    lVar16 = 8;
  }
  else {
    if ((param_3 & 0xff) != 5) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar16 = 0x10;
  }
  uVar14 = (uint)lVar16;
  uVar10 = (ulong)(uVar14 << 3);
  pZVar3 = *(Zone **)**(undefined8 **)this;
  puVar8 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar8) < uVar10) {
    puVar8 = (undefined8 *)Zone::NewExpand(pZVar3,uVar10);
  }
  else {
    *(ulong *)(pZVar3 + 0x10) = (long)puVar8 + uVar10;
  }
  iVar11 = 0x10;
  if ((param_3 & 0xff) != 4) {
    iVar11 = 0x18;
  }
  lVar9 = lVar16;
  puVar18 = puVar8;
  if ((param_5 & 1) == 0) {
    lVar13 = (ulong)(uVar14 >> 1) * 8;
    lVar9 = 0;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    do {
      local_70 = (Node *)puVar1[-1];
      uStack_68 = *puVar1;
      pNVar4 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)this,param_4,2,&local_70,false);
      pGVar17 = (Graph *)**(undefined8 **)this;
      pOVar5 = (Operator *)
               MachineOperatorBuilder::Word32Sar
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      pGVar19 = (Graph *)**(undefined8 **)this;
      pOVar6 = (Operator *)
               MachineOperatorBuilder::Word32Shl
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)this,iVar11);
      local_70 = pNVar4;
      pNVar4 = (Node *)Graph::NewNode(pGVar19,pOVar6,2,&local_70,false);
      uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)this,iVar11);
      local_70 = pNVar4;
      uVar7 = Graph::NewNode(pGVar17,pOVar5,2,&local_70,false);
      *(undefined8 *)((long)puVar8 + lVar9) = uVar7;
      local_70 = (Node *)puVar2[-1];
      uStack_68 = *puVar2;
      pNVar4 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)this,param_4,2,&local_70,false);
      pGVar17 = (Graph *)**(undefined8 **)this;
      pOVar5 = (Operator *)
               MachineOperatorBuilder::Word32Sar
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      pGVar19 = (Graph *)**(undefined8 **)this;
      pOVar6 = (Operator *)
               MachineOperatorBuilder::Word32Shl
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)this,iVar11);
      local_70 = pNVar4;
      pNVar4 = (Node *)Graph::NewNode(pGVar19,pOVar6,2,&local_70,false);
      uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)this,iVar11);
      local_70 = pNVar4;
      uVar7 = Graph::NewNode(pGVar17,pOVar5,2,&local_70,false);
      puVar2 = puVar2 + 2;
      puVar1 = puVar1 + 2;
      *(undefined8 *)((long)puVar8 + lVar9 + lVar13) = uVar7;
      lVar9 = lVar9 + 8;
    } while (lVar13 != lVar9);
  }
  else {
    do {
      local_70 = (Node *)*puVar1;
      uStack_68 = *puVar2;
      pNVar4 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)this,param_4,2,&local_70,false);
      pGVar19 = (Graph *)**(undefined8 **)this;
      pOVar5 = (Operator *)
               MachineOperatorBuilder::Word32Sar
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      pGVar17 = (Graph *)**(undefined8 **)this;
      pOVar6 = (Operator *)
               MachineOperatorBuilder::Word32Shl
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)this,iVar11);
      local_70 = pNVar4;
      pNVar4 = (Node *)Graph::NewNode(pGVar17,pOVar6,2,&local_70,false);
      uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)this,iVar11);
      local_70 = pNVar4;
      uVar7 = Graph::NewNode(pGVar19,pOVar5,2,&local_70,false);
      lVar9 = lVar9 + -1;
      *puVar18 = uVar7;
      puVar18 = puVar18 + 1;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (lVar9 != 0);
  }
  pZVar3 = *(Zone **)**(undefined8 **)this;
  lVar9 = *(long *)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - lVar9) < uVar10) {
    lVar9 = Zone::NewExpand(pZVar3,uVar10);
  }
  else {
    *(ulong *)(pZVar3 + 0x10) = lVar9 + uVar10;
  }
  lVar13 = 0;
  *(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) = lVar9;
  do {
    *(undefined8 *)
     (*(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) +
     lVar13) = *(undefined8 *)((long)puVar8 + lVar13);
    lVar13 = lVar13 + 8;
  } while (lVar16 * 8 - lVar13 != 0);
  *(uint *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 0xc) =
       uVar14;
  return;
}

