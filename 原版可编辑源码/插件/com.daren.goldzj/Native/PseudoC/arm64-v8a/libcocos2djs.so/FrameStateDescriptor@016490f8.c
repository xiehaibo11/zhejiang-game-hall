
/* v8::internal::compiler::FrameStateDescriptor::FrameStateDescriptor(v8::internal::Zone*,
   v8::internal::compiler::FrameStateType, v8::internal::BailoutId,
   v8::internal::compiler::OutputFrameStateCombine, unsigned long, unsigned long, unsigned long,
   v8::internal::MaybeHandle<v8::internal::SharedFunctionInfo>,
   v8::internal::compiler::FrameStateDescriptor*) */

void __thiscall
v8::internal::compiler::FrameStateDescriptor::FrameStateDescriptor
          (FrameStateDescriptor *this,undefined8 param_1,undefined4 param_3,undefined4 param_4,
          undefined8 param_5,ulong param_6,ulong param_7,undefined8 param_8,undefined8 param_9,
          long param_10)

{
  undefined8 uVar1;
  long lVar2;
  Builtins aBStack_78 [16];
  BuiltinContinuationFrameInfo aBStack_68 [4];
  uint local_64;
  uint local_60;
  uint local_5c;
  
  *(undefined4 *)this = param_3;
  *(undefined4 *)(this + 4) = param_4;
  *(undefined8 *)(this + 8) = param_5;
  *(ulong *)(this + 0x10) = param_6;
  *(ulong *)(this + 0x18) = param_7;
  *(undefined8 *)(this + 0x20) = param_8;
  if (param_10 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_10 + 0x28);
  }
  switch(param_3) {
  case 0:
    InterpretedFrameInfo::InterpretedFrameInfo
              ((InterpretedFrameInfo *)aBStack_68,param_6 & 0xffffffff,param_7 & 0xffffffff,0,1);
    local_5c = local_60;
    break;
  case 1:
    ArgumentsAdaptorFrameInfo::ArgumentsAdaptorFrameInfo
              ((ArgumentsAdaptorFrameInfo *)aBStack_68,(int)param_6);
    local_5c = local_64;
    break;
  case 2:
    ConstructStubFrameInfo::ConstructStubFrameInfo
              ((ConstructStubFrameInfo *)aBStack_68,param_6 & 0xffffffff,0,1);
    local_5c = local_64;
    break;
  case 3:
  case 4:
  case 5:
    uVar1 = RegisterConfiguration::Default();
    Builtins::GetBuiltinFromBailoutId(param_4);
    Builtins::CallInterfaceDescriptorFor(aBStack_78);
    BuiltinContinuationFrameInfo::BuiltinContinuationFrameInfo
              (aBStack_68,param_6 & 0xffffffff,aBStack_78,uVar1,0,0,0,1);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = param_1;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = param_1;
  *(undefined8 *)(this + 0x70) = param_9;
  *(ulong *)(this + 0x28) = lVar2 + (ulong)local_5c;
  *(undefined8 *)(this + 0x30) = 0;
  *(long *)(this + 0x78) = param_10;
  return;
}

