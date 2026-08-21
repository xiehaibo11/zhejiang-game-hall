
/* v8::internal::compiler::JSCallReducer::ReduceMapPrototypeHas(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceMapPrototypeHas(JSCallReducer *this,Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  AccessBuilder *this_00;
  Operator *pOVar7;
  Graph *pGVar8;
  SimplifiedOperatorBuilder *this_01;
  Node *local_e8;
  Node *pNStack_e0;
  undefined8 local_d8;
  Node *local_d0;
  undefined8 uStack_c8;
  Node *local_c0;
  undefined8 uStack_b8;
  MapInference aMStack_98 [48];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(int *)(*(long *)param_1 + 0x14) == 3) {
    pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,1);
    pNVar3 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    uVar4 = NodeProperties::GetControlInput(param_1,0);
    uVar5 = NodeProperties::GetValueInput(param_1,2);
    MapInference::MapInference(aMStack_98,*(JSHeapBroker **)(this + 0x18),pNVar2,pNVar3);
    uVar6 = MapInference::HaveMaps(aMStack_98);
    if (((uVar6 & 1) == 0) ||
       (this_00 = (AccessBuilder *)MapInference::AllOfInstanceTypesAre(aMStack_98,0x41c),
       ((ulong)this_00 & 1) == 0)) {
      uVar5 = 0;
    }
    else {
      pGVar8 = (Graph *)**(undefined8 **)(this + 0x10);
      this_01 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
      AccessBuilder::ForJSCollectionTable(this_00);
      pOVar7 = (Operator *)SimplifiedOperatorBuilder::LoadField(this_01,(FieldAccess *)&local_d0);
      local_e8 = pNVar2;
      pNStack_e0 = pNVar3;
      local_d8 = uVar4;
      pNVar2 = (Node *)Graph::NewNode(pGVar8,pOVar7,3,&local_e8,false);
      pGVar8 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar7 = (Operator *)
               SimplifiedOperatorBuilder::FindOrderedHashMapEntry
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      local_d0 = pNVar2;
      uStack_c8 = uVar5;
      local_c0 = pNVar2;
      uStack_b8 = uVar4;
      pNVar2 = (Node *)Graph::NewNode(pGVar8,pOVar7,4,&local_d0,false);
      pGVar8 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar7 = (Operator *)
               SimplifiedOperatorBuilder::NumberEqual
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      uStack_c8 = JSGraph::MinusOneConstant(*(JSGraph **)(this + 0x10));
      local_d0 = pNVar2;
      pNVar3 = (Node *)Graph::NewNode(pGVar8,pOVar7,2,&local_d0,false);
      pGVar8 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar7 = (Operator *)
               SimplifiedOperatorBuilder::BooleanNot
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      local_d0 = pNVar3;
      uVar5 = Graph::NewNode(pGVar8,pOVar7,1,&local_d0,false);
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar5,pNVar2,uVar4);
    }
    MapInference::~MapInference(aMStack_98);
  }
  else {
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

