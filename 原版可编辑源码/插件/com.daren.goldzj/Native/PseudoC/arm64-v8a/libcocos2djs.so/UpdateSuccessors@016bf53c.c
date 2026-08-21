
/* v8::internal::compiler::GraphAssembler::BasicBlockUpdater::UpdateSuccessors(v8::internal::compiler::BasicBlock*)
    */

void __thiscall
v8::internal::compiler::GraphAssembler::BasicBlockUpdater::UpdateSuccessors
          (BasicBlockUpdater *this,BasicBlock *param_1)

{
  BasicBlock *pBVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(this + 0x58);
  puVar2 = *(undefined8 **)(this + 0x60);
  if (puVar4 != puVar2) {
    do {
      puVar3 = puVar4 + 2;
      pBVar1 = (BasicBlock *)*puVar4;
      *(BasicBlock **)(*(long *)(pBVar1 + 0x80) + puVar4[1] * 8) = param_1;
      BasicBlock::AddSuccessor(param_1,pBVar1);
      puVar4 = puVar3;
    } while (puVar3 != puVar2);
    puVar4 = *(undefined8 **)(this + 0x58);
  }
  *(undefined8 **)(this + 0x60) = puVar4;
  BasicBlock::set_control(param_1,*(undefined4 *)(this + 0x78));
  BasicBlock::set_control_input(param_1,*(Node **)(this + 0x80));
  if (*(Node **)(this + 0x80) != (Node *)0x0) {
    Schedule::SetBlockForNode(*(Schedule **)(this + 0x28),param_1,*(Node **)(this + 0x80));
    return;
  }
  return;
}

