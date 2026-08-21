
/* v8::internal::compiler::GraphAssembler::FinalizeCurrentBlock(v8::internal::compiler::BasicBlock*)
    */

BasicBlock * __thiscall
v8::internal::compiler::GraphAssembler::FinalizeCurrentBlock
          (GraphAssembler *this,BasicBlock *param_1)

{
  Graph *this_00;
  Operator *pOVar1;
  undefined8 uVar2;
  long lVar3;
  Node *pNVar4;
  long lVar5;
  undefined8 *puVar6;
  Node *local_28;
  
  if (*(BasicBlock **)(this + 0x30) != (BasicBlock *)0x0) {
    param_1 = (BasicBlock *)BasicBlockUpdater::Finalize(*(BasicBlock **)(this + 0x30));
    puVar6 = *(undefined8 **)(this + 0x18);
    lVar5 = *(long *)(this + 0x28);
    lVar3 = puVar6[0x2c];
    if (lVar3 == 0) {
      this_00 = (Graph *)*puVar6;
      pOVar1 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar6[1]);
      local_28 = (Node *)0x0;
      lVar3 = Graph::NewNode(this_00,pOVar1,0,&local_28,false);
      puVar6[0x2c] = lVar3;
    }
    if (lVar5 == lVar3) {
      pNVar4 = *(Node **)(param_1 + 0x38);
      uVar2 = NodeProperties::GetControlInput(pNVar4,0);
      *(undefined8 *)(this + 0x28) = uVar2;
      uVar2 = NodeProperties::GetEffectInput(pNVar4,0);
      *(undefined8 *)(this + 0x20) = uVar2;
    }
  }
  return param_1;
}

