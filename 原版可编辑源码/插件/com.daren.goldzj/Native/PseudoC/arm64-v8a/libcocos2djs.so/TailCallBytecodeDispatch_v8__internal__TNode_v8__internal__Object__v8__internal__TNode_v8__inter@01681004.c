
/* void 
   v8::internal::compiler::CodeAssembler::TailCallBytecodeDispatch<v8::internal::TNode<v8::internal::Object>,
   v8::internal::TNode<v8::internal::IntPtrT>, v8::internal::TNode<v8::internal::BytecodeArray>,
   v8::internal::TNode<v8::internal::ExternalReference> >(v8::internal::CallInterfaceDescriptor
   const&, v8::internal::TNode<v8::internal::RawPtrT>, v8::internal::TNode<v8::internal::Object>,
   v8::internal::TNode<v8::internal::IntPtrT>, v8::internal::TNode<v8::internal::BytecodeArray>,
   v8::internal::TNode<v8::internal::ExternalReference>) */

void __thiscall
v8::internal::compiler::CodeAssembler::
TailCallBytecodeDispatch<v8::internal::TNode<v8::internal::Object>,v8::internal::TNode<v8::internal::IntPtrT>,v8::internal::TNode<v8::internal::BytecodeArray>,v8::internal::TNode<v8::internal::ExternalReference>>
          (CodeAssembler *this,CallInterfaceDescriptor *param_1,Node *param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  CallDescriptor *pCVar1;
  Node *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  pCVar1 = (CallDescriptor *)
           Linkage::GetBytecodeDispatchCallDescriptor
                     ((Zone *)**(undefined8 **)(**(long **)this + 8),param_1,
                      (*(int **)(param_1 + 8))[2] - **(int **)(param_1 + 8));
  local_78 = param_3;
  uStack_70 = param_4;
  local_68 = param_5;
  uStack_60 = param_6;
  local_58 = param_7;
  if (*(int *)(*(long *)(param_1 + 8) + 8) == 4) {
    RawMachineAssembler::TailCallN((RawMachineAssembler *)**(undefined8 **)this,pCVar1,5,&local_78);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "descriptor.GetParameterCount() + 1 == (sizeof(ArraySizeHelper(nodes)))");
}

