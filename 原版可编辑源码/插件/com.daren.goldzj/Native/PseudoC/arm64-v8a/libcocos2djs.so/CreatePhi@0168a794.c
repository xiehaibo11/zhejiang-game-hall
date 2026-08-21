
/* v8::internal::compiler::CodeAssemblerParameterizedLabelBase::CreatePhi(v8::internal::MachineRepresentation,
   std::__ndk1::vector<v8::internal::compiler::Node*,
   std::__ndk1::allocator<v8::internal::compiler::Node*> > const&) */

undefined8 __thiscall
v8::internal::compiler::CodeAssemblerParameterizedLabelBase::CreatePhi
          (CodeAssemblerParameterizedLabelBase *this,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)*param_3;
  do {
    if (plVar1 == (long *)param_3[1]) {
      uVar2 = RawMachineAssembler::Phi
                        ((RawMachineAssembler *)**(undefined8 **)this,param_2,
                         (ulong)(param_3[1] - *param_3) >> 3);
      return uVar2;
    }
    lVar3 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (lVar3 != 0);
  return 0;
}

