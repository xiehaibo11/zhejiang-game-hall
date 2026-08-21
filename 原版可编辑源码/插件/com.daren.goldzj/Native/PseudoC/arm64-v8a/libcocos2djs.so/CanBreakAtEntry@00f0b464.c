
/* v8::internal::Debug::CanBreakAtEntry(v8::internal::Handle<v8::internal::SharedFunctionInfo>) */

bool __thiscall v8::internal::Debug::CanBreakAtEntry(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if ((*(uint *)(uVar1 + 0x1b) >> 5 & 1) != 0) {
    return true;
  }
  if ((*(uint *)(uVar1 + 3) & 1) == 0) {
    return false;
  }
  return *(short *)((uVar1 & 0xffffffff00000000 | 7) +
                   (ulong)*(uint *)((uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 3)) - 1))
         == 0x4e;
}

