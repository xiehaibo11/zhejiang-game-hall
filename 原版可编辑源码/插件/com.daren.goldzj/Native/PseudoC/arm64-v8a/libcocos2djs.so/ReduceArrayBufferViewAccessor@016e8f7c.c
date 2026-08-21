
/* v8::internal::compiler::JSCallReducer::ReduceArrayBufferViewAccessor(v8::internal::compiler::Node*,
   v8::internal::InstanceType, v8::internal::compiler::FieldAccess const&) */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceArrayBufferViewAccessor
          (JSCallReducer *this,Node *param_1,undefined4 param_3,FieldAccess *param_4)

{
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 uVar4;
  ulong uVar5;
  Operator *pOVar6;
  AccessBuilder *pAVar7;
  Node *pNVar8;
  Operator *pOVar9;
  Graph *pGVar10;
  SimplifiedOperatorBuilder *pSVar11;
  Graph *this_00;
  Node *local_e8;
  Node *pNStack_e0;
  undefined8 local_d8;
  Node *local_d0;
  Node *pNStack_c8;
  undefined8 local_c0;
  MapInference aMStack_98 [48];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,1);
  pNVar3 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  uVar4 = NodeProperties::GetControlInput(param_1,0);
  MapInference::MapInference(aMStack_98,*(JSHeapBroker **)(this + 0x18),pNVar2,pNVar3);
  uVar5 = MapInference::HaveMaps(aMStack_98);
  if (((uVar5 & 1) == 0) ||
     (uVar5 = MapInference::AllOfInstanceTypesAre(aMStack_98,param_3), (uVar5 & 1) == 0)) {
    pNVar3 = (Node *)0x0;
  }
  else {
    pGVar10 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::LoadField
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],param_4);
    local_d0 = pNVar2;
    pNStack_c8 = pNVar3;
    local_c0 = uVar4;
    pNVar3 = (Node *)Graph::NewNode(pGVar10,pOVar6,3,&local_d0,false);
    pAVar7 = (AccessBuilder *)
             CompilationDependencies::DependOnArrayBufferDetachingProtector
                       (*(CompilationDependencies **)(this + 0x30));
    pNVar8 = pNVar3;
    if (((ulong)pAVar7 & 1) == 0) {
      pGVar10 = (Graph *)**(undefined8 **)(this + 0x10);
      pSVar11 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
      AccessBuilder::ForJSArrayBufferViewBuffer(pAVar7);
      pOVar6 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar11,(FieldAccess *)&local_d0);
      local_e8 = pNVar2;
      pNStack_e0 = pNVar3;
      local_d8 = uVar4;
      pAVar7 = (AccessBuilder *)Graph::NewNode(pGVar10,pOVar6,3,&local_e8,false);
      pGVar10 = (Graph *)**(undefined8 **)(this + 0x10);
      pSVar11 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
      AccessBuilder::ForJSArrayBufferBitField(pAVar7);
      pOVar6 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar11,(FieldAccess *)&local_d0);
      local_e8 = (Node *)pAVar7;
      pNStack_e0 = (Node *)pAVar7;
      local_d8 = uVar4;
      pNVar8 = (Node *)Graph::NewNode(pGVar10,pOVar6,3,&local_e8,false);
      pGVar10 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar6 = (Operator *)
               SimplifiedOperatorBuilder::NumberEqual
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      this_00 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar9 = (Operator *)
               SimplifiedOperatorBuilder::NumberBitwiseAnd
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      pNStack_c8 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),4.0);
      local_d0 = pNVar8;
      pNVar2 = (Node *)Graph::NewNode(this_00,pOVar9,2,&local_d0,false);
      pNStack_c8 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
      local_d0 = pNVar2;
      pNVar2 = (Node *)Graph::NewNode(pGVar10,pOVar6,2,&local_d0,false);
      pGVar10 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar6 = (Operator *)
               CommonOperatorBuilder::Select
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,1);
      local_c0 = JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
      local_d0 = pNVar2;
      pNStack_c8 = pNVar3;
      pNVar3 = (Node *)Graph::NewNode(pGVar10,pOVar6,3,&local_d0,false);
    }
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar3,pNVar8,uVar4);
  }
  MapInference::~MapInference(aMStack_98);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pNVar3;
}

