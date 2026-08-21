
/* v8::internal::SharedFunctionInfo::UpdateExpectedNofPropertiesFromEstimate(v8::internal::FunctionLiteral*)
    */

void __thiscall
v8::internal::SharedFunctionInfo::UpdateExpectedNofPropertiesFromEstimate
          (SharedFunctionInfo *this,FunctionLiteral *param_1)

{
  long lVar1;
  short sVar2;
  
  lVar1 = *(long *)this;
  sVar2 = (short)*(undefined4 *)(param_1 + 8);
  if ((*(uint *)(lVar1 + 0x1b) >> 10 & 1) != 0) {
    sVar2 = sVar2 + *(short *)(lVar1 + 0x17);
  }
  *(short *)(lVar1 + 0x17) = sVar2;
  return;
}

