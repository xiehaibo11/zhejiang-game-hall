
/* v8::internal::compiler::CodeAssembler::CallStubN(v8::internal::StubCallMode,
   v8::internal::CallInterfaceDescriptor const&, unsigned long, int, v8::internal::compiler::Node*
   const*) */

Node * __thiscall
v8::internal::compiler::CodeAssembler::CallStubN
          (CodeAssembler *this,undefined4 param_2,long param_3,undefined8 param_4,int param_5,
          Node **param_6)

{
  CallDescriptor *pCVar1;
  Node *pNVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  pCVar1 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (**(undefined8 **)(**(long **)this + 8),param_3,
                      (param_5 - **(int **)(param_3 + 8)) +
                      ((*(int **)(param_3 + 8))[3] | 0xfffffffeU),0,0,param_2);
  puVar4 = *(undefined8 **)this;
  plVar3 = (long *)puVar4[0xc];
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3);
    puVar4 = *(undefined8 **)this;
  }
  pNVar2 = (Node *)RawMachineAssembler::CallN((RawMachineAssembler *)*puVar4,pCVar1,param_5,param_6)
  ;
  HandleException(this,pNVar2);
  if (*(long **)(*(long *)this + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(*(long *)this + 0x90) + 0x30))();
  }
  return pNVar2;
}

