
/* v8::internal::compiler::CodeAssembler::CallCFunctionN(v8::internal::Signature<v8::internal::MachineType>*,
   int, v8::internal::compiler::Node* const*) */

void __thiscall
v8::internal::compiler::CodeAssembler::CallCFunctionN
          (CodeAssembler *this,Signature *param_1,int param_2,Node **param_3)

{
  CallDescriptor *pCVar1;
  
  pCVar1 = (CallDescriptor *)
           Linkage::GetSimplifiedCDescriptor(**(undefined8 **)(**(long **)this + 8),param_1,0);
  RawMachineAssembler::CallN((RawMachineAssembler *)**(undefined8 **)this,pCVar1,param_2,param_3);
  return;
}

