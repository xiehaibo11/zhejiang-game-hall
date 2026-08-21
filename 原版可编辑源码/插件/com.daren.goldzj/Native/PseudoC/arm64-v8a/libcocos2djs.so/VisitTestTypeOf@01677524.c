
/* v8::internal::compiler::BytecodeGraphBuilder::VisitTestTypeOf() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitTestTypeOf(BytecodeGraphBuilder *this)

{
  uchar uVar1;
  ulong uVar2;
  Operator *pOVar3;
  Operator *pOVar4;
  Node *pNVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  Graph *this_00;
  Graph *pGVar9;
  Node *pNVar10;
  Node *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar8 = *(long *)(this + 0xa8);
  if ((ulong)(*(long *)(lVar8 + 0x30) - *(long *)(lVar8 + 0x28) >> 3) <=
      (ulong)(long)*(int *)(lVar8 + 0x5c)) goto LAB_0167786c;
  pNVar10 = *(Node **)(*(long *)(lVar8 + 0x28) + (long)*(int *)(lVar8 + 0x5c) * 8);
  uVar1 = interpreter::BytecodeArrayAccessor::GetFlagOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  uVar2 = interpreter::TestTypeOfFlags::Decode(uVar1);
  switch(uVar2 & 0xff) {
  case 0:
    pOVar4 = (Operator *)
             SimplifiedOperatorBuilder::ObjectIsNumber
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    break;
  case 1:
    pOVar4 = (Operator *)
             SimplifiedOperatorBuilder::ObjectIsString
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    break;
  case 2:
    pOVar4 = (Operator *)
             SimplifiedOperatorBuilder::ObjectIsSymbol
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    break;
  case 3:
    pOVar4 = (Operator *)
             CommonOperatorBuilder::Select
                       (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),8,0);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::ReferenceEqual
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    uStack_60 = JSGraph::TrueConstant(*(JSGraph **)(this + 0x10));
    local_68 = pNVar10;
    pNVar5 = (Node *)MakeNode(this,pOVar3,2,&local_68,false);
    uVar6 = JSGraph::TrueConstant(*(JSGraph **)(this + 0x10));
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::ReferenceEqual
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    uStack_60 = JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
    local_68 = pNVar10;
    local_58 = MakeNode(this,pOVar3,2,&local_68,false);
    iVar7 = 3;
    local_68 = pNVar5;
    uStack_60 = uVar6;
    goto LAB_016776a8;
  case 4:
    pOVar4 = (Operator *)
             SimplifiedOperatorBuilder::ObjectIsBigInt
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    break;
  case 5:
    this_00 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar3 = (Operator *)
             CommonOperatorBuilder::Select
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,0);
    pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar4 = (Operator *)
             SimplifiedOperatorBuilder::ReferenceEqual
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    uStack_60 = JSGraph::NullConstant(*(JSGraph **)(this + 0x10));
    local_68 = pNVar10;
    pNVar5 = (Node *)Graph::NewNode(pGVar9,pOVar4,2,&local_68,false);
    uVar6 = JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
    pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar4 = (Operator *)
             SimplifiedOperatorBuilder::ObjectIsUndetectable
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    iVar7 = 1;
    goto LAB_016777e4;
  case 6:
    this_00 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::ObjectIsDetectableCallable
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    iVar7 = 1;
    local_68 = pNVar10;
    goto LAB_0167782c;
  case 7:
    this_00 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar3 = (Operator *)
             CommonOperatorBuilder::Select
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,0);
    pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar4 = (Operator *)
             SimplifiedOperatorBuilder::ObjectIsNonCallable
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_68 = pNVar10;
    pNVar5 = (Node *)Graph::NewNode(pGVar9,pOVar4,1,&local_68,false);
    uVar6 = JSGraph::TrueConstant(*(JSGraph **)(this + 0x10));
    pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar4 = (Operator *)
             SimplifiedOperatorBuilder::ReferenceEqual
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    uStack_60 = JSGraph::NullConstant(*(JSGraph **)(this + 0x10));
    iVar7 = 2;
LAB_016777e4:
    local_68 = pNVar10;
    local_58 = Graph::NewNode(pGVar9,pOVar4,iVar7,&local_68,false);
    iVar7 = 3;
    local_68 = pNVar5;
    uStack_60 = uVar6;
LAB_0167782c:
    uVar2 = Graph::NewNode(this_00,pOVar3,iVar7,&local_68,false);
    goto switchD_01677594_default;
  case 8:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  default:
    goto switchD_01677594_default;
  }
  iVar7 = 1;
  local_68 = pNVar10;
LAB_016776a8:
  uVar2 = MakeNode(this,pOVar4,iVar7,&local_68,false);
switchD_01677594_default:
  lVar8 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar8 + 0x5c) <
      (ulong)(*(long *)(lVar8 + 0x30) - *(long *)(lVar8 + 0x28) >> 3)) {
    *(ulong *)(*(long *)(lVar8 + 0x28) + (long)*(int *)(lVar8 + 0x5c) * 8) = uVar2;
    return;
  }
LAB_0167786c:
                    /* WARNING: Subroutine does not return */
  abort();
}

