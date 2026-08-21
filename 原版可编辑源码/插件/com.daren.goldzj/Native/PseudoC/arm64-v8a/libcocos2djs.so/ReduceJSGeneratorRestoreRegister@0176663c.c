
/* v8::internal::compiler::JSTypedLowering::ReduceJSGeneratorRestoreRegister(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSGeneratorRestoreRegister
          (JSTypedLowering *this,Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  AccessBuilder *this_00;
  Operator *pOVar5;
  undefined8 uVar6;
  Graph *pGVar7;
  Node *local_e8;
  Node *pNStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  AccessBuilder aAStack_c8 [56];
  FieldAccess aFStack_90 [56];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,0);
  uVar3 = NodeProperties::GetEffectInput(param_1,0);
  uVar4 = NodeProperties::GetControlInput(param_1,0);
  this_00 = (AccessBuilder *)RestoreRegisterIndexOf(*(Operator **)param_1);
  AccessBuilder::ForJSGeneratorObjectParametersAndRegisters(this_00);
  AccessBuilder::ForFixedArraySlot(aAStack_c8,(long)(int)this_00,5);
  pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar5 = (Operator *)
           SimplifiedOperatorBuilder::LoadField
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],aFStack_90)
  ;
  local_e8 = pNVar2;
  pNStack_e0 = (Node *)uVar3;
  local_d8 = uVar4;
  pNVar2 = (Node *)Graph::NewNode(pGVar7,pOVar5,3,&local_e8,false);
  pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar5 = (Operator *)
           SimplifiedOperatorBuilder::LoadField
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                      (FieldAccess *)aAStack_c8);
  local_e8 = pNVar2;
  pNStack_e0 = pNVar2;
  local_d8 = uVar4;
  uVar3 = Graph::NewNode(pGVar7,pOVar5,3,&local_e8,false);
  uVar6 = JSGraph::StaleRegisterConstant(*(JSGraph **)(this + 0x10));
  pGVar7 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar5 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                      (FieldAccess *)aAStack_c8);
  local_e8 = pNVar2;
  pNStack_e0 = (Node *)uVar6;
  local_d8 = uVar3;
  uStack_d0 = uVar4;
  uVar6 = Graph::NewNode(pGVar7,pOVar5,4,&local_e8,false);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar3,uVar6,uVar4);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

