
/* v8::internal::compiler::JSCallReducer::ReducePromiseResolveTrampoline(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReducePromiseResolveTrampoline
          (JSCallReducer *this,Node *param_1)

{
  Node *pNVar1;
  long lVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *this_00;
  Node *this_01;
  Node *this_02;
  Node *this_03;
  ulong uVar5;
  Node *this_04;
  Node *pNVar6;
  Operator *pOVar7;
  Use *pUVar8;
  MapInference aMStack_98 [48];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pNVar3 = (Node *)NodeProperties::GetValueInput(param_1,1);
  if (*(int *)(*(long *)param_1 + 0x14) < 3) {
    pNVar4 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  }
  else {
    pNVar4 = (Node *)NodeProperties::GetValueInput(param_1,2);
  }
  this_00 = (Node *)NodeProperties::GetContextInput(param_1);
  this_01 = (Node *)NodeProperties::GetFrameStateInput(param_1);
  this_02 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  this_03 = (Node *)NodeProperties::GetControlInput(param_1,0);
  MapInference::MapInference(aMStack_98,*(JSHeapBroker **)(this + 0x18),pNVar3,this_02);
  uVar5 = MapInference::HaveMaps(aMStack_98);
  if (((uVar5 & 1) == 0) ||
     (uVar5 = MapInference::AllOfInstanceTypesAreJSReceiver(aMStack_98), (uVar5 & 1) == 0)) {
    param_1 = (Node *)0x0;
  }
  else {
    pNVar1 = param_1 + 0x20;
    pNVar6 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    this_04 = *(Node **)pNVar6;
    if (this_04 != pNVar3) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar8 = (Use *)(*(long *)pNVar1 + -0x18);
      }
      else {
        pUVar8 = (Use *)(param_1 + -0x18);
      }
      if (this_04 != (Node *)0x0) {
        Node::RemoveUse(this_04,pUVar8);
      }
      *(Node **)pNVar6 = pNVar3;
      if (pNVar3 != (Node *)0x0) {
        Node::AppendUse(pNVar3,pUVar8);
      }
    }
    pNVar3 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar3 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar6 = *(Node **)(pNVar3 + 8);
    if (pNVar6 != pNVar4) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar8 = (Use *)(*(long *)pNVar1 + -0x30);
      }
      else {
        pUVar8 = (Use *)(param_1 + -0x30);
      }
      if (pNVar6 != (Node *)0x0) {
        Node::RemoveUse(pNVar6,pUVar8);
      }
      *(Node **)(pNVar3 + 8) = pNVar4;
      if (pNVar4 != (Node *)0x0) {
        Node::AppendUse(pNVar4,pUVar8);
      }
    }
    pNVar3 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar3 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar4 = *(Node **)(pNVar3 + 0x10);
    if (pNVar4 != this_00) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar8 = (Use *)(*(long *)pNVar1 + -0x48);
      }
      else {
        pUVar8 = (Use *)(param_1 + -0x48);
      }
      if (pNVar4 != (Node *)0x0) {
        Node::RemoveUse(pNVar4,pUVar8);
      }
      *(Node **)(pNVar3 + 0x10) = this_00;
      if (this_00 != (Node *)0x0) {
        Node::AppendUse(this_00,pUVar8);
      }
    }
    pNVar3 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar3 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar4 = *(Node **)(pNVar3 + 0x18);
    if (pNVar4 != this_01) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar8 = (Use *)(*(long *)pNVar1 + -0x60);
      }
      else {
        pUVar8 = (Use *)(param_1 + -0x60);
      }
      if (pNVar4 != (Node *)0x0) {
        Node::RemoveUse(pNVar4,pUVar8);
      }
      *(Node **)(pNVar3 + 0x18) = this_01;
      if (this_01 != (Node *)0x0) {
        Node::AppendUse(this_01,pUVar8);
      }
    }
    pNVar3 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar3 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar4 = *(Node **)(pNVar3 + 0x20);
    if (pNVar4 != this_02) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar8 = (Use *)(*(long *)pNVar1 + -0x78);
      }
      else {
        pUVar8 = (Use *)(param_1 + -0x78);
      }
      if (pNVar4 != (Node *)0x0) {
        Node::RemoveUse(pNVar4,pUVar8);
      }
      *(Node **)(pNVar3 + 0x20) = this_02;
      if (this_02 != (Node *)0x0) {
        Node::AppendUse(this_02,pUVar8);
      }
    }
    pNVar3 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar3 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar4 = *(Node **)(pNVar3 + 0x28);
    if (pNVar4 != this_03) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar8 = (Use *)(*(long *)pNVar1 + -0x90);
      }
      else {
        pUVar8 = (Use *)(param_1 + -0x90);
      }
      if (pNVar4 != (Node *)0x0) {
        Node::RemoveUse(pNVar4,pUVar8);
      }
      *(Node **)(pNVar3 + 0x28) = this_03;
      if (this_03 != (Node *)0x0) {
        Node::AppendUse(this_03,pUVar8);
      }
    }
    Node::TrimInputCount(param_1,6);
    pOVar7 = (Operator *)
             JSOperatorBuilder::PromiseResolve
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    NodeProperties::ChangeOp(param_1,pOVar7);
  }
  MapInference::~MapInference(aMStack_98);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

