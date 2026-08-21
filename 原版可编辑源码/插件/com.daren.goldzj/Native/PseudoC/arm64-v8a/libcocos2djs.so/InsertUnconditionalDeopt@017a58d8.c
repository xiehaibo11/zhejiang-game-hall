
/* v8::internal::compiler::RepresentationChanger::InsertUnconditionalDeopt(v8::internal::compiler::Node*,
   v8::internal::DeoptimizeReason) */

Node * __thiscall
v8::internal::compiler::RepresentationChanger::InsertUnconditionalDeopt
          (RepresentationChanger *this,Node *param_1,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Operator *pOVar4;
  Node *pNVar5;
  Graph *pGVar6;
  Node *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = NodeProperties::GetEffectInput(param_1,0);
  uVar3 = NodeProperties::GetControlInput(param_1,0);
  pGVar6 = (Graph *)**(undefined8 **)(this + 8);
  local_68 = 0;
  local_60 = 0xffffffff;
  pOVar4 = (Operator *)
           SimplifiedOperatorBuilder::CheckIf
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 8))[0x2f],param_3,
                      &local_68);
  local_80 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
  uStack_78 = uVar2;
  local_70 = uVar3;
  pNVar5 = (Node *)Graph::NewNode(pGVar6,pOVar4,3,&local_80,false);
  pGVar6 = (Graph *)**(undefined8 **)(this + 8);
  pOVar4 = (Operator *)
           CommonOperatorBuilder::Unreachable
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1]);
  local_80 = pNVar5;
  uStack_78 = uVar3;
  pNVar5 = (Node *)Graph::NewNode(pGVar6,pOVar4,2,&local_80,false);
  NodeProperties::ReplaceEffectInput(param_1,pNVar5,0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return pNVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

