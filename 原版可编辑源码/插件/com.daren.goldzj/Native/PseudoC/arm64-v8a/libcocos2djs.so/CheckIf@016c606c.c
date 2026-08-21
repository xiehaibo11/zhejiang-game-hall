
/* v8::internal::compiler::GraphAssembler::CheckIf(v8::internal::compiler::Node*,
   v8::internal::DeoptimizeReason) */

Node * __thiscall
v8::internal::compiler::GraphAssembler::CheckIf
          (GraphAssembler *this,Node *param_1,undefined4 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  Operator *pOVar3;
  Node *pNVar4;
  long lVar5;
  Graph *this_00;
  BasicBlockUpdater *this_01;
  BasicBlock *pBVar6;
  Node *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this_00 = (Graph *)**(undefined8 **)(this + 0x18);
  local_58 = 0;
  local_50 = 0xffffffff;
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::CheckIf
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f],param_3,
                      &local_58);
  uStack_68 = *(undefined8 *)(this + 0x20);
  local_60 = *(undefined8 *)(this + 0x28);
  local_70 = param_1;
  pNVar4 = (Node *)Graph::NewNode(this_00,pOVar3,3,&local_70,false);
  this_01 = *(BasicBlockUpdater **)(this + 0x30);
  if (this_01 != (BasicBlockUpdater *)0x0) {
    pBVar6 = *(BasicBlock **)(this_01 + 8);
    if (*(int *)(this_01 + 0x98) == 0) {
      puVar1 = *(undefined8 **)(this_01 + 0x18);
      if ((puVar1 != *(undefined8 **)(this_01 + 0x20)) && ((Node *)*puVar1 == pNVar4)) {
        *(undefined8 **)(this_01 + 0x18) = puVar1 + 1;
        goto LAB_016c612c;
      }
      BasicBlockUpdater::CopyForChange(this_01);
    }
    Schedule::AddNode(*(Schedule **)(this_01 + 0x28),pBVar6,pNVar4);
  }
LAB_016c612c:
  lVar5 = *(long *)pNVar4;
  if (*(short *)(lVar5 + 0x10) != 0x12) {
    if (*(char *)(lVar5 + 0x24) != '\0') {
      *(Node **)(this + 0x20) = pNVar4;
      lVar5 = *(long *)pNVar4;
    }
    if (0 < *(int *)(lVar5 + 0x28)) {
      *(Node **)(this + 0x28) = pNVar4;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return pNVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

