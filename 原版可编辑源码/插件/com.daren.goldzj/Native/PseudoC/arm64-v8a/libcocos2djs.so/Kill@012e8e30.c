
/* v8::internal::compiler::RepresentationSelector::Kill(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::RepresentationSelector::Kill(RepresentationSelector *this,Node *param_1)

{
  Graph *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  Operator *pOVar3;
  Node *pNVar4;
  undefined8 *puVar5;
  Node *local_18;
  
  if (FLAG_trace_representation != '\0') {
    PrintF("killing #%d:%s\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
           *(undefined8 *)(*(long *)param_1 + 8));
  }
  if (*(int *)(*(long *)param_1 + 0x18) == 1) {
    uVar1 = NodeProperties::GetControlInput(param_1,0);
    uVar2 = NodeProperties::GetEffectInput(param_1,0);
    FUN_012e8f08(param_1,uVar2,uVar1);
  }
  puVar5 = *(undefined8 **)this;
  pNVar4 = (Node *)puVar5[0x2c];
  if (pNVar4 == (Node *)0x0) {
    this_00 = (Graph *)*puVar5;
    pOVar3 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar5[1]);
    local_18 = (Node *)0x0;
    pNVar4 = (Node *)Graph::NewNode(this_00,pOVar3,0,&local_18,false);
    puVar5[0x2c] = pNVar4;
  }
  Node::ReplaceUses(param_1,pNVar4);
  Node::NullAllInputs(param_1);
  return;
}

