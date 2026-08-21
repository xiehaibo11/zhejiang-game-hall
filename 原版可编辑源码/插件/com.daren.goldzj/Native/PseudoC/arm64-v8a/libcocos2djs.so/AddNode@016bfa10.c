
/* v8::internal::compiler::GraphAssembler::AddNode(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::GraphAssembler::AddNode(GraphAssembler *this,Node *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  BasicBlockUpdater *this_00;
  BasicBlock *pBVar3;
  
  this_00 = *(BasicBlockUpdater **)(this + 0x30);
  if (this_00 != (BasicBlockUpdater *)0x0) {
    pBVar3 = *(BasicBlock **)(this_00 + 8);
    if (*(int *)(this_00 + 0x98) == 0) {
      puVar1 = *(undefined8 **)(this_00 + 0x18);
      if ((puVar1 != *(undefined8 **)(this_00 + 0x20)) && ((Node *)*puVar1 == param_1)) {
        *(undefined8 **)(this_00 + 0x18) = puVar1 + 1;
        goto LAB_016bfa6c;
      }
      BasicBlockUpdater::CopyForChange(this_00);
    }
    Schedule::AddNode(*(Schedule **)(this_00 + 0x28),pBVar3,param_1);
  }
LAB_016bfa6c:
  lVar2 = *(long *)param_1;
  if (*(short *)(lVar2 + 0x10) != 0x12) {
    if (*(char *)(lVar2 + 0x24) != '\0') {
      *(Node **)(this + 0x20) = param_1;
      lVar2 = *(long *)param_1;
    }
    if (0 < *(int *)(lVar2 + 0x28)) {
      *(Node **)(this + 0x28) = param_1;
    }
  }
  return param_1;
}

