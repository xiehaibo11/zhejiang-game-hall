
/* v8::internal::compiler::JSInliningHeuristic::CreateOrReuseDispatch(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::JSInliningHeuristic::Candidate const&,
   v8::internal::compiler::Node**, v8::internal::compiler::Node**, v8::internal::compiler::Node**,
   int) */

void __thiscall
v8::internal::compiler::JSInliningHeuristic::CreateOrReuseDispatch
          (JSInliningHeuristic *this,Node *param_1,Node *param_2,Candidate *param_3,Node **param_4,
          Node **param_5,Node **param_6,int param_7)

{
  uint uVar1;
  ulong uVar2;
  Node *pNVar3;
  Operator *pOVar4;
  Node *pNVar5;
  undefined8 uVar6;
  SourcePositionTable *this_00;
  Graph *pGVar7;
  Candidate *pCVar8;
  ulong uVar9;
  Node *local_78;
  Node *local_70;
  Node *pNStack_68;
  
  this_00 = *(SourcePositionTable **)(this + 0x88);
  uVar2 = SourcePositionTable::GetSourcePosition(this_00,param_1);
  uVar6 = *(undefined8 *)(this_00 + 0x10);
  if ((uVar2 & 0x7fffffffffff) != 0) {
    *(ulong *)(this_00 + 0x10) = uVar2;
  }
  uVar2 = TryReuseDispatch(this,param_1,param_2,param_4,param_5,param_6,param_7);
  if ((uVar2 & 1) == 0) {
    local_78 = (Node *)NodeProperties::GetControlInput(param_1,0);
    uVar1 = *(uint *)(param_3 + 0xe0);
    uVar2 = (ulong)uVar1;
    if (0 < (int)uVar1) {
      uVar9 = (ulong)(uVar1 - 1);
      pCVar8 = param_3 + 8;
      do {
        if (*(ObjectRef *)(pCVar8 + -8) != (ObjectRef)0x1) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","storage_.is_populated_");
        }
        pNVar3 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x90),(ObjectRef *)pCVar8);
        pNVar5 = local_78;
        if (uVar9 != 0) {
          pGVar7 = (Graph *)**(undefined8 **)(this + 0x90);
          pOVar4 = (Operator *)
                   SimplifiedOperatorBuilder::ReferenceEqual
                             ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x90))[0x2f]);
          local_70 = param_2;
          pNStack_68 = pNVar3;
          pNVar5 = (Node *)Graph::NewNode(pGVar7,pOVar4,2,&local_70,false);
          pGVar7 = (Graph *)**(undefined8 **)(this + 0x90);
          pOVar4 = (Operator *)
                   CommonOperatorBuilder::Branch
                             ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x90))[1],0,1);
          pNStack_68 = local_78;
          local_70 = pNVar5;
          pNVar5 = (Node *)Graph::NewNode(pGVar7,pOVar4,2,&local_70,false);
          pGVar7 = (Graph *)**(undefined8 **)(this + 0x90);
          pOVar4 = (Operator *)
                   CommonOperatorBuilder::IfFalse
                             ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x90))[1]);
          local_70 = pNVar5;
          local_78 = (Node *)Graph::NewNode(pGVar7,pOVar4,1,&local_70,false);
          pGVar7 = (Graph *)**(undefined8 **)(this + 0x90);
          pOVar4 = (Operator *)
                   CommonOperatorBuilder::IfTrue
                             ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x90))[1]);
          local_70 = pNVar5;
          pNVar5 = (Node *)Graph::NewNode(pGVar7,pOVar4,1,&local_70,false);
        }
        *param_4 = pNVar5;
        if ((*(short *)(*(long *)param_1 + 0x10) == 0x301) && (*param_6 == param_6[1])) {
          param_6[1] = pNVar3;
        }
        *param_6 = pNVar3;
        param_6[param_7 + -1] = *param_4;
        pNVar5 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x90),
                                        *(Operator **)param_1,param_7,param_6,false);
        *param_4 = pNVar5;
        *param_5 = pNVar5;
        uVar9 = uVar9 - 1;
        uVar2 = uVar2 - 1;
        pCVar8 = pCVar8 + 0x18;
        param_5 = param_5 + 1;
        param_4 = param_4 + 1;
      } while (uVar2 != 0);
    }
  }
  *(undefined8 *)(this_00 + 0x10) = uVar6;
  return;
}

