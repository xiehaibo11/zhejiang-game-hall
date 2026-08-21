
/* v8::internal::compiler::ConstraintBuilder::MeetRegisterConstraints() */

void __thiscall
v8::internal::compiler::ConstraintBuilder::MeetRegisterConstraints(ConstraintBuilder *this)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  InstructionBlock *pIVar5;
  int iVar6;
  undefined8 *puVar7;
  
  lVar3 = *(long *)this;
  plVar4 = *(long **)(*(long *)(lVar3 + 0x10) + 0x10);
  puVar7 = (undefined8 *)*plVar4;
  puVar2 = (undefined8 *)plVar4[1];
  if (puVar7 != puVar2) {
    while( true ) {
      pIVar5 = (InstructionBlock *)*puVar7;
      TickCounter::DoTick(*(TickCounter **)(lVar3 + 0x1d8));
      iVar6 = *(int *)(pIVar5 + 0x70);
      iVar1 = *(int *)(pIVar5 + 0x74);
      if (iVar6 < iVar1) {
        do {
          MeetConstraintsBefore(this,iVar6);
          if (iVar6 - iVar1 != -1) {
            MeetConstraintsAfter(this,iVar6);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != iVar1);
      }
      MeetRegisterConstraintsForLastInstructionInBlock(this,pIVar5);
      puVar7 = puVar7 + 1;
      if (puVar7 == puVar2) break;
      lVar3 = *(long *)this;
    }
  }
  return;
}

