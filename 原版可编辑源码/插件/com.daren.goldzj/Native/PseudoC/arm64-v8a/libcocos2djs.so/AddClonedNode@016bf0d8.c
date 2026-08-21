
/* v8::internal::compiler::GraphAssembler::BasicBlockUpdater::AddClonedNode(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::GraphAssembler::BasicBlockUpdater::AddClonedNode
          (BasicBlockUpdater *this,Node *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  BasicBlock *pBVar5;
  
  if (*(int *)(this + 0x98) == 0) {
    CopyForChange(this);
  }
  uVar3 = Schedule::IsScheduled(*(Schedule **)(this + 0x28),param_1);
  if (((uVar3 & 1) == 0) ||
     (lVar4 = Schedule::block(*(Schedule **)(this + 0x28),param_1), lVar4 != *(long *)(this + 8))) {
    uVar3 = Schedule::IsScheduled(*(Schedule **)(this + 0x28),param_1);
    if (((uVar3 & 1) == 0) &&
       (*(ulong *)(this + 0x90) <= ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff))) {
      iVar2 = *(int *)(this + 0x98);
      pBVar5 = *(BasicBlock **)(this + 8);
    }
    else {
      param_1 = (Node *)Graph::CloneNode(*(Graph **)(this + 0x30),param_1);
      iVar2 = *(int *)(this + 0x98);
      pBVar5 = *(BasicBlock **)(this + 8);
    }
    if (iVar2 == 0) {
      puVar1 = *(undefined8 **)(this + 0x18);
      if ((puVar1 != *(undefined8 **)(this + 0x20)) && ((Node *)*puVar1 == param_1)) {
        *(undefined8 **)(this + 0x18) = puVar1 + 1;
        return param_1;
      }
      CopyForChange(this);
    }
    Schedule::AddNode(*(Schedule **)(this + 0x28),pBVar5,param_1);
  }
  return param_1;
}

