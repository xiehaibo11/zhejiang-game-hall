
void FUN_016f7560(long param_1)

{
  GraphAssembler *this;
  Operator *pOVar1;
  Graph *this_00;
  Node *pNVar2;
  undefined8 uVar3;
  Node *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  this = *(GraphAssembler **)(param_1 + 8);
  this_00 = (Graph *)**(undefined8 **)(this + 0x18);
  pOVar1 = (Operator *)
           v8::internal::compiler::JSOperatorBuilder::CallRuntime
                     ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2e],
                      **(undefined4 **)(param_1 + 0x10),2);
  pNVar2 = (Node *)**(undefined8 **)(param_1 + 0x18);
  uVar3 = **(undefined8 **)(param_1 + 0x20);
  local_60 = v8::internal::compiler::NodeProperties::GetContextInput(*(Node **)(this + 0x38));
  local_50 = *(undefined8 *)(this + 0x20);
  uStack_48 = *(undefined8 *)(this + 0x28);
  uStack_58 = **(undefined8 **)(param_1 + 0x28);
  local_70 = pNVar2;
  uStack_68 = uVar3;
  pNVar2 = (Node *)v8::internal::compiler::Graph::NewNode(this_00,pOVar1,6,&local_70,false);
  v8::internal::compiler::GraphAssembler::AddNode(this,pNVar2);
  return;
}

