
/* v8::internal::StackTraceFrameIterator::IsValidFrame(v8::internal::StackFrame*) const */

bool __thiscall
v8::internal::StackTraceFrameIterator::IsValidFrame
          (StackTraceFrameIterator *this,StackFrame *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_18;
  
  uVar2 = (**(code **)(*(long *)param_1 + 8))(param_1);
  if ((uVar2 < 0x15) && ((1 << (ulong)(uVar2 & 0x1f) & 0x119010U) != 0)) {
    uVar4 = (**(code **)(*(long *)param_1 + 0x98))(param_1);
    if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x439) {
      uVar4 = (**(code **)(*(long *)param_1 + 0x98))(param_1);
      uVar6 = uVar4 & 0xffffffff00000000;
      uVar4 = uVar6 | *(uint *)(uVar4 + 0xb);
      local_18 = uVar6 | *(uint *)(uVar4 + 0xf);
      if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(local_18 - 1)) == 0x5b) {
        local_18 = uVar6 | *(uint *)(local_18 + 0xb);
      }
      if ((((local_18 & 1) == 0) ||
          ((int)local_18 != *(int *)((local_18 & 0xffffffff00000000) + 0xa0))) &&
         (uVar5 = Script::IsUserJavaScript((Script *)&local_18), (uVar5 & 1) != 0)) {
        uVar2 = *(uint *)(uVar4 + 3);
        if ((uVar2 & 1) == 0) {
          return true;
        }
        return *(short *)((uVar6 | 7) + (ulong)*(uint *)((uVar6 | uVar2) - 1)) != 0x57;
      }
    }
    bVar1 = false;
  }
  else {
    iVar3 = (**(code **)(*(long *)param_1 + 8))(param_1);
    bVar1 = iVar3 == 5 || iVar3 == 8;
  }
  return bVar1;
}

