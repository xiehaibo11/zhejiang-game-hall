
/* v8::internal::compiler::Linkage::GetRuntimeCallDescriptor(v8::internal::Zone*,
   v8::internal::Runtime::FunctionId, int,
   v8::base::Flags<v8::internal::compiler::Operator::Property, unsigned char>,
   v8::base::Flags<v8::internal::compiler::CallDescriptor::Flag, int>) */

void v8::internal::compiler::Linkage::GetRuntimeCallDescriptor
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
               uint param_5)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar2 = Runtime::FunctionForId(param_2);
  cVar1 = *(char *)(lVar2 + 0x19);
  uVar4 = *(undefined8 *)(lVar2 + 8);
  uVar3 = NeedsFrameStateInput(param_2);
  if ((uVar3 & 1) == 0) {
    param_5 = param_5 & 0xfffffffe;
  }
  GetCEntryStubCallDescriptor(param_1,(int)cVar1,param_3,uVar4,param_4,param_5);
  return;
}

