
/* v8::internal::compiler::JSCallReducer::ReduceCollectionIteration(v8::internal::compiler::Node*,
   v8::internal::CollectionKind, v8::internal::IterationKind) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceCollectionIteration
          (JSCallReducer *this,Node *param_1,int param_3,undefined4 param_4)

{
  long lVar1;
  Node *pNVar2;
  undefined8 uVar3;
  Node *pNVar4;
  undefined8 uVar5;
  ulong uVar6;
  Operator *pOVar7;
  undefined8 uVar8;
  Graph *this_00;
  Node *local_b8;
  undefined8 uStack_b0;
  Node *local_a8;
  undefined8 uStack_a0;
  MapInference aMStack_98 [48];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,1);
  uVar3 = NodeProperties::GetContextInput(param_1);
  pNVar4 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  uVar5 = NodeProperties::GetControlInput(param_1,0);
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
  MapInference::MapInference(aMStack_98,*(JSHeapBroker **)(this + 0x18),pNVar2,pNVar4);
  uVar6 = MapInference::HaveMaps(aMStack_98);
  if (((uVar6 & 1) == 0) ||
     (uVar6 = MapInference::AllOfInstanceTypesAre(aMStack_98,uVar8), (uVar6 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    this_00 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar7 = (Operator *)
             JSOperatorBuilder::CreateCollectionIterator
                       ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e],param_3,param_4);
    local_b8 = pNVar2;
    uStack_b0 = uVar3;
    local_a8 = pNVar4;
    uStack_a0 = uVar5;
    uVar3 = Graph::NewNode(this_00,pOVar7,4,&local_b8,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar3,uVar3,0);
  }
  MapInference::~MapInference(aMStack_98);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

