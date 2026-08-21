
/* v8::internal::compiler::JSCallReducer::ReduceStringPrototypeStartsWith(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceStringPrototypeStartsWith
          (JSCallReducer *this,Node *param_1)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  Node *pNVar5;
  Node *pNVar6;
  ulong uVar7;
  Operator *pOVar8;
  Node *pNVar9;
  Node *pNVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  JSGraph *this_00;
  Graph *pGVar14;
  undefined1 local_a0 [16];
  Node *local_90;
  Node *pNStack_88;
  Node *local_80;
  Node *pNStack_78;
  Node *local_70;
  Node *pNStack_68;
  
  lVar3 = CallParametersOf(*(Operator **)param_1);
  if ((*(byte *)(lVar3 + 3) >> 4 & 1) == 0) {
    if (*(int *)(*(long *)param_1 + 0x14) < 3) {
      uVar4 = JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
      plVar13 = *(long **)(this + 8);
      lVar3 = *plVar13;
      uVar11 = 0;
      uVar12 = 0;
LAB_016eff44:
      (**(code **)(lVar3 + 0x20))(plVar13,param_1,uVar4,uVar11,uVar12);
      return uVar4;
    }
    pNVar5 = (Node *)NodeProperties::GetValueInput(param_1,1);
    plVar13 = (long *)NodeProperties::GetValueInput(param_1,2);
    if (*(int *)(*(long *)param_1 + 0x14) < 4) {
      pNVar6 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
    }
    else {
      pNVar6 = (Node *)NodeProperties::GetValueInput(param_1,3);
    }
    uVar4 = NodeProperties::GetEffectInput(param_1,0);
    uVar12 = NodeProperties::GetControlInput(param_1,0);
    if (*(short *)(*plVar13 + 0x10) == 0x1e) {
      ObjectRef::ObjectRef
                ((ObjectRef *)&local_80,*(undefined8 *)(this + 0x18),
                 *(undefined8 *)(*plVar13 + 0x30),0);
      uVar7 = ObjectRef::IsHeapObject((ObjectRef *)&local_80);
      if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsHeapObject()");
      }
      local_90 = local_80;
      pNStack_88 = pNStack_78;
      uVar7 = ObjectRef::IsString((ObjectRef *)&local_90);
      if ((uVar7 & 1) != 0) {
        local_a0 = ObjectRef::AsString((ObjectRef *)&local_90);
        iVar2 = StringRef::length((StringRef *)local_a0);
        if (iVar2 == 1) {
          pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar8 = (Operator *)
                   SimplifiedOperatorBuilder::CheckString
                             ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                              (FeedbackSource *)(lVar3 + 8));
          local_80 = pNVar5;
          pNStack_78 = (Node *)uVar4;
          local_70 = (Node *)uVar12;
          pNVar5 = (Node *)Graph::NewNode(pGVar14,pOVar8,3,&local_80,false);
          pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar8 = (Operator *)
                   SimplifiedOperatorBuilder::CheckSmi
                             ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                              (FeedbackSource *)(lVar3 + 8));
          local_80 = pNVar6;
          pNStack_78 = pNVar5;
          local_70 = (Node *)uVar12;
          pNVar6 = (Node *)Graph::NewNode(pGVar14,pOVar8,3,&local_80,false);
          pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar8 = (Operator *)
                   SimplifiedOperatorBuilder::StringLength
                             ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
          local_80 = pNVar5;
          uVar4 = Graph::NewNode(pGVar14,pOVar8,1,&local_80,false);
          pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar8 = (Operator *)
                   SimplifiedOperatorBuilder::NumberMax
                             ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
          pNStack_78 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
          local_80 = pNVar6;
          pNVar9 = (Node *)Graph::NewNode(pGVar14,pOVar8,2,&local_80,false);
          pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar8 = (Operator *)
                   SimplifiedOperatorBuilder::NumberLessThan
                             ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
          local_80 = pNVar9;
          pNStack_78 = (Node *)uVar4;
          pNVar10 = (Node *)Graph::NewNode(pGVar14,pOVar8,2,&local_80,false);
          pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar8 = (Operator *)
                   CommonOperatorBuilder::Branch
                             ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],0,1);
          local_80 = pNVar10;
          pNStack_78 = (Node *)uVar12;
          pNVar10 = (Node *)Graph::NewNode(pGVar14,pOVar8,2,&local_80,false);
          pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar8 = (Operator *)
                   CommonOperatorBuilder::IfFalse
                             ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
          local_80 = pNVar10;
          uVar4 = Graph::NewNode(pGVar14,pOVar8,1,&local_80,false);
          uVar11 = JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
          pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar8 = (Operator *)
                   CommonOperatorBuilder::IfTrue
                             ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
          local_80 = pNVar10;
          pNVar10 = (Node *)Graph::NewNode(pGVar14,pOVar8,1,&local_80,false);
          pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar8 = (Operator *)
                   SimplifiedOperatorBuilder::PoisonIndex
                             ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
          local_80 = pNVar9;
          uVar12 = Graph::NewNode(pGVar14,pOVar8,1,&local_80,false);
          pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar8 = (Operator *)
                   SimplifiedOperatorBuilder::StringCharCodeAt
                             ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
          local_80 = pNVar5;
          pNStack_78 = (Node *)uVar12;
          local_70 = pNVar6;
          pNStack_68 = pNVar10;
          pNVar5 = (Node *)Graph::NewNode(pGVar14,pOVar8,4,&local_80,false);
          this_00 = *(JSGraph **)(this + 0x10);
          uVar1 = StringRef::GetFirstChar((StringRef *)local_a0);
          uVar12 = JSGraph::Constant(this_00,(double)uVar1);
          pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar8 = (Operator *)
                   SimplifiedOperatorBuilder::NumberEqual
                             ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
          local_80 = pNVar5;
          pNStack_78 = (Node *)uVar12;
          pNVar9 = (Node *)Graph::NewNode(pGVar14,pOVar8,2,&local_80,false);
          pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar8 = (Operator *)
                   CommonOperatorBuilder::Merge
                             ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
          local_80 = pNVar10;
          pNStack_78 = (Node *)uVar4;
          uVar12 = Graph::NewNode(pGVar14,pOVar8,2,&local_80,false);
          pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar8 = (Operator *)
                   CommonOperatorBuilder::Phi
                             ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
          local_80 = pNVar9;
          pNStack_78 = (Node *)uVar11;
          local_70 = (Node *)uVar12;
          uVar4 = Graph::NewNode(pGVar14,pOVar8,3,&local_80,false);
          pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar8 = (Operator *)
                   CommonOperatorBuilder::EffectPhi
                             ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
          local_80 = pNVar5;
          pNStack_78 = pNVar6;
          local_70 = (Node *)uVar12;
          uVar11 = Graph::NewNode(pGVar14,pOVar8,3,&local_80,false);
          plVar13 = *(long **)(this + 8);
          lVar3 = *plVar13;
          goto LAB_016eff44;
        }
      }
    }
  }
  return 0;
}

