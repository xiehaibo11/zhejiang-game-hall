
/* v8::internal::SharedFunctionInfo::SetFunctionTokenPosition(int, int) */

void __thiscall
v8::internal::SharedFunctionInfo::SetFunctionTokenPosition
          (SharedFunctionInfo *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != -1) {
    iVar1 = param_2 - param_1;
  }
  if (0xfffe < iVar1) {
    iVar1 = 0xffff;
  }
  *(short *)(*(long *)this + 0x19) = (short)iVar1;
  return;
}

