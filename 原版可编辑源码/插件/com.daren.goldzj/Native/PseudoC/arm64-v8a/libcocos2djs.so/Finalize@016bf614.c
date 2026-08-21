
/* v8::internal::compiler::GraphAssembler::BasicBlockUpdater::Finalize(v8::internal::compiler::BasicBlock*)
    */

BasicBlock *
v8::internal::compiler::GraphAssembler::BasicBlockUpdater::Finalize(BasicBlock *param_1)

{
  BasicBlock *pBVar1;
  undefined8 *puVar2;
  BasicBlock *this;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  this = *(BasicBlock **)(param_1 + 8);
  if (*(int *)(param_1 + 0x98) == 1) {
    puVar4 = *(undefined8 **)(param_1 + 0x58);
    puVar2 = *(undefined8 **)(param_1 + 0x60);
    if (puVar4 != puVar2) {
      do {
        puVar3 = puVar4 + 2;
        pBVar1 = (BasicBlock *)*puVar4;
        *(BasicBlock **)(*(long *)(pBVar1 + 0x80) + puVar4[1] * 8) = this;
        BasicBlock::AddSuccessor(this,pBVar1);
        puVar4 = puVar3;
      } while (puVar3 != puVar2);
      puVar4 = *(undefined8 **)(param_1 + 0x58);
    }
    *(undefined8 **)(param_1 + 0x60) = puVar4;
    BasicBlock::set_control(this,*(undefined4 *)(param_1 + 0x78));
    BasicBlock::set_control_input(this,*(Node **)(param_1 + 0x80));
    if (*(Node **)(param_1 + 0x80) != (Node *)0x0) {
      Schedule::SetBlockForNode(*(Schedule **)(param_1 + 0x28),this,*(Node **)(param_1 + 0x80));
    }
  }
  else if (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x20)) {
    BasicBlock::TrimNodes(this);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x88] = (BasicBlock)0x0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return this;
}

