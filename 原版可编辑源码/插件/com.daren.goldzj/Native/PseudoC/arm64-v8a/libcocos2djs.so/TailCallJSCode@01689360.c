
/* v8::internal::compiler::CodeAssembler::TailCallJSCode(v8::internal::TNode<v8::internal::Code>,
   v8::internal::TNode<v8::internal::Context>, v8::internal::TNode<v8::internal::JSFunction>,
   v8::internal::TNode<v8::internal::Object>, v8::internal::TNode<v8::internal::Int32T>) */

void __thiscall
v8::internal::compiler::CodeAssembler::TailCallJSCode
          (CodeAssembler *this,Node *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  CallDescriptor *pCVar1;
  Node *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined **local_50;
  long local_48;
  
  local_48 = 0x1d2c918;
  local_50 = &PTR__CallInterfaceDescriptor_01cca808;
  pCVar1 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (**(undefined8 **)(**(long **)this + 8),&local_50,
                      CallDescriptors::call_descriptor_data_._1768_4_ -
                      CallDescriptors::call_descriptor_data_._1760_4_,0x80,0,0);
  local_78 = param_2;
  uStack_70 = param_4;
  local_68 = param_5;
  uStack_60 = param_6;
  local_58 = param_3;
  if (*(int *)(local_48 + 8) == 3) {
    RawMachineAssembler::TailCallN((RawMachineAssembler *)**(undefined8 **)this,pCVar1,5,&local_78);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "descriptor.GetParameterCount() + 2 == (sizeof(ArraySizeHelper(nodes)))");
}

