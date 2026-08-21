
void FUN_016f727c(long param_1)

{
  GraphAssembler *this;
  uint *puVar1;
  Operator *pOVar2;
  Graph *this_00;
  Node *pNVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Node *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  this = *(GraphAssembler **)(param_1 + 8);
  puVar1 = *(uint **)(param_1 + 0x10);
  this_00 = (Graph *)**(undefined8 **)(this + 0x18);
  pOVar2 = (Operator *)
           v8::internal::compiler::JSOperatorBuilder::Call
                     ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2e],5,puVar1 + 1,
                      puVar1 + 2,2,*puVar1 >> 0x1c & 1,1);
  pNVar3 = (Node *)**(undefined8 **)(param_1 + 0x18);
  uVar4 = **(undefined8 **)(param_1 + 0x20);
  uVar5 = **(undefined8 **)(param_1 + 0x28);
  uVar6 = **(undefined8 **)(param_1 + 0x30);
  uVar7 = **(undefined8 **)(param_1 + 0x38);
  uStack_80 = v8::internal::compiler::NodeProperties::GetContextInput(*(Node **)(this + 0x38));
  uStack_70 = *(undefined8 *)(this + 0x20);
  local_68 = *(undefined8 *)(this + 0x28);
  local_78 = **(undefined8 **)(param_1 + 0x40);
  local_a8 = pNVar3;
  uStack_a0 = uVar4;
  local_98 = uVar5;
  uStack_90 = uVar6;
  local_88 = uVar7;
  pNVar3 = (Node *)v8::internal::compiler::Graph::NewNode(this_00,pOVar2,9,&local_a8,false);
  v8::internal::compiler::GraphAssembler::AddNode(this,pNVar3);
  return;
}

