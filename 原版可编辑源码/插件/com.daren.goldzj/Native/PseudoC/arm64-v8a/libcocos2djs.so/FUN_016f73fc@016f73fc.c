
void FUN_016f73fc(long param_1)

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
  undefined8 uVar8;
  Node *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  this = *(GraphAssembler **)(param_1 + 8);
  puVar1 = *(uint **)(param_1 + 0x10);
  this_00 = (Graph *)**(undefined8 **)(this + 0x18);
  pOVar2 = (Operator *)
           v8::internal::compiler::JSOperatorBuilder::Call
                     ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2e],6,puVar1 + 1,
                      puVar1 + 2,2,*puVar1 >> 0x1c & 1,1);
  pNVar3 = (Node *)**(undefined8 **)(param_1 + 0x18);
  uVar4 = **(undefined8 **)(param_1 + 0x20);
  uVar5 = **(undefined8 **)(param_1 + 0x28);
  uVar6 = **(undefined8 **)(param_1 + 0x30);
  uVar7 = **(undefined8 **)(param_1 + 0x38);
  uVar8 = **(undefined8 **)(param_1 + 0x40);
  local_80 = v8::internal::compiler::NodeProperties::GetContextInput(*(Node **)(this + 0x38));
  local_70 = *(undefined8 *)(this + 0x20);
  uStack_68 = *(undefined8 *)(this + 0x28);
  uStack_78 = **(undefined8 **)(param_1 + 0x48);
  local_b0 = pNVar3;
  uStack_a8 = uVar4;
  local_a0 = uVar5;
  uStack_98 = uVar6;
  local_90 = uVar7;
  uStack_88 = uVar8;
  pNVar3 = (Node *)v8::internal::compiler::Graph::NewNode(this_00,pOVar2,10,&local_b0,false);
  v8::internal::compiler::GraphAssembler::AddNode(this,pNVar3);
  return;
}

