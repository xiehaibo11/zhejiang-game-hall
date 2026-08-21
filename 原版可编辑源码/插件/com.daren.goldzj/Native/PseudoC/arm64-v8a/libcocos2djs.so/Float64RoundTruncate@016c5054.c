
/* v8::internal::compiler::GraphAssembler::Float64RoundTruncate(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::GraphAssembler::Float64RoundTruncate(GraphAssembler *this,Node *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  Node *pNVar3;
  Operator *extraout_x1;
  long lVar4;
  Graph *this_00;
  BasicBlockUpdater *this_01;
  BasicBlock *pBVar5;
  Node *local_38;
  
  cVar2 = MachineOperatorBuilder::Float64RoundTruncate
                    (*(MachineOperatorBuilder **)(*(long *)(this + 0x18) + 0x10));
  if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","machine()->Float64RoundTruncate().IsSupported()");
  }
  this_00 = (Graph *)**(undefined8 **)(this + 0x18);
  MachineOperatorBuilder::Float64RoundTruncate
            ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x18))[2]);
  local_38 = param_1;
  pNVar3 = (Node *)Graph::NewNode(this_00,extraout_x1,1,&local_38,false);
  this_01 = *(BasicBlockUpdater **)(this + 0x30);
  if (this_01 != (BasicBlockUpdater *)0x0) {
    pBVar5 = *(BasicBlock **)(this_01 + 8);
    if (*(int *)(this_01 + 0x98) == 0) {
      puVar1 = *(undefined8 **)(this_01 + 0x18);
      if ((puVar1 != *(undefined8 **)(this_01 + 0x20)) && ((Node *)*puVar1 == pNVar3)) {
        *(undefined8 **)(this_01 + 0x18) = puVar1 + 1;
        goto LAB_016c50f4;
      }
      BasicBlockUpdater::CopyForChange(this_01);
    }
    Schedule::AddNode(*(Schedule **)(this_01 + 0x28),pBVar5,pNVar3);
  }
LAB_016c50f4:
  lVar4 = *(long *)pNVar3;
  if (*(short *)(lVar4 + 0x10) != 0x12) {
    if (*(char *)(lVar4 + 0x24) != '\0') {
      *(Node **)(this + 0x20) = pNVar3;
      lVar4 = *(long *)pNVar3;
    }
    if (0 < *(int *)(lVar4 + 0x28)) {
      *(Node **)(this + 0x28) = pNVar3;
    }
  }
  return pNVar3;
}

