
/* v8::internal::compiler::ScheduledMachineLowering::Run() */

void __thiscall
v8::internal::compiler::ScheduledMachineLowering::Run(ScheduledMachineLowering *this)

{
  GraphAssembler *this_00;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  Node *pNVar5;
  long lVar6;
  BasicBlock *pBVar7;
  Node *this_01;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  lVar6 = *(long *)this;
  puVar8 = *(undefined8 **)(lVar6 + 0x48);
  puVar1 = *(undefined8 **)(lVar6 + 0x50);
  if (puVar8 != puVar1) {
    this_00 = (GraphAssembler *)(this + 8);
    do {
      pBVar7 = (BasicBlock *)*puVar8;
      puVar9 = *(undefined8 **)(pBVar7 + 0x40);
      puVar2 = *(undefined8 **)(pBVar7 + 0x48);
      GraphAssembler::Reset(this_00,pBVar7);
      for (; puVar9 != puVar2; puVar9 = puVar9 + 1) {
        while( true ) {
          puVar3 = *(undefined8 **)(this + 0xf8);
          this_01 = (Node *)*puVar9;
          puVar4 = *(undefined8 **)(this + 0xf0);
          do {
            if (puVar4 == puVar3) goto LAB_012b2e90;
            pNVar5 = (Node *)(**(code **)(*(long *)*puVar4 + 0x18))((long *)*puVar4,this_01);
            puVar4 = puVar4 + 1;
          } while (pNVar5 == (Node *)0x0);
          if (this_01 == pNVar5) break;
          NodeProperties::ReplaceUses
                    (this_01,pNVar5,*(Node **)(this + 0x28),*(Node **)(this + 0x30),(Node *)0x0);
          Node::Kill(this_01);
          puVar9 = puVar9 + 1;
          if (puVar9 == puVar2) goto LAB_012b2e58;
        }
LAB_012b2e90:
        GraphAssembler::AddNode(this_00,this_01);
      }
LAB_012b2e58:
      GraphAssembler::FinalizeCurrentBlock(this_00,pBVar7);
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar1);
    lVar6 = *(long *)this;
  }
  *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)(lVar6 + 0x48);
  return;
}

