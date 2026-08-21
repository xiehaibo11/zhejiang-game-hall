
/* v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::SafeLoadElement(v8::internal::ElementsKind,
   v8::internal::TNode<v8::internal::JSArray>,
   v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi, v8::internal::HeapNumber> >) */

undefined1  [16] __thiscall
v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::SafeLoadElement
          (IteratingArrayBuiltinReducerAssembler *this,undefined4 param_2,Node *param_3,
          Node *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  Operator *pOVar4;
  Node *pNVar5;
  Graph *this_00;
  SimplifiedOperatorBuilder *this_01;
  undefined1 auVar6 [16];
  Node *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  AccessBuilder::ForJSArrayLength((AccessBuilder *)&local_90,param_2);
  uVar2 = GraphAssembler::LoadField((GraphAssembler *)this,(FieldAccess *)&local_90,param_3);
  this_00 = (Graph *)**(undefined8 **)(this + 0x18);
  this_01 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f];
  lVar3 = CallParametersOf((Operator *)**(undefined8 **)(this + 0x38));
  pOVar4 = (Operator *)SimplifiedOperatorBuilder::CheckBounds(this_01,(FeedbackSource *)(lVar3 + 8))
  ;
  local_80 = *(undefined8 *)(this + 0x20);
  uStack_78 = *(undefined8 *)(this + 0x28);
  local_90 = param_4;
  uStack_88 = uVar2;
  pNVar5 = (Node *)Graph::NewNode(this_00,pOVar4,4,&local_90,false);
  auVar6._0_8_ = (AccessBuilder *)GraphAssembler::AddNode((GraphAssembler *)this,pNVar5);
  AccessBuilder::ForJSObjectElements(auVar6._0_8_);
  pNVar5 = (Node *)GraphAssembler::LoadField
                             ((GraphAssembler *)this,(FieldAccess *)&local_90,param_3);
  AccessBuilder::ForFixedArrayElement((AccessBuilder *)&local_90,param_2,0);
  uVar2 = GraphAssembler::LoadElement
                    ((GraphAssembler *)this,(ElementAccess *)&local_90,pNVar5,(Node *)auVar6._0_8_);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    auVar6._8_8_ = uVar2;
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

