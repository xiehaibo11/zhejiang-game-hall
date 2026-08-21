
/* v8::internal::compiler::JSTypedLowering::ReduceJSGeneratorRestoreContinuation(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSGeneratorRestoreContinuation
          (JSTypedLowering *this,Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  undefined8 uVar3;
  AccessBuilder *this_00;
  Operator *pOVar4;
  undefined8 uVar5;
  Graph *pGVar6;
  Node *local_b0;
  undefined8 uStack_a8;
  AccessBuilder *local_a0;
  AccessBuilder *pAStack_98;
  FieldAccess aFStack_90 [56];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,0);
  uVar3 = NodeProperties::GetEffectInput(param_1,0);
  this_00 = (AccessBuilder *)NodeProperties::GetControlInput(param_1,0);
  AccessBuilder::ForJSGeneratorObjectContinuation(this_00);
  pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar4 = (Operator *)
           SimplifiedOperatorBuilder::LoadField
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],aFStack_90)
  ;
  local_b0 = pNVar2;
  uStack_a8 = uVar3;
  local_a0 = this_00;
  uVar3 = Graph::NewNode(pGVar6,pOVar4,3,&local_b0,false);
  uVar5 = JSGraph::Constant(*(JSGraph **)(this + 0x10),-2.0);
  pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar4 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],aFStack_90)
  ;
  local_b0 = pNVar2;
  uStack_a8 = uVar5;
  local_a0 = (AccessBuilder *)uVar3;
  pAStack_98 = this_00;
  uVar5 = Graph::NewNode(pGVar6,pOVar4,4,&local_b0,false);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar3,uVar5,this_00);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

