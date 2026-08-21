
/* v8::internal::compiler::GraphAssembler::StoreUnaligned(v8::internal::MachineRepresentation,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::GraphAssembler::StoreUnaligned
          (GraphAssembler *this,uint param_2,Node *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  MachineOperatorBuilder *pMVar3;
  Operator *pOVar4;
  Node *pNVar5;
  long lVar6;
  BasicBlockUpdater *this_00;
  BasicBlock *pBVar7;
  Node *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  pMVar3 = *(MachineOperatorBuilder **)(*(long *)(this + 0x18) + 0x10);
  if ((param_2 & 0xff) == 2) {
LAB_016c6a3c:
    pOVar4 = (Operator *)MachineOperatorBuilder::Store(pMVar3,param_2 & 0xff);
  }
  else {
    iVar2 = *(int *)(pMVar3 + 0x18);
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        if ((*(uint *)(pMVar3 + 0x20) >> (ulong)(param_2 & 0x1f) & 1) != 0) goto LAB_016c6a34;
      }
      else if (iVar2 != 2) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      goto LAB_016c6a3c;
    }
LAB_016c6a34:
    pOVar4 = (Operator *)MachineOperatorBuilder::UnalignedStore();
  }
  uStack_40 = *(undefined8 *)(this + 0x20);
  local_38 = *(undefined8 *)(this + 0x28);
  local_58 = param_3;
  uStack_50 = param_4;
  local_48 = param_5;
  pNVar5 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x18),pOVar4,5,&local_58,false);
  this_00 = *(BasicBlockUpdater **)(this + 0x30);
  if (this_00 != (BasicBlockUpdater *)0x0) {
    pBVar7 = *(BasicBlock **)(this_00 + 8);
    if (*(int *)(this_00 + 0x98) == 0) {
      puVar1 = *(undefined8 **)(this_00 + 0x18);
      if ((puVar1 != *(undefined8 **)(this_00 + 0x20)) && ((Node *)*puVar1 == pNVar5)) {
        *(undefined8 **)(this_00 + 0x18) = puVar1 + 1;
        goto LAB_016c6ab8;
      }
      BasicBlockUpdater::CopyForChange(this_00);
    }
    Schedule::AddNode(*(Schedule **)(this_00 + 0x28),pBVar7,pNVar5);
  }
LAB_016c6ab8:
  lVar6 = *(long *)pNVar5;
  if (*(short *)(lVar6 + 0x10) != 0x12) {
    if (*(char *)(lVar6 + 0x24) != '\0') {
      *(Node **)(this + 0x20) = pNVar5;
      lVar6 = *(long *)pNVar5;
    }
    if (0 < *(int *)(lVar6 + 0x28)) {
      *(Node **)(this + 0x28) = pNVar5;
    }
  }
  return pNVar5;
}

