
/* v8::internal::compiler::CodeAssembler::TailCallStubThenBytecodeDispatchImpl(v8::internal::CallInterfaceDescriptor
   const&, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   std::initializer_list<v8::internal::compiler::Node*>) */

void v8::internal::compiler::CodeAssembler::TailCallStubThenBytecodeDispatchImpl
               (undefined8 *param_1,long param_2,Node *param_3,undefined8 param_4,
               undefined8 *param_5,long param_6)

{
  undefined8 *puVar1;
  CallDescriptor *pCVar2;
  Node *local_88;
  undefined8 local_80 [7];
  undefined8 *local_48;
  
  pCVar2 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (**(undefined8 **)(*(long *)*param_1 + 8),param_2,
                      (int)param_6 - **(int **)(param_2 + 8),0,0,0);
  local_48 = local_80;
  if (param_6 != 0) {
    param_6 = param_6 << 3;
    do {
      param_6 = param_6 + -8;
      puVar1 = local_48 + 1;
      *local_48 = *param_5;
      local_48 = puVar1;
      param_5 = param_5 + 1;
    } while (param_6 != 0);
  }
  puVar1 = local_48 + 1;
  *local_48 = param_4;
  local_48 = puVar1;
  local_88 = param_3;
  RawMachineAssembler::TailCallN
            (*(RawMachineAssembler **)*param_1,pCVar2,
             (int)((ulong)((long)local_48 - (long)&local_88) >> 3),&local_88);
  return;
}

