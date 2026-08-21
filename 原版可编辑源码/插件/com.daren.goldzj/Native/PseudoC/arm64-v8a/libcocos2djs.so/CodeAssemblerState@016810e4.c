
/* v8::internal::compiler::CodeAssemblerState::CodeAssemblerState(v8::internal::Isolate*,
   v8::internal::Zone*, v8::internal::CallInterfaceDescriptor const&, v8::internal::Code::Kind, char
   const*, v8::internal::PoisoningMitigationLevel, int) */

void __thiscall
v8::internal::compiler::CodeAssemblerState::CodeAssemblerState
          (CodeAssemblerState *this,undefined8 param_1,undefined8 param_2,long param_3,
          undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  
  uVar1 = Linkage::GetStubCallDescriptor
                    (param_2,param_3,(*(int **)(param_3 + 8))[2] - **(int **)(param_3 + 8),0,0,0);
  CodeAssemblerState(this,param_1,param_2,uVar1,param_5,param_6,param_7,param_8);
  return;
}

