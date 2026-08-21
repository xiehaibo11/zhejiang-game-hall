
/* v8::internal::compiler::CodeAssembler::TailCallStubImpl(v8::internal::CallInterfaceDescriptor
   const&, v8::internal::TNode<v8::internal::Code>, v8::internal::TNode<v8::internal::Object>,
   std::initializer_list<v8::internal::compiler::Node*>) */

void v8::internal::compiler::CodeAssembler::TailCallStubImpl
               (undefined8 *param_1,long param_2,Node *param_3,undefined8 param_4,
               undefined8 *param_5,long param_6)

{
  undefined8 *puVar1;
  CallDescriptor *pCVar2;
  long lVar3;
  Node *local_b0;
  undefined8 local_a8;
  undefined8 local_a0 [11];
  undefined8 *local_48;
  
  pCVar2 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (**(undefined8 **)(*(long *)*param_1 + 8),param_2,
                      (*(int **)(param_2 + 8))[2] - **(int **)(param_2 + 8),0,0,0);
  local_48 = &local_a8;
  if (param_6 != 0) {
    local_a8 = *param_5;
    local_48 = local_a0;
    if (param_6 != 1) {
      lVar3 = param_6 * 8 + -8;
      do {
        param_5 = param_5 + 1;
        lVar3 = lVar3 + -8;
        puVar1 = local_48 + 1;
        *local_48 = *param_5;
        local_48 = puVar1;
      } while (lVar3 != 0);
    }
  }
  if ((*(byte *)(*(long *)(param_2 + 8) + 0xc) & 1) == 0) {
    puVar1 = local_48 + 1;
    *local_48 = param_4;
    local_48 = puVar1;
  }
  local_b0 = param_3;
  RawMachineAssembler::TailCallN
            (*(RawMachineAssembler **)*param_1,pCVar2,
             (int)((ulong)((long)local_48 - (long)&local_b0) >> 3),&local_b0);
  return;
}

