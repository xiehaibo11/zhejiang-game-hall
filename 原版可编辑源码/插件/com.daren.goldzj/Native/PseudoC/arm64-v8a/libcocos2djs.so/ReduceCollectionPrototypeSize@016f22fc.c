
/* v8::internal::compiler::JSCallReducer::ReduceCollectionPrototypeSize(v8::internal::compiler::Node*,
   v8::internal::CollectionKind) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceCollectionPrototypeSize
          (JSCallReducer *this,Node *param_1,int param_3)

{
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 uVar4;
  ulong uVar5;
  AccessBuilder *pAVar6;
  Operator *pOVar7;
  undefined8 uVar8;
  Graph *pGVar9;
  SimplifiedOperatorBuilder *pSVar10;
  Node *local_d8;
  Node *pNStack_d0;
  undefined8 local_c8;
  FieldAccess aFStack_c0 [56];
  MapInference aMStack_88 [48];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,1);
  pNVar3 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  uVar4 = NodeProperties::GetControlInput(param_1,0);
  if (param_3 == 0) {
    uVar8 = 0x41c;
  }
  else {
    if (param_3 != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar8 = 0x41d;
  }
  MapInference::MapInference(aMStack_88,*(JSHeapBroker **)(this + 0x18),pNVar2,pNVar3);
  uVar5 = MapInference::HaveMaps(aMStack_88);
  if (((uVar5 & 1) == 0) ||
     (pAVar6 = (AccessBuilder *)MapInference::AllOfInstanceTypesAre(aMStack_88,uVar8),
     ((ulong)pAVar6 & 1) == 0)) {
    uVar8 = 0;
  }
  else {
    pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
    pSVar10 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    AccessBuilder::ForJSCollectionTable(pAVar6);
    pOVar7 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar10,aFStack_c0);
    local_d8 = pNVar2;
    pNStack_d0 = pNVar3;
    local_c8 = uVar4;
    pAVar6 = (AccessBuilder *)Graph::NewNode(pGVar9,pOVar7,3,&local_d8,false);
    pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
    pSVar10 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    AccessBuilder::ForOrderedHashMapOrSetNumberOfElements(pAVar6);
    pOVar7 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar10,aFStack_c0);
    local_d8 = (Node *)pAVar6;
    pNStack_d0 = (Node *)pAVar6;
    local_c8 = uVar4;
    uVar8 = Graph::NewNode(pGVar9,pOVar7,3,&local_d8,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar8,uVar8,uVar4);
  }
  MapInference::~MapInference(aMStack_88);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

