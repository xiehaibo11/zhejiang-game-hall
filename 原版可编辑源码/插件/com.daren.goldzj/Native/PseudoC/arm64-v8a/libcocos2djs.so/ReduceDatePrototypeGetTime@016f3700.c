
/* v8::internal::compiler::JSCallReducer::ReduceDatePrototypeGetTime(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceDatePrototypeGetTime(JSCallReducer *this,Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 uVar4;
  ulong uVar5;
  AccessBuilder *this_00;
  Operator *pOVar6;
  undefined8 uVar7;
  Graph *this_01;
  SimplifiedOperatorBuilder *this_02;
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
  MapInference::MapInference(aMStack_88,*(JSHeapBroker **)(this + 0x18),pNVar2,pNVar3);
  uVar5 = MapInference::HaveMaps(aMStack_88);
  if (((uVar5 & 1) == 0) ||
     (this_00 = (AccessBuilder *)MapInference::AllOfInstanceTypesAre(aMStack_88,0x428),
     ((ulong)this_00 & 1) == 0)) {
    uVar7 = 0;
  }
  else {
    this_01 = (Graph *)**(undefined8 **)(this + 0x10);
    this_02 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    AccessBuilder::ForJSDateValue(this_00);
    pOVar6 = (Operator *)SimplifiedOperatorBuilder::LoadField(this_02,aFStack_c0);
    local_d8 = pNVar2;
    pNStack_d0 = pNVar3;
    local_c8 = uVar4;
    uVar7 = Graph::NewNode(this_01,pOVar6,3,&local_d8,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar7,uVar7,uVar4);
  }
  MapInference::~MapInference(aMStack_88);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

