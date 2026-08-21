
/* v8::internal::compiler::SimdScalarLowering::LowerShiftOp(v8::internal::compiler::Node*,
   v8::internal::compiler::SimdScalarLowering::SimdType) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::LowerShiftOp
          (SimdScalarLowering *this,long *param_1,uint param_3)

{
  Operator *pOVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  Zone *pZVar4;
  undefined8 uVar5;
  Operator *pOVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  MachineGraph *this_00;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  Node *pNVar15;
  Graph *pGVar16;
  Graph *pGVar17;
  Node *local_70;
  undefined8 uStack_68;
  
  pGVar16 = (Graph *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Int32Constant
                     ((CommonOperatorBuilder *)(*(undefined8 **)this)[1],*(int *)(*param_1 + 0x2c));
  local_70 = (Node *)0x0;
  uVar2 = Graph::NewNode(pGVar16,pOVar1,0,&local_70,false);
  plVar11 = param_1 + 4;
  if ((~*(uint *)((long)param_1 + 0x14) & 0xf000000) == 0) {
    plVar11 = (long *)(*plVar11 + 0x10);
  }
  puVar3 = (undefined8 *)GetReplacementsWithType(this,*plVar11,param_3);
  if ((param_3 & 0xfd) == 0) {
    lVar13 = 2;
  }
  else if ((param_3 & 0xff | 2) == 3) {
    lVar13 = 4;
  }
  else if ((param_3 & 0xff) == 4) {
    lVar13 = 8;
  }
  else {
    if ((param_3 & 0xff) != 5) {
switchD_017ac888_caseD_245:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar13 = 0x10;
  }
  uVar10 = (ulong)(uint)((int)lVar13 << 3);
  pZVar4 = *(Zone **)**(undefined8 **)this;
  puVar7 = *(undefined8 **)(pZVar4 + 0x10);
  lVar8 = lVar13;
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar7) < uVar10) {
    puVar7 = (undefined8 *)Zone::NewExpand(pZVar4,uVar10);
    puVar14 = puVar7;
  }
  else {
    *(ulong *)(pZVar4 + 0x10) = (long)puVar7 + uVar10;
    puVar14 = puVar7;
  }
  do {
    pNVar15 = (Node *)*puVar3;
    *puVar7 = pNVar15;
    switch(*(undefined2 *)(*param_1 + 0x10)) {
    case 0x243:
      pGVar16 = (Graph *)**(undefined8 **)this;
      pOVar6 = (Operator *)
               MachineOperatorBuilder::Word32Shl
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      goto LAB_017aca08;
    case 0x244:
    case 0x263:
    case 0x286:
      pGVar16 = (Graph *)**(undefined8 **)this;
      pOVar6 = (Operator *)
               MachineOperatorBuilder::Word32Sar
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      local_70 = (Node *)*puVar7;
      uStack_68 = uVar2;
      break;
    default:
      goto switchD_017ac888_caseD_245;
    case 0x254:
      goto switchD_017ac888_caseD_254;
    case 0x262:
      pGVar16 = (Graph *)**(undefined8 **)this;
      pOVar1 = (Operator *)
               MachineOperatorBuilder::Word32Shl
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      local_70 = (Node *)*puVar7;
      uStack_68 = uVar2;
      pNVar15 = (Node *)Graph::NewNode(pGVar16,pOVar1,2,&local_70,false);
      *puVar7 = pNVar15;
      pGVar16 = (Graph *)**(undefined8 **)this;
      pOVar6 = (Operator *)
               MachineOperatorBuilder::Word32Sar
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      pGVar17 = (Graph *)**(undefined8 **)this;
      pOVar1 = (Operator *)
               MachineOperatorBuilder::Word32Shl
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)this,0x10);
      local_70 = pNVar15;
      pNVar15 = (Node *)Graph::NewNode(pGVar17,pOVar1,2,&local_70,false);
      uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)this,0x10);
      local_70 = pNVar15;
      break;
    case 0x275:
      pGVar16 = (Graph *)**(undefined8 **)this;
      pOVar1 = (Operator *)
               MachineOperatorBuilder::Word32And
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      this_00 = *(MachineGraph **)this;
      iVar9 = 0xffff;
      goto LAB_017ac9bc;
    case 0x285:
      pGVar16 = (Graph *)**(undefined8 **)this;
      pOVar1 = (Operator *)
               MachineOperatorBuilder::Word32Shl
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      local_70 = (Node *)*puVar7;
      uStack_68 = uVar2;
      pNVar15 = (Node *)Graph::NewNode(pGVar16,pOVar1,2,&local_70,false);
      *puVar7 = pNVar15;
      pGVar16 = (Graph *)**(undefined8 **)this;
      pOVar6 = (Operator *)
               MachineOperatorBuilder::Word32Sar
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      pGVar17 = (Graph *)**(undefined8 **)this;
      pOVar1 = (Operator *)
               MachineOperatorBuilder::Word32Shl
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)this,0x18);
      local_70 = pNVar15;
      pNVar15 = (Node *)Graph::NewNode(pGVar17,pOVar1,2,&local_70,false);
      uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)this,0x18);
      local_70 = pNVar15;
      break;
    case 0x297:
      pGVar16 = (Graph *)**(undefined8 **)this;
      pOVar1 = (Operator *)
               MachineOperatorBuilder::Word32And
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      this_00 = *(MachineGraph **)this;
      iVar9 = 0xff;
LAB_017ac9bc:
      uStack_68 = MachineGraph::Int32Constant(this_00,iVar9);
      local_70 = pNVar15;
      uVar5 = Graph::NewNode(pGVar16,pOVar1,2,&local_70,false);
      *puVar7 = uVar5;
switchD_017ac888_caseD_254:
      pGVar16 = (Graph *)**(undefined8 **)this;
      pOVar6 = (Operator *)
               MachineOperatorBuilder::Word32Shr
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
LAB_017aca08:
      local_70 = (Node *)*puVar7;
      uStack_68 = uVar2;
    }
    uVar5 = Graph::NewNode(pGVar16,pOVar6,2,&local_70,false);
    *puVar7 = uVar5;
    lVar8 = lVar8 + -1;
    puVar3 = puVar3 + 1;
    puVar7 = puVar7 + 1;
    if (lVar8 == 0) {
      pZVar4 = *(Zone **)**(undefined8 **)this;
      lVar8 = *(long *)(pZVar4 + 0x10);
      if ((ulong)(*(long *)(pZVar4 + 0x18) - lVar8) < uVar10) {
        lVar8 = Zone::NewExpand(pZVar4,uVar10);
      }
      else {
        *(ulong *)(pZVar4 + 0x10) = lVar8 + uVar10;
      }
      lVar12 = 0;
      *(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)((long)param_1 + 0x14) & 0xffffff) * 0x10)
           = lVar8;
      do {
        *(undefined8 *)
         (*(long *)(*(long *)(this + 0x60) +
                   ((ulong)*(uint *)((long)param_1 + 0x14) & 0xffffff) * 0x10) + lVar12) =
             *(undefined8 *)((long)puVar14 + lVar12);
        lVar12 = lVar12 + 8;
      } while (lVar13 * 8 - lVar12 != 0);
      *(int *)(*(long *)(this + 0x60) + ((ulong)*(uint *)((long)param_1 + 0x14) & 0xffffff) * 0x10 +
              0xc) = (int)lVar13;
      return;
    }
  } while( true );
}

