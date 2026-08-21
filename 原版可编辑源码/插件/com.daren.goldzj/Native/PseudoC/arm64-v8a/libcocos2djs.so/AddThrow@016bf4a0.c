
/* v8::internal::compiler::GraphAssembler::BasicBlockUpdater::AddThrow(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::GraphAssembler::BasicBlockUpdater::AddThrow
          (BasicBlockUpdater *this,Node *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(int *)(this + 0x98) == 0) {
    CopyForChange(this);
  }
  Schedule::AddThrow(*(Schedule **)(this + 0x28),*(BasicBlock **)(this + 8),param_1);
  if (*(Node **)(this + 0x80) != (Node *)0x0) {
    NodeProperties::ReplaceUses(*(Node **)(this + 0x80),param_1,(Node *)0x0,param_1,(Node *)0x0);
    Node::Kill(*(Node **)(this + 0x80));
  }
  puVar3 = *(undefined8 **)(this + 0x58);
  puVar1 = *(undefined8 **)(this + 0x60);
  *(Node **)(this + 0x80) = param_1;
  *(undefined4 *)(this + 0x78) = 8;
  if (puVar3 != puVar1) {
    do {
      puVar2 = puVar3 + 2;
      BasicBlock::RemovePredecessor((BasicBlock *)*puVar3,puVar3[1]);
      puVar3 = puVar2;
    } while (puVar2 != puVar1);
    puVar3 = *(undefined8 **)(this + 0x58);
  }
  *(undefined8 **)(this + 0x60) = puVar3;
  return;
}

