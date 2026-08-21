
/* v8::internal::compiler::JSCallReducerAssembler::CreateArrayNoThrow(v8::internal::TNode<v8::internal::Object>,
   v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi, v8::internal::HeapNumber> >) */

void __thiscall
v8::internal::compiler::JSCallReducerAssembler::CreateArrayNoThrow
          (JSCallReducerAssembler *this,Node *param_2,undefined8 param_3)

{
  Operator *pOVar1;
  undefined8 uVar2;
  Node *pNVar3;
  Graph *this_00;
  Node *local_78;
  Node *pNStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  this_00 = (Graph *)**(undefined8 **)(this + 0x18);
  pOVar1 = (Operator *)
           JSOperatorBuilder::CreateArray
                     ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2e],1,0);
  uVar2 = NodeProperties::GetContextInput(*(Node **)(this + 0x38));
  local_58 = NodeProperties::GetFrameStateInput(*(Node **)(this + 0x38));
  uStack_50 = *(undefined8 *)(this + 0x20);
  local_48 = *(undefined8 *)(this + 0x28);
  local_78 = param_2;
  pNStack_70 = param_2;
  local_68 = param_3;
  uStack_60 = uVar2;
  pNVar3 = (Node *)Graph::NewNode(this_00,pOVar1,7,&local_78,false);
  GraphAssembler::AddNode((GraphAssembler *)this,pNVar3);
  return;
}

