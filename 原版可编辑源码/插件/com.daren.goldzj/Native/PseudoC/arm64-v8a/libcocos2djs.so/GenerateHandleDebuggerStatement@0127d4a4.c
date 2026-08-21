
/* v8::internal::DebugCodegen::GenerateHandleDebuggerStatement(v8::internal::MacroAssembler*) */

void v8::internal::DebugCodegen::GenerateHandleDebuggerStatement(MacroAssembler *param_1)

{
  MacroAssembler MVar1;
  undefined8 uVar2;
  
  MVar1 = param_1[400];
  param_1[400] = (MacroAssembler)0x1;
  TurboAssembler::EnterFrame((TurboAssembler *)param_1,0x11);
  uVar2 = Runtime::FunctionForId(0x53);
  MacroAssembler::CallRuntime(param_1,uVar2,0,0);
  TurboAssembler::LeaveFrame(param_1,0x11);
  param_1[400] = MVar1;
  MacroAssembler::MaybeDropFrames(param_1);
  Assembler::ret((Assembler *)param_1,(Register *)&DAT_019f4204);
  Assembler::CheckVeneerPool((Assembler *)param_1,false,false,0x400);
  return;
}

