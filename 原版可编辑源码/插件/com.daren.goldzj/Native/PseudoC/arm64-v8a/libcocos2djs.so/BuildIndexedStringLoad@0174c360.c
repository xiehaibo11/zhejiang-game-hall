
/* v8::internal::compiler::JSNativeContextSpecialization::BuildIndexedStringLoad(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node**,
   v8::internal::compiler::Node**, v8::internal::KeyedAccessLoadMode) */

void __thiscall
v8::internal::compiler::JSNativeContextSpecialization::BuildIndexedStringLoad
          (JSNativeContextSpecialization *this,Node *param_1,Node *param_2,undefined8 param_3,
          undefined8 *param_4,undefined8 *param_5,int param_7)

{
  long lVar1;
  ulong uVar2;
  Operator *pOVar3;
  Node *pNVar4;
  Node *pNVar5;
  undefined8 uVar6;
  Node *pNVar7;
  Node *pNVar8;
  undefined8 uVar9;
  int iVar10;
  Graph *pGVar11;
  Node *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  Node *pNStack_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_98 = param_2;
  if ((param_7 == 1) &&
     (uVar2 = CompilationDependencies::DependOnNoElementsProtector
                        (*(CompilationDependencies **)(this + 0x38)), (uVar2 & 1) != 0)) {
    pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
    local_78 = 0;
    local_70 = 0xffffffff;
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::CheckBounds
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                        (FeedbackSource *)&local_78);
    uStack_90 = JSGraph::Constant(*(JSGraph **)(this + 0x10),268435440.0);
    pNStack_80 = (Node *)*param_5;
    local_88 = *param_4;
    pNVar4 = (Node *)Graph::NewNode(pGVar11,pOVar3,4,&local_98,false);
    *param_4 = pNVar4;
    pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::NumberLessThan
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_98 = pNVar4;
    uStack_90 = param_3;
    pNVar5 = (Node *)Graph::NewNode(pGVar11,pOVar3,2,&local_98,false);
    pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar3 = (Operator *)
             CommonOperatorBuilder::Branch
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],1,0);
    uStack_90 = *param_5;
    local_98 = pNVar5;
    pNVar5 = (Node *)Graph::NewNode(pGVar11,pOVar3,2,&local_98,false);
    pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::PoisonIndex
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_98 = pNVar4;
    uVar6 = Graph::NewNode(pGVar11,pOVar3,1,&local_98,false);
    pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar3 = (Operator *)
             CommonOperatorBuilder::IfTrue
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_98 = pNVar5;
    pNVar4 = (Node *)Graph::NewNode(pGVar11,pOVar3,1,&local_98,false);
    pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::StringCharCodeAt
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_88 = *param_4;
    local_98 = param_1;
    uStack_90 = uVar6;
    pNStack_80 = pNVar4;
    pNVar7 = (Node *)Graph::NewNode(pGVar11,pOVar3,4,&local_98,false);
    pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::StringFromSingleCharCode
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_98 = pNVar7;
    pNVar8 = (Node *)Graph::NewNode(pGVar11,pOVar3,1,&local_98,false);
    pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar3 = (Operator *)
             CommonOperatorBuilder::IfFalse
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_98 = pNVar5;
    uVar6 = Graph::NewNode(pGVar11,pOVar3,1,&local_98,false);
    uVar9 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar3 = (Operator *)
             CommonOperatorBuilder::Merge
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
    local_98 = pNVar4;
    uStack_90 = uVar6;
    uVar6 = Graph::NewNode(pGVar11,pOVar3,2,&local_98,false);
    *param_5 = uVar6;
    pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar3 = (Operator *)
             CommonOperatorBuilder::EffectPhi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
    local_88 = *param_5;
    uStack_90 = *param_4;
    local_98 = pNVar7;
    uVar6 = Graph::NewNode(pGVar11,pOVar3,3,&local_98,false);
    *param_4 = uVar6;
    pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar3 = (Operator *)
             CommonOperatorBuilder::Phi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
    local_88 = *param_5;
    iVar10 = 3;
    local_98 = pNVar8;
    uStack_90 = uVar9;
  }
  else {
    pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
    local_78 = 0;
    local_70 = 0xffffffff;
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::CheckBounds
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                        (FeedbackSource *)&local_78);
    pNStack_80 = (Node *)*param_5;
    local_88 = *param_4;
    uStack_90 = param_3;
    pNVar4 = (Node *)Graph::NewNode(pGVar11,pOVar3,4,&local_98,false);
    *param_4 = pNVar4;
    pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::PoisonIndex
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_98 = pNVar4;
    uVar6 = Graph::NewNode(pGVar11,pOVar3,1,&local_98,false);
    pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::StringCharCodeAt
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    pNStack_80 = (Node *)*param_5;
    local_88 = *param_4;
    local_98 = param_1;
    uStack_90 = uVar6;
    pNVar4 = (Node *)Graph::NewNode(pGVar11,pOVar3,4,&local_98,false);
    *param_4 = pNVar4;
    pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::StringFromSingleCharCode
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    iVar10 = 1;
    local_98 = pNVar4;
  }
  Graph::NewNode(pGVar11,pOVar3,iVar10,&local_98,false);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

