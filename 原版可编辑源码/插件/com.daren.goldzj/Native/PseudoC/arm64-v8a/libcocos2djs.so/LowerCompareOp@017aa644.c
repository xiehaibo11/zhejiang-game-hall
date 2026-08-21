
/* v8::internal::compiler::SimdScalarLowering::LowerCompareOp(v8::internal::compiler::Node*,
   v8::internal::compiler::SimdScalarLowering::SimdType, v8::internal::compiler::Operator const*,
   bool) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::LowerCompareOp
          (SimdScalarLowering *this,long param_1,uint param_3,Operator *param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  Zone *pZVar3;
  Graph *pGVar4;
  Node *pNVar5;
  undefined8 uVar6;
  Graph *pGVar7;
  Operator *pOVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  Graph *local_a8;
  CommonOperatorBuilder *pCStack_a0;
  undefined8 local_80;
  Node *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  plVar16 = (long *)(param_1 + 0x20);
  plVar13 = plVar16;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    plVar13 = (long *)(*plVar16 + 0x10);
  }
  puVar1 = (undefined8 *)GetReplacementsWithType(this,*plVar13,param_3);
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    plVar16 = (long *)(*plVar16 + 0x10);
  }
  puVar2 = (undefined8 *)GetReplacementsWithType(this,plVar16[1],param_3);
  if ((param_3 & 0xfd) == 0) {
    lVar17 = 2;
  }
  else if ((param_3 & 0xff | 2) == 3) {
    lVar17 = 4;
  }
  else if ((param_3 & 0xff) == 4) {
    lVar17 = 8;
  }
  else {
    if ((param_3 & 0xff) != 5) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar17 = 0x10;
  }
  uVar12 = (ulong)(uint)((int)lVar17 << 3);
  pZVar3 = *(Zone **)**(undefined8 **)this;
  puVar10 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar10) < uVar12) {
    puVar10 = (undefined8 *)Zone::NewExpand(pZVar3,uVar12);
  }
  else {
    *(ulong *)(pZVar3 + 0x10) = (long)puVar10 + uVar12;
  }
  pGVar4 = (Graph *)**(undefined8 **)this;
  lVar11 = lVar17;
  puVar18 = puVar10;
  puVar14 = puVar10;
  if ((param_5 & 1) == 0) goto LAB_017aa810;
LAB_017aa804:
  pCStack_a0 = (CommonOperatorBuilder *)*puVar1;
  local_a8 = (Graph *)*puVar2;
  do {
    pGVar7 = (Graph *)Graph::NewNode(pGVar4,param_4,2,(Node **)&local_a8,false);
    puVar14 = *(undefined8 **)this;
    pGVar4 = (Graph *)*puVar14;
    uVar6 = puVar14[1];
    pOVar8 = (Operator *)MachineOperatorBuilder::Word32Equal((MachineOperatorBuilder *)puVar14[2]);
    pCStack_a0 = (CommonOperatorBuilder *)MachineGraph::Int32Constant(*(MachineGraph **)this,0);
    local_a8 = pGVar7;
    uVar9 = Graph::NewNode(pGVar4,pOVar8,2,(Node **)&local_a8,false);
    Diamond::Diamond((Diamond *)&local_a8,pGVar4,uVar6,uVar9,0);
    uVar9 = 0xc;
    uVar6 = 4;
    switch(param_3 & 0xff) {
    case 0:
      break;
    case 1:
      goto switchD_017aa8b8_caseD_1;
    case 2:
      uVar9 = 5;
      break;
    case 3:
      uVar9 = 4;
      break;
    case 4:
      uVar9 = 3;
      break;
    case 5:
      uVar9 = 2;
      break;
    default:
      uVar9 = 0;
    }
    uVar6 = uVar9;
switchD_017aa8b8_caseD_1:
    pNVar5 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)this,0);
    uVar9 = MachineGraph::Int32Constant(*(MachineGraph **)this,-1);
    pGVar4 = local_a8;
    pOVar8 = (Operator *)CommonOperatorBuilder::Phi(pCStack_a0,uVar6,2);
    local_68 = local_80;
    local_78 = pNVar5;
    uStack_70 = uVar9;
    uVar6 = Graph::NewNode(pGVar4,pOVar8,3,&local_78,false);
    puVar14 = puVar18 + 1;
    *puVar18 = uVar6;
    puVar1 = puVar1 + 1;
    lVar11 = lVar11 + -1;
    puVar2 = puVar2 + 1;
    pGVar4 = (Graph *)**(undefined8 **)this;
    if (lVar11 == 0) {
      pZVar3 = *(Zone **)pGVar4;
      lVar11 = *(long *)(pZVar3 + 0x10);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - lVar11) < uVar12) {
        lVar11 = Zone::NewExpand(pZVar3,uVar12);
      }
      else {
        *(ulong *)(pZVar3 + 0x10) = lVar11 + uVar12;
      }
      lVar15 = 0;
      *(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) =
           lVar11;
      do {
        *(undefined8 *)
         (*(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) +
         lVar15) = *(undefined8 *)((long)puVar10 + lVar15);
        lVar15 = lVar15 + 8;
      } while (lVar17 * 8 - lVar15 != 0);
      *(int *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 0xc)
           = (int)lVar17;
      return;
    }
    puVar18 = puVar14;
    if ((param_5 & 1) != 0) goto LAB_017aa804;
LAB_017aa810:
    pCStack_a0 = (CommonOperatorBuilder *)*puVar2;
    local_a8 = (Graph *)*puVar1;
    puVar18 = puVar14;
  } while( true );
}

