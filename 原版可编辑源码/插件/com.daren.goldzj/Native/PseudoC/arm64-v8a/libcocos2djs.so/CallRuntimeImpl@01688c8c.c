
/* v8::internal::compiler::CodeAssembler::CallRuntimeImpl(v8::internal::Runtime::FunctionId,
   v8::internal::TNode<v8::internal::Object>,
   std::initializer_list<v8::internal::TNode<v8::internal::Object> >) */

Node * v8::internal::compiler::CodeAssembler::CallRuntimeImpl
                 (CodeAssembler *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                 ulong param_5)

{
  long lVar1;
  Operator *pOVar2;
  Node *pNVar3;
  ulong uVar4;
  CallDescriptor *pCVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  RawMachineAssembler *pRVar8;
  undefined8 uVar9;
  Node *local_b8;
  undefined8 local_b0 [9];
  undefined8 *local_68;
  
  lVar1 = Runtime::FunctionForId(param_2);
  local_b8 = (Node *)CodeFactory::RuntimeCEntry
                               (*(Isolate **)**(undefined8 **)param_1,(int)*(char *)(lVar1 + 0x19));
  pRVar8 = (RawMachineAssembler *)**(undefined8 **)param_1;
  pOVar2 = (Operator *)
           CommonOperatorBuilder::HeapConstant
                     ((CommonOperatorBuilder *)(pRVar8 + 0x48),(Handle *)&local_b8);
  pNVar3 = (Node *)RawMachineAssembler::AddNode(pRVar8,pOVar2,0,(Node **)0x0);
  uVar9 = **(undefined8 **)(**(long **)param_1 + 8);
  uVar4 = Runtime::MayAllocate(param_2);
  uVar6 = 0;
  if ((uVar4 & 1) == 0) {
    uVar6 = 0x10;
  }
  pCVar5 = (CallDescriptor *)
           Linkage::GetRuntimeCallDescriptor(uVar9,param_2,param_5 & 0xffffffff,0,uVar6);
  local_b8 = (Node *)ExternalReference::Create(param_2);
  pRVar8 = (RawMachineAssembler *)**(undefined8 **)param_1;
  pOVar2 = (Operator *)
           CommonOperatorBuilder::ExternalConstant
                     ((CommonOperatorBuilder *)(pRVar8 + 0x48),(ExternalReference *)&local_b8);
  uVar6 = RawMachineAssembler::AddNode(pRVar8,pOVar2,0,(Node **)0x0);
  pRVar8 = (RawMachineAssembler *)**(undefined8 **)param_1;
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Int32Constant
                     ((CommonOperatorBuilder *)(pRVar8 + 0x48),(int)param_5);
  uVar9 = RawMachineAssembler::AddNode(pRVar8,pOVar2,0,(Node **)0x0);
  local_68 = local_b0;
  if (param_5 != 0) {
    lVar1 = param_5 << 3;
    do {
      lVar1 = lVar1 + -8;
      puVar7 = local_68 + 1;
      *local_68 = *param_4;
      local_68 = puVar7;
      param_4 = param_4 + 1;
    } while (lVar1 != 0);
  }
  puVar7 = local_68 + 1;
  *local_68 = uVar6;
  local_68 = puVar7;
  puVar7 = local_68 + 1;
  *local_68 = uVar9;
  local_68 = puVar7;
  puVar7 = local_68 + 1;
  *local_68 = param_3;
  local_68 = puVar7;
  puVar7 = *(undefined8 **)param_1;
  local_b8 = pNVar3;
  if ((long *)puVar7[0xc] != (long *)0x0) {
    (**(code **)(*(long *)puVar7[0xc] + 0x30))();
    puVar7 = *(undefined8 **)param_1;
  }
  pNVar3 = (Node *)RawMachineAssembler::CallN
                             ((RawMachineAssembler *)*puVar7,pCVar5,
                              (int)((ulong)((long)local_68 - (long)&local_b8) >> 3),&local_b8);
  HandleException(param_1,pNVar3);
  if (*(long **)(*(long *)param_1 + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(*(long *)param_1 + 0x90) + 0x30))();
  }
  return pNVar3;
}

