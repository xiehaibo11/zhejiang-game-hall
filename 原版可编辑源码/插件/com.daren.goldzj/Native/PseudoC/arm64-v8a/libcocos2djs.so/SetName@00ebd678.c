
/* v8::Function::SetName(v8::Local<v8::String>) */

void __thiscall v8::Function::SetName(Function *this,undefined8 *param_2)

{
  ulong uVar1;
  ulong local_18;
  
  uVar1 = *(ulong *)this;
  if (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0x439) {
    local_18 = uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0xb);
    internal::SharedFunctionInfo::SetName((SharedFunctionInfo *)&local_18,*param_2);
  }
  return;
}

