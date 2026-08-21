
/* v8::internal::ArgumentsAdaptorFrameInfo::ArgumentsAdaptorFrameInfo(int) */

void __thiscall
v8::internal::ArgumentsAdaptorFrameInfo::ArgumentsAdaptorFrameInfo
          (ArgumentsAdaptorFrameInfo *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = ShouldPadArguments(param_1);
  iVar1 = ((uVar2 & 1) + param_1) * 8;
  *(int *)this = iVar1;
  *(int *)(this + 4) = iVar1 + 0x30;
  return;
}

