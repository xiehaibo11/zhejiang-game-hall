
/* v8::internal::compiler::GraphAssembler::LoadUnaligned(v8::internal::MachineType,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::GraphAssembler::LoadUnaligned
          (GraphAssembler *this,uint param_2,Node *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  MachineOperatorBuilder *pMVar3;
  Operator *pOVar4;
  Node *pNVar5;
  long lVar6;
  BasicBlockUpdater *this_00;
  BasicBlock *pBVar7;
  Node *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  pMVar3 = *(MachineOperatorBuilder **)(*(long *)(this + 0x18) + 0x10);
  if ((param_2 & 0xff) == 2) {
LAB_016c6b7c:
    pOVar4 = (Operator *)MachineOperatorBuilder::Load(pMVar3,param_2 & 0xffff);
  }
  else {
    iVar2 = *(int *)(pMVar3 + 0x18);
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        if ((*(uint *)(pMVar3 + 0x1c) >> (ulong)(param_2 & 0x1f) & 1) != 0) goto LAB_016c6b70;
      }
      else if (iVar2 != 2) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      goto LAB_016c6b7c;
    }
LAB_016c6b70:
    pOVar4 = (Operator *)MachineOperatorBuilder::UnalignedLoad(pMVar3,param_2 & 0xffff);
  }
  local_40 = *(undefined8 *)(this + 0x20);
  uStack_38 = *(undefined8 *)(this + 0x28);
  local_50 = param_3;
  uStack_48 = param_4;
  pNVar5 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x18),pOVar4,4,&local_50,false);
  this_00 = *(BasicBlockUpdater **)(this + 0x30);
  if (this_00 != (BasicBlockUpdater *)0x0) {
    pBVar7 = *(BasicBlock **)(this_00 + 8);
    if (*(int *)(this_00 + 0x98) == 0) {
      puVar1 = *(undefined8 **)(this_00 + 0x18);
      if ((puVar1 != *(undefined8 **)(this_00 + 0x20)) && ((Node *)*puVar1 == pNVar5)) {
        *(undefined8 **)(this_00 + 0x18) = puVar1 + 1;
        goto LAB_016c6bf4;
      }
      BasicBlockUpdater::CopyForChange(this_00);
    }
    Schedule::AddNode(*(Schedule **)(this_00 + 0x28),pBVar7,pNVar5);
  }
LAB_016c6bf4:
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

