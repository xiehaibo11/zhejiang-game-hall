
/* v8::internal::compiler::GraphAssembler::BasicBlockUpdater::AddNode(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::GraphAssembler::BasicBlockUpdater::AddNode
          (BasicBlockUpdater *this,Node *param_1)

{
  undefined8 *puVar1;
  BasicBlock *pBVar2;
  
  pBVar2 = *(BasicBlock **)(this + 8);
  if (*(int *)(this + 0x98) == 0) {
    puVar1 = *(undefined8 **)(this + 0x18);
    if ((puVar1 != *(undefined8 **)(this + 0x20)) && ((Node *)*puVar1 == param_1)) {
      *(undefined8 **)(this + 0x18) = puVar1 + 1;
      return param_1;
    }
    CopyForChange(this);
  }
  Schedule::AddNode(*(Schedule **)(this + 0x28),pBVar2,param_1);
  return param_1;
}

