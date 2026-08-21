
/* v8::internal::compiler::JSCallReducer::ReduceObjectPrototypeIsPrototypeOf(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceObjectPrototypeIsPrototypeOf
          (JSCallReducer *this,Node *param_1)

{
  int iVar1;
  long lVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *pNVar5;
  ulong uVar6;
  Operator *pOVar7;
  MapInference aMStack_78 [48];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pNVar3 = (Node *)NodeProperties::GetValueInput(param_1,1);
  if (*(int *)(*(long *)param_1 + 0x14) < 3) {
    pNVar4 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  }
  else {
    pNVar4 = (Node *)NodeProperties::GetValueInput(param_1,2);
  }
  pNVar5 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  MapInference::MapInference(aMStack_78,*(JSHeapBroker **)(this + 0x18),pNVar3,pNVar5);
  uVar6 = MapInference::HaveMaps(aMStack_78);
  if (((uVar6 & 1) == 0) ||
     (uVar6 = MapInference::AllOfInstanceTypesAreJSReceiver(aMStack_78), (uVar6 & 1) == 0)) {
    param_1 = (Node *)0x0;
  }
  else {
    NodeProperties::ReplaceValueInput(param_1,pNVar4,0);
    NodeProperties::ReplaceValueInput(param_1,pNVar3,1);
    iVar1 = *(int *)(*(long *)param_1 + 0x14);
    while (2 < iVar1) {
      iVar1 = iVar1 + -1;
      Node::RemoveInput(param_1,iVar1);
    }
    pOVar7 = (Operator *)
             JSOperatorBuilder::HasInPrototypeChain
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    NodeProperties::ChangeOp(param_1,pOVar7);
  }
  MapInference::~MapInference(aMStack_78);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}

