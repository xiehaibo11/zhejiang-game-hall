
/* v8::internal::compiler::CodeAssembler::NumberConstant(double) */

void __thiscall
v8::internal::compiler::CodeAssembler::NumberConstant(CodeAssembler *this,double param_1)

{
  Operator *pOVar1;
  Node *pNVar2;
  int iVar3;
  Node **ppNVar4;
  uint uVar5;
  RawMachineAssembler *pRVar6;
  Node *local_28;
  
  if (((param_1 <= 1073741823.0) && (-1073741824.0 <= param_1)) && (param_1 != -0.0)) {
    uVar5 = (uint)param_1;
    if ((double)(int)uVar5 == param_1) {
      pRVar6 = (RawMachineAssembler *)**(undefined8 **)this;
      pOVar1 = (Operator *)
               CommonOperatorBuilder::Int64Constant
                         ((CommonOperatorBuilder *)(pRVar6 + 0x48),
                          -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1);
      pNVar2 = (Node *)RawMachineAssembler::AddNode(pRVar6,pOVar1,0,(Node **)0x0);
      pRVar6 = (RawMachineAssembler *)**(undefined8 **)this;
      pOVar1 = (Operator *)
               MachineOperatorBuilder::BitcastWordToTaggedSigned
                         ((MachineOperatorBuilder *)(pRVar6 + 0x20));
      ppNVar4 = &local_28;
      iVar3 = 1;
      local_28 = pNVar2;
      goto LAB_01681a00;
    }
  }
  local_28 = (Node *)Factory::NewHeapNumberForCodeAssembler
                               (*(Factory **)**(undefined8 **)this,param_1);
  pRVar6 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           CommonOperatorBuilder::HeapConstant
                     ((CommonOperatorBuilder *)(pRVar6 + 0x48),(Handle *)&local_28);
  iVar3 = 0;
  ppNVar4 = (Node **)0x0;
LAB_01681a00:
  RawMachineAssembler::AddNode(pRVar6,pOVar1,iVar3,ppNVar4);
  return;
}

