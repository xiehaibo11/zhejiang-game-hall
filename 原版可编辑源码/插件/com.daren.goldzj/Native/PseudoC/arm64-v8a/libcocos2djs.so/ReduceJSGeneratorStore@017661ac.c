
/* v8::internal::compiler::JSTypedLowering::ReduceJSGeneratorStore(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSGeneratorStore(JSTypedLowering *this,Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  AccessBuilder *this_00;
  AccessBuilder *pAVar8;
  Operator *pOVar9;
  Node *pNVar10;
  long lVar11;
  long lVar12;
  Node *pNVar13;
  SimplifiedOperatorBuilder *this_01;
  Graph *pGVar14;
  ulong uVar15;
  Node *local_1a8;
  long lStack_1a0;
  Node *local_198;
  undefined8 uStack_190;
  Node *local_188;
  undefined8 uStack_180;
  Node *local_178;
  undefined8 uStack_170;
  FieldAccess aFStack_150 [56];
  FieldAccess aFStack_118 [56];
  FieldAccess aFStack_e0 [56];
  FieldAccess aFStack_a8 [56];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,0);
  uVar3 = NodeProperties::GetValueInput(param_1,1);
  uVar4 = NodeProperties::GetValueInput(param_1,2);
  uVar5 = NodeProperties::GetContextInput(param_1);
  uVar6 = NodeProperties::GetEffectInput(param_1,0);
  uVar7 = NodeProperties::GetControlInput(param_1,0);
  this_00 = (AccessBuilder *)GeneratorStoreValueCountOf(*(Operator **)param_1);
  pAVar8 = (AccessBuilder *)AccessBuilder::ForJSGeneratorObjectParametersAndRegisters(this_00);
  pAVar8 = (AccessBuilder *)AccessBuilder::ForJSGeneratorObjectContext(pAVar8);
  pAVar8 = (AccessBuilder *)AccessBuilder::ForJSGeneratorObjectContinuation(pAVar8);
  AccessBuilder::ForJSGeneratorObjectInputOrDebugPos(pAVar8);
  pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar9 = (Operator *)
           SimplifiedOperatorBuilder::LoadField
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],aFStack_a8)
  ;
  local_188 = pNVar2;
  uStack_180 = uVar6;
  local_178 = (Node *)uVar7;
  pNVar10 = (Node *)Graph::NewNode(pGVar14,pOVar9,3,&local_188,false);
  pNVar13 = pNVar10;
  if (0 < (int)this_00) {
    uVar15 = 0;
    do {
      lVar11 = NodeProperties::GetValueInput(param_1,(int)uVar15 + 3);
      lVar12 = JSGraph::OptimizedOutConstant(*(JSGraph **)(this + 0x10));
      if (lVar11 != lVar12) {
        pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
        this_01 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
        AccessBuilder::ForFixedArraySlot((AccessBuilder *)&local_188,uVar15,5);
        pOVar9 = (Operator *)
                 SimplifiedOperatorBuilder::StoreField(this_01,(FieldAccess *)&local_188);
        local_1a8 = pNVar10;
        lStack_1a0 = lVar11;
        local_198 = pNVar13;
        uStack_190 = uVar7;
        pNVar13 = (Node *)Graph::NewNode(pGVar14,pOVar9,4,&local_1a8,false);
      }
      uVar15 = uVar15 + 1;
    } while (((ulong)this_00 & 0xffffffff) != uVar15);
  }
  pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar9 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],aFStack_e0)
  ;
  local_188 = pNVar2;
  uStack_180 = uVar5;
  local_178 = pNVar13;
  uStack_170 = uVar7;
  uVar5 = Graph::NewNode(pGVar14,pOVar9,4,&local_188,false);
  pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar9 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],aFStack_118
                     );
  local_188 = pNVar2;
  uStack_180 = uVar3;
  local_178 = (Node *)uVar5;
  uStack_170 = uVar7;
  uVar3 = Graph::NewNode(pGVar14,pOVar9,4,&local_188,false);
  pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar9 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],aFStack_150
                     );
  local_188 = pNVar2;
  uStack_180 = uVar4;
  local_178 = (Node *)uVar3;
  uStack_170 = uVar7;
  uVar3 = Graph::NewNode(pGVar14,pOVar9,4,&local_188,false);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar3,uVar3,uVar7);
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

