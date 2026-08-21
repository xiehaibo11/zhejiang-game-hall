
/* v8::internal::compiler::RawMachineAssembler::RawMachineAssembler(v8::internal::Isolate*,
   v8::internal::compiler::Graph*, v8::internal::compiler::CallDescriptor*,
   v8::internal::MachineRepresentation,
   v8::base::Flags<v8::internal::compiler::MachineOperatorBuilder::Flag, unsigned int>,
   v8::internal::compiler::MachineOperatorBuilder::AlignmentRequirements,
   v8::internal::PoisoningMitigationLevel) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::RawMachineAssembler
          (RawMachineAssembler *this,undefined8 param_1,Graph *param_2,int *param_3,
          undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
          undefined4 param_9)

{
  CommonOperatorBuilder *this_00;
  Zone *pZVar1;
  Operator *pOVar2;
  Node *pNVar3;
  Schedule *this_01;
  SourcePositionTable *this_02;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  int *piVar7;
  ulong uVar8;
  Node *local_58;
  
  *(undefined8 *)this = param_1;
  *(Graph **)(this + 8) = param_2;
  pZVar1 = *(Zone **)param_2;
  this_01 = *(Schedule **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)this_01) < 0x78) {
    this_01 = (Schedule *)Zone::NewExpand(pZVar1,0x78);
  }
  else {
    *(Schedule **)(pZVar1 + 0x10) = this_01 + 0x78;
  }
  Schedule::Schedule(this_01,(Zone *)**(undefined8 **)(this + 8),0);
  *(Schedule **)(this + 0x10) = this_01;
  pZVar1 = (Zone *)**(undefined8 **)(this + 8);
  this_02 = *(SourcePositionTable **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)this_02) < 0x38) {
    this_02 = (SourcePositionTable *)Zone::NewExpand(pZVar1,0x38);
  }
  else {
    *(SourcePositionTable **)(pZVar1 + 0x10) = this_02 + 0x38;
  }
  SourcePositionTable::SourcePositionTable(this_02,param_2);
  *(SourcePositionTable **)(this + 0x18) = this_02;
  MachineOperatorBuilder::MachineOperatorBuilder
            ((MachineOperatorBuilder *)(this + 0x20),**(undefined8 **)(this + 8),param_5,param_6,
             param_7,param_8);
  this_00 = (CommonOperatorBuilder *)(this + 0x48);
  CommonOperatorBuilder::CommonOperatorBuilder(this_00,(Zone *)**(undefined8 **)(this + 8));
  SimplifiedOperatorBuilder::SimplifiedOperatorBuilder
            ((SimplifiedOperatorBuilder *)(this + 0x58),(Zone *)**(undefined8 **)(this + 8));
  *(int **)(this + 0x68) = param_3;
  *(undefined8 *)(this + 0x70) = 0;
  uVar8 = *(ulong *)(*(long *)(param_3 + 4) + 8);
  pZVar1 = (Zone *)**(undefined8 **)(this + 8);
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(Zone **)(this + 0x90) = pZVar1;
  piVar7 = param_3;
  if (uVar8 != 0) {
    if (uVar8 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar4 = *(undefined8 **)(pZVar1 + 0x10);
    uVar5 = uVar8 * 8;
    if (uVar5 < (ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar4) ||
        uVar5 - (*(long *)(pZVar1 + 0x18) - (long)puVar4) == 0) {
      *(undefined8 **)(pZVar1 + 0x10) = puVar4 + uVar8;
    }
    else {
      puVar4 = (undefined8 *)Zone::NewExpand(pZVar1,uVar5);
    }
    *(undefined8 **)(this + 0x78) = puVar4;
    *(undefined8 **)(this + 0x80) = puVar4;
    *(undefined8 **)(this + 0x88) = puVar4 + uVar8;
    do {
      *puVar4 = 0;
      uVar8 = uVar8 - 1;
      puVar4 = (undefined8 *)(*(long *)(this + 0x80) + 8);
      *(undefined8 **)(this + 0x80) = puVar4;
    } while (uVar8 != 0);
    piVar7 = *(int **)(this + 0x68);
  }
  uVar6 = *(undefined8 *)(*(long *)(this + 0x10) + 0x68);
  *(undefined4 *)(this + 0xa0) = param_9;
  *(undefined8 *)(this + 0x98) = uVar6;
  pOVar2 = (Operator *)CommonOperatorBuilder::Start(this_00,*(int *)(*(long *)(piVar7 + 4) + 8) + 1)
  ;
  local_58 = (Node *)0x0;
  uVar6 = Graph::NewNode(param_2,pOVar2,0,&local_58,false);
  *(undefined8 *)(param_2 + 8) = uVar6;
  if (*param_3 == 1) {
    pOVar2 = (Operator *)CommonOperatorBuilder::Parameter(this_00,-1,(char *)0x0);
    local_58 = *(Node **)(param_2 + 8);
    pNVar3 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),pOVar2,1,&local_58,false);
    Schedule::AddNode(*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),pNVar3);
    *(Node **)(this + 0x70) = pNVar3;
  }
  if (*(long *)(*(long *)(*(long *)(this + 0x68) + 0x10) + 8) != 0) {
    uVar8 = 0;
    do {
      pOVar2 = (Operator *)CommonOperatorBuilder::Parameter(this_00,(int)uVar8,(char *)0x0);
      local_58 = *(Node **)(param_2 + 8);
      pNVar3 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),pOVar2,1,&local_58,false);
      Schedule::AddNode(*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),pNVar3);
      *(Node **)(*(long *)(this + 0x78) + uVar8 * 8) = pNVar3;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ulong *)(*(long *)(*(long *)(this + 0x68) + 0x10) + 8));
  }
  pOVar2 = (Operator *)CommonOperatorBuilder::End(this_00,0);
  local_58 = (Node *)0x0;
  uVar6 = Graph::NewNode(param_2,pOVar2,0,&local_58,false);
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  SourcePositionTable::AddDecorator(*(SourcePositionTable **)(this + 0x18));
  return;
}

