
/* v8::internal::compiler::CodeAssembler::TailCallRuntimeImpl(v8::internal::Runtime::FunctionId,
   v8::internal::TNode<v8::internal::Int32T>, v8::internal::TNode<v8::internal::Object>,
   std::initializer_list<v8::internal::TNode<v8::internal::Object> >) */

void v8::internal::compiler::CodeAssembler::TailCallRuntimeImpl
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5,ulong param_6)

{
  undefined8 *puVar1;
  long lVar2;
  Operator *pOVar3;
  Node *pNVar4;
  CallDescriptor *pCVar5;
  undefined8 uVar6;
  RawMachineAssembler *pRVar7;
  Node *local_b8;
  undefined8 local_b0 [9];
  undefined8 *local_68;
  
  lVar2 = Runtime::FunctionForId(param_2);
  local_b8 = (Node *)CodeFactory::RuntimeCEntry
                               ((Isolate *)**(undefined8 **)*param_1,(int)*(char *)(lVar2 + 0x19));
  pRVar7 = *(RawMachineAssembler **)*param_1;
  pOVar3 = (Operator *)
           CommonOperatorBuilder::HeapConstant
                     ((CommonOperatorBuilder *)(pRVar7 + 0x48),(Handle *)&local_b8);
  pNVar4 = (Node *)RawMachineAssembler::AddNode(pRVar7,pOVar3,0,(Node **)0x0);
  pCVar5 = (CallDescriptor *)
           Linkage::GetRuntimeCallDescriptor
                     (**(undefined8 **)(*(long *)*param_1 + 8),param_2,param_6 & 0xffffffff,0,0);
  local_b8 = (Node *)ExternalReference::Create(param_2);
  pRVar7 = *(RawMachineAssembler **)*param_1;
  pOVar3 = (Operator *)
           CommonOperatorBuilder::ExternalConstant
                     ((CommonOperatorBuilder *)(pRVar7 + 0x48),(ExternalReference *)&local_b8);
  uVar6 = RawMachineAssembler::AddNode(pRVar7,pOVar3,0,(Node **)0x0);
  local_68 = local_b0;
  if (param_6 != 0) {
    lVar2 = param_6 << 3;
    do {
      lVar2 = lVar2 + -8;
      puVar1 = local_68 + 1;
      *local_68 = *param_5;
      local_68 = puVar1;
      param_5 = param_5 + 1;
    } while (lVar2 != 0);
  }
  puVar1 = local_68 + 1;
  *local_68 = uVar6;
  local_68 = puVar1;
  puVar1 = local_68 + 1;
  *local_68 = param_3;
  local_68 = puVar1;
  puVar1 = local_68 + 1;
  *local_68 = param_4;
  local_68 = puVar1;
  local_b8 = pNVar4;
  RawMachineAssembler::TailCallN
            (*(RawMachineAssembler **)*param_1,pCVar5,
             (int)((ulong)((long)local_68 - (long)&local_b8) >> 3),&local_b8);
  return;
}

